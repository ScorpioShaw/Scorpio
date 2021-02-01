# include <stdio.h>
int main (void)
{
	while (1)
	{
		int x, y, m, n = 0, a, year[2000] ;
		scanf ("%d %d",&x,&y) ;
		for (m = x; m <= y; m++)
		{
			if (m%4==0&&m%100!=0)
			{n++ ;
			 year[n] = m ;
			}
			if (m%400==0)
			{n++ ;
			 year[n] = m ;
			}
		}
		printf ("%d\n",n) ;
		for (a = 1; a <= n; a++)
		printf ("%d ",year[a]) ;
	
		printf ("\ncycle\n") ;
	}
	return 0 ;
 } 
