# include <bits/stdc++.h>
using namespace std ;
int main ()
{
	while (1)
	{
		int n, m, x, y ;
		cin >> n >> m >> x >> y ;
		int turn[y] = {0}, hurt[y] = {0} ;
		int boom[x][4], dian[y][2] ;
		for (int a = 0; a < x; a++)
		for (int b = 0; b < 4; b++)
		cin >> boom[a][b] ;
		
		for (int a = 0; a < y; a++)
		{
			for (int b = 0; b < 2; b++)
		    {
			    cin >> dian[a][b] ;
		    }
		    
			for (int c = 0; c < x; c++)
			{ 
			   if ((boom[c][0] <= dian[a][0]&&dian[a][0] <= boom[c][2])&&(boom[c][1] <= dian[a][1]&&dian[a][1] <= boom[c][3]))
			   {hurt[a]++ ;
			    turn[a] = c + 1 ;
			   }   
			}	
		}
		for (int a = 0; a < y; a++)
		{
			if (a == y-1)
			{if (hurt[a] > 0)
			 cout << "Y " << hurt[a] << " " << turn[a] ; 
			 if (hurt[a] == 0)
			 cout << "N " ;
			}
			else
			{if (hurt[a] > 0)
			 cout << "Y " << hurt[a] << " " << turn[a] << endl ; 
			 if (hurt[a] == 0)
			 cout << "N " << endl ;
			}		
		}
		cout << "\ncycle\n" ;
	}
	return 0 ;
}
