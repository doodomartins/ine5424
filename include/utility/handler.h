// EPOS Handler Utility Declarations

#ifndef __handler_h
#define __handler_h

#include <system/config.h>

__BEGIN_UTIL

class Handler
{
public:
	typedef void (Function)();
public:
	Handler() {}
	~Handler() {}
	virtual void operator()() = 0;
	void operator delete(void *obj);
};

__END_UTIL

#endif
