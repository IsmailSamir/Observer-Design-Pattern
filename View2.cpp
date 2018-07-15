#include "View2.h"
#include<iostream>


View2::View2(Subject* subject)
{
	this->subject = subject;
	this->subject->attach(this);
}

View2::~View2(void)
{}

void View2::update(void)
{
	std::cout<<"State update to "<<this->subject->getState()<<" at View2 "<<std::endl;
}
