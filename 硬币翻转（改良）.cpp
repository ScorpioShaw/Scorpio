# include <bits/stdc++.h>
int main (void)
{
	while (1)
	{
		int m, n, a, b, c, d ;
		scanf ("%d",&m) ;
		int coin[m] = {0} ;
		
		printf ("%d\n",m) ;
		for (n = 0; n < m; n++)
		{
			for (a = 0; a < m; a++)
			{
				if (coin[a] == 1&&a != n)
				coin[a] = 0 ;
				else if (coin[a] == 0&&a != n)
				coin[a] = 1 ;
			}
			for (b = 0; b < m; b++)
			printf ("%d",coin[b]) ;
			if (n != m-1)
			printf ("\n") ;
		}
		
		printf ("\ncycle\n") ;
	}
	return 0 ;
}
