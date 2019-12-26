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