# include <stdio.h>
# define N 32
int main (void)
{
	int n, m ;
	scanf ("%d\n",&n) ;
	
	for(m = 0; m < n; m++)
	{char shu[N]={} ;
	 int t ;
	 scanf ("%s",shu) ;//123321  1234321
//	 printf ("%c",shu[0]) ;
     for (t = 0;shu[t] != '\0';t++)
               ;
     int a = t-1 ;               //t = 6 ;t = 7
	 int b, x, y ;               //a = 5 ;a = 6
//   printf ("%d\n",t) ;       
	 if (t % 2 == 0)
	 {b = t/2 ;//b = 3
	  for (x = 0, y = a; x < b&&y >= b&&shu[x]==shu[y]; x++, y--)
	    ;//x = 3  ;  y = 2
	  if (x==b&&(y+1)==b)
	    printf ("Yes\n") ;
	  else
	    printf ("No\n") ;
	 }
	 if (t % 2 == 1)
	 {b = (t-1)/2 ;//b = 3
	  for (x = 0, y = a; x < b&&y > b&&shu[x]==shu[y]; x++, y--)
	    ;//x = y = 3
	  if (x==b&&y==b)
	    printf ("Yes\n") ;
	  else
	    printf ("No\n") ;
	 }
	}	
	return 0 ;
}
