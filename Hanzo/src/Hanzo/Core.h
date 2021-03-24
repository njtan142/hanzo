#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HANZO_API __declspec(dllexport)
	#else
		#define HANZO_API __declspec(dllimport)
	#endif
#else
	#error Hanzo only supports windows!
#endif