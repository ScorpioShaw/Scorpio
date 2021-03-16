# include <bits/stdc++.h>
using namespace std ;
int main ()
{
	while (1)
	{
	    int m, n, x = 1, y = 0, i = 1 ;
		cin >> m ; // m == 5
		int a[100][100] = {0} ;
		
		while (i <= (m*m+m)/2)
		{
			while (y < m&&!a[x][y+1]) // 向右 
		    {
			    a[x][++y] = i++ ; // 
		    }
		    
		    while (x < m&&!a[x+1][y-1]) // 向左下 
		    {
		    	a[++x][--y] = i++ ; // 
			}
			while (x > 0&&!a[x-1][y]) // 向上 
			{
				a[--x][y] = i++ ; // 
			}
	 	    
		}
		for (int b = 1; b < m+1; b++)
		{
			for (int c = 0; c < m+1; c++)
		    {   
			    if (a[b][c] != 0) 
			    cout << a[b][c] << "\t" ;
		    }
		    cout << endl ;
		}
		
		 
		cout << "\ncycle\n" ;
	}
	return 0 ;
 } 
