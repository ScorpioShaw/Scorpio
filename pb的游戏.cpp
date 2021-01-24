# include <stdio.h> 
int main (void)
{
	while (1)
	{
		int n, m, a ;
		scanf ("%d",&n) ;
		
		int shu[100] ;
		for (a = 0; a < n; a++)
		{
		    scanf ("%d",&shu[a]) ;
		}
		for (m = 0; m < n; m++)
		{
			if (shu[m]%2 == 0)
			printf ("pb wins\n") ;
			else
			printf ("zs wins\n") ;
		} 	
		printf ("\ncycle\n") ;
	}	
	return 0 ;
}
