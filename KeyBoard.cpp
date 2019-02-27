#include <windows.h>
#include <stdio.h>

int main()
{
    int x, y;
    x = 1270;
    y = 193;
    Sleep(200);

    SetCursorPos(x, y);
    mouse_event(MOUSEEVENTF_LEFTDOWN ,x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);

    Sleep(200);




    // SHIFT = 0x10
    // U = 0x55

    // ESPERAMOS A QUE LA TECLA SHIFT SEA PRESIONADA

//while(true){
        // AL PRESIONAR LA TECLA SHIFT = 0x10

//if (GetAsyncKeyState(0x41)){


            keybd_event(0x12,0,0,0);
            //keybd_event(0x12,0,KEYEVENTF_KEYUP ,0);

            keybd_event(0x42,0,0,0);
           // keybd_event(0x12,0,KEYEVENTF_KEYUP ,0);

            keybd_event(0x38,0,0,0);
            //keybd_event(0x12,0,KEYEVENTF_KEYUP ,0);

            keybd_event(0x45,0,0,0);
            //keybd_event(0x12,0,KEYEVENTF_KEYUP ,0);


            // INTERVALO
            keybd_event(0x12,0,KEYEVENTF_KEYUP ,0);
            Sleep(1000);
            //break;

//}
//}



    return 0;
}
