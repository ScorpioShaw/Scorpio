# include <stdio.h>
int main (void)
{
//	int cycle = 1 ;
//	while (cycle)
//	{
	  int n, m ;
	  float ave = 0.0 ;
	  scanf ("%d",&n) ;
	  int shu[100] ;
	  if (n <= 100&&n >= 1)
	  {
	  
	  
	    for (m = 0; m < n; m++)
	    {
	      scanf ("%d",&shu[m]) ;
	      ave += (float)(shu[m])/n ;
        }
	    printf ("%.2f",ave) ;
	  }
//	    printf ("\ncycle\n") ;				
//    }
	return 0 ;
}
