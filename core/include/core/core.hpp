#pragma once

#pragma once

#if defined(_WIN32) || defined(_WIN64)
	#define API_EXPORT __declspec(dllexport)
	#define API_IMPORT __declspec(dllimport)
#else
	#define API_EXPORT __attribute__ ((visibility ("default")))
	#define API_IMPORT __attribute__ ((visibility ("default")))
#endif

#ifdef LIB_CORE
	#define LIB_CORE API_EXPORT
#else
	#define LIB_CORE API_IMPORT
#endif 


class LIB_CORE core
{
public:
	explicit core(int x);
	int get();

private:
	int _x;
};