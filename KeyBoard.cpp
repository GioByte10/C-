#include <windows.h>
#include <stdio.h>

int main()
{
    int x, y;
    x = 1270;
    y = 193;
    Sleep(200);

    Sleep(1000);

while(true){

   if(GetAsyncKeyState(0x28) && GetAsyncKeyState(0x10) && GetAsyncKeyState(0x11)){

            keybd_event(0x47,0, 0,0);
            keybd_event(0x47,0,KEYEVENTF_KEYUP ,0);
            keybd_event(0x56,0, 0,0);
            keybd_event(0x56,0,KEYEVENTF_KEYUP ,0);
            /*keybd_event(0x41,0, 0,0);
            keybd_event(0x41,0,KEYEVENTF_KEYUP ,0);
            keybd_event(0x4E,0, 0,0);
            keybd_event(0x4E,0,KEYEVENTF_KEYUP ,0);
            keybd_event(0x4E,0, 0,0);
            keybd_event(0x4E,0,KEYEVENTF_KEYUP ,0);
            keybd_event(0x43,0, 0,0);
            keybd_event(0x49,0,KEYEVENTF_KEYUP ,0);
            /*keybd_event(0x49,0, 0,0);
            keybd_event(0x43,0,KEYEVENTF_KEYUP ,0);
            keybd_event(0x43,0, 0,0);
            keybd_event(0x43,0,KEYEVENTF_KEYUP ,0);
            keybd_event(0x43,0, 0,0);
            keybd_event(0x43,0,KEYEVENTF_KEYUP ,0);
            keybd_event(0x43,0, 0,0);
            keybd_event(0x43,0,KEYEVENTF_KEYUP ,0);
            Sleep(1000);*/

   }
}

            // INTERVALO
            keybd_event(0x43,0, 0,0);
            keybd_event(0x43,0,KEYEVENTF_KEYUP ,0);
            Sleep(1000);
            //break;

//}
//}



    return 0;
}
