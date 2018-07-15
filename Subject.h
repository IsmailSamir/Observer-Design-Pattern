#pragma once
#include<vector>

class Observer;

class Subject
{
private:
	std::vector<Observer*> mObservers;
	int mState;

public:
	Subject(void);
	virtual ~Subject(void);
	int getState(void);
	void setState(int state);
	void attach(Observer* observer);
	void notifyAllObservers(void);
};

