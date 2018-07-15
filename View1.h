#pragma once
#include"Observer.h"

class View1 : public Observer
{
public:
	View1(Subject* subject);
	~View1(void);
	 void update(void);
};

