# include <stdio.h>
int main ()
{
	int n, a, k, m ;
	scanf ("%d %d %d",&n,&a,&k) ;
	if (n > 100||n <2)
	printf ("Wrong Number\n") ;
	else if (a <= 0||a > 100)
	printf ("Wrong Number\n") ;
	else if (k <= 0||k > 100)
	printf ("Wrong Number\n") ;
	else
	{m = a + (n-1)*k ;
	 printf ("%d\n",m) ;
	}
	return 0 ;
 } 
