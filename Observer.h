#pragma once
#include "Subject.h"

class Observer
{
protected:
	Subject *subject;
public:
	Observer(void);
	virtual ~Observer();
	virtual void update(void) = 0 ; 
};
