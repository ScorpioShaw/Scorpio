# include <bits/stdc++.h>
using namespace std ;
int main (void)
{
	while (1)   
	{
		srand ((unsigned int) time (NULL)) ;
		//////////添加随机种子，利用当前系统的时间生成随机数 
		int cnt = 0, ans, num = rand () % 100 + 1 ; 
		//////////  rand () % n, 生成 0 到 n-1 的随机数
		cout << "请输入1~100间的任意一个数字" << endl ;
		
		while (1)
		{ 
	        cin >> ans ;
		    cnt++ ;
		    if (ans > num)
		    cout << "猜大了" << endl ;
		    else if (ans < num)
		    cout << "猜小了" << endl ;
		    else
		    {cout << "恭喜你猜中了！" ;
			 cout << "你一共猜了 " << cnt << " 次" ;  
		     break ;
		    }
	    }
		cout << "\ncycle\n" ;	 
	} 
	return 0 ;
 } 
