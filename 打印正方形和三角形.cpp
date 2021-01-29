# include <stdio.h>
int main (void)
{
	while (1)
	{
		int m, n, a, b, c, d ;
		scanf ("%d",&n) ;
		for (m = 1;;m++)
		{   
		    if (m == n*n)
		    {if (m < 10)
		     {printf ("0%d\n",m) ;
		      printf ("\n") ;
		     }
		     if (m >= 10)
		     {printf ("%d\n",m) ;
		      printf ("\n") ;
			 }
			 break ;
			}
			
			if (m < 10)
			{if (m%n == 0)
			 printf ("0%d\n",m) ;
			 else
			 printf ("0%d",m) ;
			}
			
		    if (m >= 10)
			{if (m%n == 0)
			 printf ("%d\n",m) ;
			 else
			 printf ("%d",m) ;
		    }
		}
		
		for (b = 1;b <= n; b++)
		{
			
			for (c = 1; c <= (n-b)*2; c++)
			printf (" ") ;
			for (a = (b-1)*b/2+1; a <= b*(b+1)/2; a++)
			{
				if (a == b*(b+1)/2)
				{if (a < 10)
				 printf ("0%d\n",a) ;
				 if (a >= 10)
				 printf ("%d\n",a) ;
				}
				else
				{if (a < 10)
				 printf ("0%d",a) ;
				 if (a >= 10)
				 printf ("%d",a) ;
				} 
			}	
		} 	
		printf ("\ncycle\n") ;
	} 
	return 0 ;
} 
