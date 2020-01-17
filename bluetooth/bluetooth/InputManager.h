#pragma once
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

class InputManager
{
public:
	//use for more fust development
	void input()
	{
		while (true)
		{
			//_kbhit return true if button pushed
			if (_kbhit())
			{
				//_geche returns pushed button
				button = _getche();
				if (button == '')
				{
					cout << endl << "loop while stoped" << endl;
					break;
				}
				cout << endl;
				if (button == '`')
				{
					system("CLS");
				}
			}
		}
		return;
	};
private:
	char button;
};