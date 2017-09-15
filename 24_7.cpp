#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <cstdio>

void f(char s[], char n[], int pos)
{
	s[strlen(s) - 1] = n[0];
	for (int i = strlen(s)-1; i >= pos; i--)
	{
		std::swap(s[i], s[i - 1]);
	}
}



int main()
{
	setlocale(0, "");
	char s[10000], n[2];
	int size = 10000, pos = 0;
	std::cout << "Строка: ";
	fgets(s, size, stdin);
	std::cout << "Символ: ";
	std::cin >> n[0];
	std::cout << "Позиция: ";
	std::cin >> pos;
	f(s, n, pos);
	puts(s);
	system("pause");
	return 0;
}