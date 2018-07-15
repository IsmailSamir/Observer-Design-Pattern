#pragma once
#include "observer.h"
class View2 : public Observer
{
public:
	View2(Subject* subject);
	~View2(void);
	void update(void);
};

