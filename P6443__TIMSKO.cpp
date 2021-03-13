# include <bits/stdc++.h>
using namespace std ;
int find_max (int a[], int n) ;
int main ()
{
	while (1)
	{
		int w, m, k, n, ans[201] = {0} ;
		cin >> w >> m >> k ;
		
		for ( n = 0; n <= k; n++)
		{
			if (m + n - k == 0)
			continue ;
			float judge = (w - n)/(m + n - k) ;
			if (judge >= 0)
			{if (judge < 2)
			 ans[n] = (w - n)/2 ;
			 if (judge >= 2)
			 ans[n] = m + n - k ;
			}
		}
		cout << find_max (ans, 201) ;
		cout << "\ncycle\n" ;
	}
	return 0 ;
}
int find_max (int a[], int n)
{
	int max = a[0] ;
	for (int b = 1; b < n; b++)
	{
		if (max <= a[b])
		max = a[b] ;
	}
	return max ;
}
