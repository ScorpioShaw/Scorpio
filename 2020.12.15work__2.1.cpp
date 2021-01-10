# include <stdio.h>
int main (void)
{
	int m, n, t ;
	scanf ("%d",&t) ;//t = 3
	int shu[t-1] ;
	for (m = 0; m < t; m++)
	scanf ("%d",&shu[m]) ;
	
	int a, b, big, small ;
	big= small = shu[0] ;
//	printf ("%d\n",small) ;
	for (a = 1; a < t; a++)
	{if (small > shu[a])
	 small = shu[a] ;
	 if (big < shu[a])
	 big = shu[a] ;
	}
	if (small < 0)
    {if (-small <= big)
     printf ("%d\n",big) ;
     else
     printf ("%d\n",small) ;
	}
	else
	printf ("%d\n",big) ;
	return 0 ;
}
