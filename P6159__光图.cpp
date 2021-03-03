# include <bits/stdc++.h>
using namespace std ;
int main (void)
{
	while (1)
	{
		long long int n, p, k, t = 0 ;
		scanf ("%lld %lld %lld",&n, &p, &k) ;
		
		t = k*p%n ;
		if (t >= n)
		t -= n ;
		printf ("%lld",t) ;
		printf ("\ncycle\n") ;
	}	
	return 0 ;
 } 
