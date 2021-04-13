# include <bits/stdc++.h>
using namespace std ;
class fee
{
	public :
	     void set (int a, int b)
	     {
	     	big = a ;
	     	small = b ;
		 }
		 
		 void sum_fee ()
		 {
		 	cout << "一共收费：" << big*10+small*5 << "元" << endl ; 
		 }
	private :
	      int big ;
	      int small ;
} ;
int main ()
{
	while (1)
	{
		fee car ;
		int a, b ;
		
		cout << "大车经过辆数：" << endl ;
		cin >> a ;
		cout << "小车经过辆数：" << endl ;
		cin >> b ;
		car.set(a, b) ;
		car.sum_fee() ;
		
		system ("pause") ; 
		cout << "\ncycle\n" ;
	}
	return 0 ;
 } 
