#include "Subject.h"
#include "Observer.h"


Subject::Subject(void)
	: mState(-1)
{}


Subject::~Subject(void)
{}


int Subject::getState(void)
{
	return this->mState;
}

void Subject::setState(int state)
{
	this->mState = state;
	this->notifyAllObservers();
}

void Subject::attach(Observer* observer)
{
	this->mObservers.push_back(observer);
}

void Subject::notifyAllObservers(void)
{
	for(auto& observer : this->mObservers)
	{
		observer->update();
	}
}