# include <bits/stdc++.h>
using namespace std ;
int main ()
{
//	while (1)
//	{
		int a, b, c ;
		for (a = 123; a < 333; a++)
		{
			b = 2*a, c = 3*a ;
			int a1, a2, a3, b1, b2, b3, c1 ,c2, c3 ;
			a1 = a%10 ;
			a2 = a/10%10 ;
			a3 = a/100 ;
			b1 = b%10 ;
			b2 = b/10%10 ;
			b3 = b/100 ;
			c1 = c%10 ;
			c2 = c/10%10 ;
			c3 = c/100 ;
			if (a1 != a2&&a1 != a3&&a1 != b1&&a1 != b2&&a1 != b3&&a1 != c1&&a1 != c2&&a1 != c3&&a2 != a3&&a2 != b1&&a2 != b2&&a2 != b3&&a2 != c1&&a2 != c2&&a2 != c3&&a3 != b1&&a3 != b2&&a3 != b3&&a3 != c1&&a3 != c2&&a3 != c3&&b1 != b2&&b1 != b3&&b1 != c1&&b1 != c2&&b1 != c3&&b2 != b3&&b2 != c1&&b2 != c2&&b2 != c3&&b3 != c1&&b3 != c2&&b3 != c3&&c1 != c2&&c1 != c3&&c2 != c3&&a1*a2*a3*b1*b2*b3*c1*c2*c3 != 0)
			{
				if (a != 327)
				cout << a <<" " << b << " " << c << endl ;
				else
				cout << a <<" " << b << " " << c ;	
			}
		}
//		cout << "\ncycle\n" ;
//	}
	return 0 ;
}
