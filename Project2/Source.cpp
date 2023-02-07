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
		Sleep(100);
		x++;
	};
}
int main()
{
	string intro = "Welcome\nIs this your first quest?\n";
	string confirm;
	typing(intro);
	cin >> confirm;
	if (confirm == "no" || "No")
	{
		system("cls");
		string begin = "\n";

	}

	return 0;
}
