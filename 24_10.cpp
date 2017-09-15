#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <cstdio>

void f(char s[], char n[], int* count)
{
	int p = 0, i2 = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == n[i2])
		{
			p++;
			i2++;
		}
		else
		{
			if (p == strlen(n) - 1)
			{
				(*count)++;
				p = 0;
				i2 = 0;
			}
			else
			{
				p = 0;
				i2 = 0;
			}
		}
	}
}



int main()
{
	setlocale(0, "");
	char s[10000], n[10000];
	int size = 10000, count = 0;
	std::cout << "Строка: ";
	fgets(s, size, stdin);
	std::cout << "Подстрока: ";
	//std::cin >> n[0];
	fgets(n, size, stdin);
	f(s, n, &count);
	//puts(s);
	std::cout << count << '\n';
	system("pause");
	return 0;
}