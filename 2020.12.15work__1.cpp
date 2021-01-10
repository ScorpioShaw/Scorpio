# include <stdio.h>
int main (void)
{
	int n, m ;
	scanf ("%d",&n) ;
	for (m = 0; m < n; m++)
	{long int a, b, c, t ;
	 scanf ("%ld %ld %ld",&a,&b,&c) ;
    
	 if (a <= b)
	    {t = a ;
	     a = b ;
		 b = t ; 
		}
	 if (a <= c)
	    {t = a ;
	     a = c ;
		 c = t ; 
		}
	 if (b <= c)
	    {t = b ;
	     b = c ;
	     c = t ;
		}
	 if (a > 0&&b > 0&&c > 0&&b*b + c*c == a*a&&(b + c) > a)
	 printf ("Yes\n") ;
	 else 
	 printf ("No\n") ;
	
	
	} 
	return 0 ;
}
