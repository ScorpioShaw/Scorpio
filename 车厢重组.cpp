# include <stdio.h>
void min_to_max (int a[], int n) ;
int main (void)
{
	while (1)
	{
		int m, n, a, b, c = 0, d, e, f, g ;
		scanf ("%d",&n) ; // n == 4
		int shu[n], shu1[n] ; 
		for (m = 0; m < n; m++)
		{
		    scanf ("%d",&shu[m]) ; // 4 3 2 1
		    shu1[m] = shu[m] ;
	    }
	    min_to_max (shu1, n) ;
	    for (; ;)
	    {
		
		for (a = 0; a < (n-1); a++)
		if (shu[a] >= shu[a+1])
		{b = shu[a+1] ;
		 shu[a+1] = shu[a] ;
		 shu[a] = b ;
		 c++ ;
		}
		for (e = 0, d = 0; d < n; d++)
		if (shu1[d] != shu[d])
		e++ ;
		if (e == 0)
		break ;
	    }  
	    printf ("%d\n",c) ;
		printf ("\ncycle\n") ;
	}
	return 0 ;
}
void min_to_max (int a[], int n)
{
	int i, j, stand ;
	for (i = 0; i < (n-1); i++)
	for (j = i +1; j < n; j++)
	{
		if (a[i] >= a[j])
		{stand = a[j] ;
		 a[j] = a[i] ;
		 a[i] = stand ;
		}
	}
}
