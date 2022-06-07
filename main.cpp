#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    WinExec("calc",1);
    Sleep(100);
    WinExec("notepad",2);


    return 0;
}
