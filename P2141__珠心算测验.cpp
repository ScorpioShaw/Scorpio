# include <bits/stdc++.h>
using namespace std ;
int main ()
{
	while (1)
	{
		int n, ans = 0, arr[1000] = {0} ;
		cin >> n ;
		int shu[n] ;
		for (int i = 0; i < n; i++)
		{
			cin >> shu[i] ;
		}
		
		for (int i = 0; i < n; i++)
		for (int a = 0; a <= n-2; a++)
		{
			for (int b = a+1; b <= n-1; b++)
			{
				if (shu[i] == shu[a] + shu[b])
				arr[i]++ ;
			}
		}
		
		for (int c = 0; c < 1000; c++)
		{
			if (arr[c] > 1)
			arr[c] = 1 ;
			ans += arr[c] ;
		}
		cout << ans ;
		cout << "\ncycle\n" ;
	}
	return 0 ;
}
