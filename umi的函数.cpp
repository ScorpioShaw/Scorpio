# include <stdio.h>
# include <string.h>
int main (void)
{
	while (1)
	{
		int m, n, a = 0, b, c, d ;
		scanf ("%d",&n) ;
		char x[101], y[101], z[101] ;
		
		scanf ("%s",x) ;
		scanf ("%s",y) ;
		printf ("%d\n",strlen (x)) ;
		for (m = 0; m < n; m++)
		{
			if (x[m] < y[m])
			a++ ;
		}
		if (a > 0)
		printf ("-1\n") ;
		if (a == 0)
		puts (y) ;
		
		printf ("\ncycle\n") ;
	}
	
	return 0 ; 
}

