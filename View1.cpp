#include "View1.h"
#include <iostream>



View1::View1(Subject* subject)
{
	this->subject = subject;
	this->subject->attach(this);
}

View1::~View1(void)
{}

void View1::update(void)
{
	std::cout<<"State update to "<<this->subject->getState()<<" at View1 "<<std::endl;
}