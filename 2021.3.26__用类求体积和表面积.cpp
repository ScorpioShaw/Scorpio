# include <bits/stdc++.h>
using namespace std ;
class nature
{
	public :
//		void set (int l, int w, int h)
//		{
//			cin >> l >> w >> h ;
//		}
		int vol (int len, int wid, int height) // 求体积 
		{
			return len*wid*height ;
		}
		int area (int len, int wid, int height) // 求表面积 
		{
			return 2*(len*wid + len*height + wid*height) ;
		}
	private :
		int len ;
		int wid ;
		int height ;
} ; 
int main ()
{
	while (1)
	{
		int l, w, h ;
		cin >> l >> w >> h ;
		nature cube ;
//      cube.set (l, w, h) ;
		
		cout << "体积：" << cube.vol (l, w, h) << endl ;
		cout << "面积：" << cube.area (l, w, h) << endl ;
		cout << "\ncycle\n" ;
	}
	return 0 ;
 } 
