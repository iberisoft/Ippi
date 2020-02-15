#include <windows.h>
#include <ippcore.h>

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved)
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
		ippStaticInit();
		break;
	}
	return TRUE;
}
