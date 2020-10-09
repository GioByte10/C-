#include <tlhelp32.h>
PROCESSENTRY32 pe32 = {0};
HANDLE    hSnap;
int       iDone;
int       iTime = 60;
bool      bProcessFound;

while(true)    // go forever
{
    hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);
    pe32.dwSize = sizeof(PROCESSENTRY32);
    Process32First(hSnap,&pe32);     // Can throw away, never an actual app

    bProcessFound = false;   //init values
    iDone = 1;

    while(iDone)    // go until out of Processes
    {
        iDone = Process32Next(hSnap,&pe32);
        if (strcmp(pe32.szExeFile,sAppName) == 0)    // Did we find our process?
        {
            bProcessFound = true;
            iDone = 0;
        }
    }

    if(!bProcessFound)    // if we didn't find it running...
    {
        startProcess(sAppPath+sAppName,"");             // start it
    }
    Sleep(iTime*1000);    // delay x amount of seconds.
}
