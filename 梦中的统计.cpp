# include <stdio.h>
int main (void)
{
	while (1)
    {
    	int shu[10] = {0} ;
    	long int M, N, a, b, c, d ;
    	scanf ("%ld %ld",&M,&N) ;
    	
    	for (; M <= N; M++)
    	{
    		
    		for (a = M; a >= 1; )
    		{
    			b = a % 10 ;
    			a = (a - b)/10 ;
    			shu[b]++ ;
			}
		}
    	
    	for (c = 0; c < 10; c++)
    	{
    		if (c != 9)
    		printf ("%d ",shu[c]) ;
    		else
    		printf ("%d",shu[c]) ;
		}
    	printf ("\ncycle\n") ;
	}
	return 0 ;
 } 
