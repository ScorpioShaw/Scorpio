# include <bits/stdc++.h>
using namespace std ;
class ARR
{
	private :
		int n ;
		int shu[100] ;
	public :
		void set (int a[], int size) 
		{
			n = size ;
			for (int i = 0; i < size ; i++)
			{
				shu[i] = a[i] ;
			} 
		}
		void change ()
		{
				for (int i = 0, j = n-1; i < n/2 ;i++, j--)
				{
					if (shu[i] > 0 && shu[j] > 0)
					{
						while (shu[j] > 0)
						{
							j-- ;
						}
					}
					if (shu[i] < 0 && shu[j] < 0)
					{
						while (shu[i] < 0)
						{
						    i++ ;
						}
					}
					if (shu[i] > 0 && shu[j] < 0)
					{
						int stand ;
						stand = shu[i] ;
						shu[i] = shu[j] ;
						shu[j] = stand ;
					}
				}	
		}
		void show ()
		{
			for (int i = 0; i < n; i++)
			cout << shu[i] << "\t" ;
		}
} ;
int main ()
{
	while (1)
	{
		ARR v ;
		int b[10] = {1, -3, -1, 3, 2, 4, -4, 5, -5, -2} ;
		int size = sizeof(b)/sizeof(b[0]) ;
		v.set(b, size) ;
		v.show() ;
		cout << endl ;
		v.change() ;
		v.show() ;
		cout << endl ;
		
		system ("pause") ;
		cout << "\ncycle\n" ;
	}
	return 0 ;
 } 
