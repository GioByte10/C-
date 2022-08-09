#include <windows.h>
#include <iostream>
#include <fstream>
#include <thread>
#include <list>

HANDLE stopEvent = CreateEvent(NULL, TRUE, FALSE, NULL);

BOOL HandlerRoutine(DWORD fdwCtrlType)
{
    switch( fdwCtrlType )
    {
        case CTRL_LOGOFF_EVENT:
            SetEvent(stopEvent);
            Beep(1000, 1000);
            return TRUE;

        case CTRL_SHUTDOWN_EVENT:
            SetEvent(stopEvent);
            Beep(1000, 1000);
            return TRUE;

        default:
            return FALSE;
    }
}

void updatedFile(){

    //some code

    std::cout << "File has been updated" << std::endl;
}

void updateList(std::list<std::string> *fileInformation){

    std::ifstream info;
    info.open("info.txt");

    std::string line;

    fileInformation->clear();

    while(getline(info, line)){
        fileInformation->emplace_back(line);
    }
}

void notifyLastWritten(LPCSTR lpPathName, std::list<std::string> *fileInformation){

    HANDLE handles[2];

    while(WaitForSingleObject(stopEvent, 0) == WAIT_TIMEOUT){

        handles[0] = FindFirstChangeNotification(lpPathName, FALSE, FILE_NOTIFY_CHANGE_LAST_WRITE);
        handles[1] = stopEvent;

        DWORD wait = WaitForMultipleObjects(2, handles, FALSE, INFINITE);
        if (wait == WAIT_OBJECT_0){
            updateList(fileInformation);
            updatedFile();
        }
    }
}

int main(){

    SetConsoleCtrlHandler((PHANDLER_ROUTINE)HandlerRoutine, TRUE );

    std::list<std::string> fileInformation;
    updateList(&fileInformation);

    LPCSTR lpPathName = "C:\\Users\\super\\Desktop\\Giovanni\\Programacion\\Lenguajes\\C++\\CReminders\\cmake-build-debug";

    std::thread threadLastWritten(notifyLastWritten, lpPathName, &fileInformation);
    threadLastWritten.detach();

    while(true){
        for(auto &line : fileInformation){
            std::cout << line << std::endl;
        }
        std::cout << "Press any key to continue..." << std::endl;
        Sleep(10000);
    }
}