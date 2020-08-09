#pragma once

#ifdef WIN32
	#ifdef EXAMPLE2_DYNAMIC
		#ifdef EXAMPLE2_EXPORT
			#define EXAMPLE2_CLASS __declspec(dllexport)
		#else
			#define EXAMPLE2_CLASS __declspec(dllimport)
		#endif
	#else
		#define EXAMPLE2_CLASS
	#endif
#else
	#define EXAMPLE2_CLASS
#endif

class EXAMPLE2_CLASS example2 {
public:
	static int add(int a, int b);
	static int subtract(int a, int b);
};
