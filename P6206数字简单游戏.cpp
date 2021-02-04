# include <stdio.h>
int main (void)
{
	while (1)
	{
		long long int m, n, a, b, score = 0 ;
		scanf ("%ld",&n) ;
		 
		while (1)
		{
		   if (n%2 == 1)
		   {n = n*3+1 ;
		    score++ ;
		    if (n == 1)
		    break ;
		   }
		   if (n%2 == 0)
		   {n/=2 ;
		    score++ ;
		    if (n == 1)
		    break ;
		   }	   
		}
		printf ("%d\n",score) ;
		printf ("\ncycle\n") ;
	}
	
	return 0 ;
}
