# include <bits/stdc++.h>
using namespace std ;
int main ()
{
	while (1)
	{
		long long a, c, p, q, r, x ;
		cin >> a >> c >> p >> q >> r >> x ;
		
		if (a == c)// 初始温度与临界温度相同 
		{
			if (x <= q)
			cout << c ;
			else
			{
				cout << c + (x-q)/r ;
			} 
		}
		else if (a < c) // 初始温度小于临界温度 
		{
			if (x <= (c-a)*p)
			cout << a + x/p ;
			else if (x <= (c-a)*p + q)
			cout << c ;
			else 
			cout << c + (x - (c-a)*p - q)/r ;  
		}
		else
		{
			cout << a + x/r ; 
		}
		cout << "\ncycle\n" ;
	}
	return 0 ;
} 
