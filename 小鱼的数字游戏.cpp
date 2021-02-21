# include <stdio.h>
int main (void)
{
	while (1)
	{
		int shu[100], m, n ;
		for (m = 0; ; m++)
		{
			scanf ("%d",&shu[m]) ;
			if (shu[m] == 0)
			break ; 
		}
		
		for (; m >= 0; m--)
		{
			if (shu[m] != 0&&m != 0)
			printf ("%d ",shu[m]) ;
			if (m == 0)
			printf ("%d",shu[m]) ;
		}
		printf ("\ncycle\n") ;
	}
	return 0 ;
 } 
