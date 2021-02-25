# include <bits/stdc++.h>
using namespace std ;
//void min_to_max (long long int a[], int n) ;
int main (void)
{
	while (1)
	{
		int m, n, a, b, c, d, door = 1 ;
		long long int time ;
		scanf ("%d",&n) ;
		long long int floor[n+1] = {0} ;
		for (m = 1; m <= n; m++)
		scanf ("%ld",&floor[m]) ;
		
	//	min_to_max (floor, n+1) ;
	    sort (floor, floor+n+1) ;
		for (d = 1; d < n+1; d++)
		printf ("%ld ",floor[d]) ;
		printf ("\n") ;
		for (a = 1; a < n; a++)
		{
			if (floor[a] < floor[a+1])
			door++ ;
		}
		time = floor[n]*10 + door*5 + n ;
		printf ("%ld\n",time) ;
		printf ("door = %d\n",door) ;
		printf ("floor[n] = %d\n",floor[n]) ;
		
		printf ("\ncycle\n") ;
	}
	
	return 0 ;
}
/*void min_to_max (long long int a[], int n)
{
	int stand, b, c ;
	for (b = 0; b <= n-2; b++)
	for (c = b+1; c <= n-1; c++)
	{
		if (a[b] >= a[c])
		{stand = a[b] ;
		 a[b] = a[c] ;
		 a[c] = stand ;
		}
	}
}
*/
