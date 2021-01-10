# include <stdio.h>
# define N 100
int main (void)
{
	char str[N+1] ;
	fgets (str, N+1, stdin) ;
	int m, n ;
	for (n = 0, m = 0; str[m] != '\0';m++, n++)
       ;
	printf ("%d\n",n-1) ;	
	
	return 0 ;
}
