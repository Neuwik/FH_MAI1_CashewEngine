#pragma once

#ifdef CASHEW_PLATFORM_WINDOWS
	#ifdef CASHEW_BUILD_DLL
		#define CASHEW_API _declspec(dllexport)
	#else
		#define CASHEW_API _declspec(dllimport)
	#endif
#else
	#error Cashew only supports Windows!
#endif

#define BIT(x) (1 << x)