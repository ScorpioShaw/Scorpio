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
		 	cout << "һ���շѣ�" << big*10+small*5 << "Ԫ" << endl ; 
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
		
		cout << "�󳵾���������" << endl ;
		cin >> a ;
		cout << "С������������" << endl ;
		cin >> b ;
		car.set(a, b) ;
		car.sum_fee() ;
		
		system ("pause") ; 
		cout << "\ncycle\n" ;
	}
	return 0 ;
 } 
