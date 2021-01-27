# include <stdio.h>
int main (void)
{
	while (1)
	{
		char letter, LETTER ;
		scanf ("%c",&letter) ;
		LETTER = letter - 'a' + 'A' ;
		printf ("%c\n",LETTER) ;
		
		printf ("\ncycle\n") ;
	}
	return 0 ;
}
