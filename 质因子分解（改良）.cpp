# include <stdio.h>
int main (void)
{
	while (1)
	{
		int N, m, n, a, b, c, d, e, f, shu[100000] = {0} ;
		scanf ("%d",&N) ;
		
		for (e  = N; e > 1; e--) // 找出最大质因子 
		{
			for (a = 0, b = 2; b < e; b++)
		    if (e % b == 0)
	       	a++ ;
	       	if (a == 0)
	       	break ;
		}
		
		for (; N > 1; N--)
		{
			for (m = 2, n = N; n > 1; m++)
			{
				for (; ;)
				 {
				 	d = n/m ;
				    if (m * d == n)
				    {shu[m]++ ;
				     n = d ;
				    }
				    else
				    break ;
				 }	
			}
		}	
		for (f = 2; f <= e; f++)
		{
			if (f == e&&shu[f] != 0)
			printf ("%d %d",f, shu[f]) ;
			if (f != e&&shu[f] != 0)
			printf ("%d %d\n",f, shu[f]) ;
		}
			
		printf ("\ncycle\n") ;
	}
	return 0 ;
 } 
