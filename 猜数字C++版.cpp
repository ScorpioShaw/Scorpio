# include <bits/stdc++.h>
using namespace std ;
int main (void)
{
	while (1)   
	{
		srand ((unsigned int) time (NULL)) ;
		//////////���������ӣ����õ�ǰϵͳ��ʱ����������� 
		int cnt = 0, ans, num = rand () % 100 + 1 ; 
		//////////  rand () % n, ���� 0 �� n-1 �������
		cout << "������1~100�������һ������" << endl ;
		
		while (1)
		{ 
	        cin >> ans ;
		    cnt++ ;
		    if (ans > num)
		    cout << "�´���" << endl ;
		    else if (ans < num)
		    cout << "��С��" << endl ;
		    else
		    {cout << "��ϲ������ˣ�" ;
			 cout << "��һ������ " << cnt << " ��" ;  
		     break ;
		    }
	    }
		cout << "\ncycle\n" ;	 
	} 
	return 0 ;
 } 
