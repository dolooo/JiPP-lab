#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
	string word = argv[1];
	int x = word.length();
	char c;
	for (int i = 0; i < x; i++)
	{
		c = argv[1][i];
		if (c != word[x - 1])
		{
			cout << "Wyraz nie jest palindromem";
			return 0;
		}
		x--;
	}
	cout << "Wyraz jest palindromem";
	return 0;
}