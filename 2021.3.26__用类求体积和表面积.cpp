# include <bits/stdc++.h>
using namespace std ;
class nature
{
	public :
//		void set (int l, int w, int h)
//		{
//			cin >> l >> w >> h ;
//		}
		int vol (int len, int wid, int height) // ����� 
		{
			return len*wid*height ;
		}
		int area (int len, int wid, int height) // ������ 
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
		
		cout << "�����" << cube.vol (l, w, h) << endl ;
		cout << "�����" << cube.area (l, w, h) << endl ;
		cout << "\ncycle\n" ;
	}
	return 0 ;
 } 
