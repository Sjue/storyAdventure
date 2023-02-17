#include <iostream>
#include <windows.h>
using namespace std;

void typing(string hello)
{
	int x = 0;
	while (hello[x] != '\0')
	{
		cout << hello[x];
		/*if (hello[x] != ' ' && hello[x] != '\n')
			Beep(750, 300);*/
		Sleep(50);
		x++;
	};
}
int main()
{
	char deci;
	string intro = "Welcome\nIs this your first quest?\n";
	string confirm;
	
	typing(intro);
	cin >> confirm;
	if (confirm == "no" || confirm == "No")
	{
		system("cls");
		string begin = "New Quest? Or Continue?\n";
		typing(begin);
		string decide;
		cin >> decide;
		if (decide == "New quest" || decide == "New Quest" ||decide == "new quest" || decide =="new")
		{
			deci = 'A';
		}
		if (decide == "Continue" || decide == "continue")
		{
			deci = 'B';
		}
		switch (deci)
		{
		case 'A': goto NEW;
			break;
		}
		
	}
	if (confirm == "yes" ||confirm == "Yes")
	{ 
	NEW:
		system("cls");
		string begin1 = "How many members are in your party?\n";
		typing(begin1);
		int members;
		cin >> members;
		

	}
	return 0;
}
