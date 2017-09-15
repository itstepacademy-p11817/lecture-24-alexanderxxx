#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>




int main()
{
	setlocale(0, "");
	char* s = "awefqwerfwr ergwqer gwergw ergwerg werg wertg wertg wegw ertgwe gwertgwerthery hey";
	int b = 0;

	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ')
		{
			b++;
		}

	}
	puts(s);
	std::cout << b + 1 << " Слов" << '\n';


	system("pause");
	return 0;
}