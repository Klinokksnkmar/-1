#include <stdio.h>
#include <locale.h>
  void main ()
{
	setlocale(LC_CTYPE, "RUS");
	
	
	puts("-    -    -  -   -    -");
	puts(" |  | |  | |  | |  | |  | ");
	puts("/    -   | |  | |  | | -| ");
	puts("-   |_|   -      -   |_ | ");
	
	return 0;
}