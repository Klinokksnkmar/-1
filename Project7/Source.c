#include <stdio.h>
#include <locale.h>
void main ()
{
	 setlocale(LC_CTYPE, "RUS");
	 puts("********************************************");
	 puts ("Тема: разработка консольного приложения");
	 getchar(); // ожидание нажатия Enter;
	 puts("     Выполнила Соколова М.Р.     ");
	 puts("********************************************");
	 getchar();

	 return 0;
}