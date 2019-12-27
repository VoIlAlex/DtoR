#pragma once


#ifdef DTOR_PLATFORM_WINDOWS
	#ifdef DTOR_BULID_DLL
		#define DTOR_API __declspec(dllexport)
	#else
		#define DTOR_API __declspec(dllimport)
	#endif
#else
	#error DtoR only support Windows
#endif
