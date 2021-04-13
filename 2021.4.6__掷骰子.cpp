# include <bits/stdc++.h>
using namespace std ;
class tou
{
	public :
		void ren()
		{
			dian = rand ()%6 + 1 ;
			cout << "点数为：" << dian << endl ;
		}
	private :
	 	int dian ;
} ;
int main ()
{
	while (1)
	{
		srand ((unsigned int)time (NULL)) ;
		tou s1 ;
		for (int i = 1; i < 11; i++)
		{
			cout << "第" << i << "次" << endl ;
			s1.ren() ;
		}
		
		system ("pause") ;
		cout << "\ncycle\n" ;
	}
	return 0 ;
}
