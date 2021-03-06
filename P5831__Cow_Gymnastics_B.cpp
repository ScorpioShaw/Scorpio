# include <bits/stdc++.h>
using namespace std ;
int main (void)
{
	while (1)
	{
		int k, n, ans = 0 ;
		scanf ("%d %d",&k, &n) ;
		int cows[k][n], rank[k][n+1] ;
		for (int a = 0; a < k; a++)
		for (int b = 0; b < n; b++)
		{
		   scanf ("%d",&cows[a][b]) ;
		   rank[a][cows[a][b]] = b ;
	    }
	    
	    for (int c = 1; c < n ;c++)
	    {
	        for (int d = c+1; d <= n; d++)
	        {
	        	int js1 = 0, js2  = 0 ;
	        	for (int e = 0; e < k; e++)
	        	{
	        		if (rank[e][c] < rank[e][d])
	        		js1++ ;
	        		if (rank[e][c] > rank[e][d])
	        		js2++ ;
				}
				if (js1 == k||js2 == k)
				ans++ ;
			}
		}
		printf ("%d",ans) ; 
		printf ("\ncycle\n") ;
	}
	return 0 ;
 } 
