#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>




int main()
{
	setlocale(0, "");
	char* s = "asd. 345,t43g fr swe!!r erwq er";
	int b = 0, c = 0, o = 0;

	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			c++;
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			b++;
		}
		else
		{
			o++;
		}
	}
	puts(s);
	std::cout << b << " Букв" << '\n' << c << " Цифр" << '\n' << o << " Остальных символов" << '\n';


	system("pause");
	return 0;
}