#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <cstdio>




int main()
{
	setlocale(0, "");
	char s[10000], s2[10000];
	int size = 10000;
	fgets(s, size, stdin);
	for (int i = 0, i2 = strlen(s) - 1; i < strlen(s) - 1; i++, i2--)
	{
		s2[i] = s[i2 - 1];
	}
	s2[strlen(s) - 1] = '\n';
	s2[strlen(s)] = '\0';


	puts(s2);

	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] != s2[i])
		{
			std::cout << "Не палиндром" << '\n';
			system("pause");
			return 0;
		}
	}
	std::cout << "Палиндром" << '\n';

	system("pause");
	return 0;
}