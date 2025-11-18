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

#ifdef CASHEW_ENABLE_ASSERTS
	#define CASHEW_ASSERT(x, ...) { if(!(x)) { CASHEW_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define CASHEW_CORE_ASSERT(x, ...) { if(!(x)) { CASHEW_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define CASHEW_ASSERT(x, ...)
	#define CASHEW_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)