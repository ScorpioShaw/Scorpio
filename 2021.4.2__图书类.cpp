# include <bits/stdc++.h>
using namespace std ;
class book
{
	public :
		void print ()
		{
			cout << "******  b.借书  ******" << endl ;
			cout << "******  r.还书  ******" << endl ;
			cout << "******  s.展示  ******" << endl ;
			cout << "******  e.退出  ******" << endl ; 
		}
		void set (int num, string aur)
		{
			number = num ;
			author = aur ;
		}
		void dispaly ()
		{
			cout << "当前图书数量为：" << number << endl ;
			cout << "作者均为肖宇航" << endl ; 
		}
		void borrow ()
		{
			if (number == 0)
			{
				cout << "图书已被借完，无法借书" << endl ; 
			}
			else
			{
				number-- ;
			    cout << "当前图书数量为：" << number << endl ;
			}
		}
		void restore ()
        {
        	if (number == 100)
        	{
        		cout << "并没有图书借出，无法还书" << endl ;
			}
			else
			{
				number++ ;
        	    cout << "当前图书数量为：" << number << endl ;
			}
        }
	private :
		string bookname ;
		string author ;
		int price ;
		int number ;
} ;
int main ()
{
	book xyh ; 
	int num = 100 ; // 图书量 
	string aur = "肖宇航" ; // 作者名 
	xyh.set(num, aur) ;
	xyh.print() ; 
	char func ;
	while (1)
	{
		
		cin >> func ;
		
		if (func == 'b')
		xyh.borrow() ;
		if (func == 'r')
		xyh.restore() ;
		if (func == 's')
		xyh.dispaly() ;
		if (func == 'e')
		return 0 ;
	}
	return 0 ;
 } 
