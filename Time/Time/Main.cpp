#include <iostream>
#include "Time.h"
using namespace std;

void PrintTime(Time time);

int main()
{
	Time time1;
	Time time2(10, 24, 30);
	Time time3(10, 34);
	Time time4(11);

	cout << "---- this -----" << endl;

	cout << "&time3: " << &time3 << endl;
	cout << "&time4: " << &time4 << endl;

	time3.SetSeconds(25); // SetSeconds(&time3, 25)
	time4.SetSeconds(15); // SetSeconds(&time4, 15)

	cout << "-------------" << endl;

	PrintTime(time1);
	PrintTime(time2);
	PrintTime(time3);
	PrintTime(time4);

	Time* pTime = new Time(11, 30);
	(*pTime).SetMinutes(35);
	pTime->SetMinutes(36);
	
	delete pTime;
}

void PrintTime(Time time)
{
	cout << time.GetHours() << " : " << time.GetMinutes() << " : " << time.GetSeconds() << endl;
}
