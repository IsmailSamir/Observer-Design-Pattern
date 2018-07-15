#include "Observer.h"
#include "View1.h"
#include "View2.h"
#include<iostream>



int main()
{
	Subject *subject = new Subject;

	View1 *view1 = new View1(subject);
	View2 *view2 = new View2(subject);


	std::cout<<"First Change to state"<<std::endl;
	subject->setState(50);


	std::cout<<"\n\nSecond Change to state"<<std::endl;
	subject->setState(20);


	delete subject;
	delete view1;
	delete view2;



	return 0;
}