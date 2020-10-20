#include <iostream>

using namespace std;

void bubble_sort(char** tab, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 1; j < n - 1; ++j)
		{
			if (atoi(tab[j]) > atoi(tab[j + 1]))
			{
				swap(tab[j], tab[j + 1]);
			}
		}
	}
}

int main(int argc, char *argv[])
{
	bubble_sort(argv, argc);
	
	cout << "Posortowane: ";
	for (int j = 1; j < argc; ++j)
		cout << argv[j] << " ";
	return 0;
}