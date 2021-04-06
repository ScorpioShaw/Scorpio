# include <bits/stdc++.h>
using namespace std ;
const int num = 13 ;
const int col = 4 ;

    
	string rank[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"} ;
	string suit[] = {"c", "d", "h", "s"} ;

class wuhu 
{
	public :
		void base ()
		{
			int n = 0 ;
			for (int i = 0; i < num; i++)
			{
				for (int a = 0; a < col; a++)
				{
					card[n] = rank[i] + suit[a] ;
					n++ ;
				} 
			}
			cout << "Î´Ï´ÅÆÊ±£º" << endl ; 
			for (int i = 0; i < 52; i++)
			cout << card[i] << " " ; 
			cout << endl ;  
		}
		void xipai ()
		{
			int shu[52] = {0}, arr[52] ;
		     for (int i = 0; i < 52; i++)
		     {
		     
		        int m ;
		        do
				{
					m = rand ()%52 ;
		     	    
				} while (shu[m] == 1) ;
		     	shu[m]++ ;
		        arr[i] = m ;
		     } 
		    
			cout << "Ï´ÅÆºó£º" << endl ; 
		    for (int i = 0; i < 52; i++)
		  	cout << card[arr[i]] << " " ;
		}
		
		
	private :
	    string card[52] ;
} ;

int main ()
{
	while (1)
	{
		srand ((unsigned int) time (NULL)) ;
		wuhu pai ;
		pai.base() ;
		
		pai.xipai () ;
		
		cout << "\ncycle\n" ;
		system ("pause") ;
	}
	return 0 ;
}
