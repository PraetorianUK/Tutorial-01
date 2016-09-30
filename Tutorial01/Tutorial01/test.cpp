#include <windows.h>
#include <d3d11.h>

#pragma comment (lib, "d3d11.lib")
#pragma comment (lib, "d3dcompilier.lib")
#pragma comment (lib, "d3dx11d.lib")
#pragma comment (lib, "d3dx9d.lib")
#pragma comment (lib, "dxerr.lib")


int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmd, int nCmdShow)
{
	D3D11CreateDeviceAndSwapChain(NULL, 
		D3D_DRIVER_TYPE_REFERENCE, 
		NULL,
		NULL,
		NULL,
		NULL,
		D3D11_SDK_VERSION,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL);

}