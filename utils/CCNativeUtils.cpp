
 #include "utils/CCNativeUtils.h"



#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
	#include "windows.h"
	unsigned int CCNativeUtils::getCurrentTime() {
		return GetTickCount();
	}

#else
	#include <sys/time.h>
	unsigned int CCNativeUtils::getCurrentTime() {
		struct timeval current; 
		gettimeofday(&current, NULL); 
		unsigned int currentTime = current.tv_sec * 1000 + current.tv_usec/1000; 
		return currentTime;
	}

#endif

