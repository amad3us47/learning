#include <windows.h>

void foo()
{
	OutputDebugStringA("hello this is my name ");
}

int CALLBACK WinMain(
    HINSTANCE   hInstance,
    HINSTANCE   hPrevInstance,
    LPSTR       lpCmdLine,
    int         nCmdShow
);


int main(){
	foo();
}