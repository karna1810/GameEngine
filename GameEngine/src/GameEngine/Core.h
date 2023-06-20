#pragma once

#ifdef GE_WINDOWS_PLATFORM

	#ifdef GE_BUILD_DLL
		#define GAME_ENGINE_API __declspec(dllexport)
	#else 
		#define GAME_ENGINE_API __declspec(dllimport)
	#endif

#else
	#error GameEngine Only supports Windows

#endif 
