#pragma once

#ifdef WIN32
	#ifdef EXAMPLE1_DYNAMIC
		#ifdef EXAMPLE1_EXPORT
			#define EXAMPLE1_FUNC extern __declspec(dllexport)
		#else
			#define EXAMPLE1_FUNC extern __declspec(dllimport)
		#endif
	#else
		#define EXAMPLE1_FUNC extern
	#endif
#else
	#define EXAMPLE1_FUNC extern
#endif

EXAMPLE1_FUNC int example1_add(int a, int b);
EXAMPLE1_FUNC int example1_subtract(int a, int b);
