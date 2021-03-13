# include <bits/stdc++.h>
using namespace std ;
long long int find_max (long long int a[], long long int n) ;
int main ()
{
	while (1)
	{
		long long int city, transfer, sum_k = 0, sum_n = 0 ;
		cin >> city >> transfer ;
		long long int road[city] = {0}, flash[city-transfer + 1] = {0} ;
		for (int a = 1; a < city; a++)
		{
			cin >> road[a] ;
			sum_n += road[a] ;
		} 
	    cout << "sum_n = " << sum_n << endl ; 
		for (long long int m = 1; m <= city - transfer; m++)
		{
			sum_k = 0 ;
			for (long long int n = 1; n <= transfer; n++)
			{
				sum_k += road[m + n - 1] ;
			}
			flash[m] = sum_k ;
		}
		cout << "max = " << find_max (flash,city-transfer+1) << endl ;
		cout << sum_n - find_max (flash, ity-transfer+1;
		
		cout << "\ncycle\n" ;
	}
	return 0 ;
} 
long long int find_max (long long int a[], long long int n)
{
	long long int max = a[1] ;
	for (long long int b = 2; b < n; b++)
	{
		if (max <= a[b])
		max = a[b] ;
	}
	return max ;
}
