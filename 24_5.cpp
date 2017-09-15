#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <cstdio>

void f(char s[], int n)
{
	for (int i = n - 1; i < strlen(s) - 1; i++)
	{
		std::swap(s[i], s[i + 1]);
	}
	s[strlen(s) - 1] = '\0';
}



int main()
{
	setlocale(0, "");
	char s[10000];
	int size = 10000, n = 0;
	fgets(s, size, stdin);
	std::cin >> n;

	f(s, n);

	puts(s);



	system("pause");
	return 0;
}