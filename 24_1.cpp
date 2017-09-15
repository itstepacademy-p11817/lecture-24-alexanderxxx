#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>




int main()
{
	setlocale(0, "");
	const char* s = "asd fr swer erwq er";
	char s2[100];
	//strcpy(s2, s);
	for (int i = 0; i < strlen(s); i++)
	{
		s2[i] = s[i];
		if (s[i] == ' ')
		{
			s2[i] = '\t';
		}
	}
	//puts(s2);
	for (int i = 0; i < strlen(s); i++)
	{
		std::cout << s2[i];
	}

	std::cout << '\n';

	system("pause");
	return 0;
}