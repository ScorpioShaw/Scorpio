# include <stdio.h>
int jc (int n) ;
int main (void)
{
	while (1)
	{
		int n; 
		scanf ("%d",&n) ;
		printf ("%d\n",jc (n)) ; 
		
		
		printf ("\ncycle\n") ;
	}
	
	
	return 0 ;
}
int jc (int n)
{
	if (n == 1)
	return 1 ;
	else 
	return n*jc (n-1) ;
}
