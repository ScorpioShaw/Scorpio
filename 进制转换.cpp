# include <stdio.h>
int mi (int n) ;
int main (void)
{
	while (1)
	{
		int m,n,a,b,c,d,e,sum ;//m为进制，n为进制数 
     	scanf ("%d %d",&m,&n) ;// m == 2, n == 10101
     	if (m > 1&&m < 10)
     	{
		 
	    c = 0 ,b = n/10 ;
	    for (d = 1; b > 1; d++)
	    b /= 10 ;
	printf ("d = %d\n",d) ;
	printf ("%d\n",mi (d)) ;

	    while (d >= 0)
	    {a = (n/mi (d)%10) ;
	 
	     if (a != 0)
	     {for (sum = 0, e = d-1; e >= 0; e--)
		  sum += (n/mi (e)%10) ;
		  
		  if (sum == 0||d == 0)
	      printf ("%d*%d^%d",a,m,d) ;
	      else
		  printf ("%d*%d^%d+",a,m,d) ;  
	     }
	     d-- ;	     
	    } 
     	}		
		printf ("\ncycle\n") ;
	}
	return 0 ;
} 
int mi (int n)
{
	if (n == 0)
	return 1 ;
	return 10*mi(n-1) ;
}
