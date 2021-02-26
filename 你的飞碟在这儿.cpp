# include <bits/stdc++.h>
int main (void)
{
	while (1)
	{
		char ufo[100], group[100] ;
		int m, n, sum1 = 1, sum2 = 1 ;
		scanf ("%s",ufo) ;
		scanf ("%s",group) ;
		
		for (int a = 0; a < strlen (ufo); a++)
		{
			sum1 = sum1*(ufo[a] - 64) ;
		}
		for (int b = 0; b < strlen (group); b++)
		{
			sum2 = sum2*(group[b] - 64) ;
		}
		
		if (sum1%47 == sum2%47)
		printf ("GO") ;
		else
		printf ("STAY") ;
		
		printf ("\ncycle\n") ;
	}
	
	return 0 ;
 } 
 
