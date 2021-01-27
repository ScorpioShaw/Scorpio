# include <stdio.h>
# include <math.h>
int main (void)
{
	while (1)
	{
		int n, m, r, a, b, c, d, e = 0;
		scanf ("%d %d %d",&n,&m,&r) ;
		int tc[m][2] ;
		for (a = 0; a < m; a++)
		for (b = 0; b < 2; b++)
		scanf ("%d",&tc[a][b]) ;
		
		for (c = 1; c <= n; c++)
		for (d = 1; d <= n; d++)
		{
			for (a = 0; a < m; a++)
			{
				if (sqrt((tc[a][0]-c)*(tc[a][0]-c) + (tc[a][1]-d)*(tc[a][1]-d)) <= r)
				{e++ ;
				 break ;
			    }
			}
		}
		printf ("%d\n",e) ;			
		printf ("\ncycle\n") ;
	}
	return 0 ;
} 
