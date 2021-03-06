# include <bits/stdc++.h>
using namespace std ;
int main (void)
{
	while (1)
	{
		int n, m, k ;
		scanf ("%d %d %d",&n, &m, &k) ;
		int plan[n][m], tests[k+1][m] = {0}, ans[k+1] = {0} ;
		for (int a = 0; a < n; a++)
		for (int b = 0; b < m; b++)
		scanf ("%d",&plan[a][b]) ;
		
		for (int b = 0; b < m; b++)
		{
		    for (int a = 0; a < n; a++)
		    {
			   tests[plan[a][b]][b]++ ;
			   if (tests[plan[a][b]][b] > 1)
			   tests[plan[a][b]][b] = 1 ;
	 	    } 
	    }
	    for (int c = 1; c <= k; c++)
	    {
	    	for (int d = 0; d < m; d++)
	    	{
	    		ans[c] += tests[c][d] ;
			}
		}
		for (int e = 1; e <= k; e++)
		{
			if (e == k)
			printf ("%d",ans[e]) ; 
			else
			printf ("%d ",ans[e]) ;
	    }
		printf ("\ncycle\n") ;
	}
	return 0 ;
}
