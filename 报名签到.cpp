# include <bits/stdc++.h>
int main (void)
{
	while (1)
	{
		int n, m, sum = 0 ;
		scanf ("%d",&n) ;
		int num[n] ;
		for (int a = 0; a < n; a++)
		scanf ("%d",&num[a]) ;
		
		for (m = 0; m < n-1; m++)
		{
			if (num[m] >= num[m+1])
			sum = sum + num[m] ;
			else
			sum = sum + num[m+1] ;
		}
		printf ("%d",sum) ;
		printf ("\ncycle\n") ;
	}
	
	
	return 0 ;
 } 
