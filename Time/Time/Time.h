#pragma once

class Time
{
public:
	Time();
	Time(int hours, int minutes, int seconds);
	Time(int hours, int minutes);
	Time(int hours);

	void SetHours(int hours);
	void SetMinutes(int minutes);
	void SetSeconds(int seconds);

	int GetHours() { return _hours; }
	int GetMinutes() { return _minutes; }
	int GetSeconds() { return _seconds; }

private:
	int _hours;
	int _minutes;
	int _seconds;	
};

