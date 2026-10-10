#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");

	puts("Кораблик");
	getchar();
	puts("                      |\\");
	puts("                      | \\");
	puts("                      |  \\");
	puts("                      |   \\");
	puts("                      |    \\");
	puts("                      |     \\");
	puts("                      |      \\");
	puts("                      |_______\\");
	puts("                      |         ");
	puts("               _______|_______");
	puts("               \              /");
	puts("                \            /");
	puts("                 \__________/");

	return 0;
}