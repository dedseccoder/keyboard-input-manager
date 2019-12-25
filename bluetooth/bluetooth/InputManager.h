#pragma once
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

class InputManager
{
public:
	void input()
	{
		while (true)
		{
			if (_kbhit())
			{
				button = _getche();
				if (button == '')
				{
					cout << endl << "loop while stoped" << endl;
					break;
				}
				if (button == '`')
				{
					system("CLS");
				}
				cout << endl;
			}
		}
		return;
	};
private:
	char button;
};