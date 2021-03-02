# include <bits/stdc++.h>
using namespace std ;
int main (void)
{
	while (1)
	{
		long int n, m, x, k ;
		scanf ("%ld",&n) ;
		
		for (x = 100; x > 0; x--)
		{
			 k = (n/52 - 7*x)/21 ;
			 if (52*(7*x + 21*k) == n&&k > 0) 
			 {printf ("%d\n",x) ;
			  printf ("%d",k) ;
			  break ;
			 }
		}	
		printf ("\ncycle\n") ;
	}	
	return 0 ;
 } 
