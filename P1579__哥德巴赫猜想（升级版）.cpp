# include <bits/stdc++.h>
using namespace std ;
int judge_prime (long a) ;
int main ()
{
	while (1)
	{
		long shu ;
		cin >> shu ;
		
		long n, m, t ; 
		for (n = 2; n < shu/3; n++)
		{
			if (judge_prime (n) == 0)
			{
				for (m = n; m < shu/2; m++)
				{
					if (judge_prime (m) == 0)
					{
						if (judge_prime (shu - n - m) == 0)
						{
							cout << n << " " << m << " " << shu - n - m ;
							return  0 ;
						}	
					}
				}
			}
		}
		cout << "\ncycle\n" ;
	}
	return 0 ;
}
int judge_prime (long a) 
{
	int c = 0 ;
	for (int i = 2; i < a; i++)
	if (a%i == 0)
	c++ ;
	return c ;
} 
