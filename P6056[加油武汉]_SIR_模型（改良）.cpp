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
			r_new = ceil (i*y) ; // ÿ��Ļָ��� 
			
			r += r_new ; // �ָ����ܺ�
			
			i_new = ceil (s*i*b) ; // ÿ��ĸ�Ⱦ��

            if (i_new >= s) // ��������Ⱦ�ߴ��ڻ�����׸��� 
			{i = i + s - r_new ;
			 s = 0 ;	
			}		
			else
			{i += (i_new - r_new) ; // ��Ⱦ���ܺ�
			 s -= i_new ; // �׸����ܺ�
			}			 
		}
		cout << s << " " << i << " " << r ; 
		cout << "\ncycle\n" ; 
	} 
	return 0 ;
}
