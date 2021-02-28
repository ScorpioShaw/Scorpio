# include <bits/stdc++.h>
int main (void)
{
	while (1)
	{
		int m, n, unhappiness = 0, one_day = 0 ;
		scanf ("%d",&n) ;
		for (int a = 0; a < n; a++)
		{
			int hour1, hour2 ;
			scanf ("%d %d",&hour1, &hour2) ;
			one_day = one_day + hour1 + hour2 - 8 ;
			unhappiness += one_day ; 
		}
		printf ("%d",unhappiness) ;
		
		printf ("\ncycle\n") ;
	}
	
	
	return 0 ;
 } 
