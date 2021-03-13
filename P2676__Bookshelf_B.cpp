# include <bits/stdc++.h>
using namespace std ;
int main ()
{
	while (1)
	{
		long long cow, high, judge = 0, ans = 0 ;
		cin >> cow >> high ;
		int each_hight[cow] ;
		for (int a = 0; a < cow; a++)
		cin >> each_hight[a] ;
		// ¿ìÅÅº¯Êý 
		sort (each_hight, each_hight + cow) ;
//		for (int b = 0; b < cow; b++)
//		cout << each_hight[b] << " " ;
        for (cow = cow - 1; cow >= 0; cow--)
        {
        	judge += each_hight[cow] ;
        	ans++ ;
        	if (judge >= high)
        	break ;
		}
		cout << ans ;
		cout << "\ncycle\n" ;
	}
	return 0 ;
 } 
  
