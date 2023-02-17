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
		string mems = "Great! list the names of your party members\n";
		typing(mems);
		char names[10][100];
		for (int i = 0; i < members; i++)
		{
			cin >> names[i];
		}
		string name1 = "The party members are ";
		typing(name1);
		for (int i = 0; i < members; i++)
		{
			cout << names[i] << ", ";
		}
		cout << "\n";
		string name2 = "Are these names correct?\n";
		typing(name2);
	}
	return 0;
}
