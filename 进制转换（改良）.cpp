# include <stdio.h>
# include <string.h>
int main (void)
{
	while (1)
	{
		int m, n, a, b, c, d, sum ;
		char shu[1000] ;
		scanf ("%d",&m) ;
		
		scanf ("%s",shu) ;
		n = (strlen (shu)-1) ;
//      printf ("n = %d\n",n) ;
		for (a = 0; a <= n; a++)
		{
			if (shu[a] != 48)
			{for (sum = 0, b = a+1; b <= n; b++)
			 {
			 	sum += (shu[b]-48) ; 
			 }
			 if (sum == 0)
			 printf ("%d*%d^%d",(shu[a]-48),m,(n-a)) ;
			 else 
			 printf ("%d*%d^%d+",(shu[a]-48),m,(n-a)) ;
			}
		}	
		printf ("\ncycle\n") ;
	}	
	return 0 ;
}
