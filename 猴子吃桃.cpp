# include <stdio.h>
int main (void)
{
	while (1)
	{
		int n, m, peach = 1 ;
		scanf ("%d",&n) ; 
		for (m = 1; m < n; m++)
		peach = (peach+1)*2 ;
		printf ("%d\n",peach) ;
		
		printf ("\ncycle\n") ; 
	}
	return 0 ;
}
