# include <bits/stdc++.h>
using namespace std ;
// # define long long ll
int main (void)
{
	while (1)
	{
		long long  int s, i, i0, r = 0, n, r_new, s_new, i_new ;
		double b, y ;
		cin >> s >> i >> n >> b >> y ;
		
		for (int a = 0; a < n; a++)
		{
			r_new = ceil (i*y) ; // 每天的恢复者 
			
			r += r_new ; // 恢复者总和
			
			i_new = ceil (s*i*b) ; // 每天的感染者

            if (i_new >= s) // 当新增感染者大于或等于易感者 
			{i = i + s - r_new ;
			 s = 0 ;	
			}		
			else
			{i += (i_new - r_new) ; // 感染者总和
			 s -= i_new ; // 易感者总和
			}			 
		}
		cout << s << " " << i << " " << r ; 
		cout << "\ncycle\n" ; 
	} 
	return 0 ;
}
