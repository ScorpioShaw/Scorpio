# include <stdio.h>
int main (void)
{
	while (1)
	{
		int n, m, a, b, c, d, keng = 0 ;
		scanf ("%d",&n) ;
		int shu[10000] = {0};
		for (m = 0; m < n; m++)
		{
			scanf ("%d",&shu[m]) ;
		}
		
		for (a = 0; a < n - 1; a++)
		{
			if (shu[a] > shu[a+1])
			{for (; a < n - 1; )
			 {
			     if (shu[a+1] < shu[a+2])
			     {keng++ ;
			      break ;
		         } 
			     else if (shu[a+1] = shu[a+2])
			     {a = a + 1 ;
			      continue ; 
			     }
			     else
			     {a = a + 1 ;
			      continue ;
			     }
		     }
			}
		}
		printf ("%d\n",keng) ;
		printf ("\ncycle\n") ;
	}
	return 0 ;
 } 
