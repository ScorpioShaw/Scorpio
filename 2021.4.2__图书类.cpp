# include <bits/stdc++.h>
using namespace std ;
class book
{
	public :
		void print ()
		{
			cout << "******  b.����  ******" << endl ;
			cout << "******  r.����  ******" << endl ;
			cout << "******  s.չʾ  ******" << endl ;
			cout << "******  e.�˳�  ******" << endl ; 
		}
		void set (int num, string aur)
		{
			number = num ;
			author = aur ;
		}
		void dispaly ()
		{
			cout << "��ǰͼ������Ϊ��" << number << endl ;
			cout << "���߾�ΪФ�" << endl ; 
		}
		void borrow ()
		{
			if (number == 0)
			{
				cout << "ͼ���ѱ����꣬�޷�����" << endl ; 
			}
			else
			{
				number-- ;
			    cout << "��ǰͼ������Ϊ��" << number << endl ;
			}
		}
		void restore ()
        {
        	if (number == 100)
        	{
        		cout << "��û��ͼ�������޷�����" << endl ;
			}
			else
			{
				number++ ;
        	    cout << "��ǰͼ������Ϊ��" << number << endl ;
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
	int num = 100 ; // ͼ���� 
	string aur = "Ф�" ; // ������ 
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
