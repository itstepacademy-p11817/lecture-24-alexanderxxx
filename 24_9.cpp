#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <cstdio>

void f(char s[], char n[], int* count)
{
	for (int i =0; i <  strlen(s); i++)
	{
		if (s[i] == n[0])
		{
			(*count)++;
		}
	}
}



int main()
{
	setlocale(0, "");
	char s[10000], n[2];
	int size = 10000, count = 0;
	std::cout << "Строка: ";
	fgets(s, size, stdin);
	std::cout << "Символ: ";
	std::cin >> n[0];
	f(s, n, &count);
	//puts(s);
	std::cout << count << '\n';
	system("pause");
	return 0;
}