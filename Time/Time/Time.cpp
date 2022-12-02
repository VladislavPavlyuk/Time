#include "Time.h"
#include <iostream>
using namespace std;

Time::Time()
{
	_hours = 0;
	_minutes = 0;
	_seconds = 0;
}

Time::Time(int hours, int minutes, int seconds)
{
	SetHours(hours);
	SetMinutes(minutes);
	SetSeconds(seconds);
}

Time::Time(int hours, int minutes) : Time(hours, minutes, 0) { }

Time::Time(int hours) : Time(hours, 0, 0) {	}

void Time::SetHours(int hours)
{
	_hours = hours;
}

void Time::SetMinutes(int _minutes)
{
	this->_minutes = _minutes;
}

void Time::SetSeconds(int seconds) //Time* const this; - адрес вызывающего объекта
{
	//cout << "this: " << this << endl;
	this->_seconds = seconds;
}
