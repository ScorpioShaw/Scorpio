# include <bits/stdc++.h>
using namespace std ;
int main ()
{
	while (1)
	{
		int n, i = 1, x = 1, y = 0 ;
		cin >> n ;
		int arr[100][100] ;
		
		while (i <= n*n)
		{
			while (y < n && !arr[x][y+1])
			arr[x][++y] = i++ ;
			
			while (x < n && !arr[x+1][y])
			arr[++x][y] = i++ ;
			
			while (y > 1 && !arr[x][y-1])
			arr[x][--y] = i++ ;
			
			while (x > 1 && !arr[x-1][y])
			arr[--x][y] = i++ ;
		}
		for (int a = 1; a < n+1; a++)
		{
			for (int b = 1; b < n+1 ;b++)
			{
			//	if (arr[a][b] != 0)
				printf ("%3d",arr[a][b]) ;
				
			}
			cout << endl ;
		}
		cout << "\ncycle\n" ;
	}
	return 0 ;
}
