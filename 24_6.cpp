#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <cstdio>

void f(char s[], char n[])
{
	int qwe = 0;
	while (qwe == 0)
	{
		int d = 0;
		for (int i = 0; i < strlen(s); i++)
		{
			if (s[i] == n[0])
			{
				std::swap(s[i], s[i + 1]);
				d++;
			}

		}
		if (d == 0)
		{
			break;
		}
		d = 0;

	}
	//s[strlen(s)] = '\0';
}



int main()
{
	setlocale(0, "");
	char s[10000], n[2];
	int size = 10000;
	fgets(s, size, stdin);
	//fgets(n, 1, stdin);
	std::cin >> n[0];
	f(s, n);

	puts(s);



	system("pause");
	return 0;
}