# include <bits/stdc++.h>
int main (void)
{
	while (1)
	{
		int m, n, judge[10000] ;
		scanf ("%d",&n) ;
		for (int a = 0; a < n; a++)
		scanf ("%d",&judge[a]) ;
		
		for (int b = 0; b < n; b++)
		{
			if (b != n-1)
			{if (judge[b]%2 == 0)
			 printf ("even\n") ;
			 else
			 printf ("odd\n") ;
		    }
		    else
		    {if (judge[b]%2 == 0)
			 printf ("even") ;
			 else
			 printf ("odd") ;
			}
		}
		printf ("\ncycle\n") ;
	}	
	return 0 ;
 } 
