# include <bits/stdc++.h>
using namespace std ;
int main (void)
{
	while (1)
	{
		long long int sum, a1, a2, n ;
		scanf ("%lld %lld %lld",&a1, &a2, &n) ;
		
		sum = n*a1 + n*(n - 1)*(a2 - a1)/2 ;
		printf ("%lld",sum) ;
		
		printf ("\ncycle\n") ;
	}
	return 0 ;
}
