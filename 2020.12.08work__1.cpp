# include <stdio.h>
int main (void)
{
    int i, n ;
    scanf ("%d",&n) ;
    
	for (i = 0; i < n; i++)
	{long int a, b ;
	 scanf ("%ld %ld",&a,&b) ;
	 printf ("%ld\n",a*b) ;
	}
	return 0 ;
 } 
