#include <stdio.h>
#include <locale.h>
void name();
void date();
int main()
{
	name();
	date();
	return 0;
}
void name()
{
	setlocale(LC_CTYPE, "RUS");
	
	puts("***************************************************");
	puts("*                                                 *");
	puts("*     Тема: разработка консольного приложения     *");
	puts("*                                                 *");
	puts("*             Выполнила Соколова М.Р.             *");
	puts("*                                                 *");
	puts("***************************************************");
	getchar();
}

void date()

{
	puts(" _   _   _   _   _   _  ");
	puts(" _| |_| | |   | | | |_| ");
	puts("|_  |_|.|_|   |.|_| |_| ");
  
}