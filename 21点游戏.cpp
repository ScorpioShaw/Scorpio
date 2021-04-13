# include <bits/stdc++.h>
using namespace std ;
const int num = 13 ;
const int col = 4 ;
string rank[] = {"A", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"} ;
string suit[] = {"c", "d", "h", "s"} ;
class Poker
{
	protected :
		string card[52] ;
		int ord[52] ;
	public :
		
		void base () // 按顺序排好 
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
		}
		void order () // 随机产生一种顺序 
		{
			int m, judge[52] = {0} ;
			for (int i = 0; i < 52; i++)
			{
			    do
			    {
				    m = rand () % 52 ;
	     		} while (judge[m] == 1) ;
	     		judge[m]++ ;
	     		ord[i] = m ;
	     	//	cout << card[ord[i]] << " " ;
	     	//	cout << ord[i] << " " << endl ;
			}
		}
		
} ;
class Hand : public Poker
{
	private :
		int score ;
		
	public :
		
		void set (int s)
		{
			score = s ;
		}
		void show (int i)
		{
			//int n = ord[i] ;
			//cout << n << endl ;
			cout << "第" << i+1 << "张牌为：" << card[ord[i]] << endl ;
		} 
		int faPai (int i)
		{
			if (card[ord[i]][0] > 48 && card[ord[i]][0] < 57)
			score += card[ord[i]][0] - 48 ;
			
			if (card[ord[i]][0] == 65)
			{
				if (score <= 11)
				score += 10 ;
				else
				score += 1 ;
			}
			
			if (card[ord[i]][0] > 65)
			score += 10 ;
			return score ;
		}
} ;
int main ()
{
	srand ((unsigned int) time (NULL)) ;
	while (1)
	{
		
    	Hand game ;
		game.base() ;
		game.order() ;
	
    	int s = 0 ;
    	int stand ;
    	game.set(s) ;
    	
	    cout << "二十一点游戏开始！" << endl ;
    	int i ;
    	char re ;
	
    	for (i = 0; i < 52; i++)
    	{
    		game.show(i) ;
    		int dianShu = game.faPai(i) ;
    		stand =dianShu ;
	    	cout << "当前点数为：" << dianShu << endl ;
	    	if (dianShu > 21)
	    	{
	    		cout << "游戏结束，您输掉了" << endl ;
	    		return 0 ;
			}
		    cout << "按 t 停止发牌, 按 c 继续" << endl ;
		    cin >> re ;
    		if (re == 't')
    		break ;	 
    	}
    	
    	int com = rand () % 21+1 ;
    	cout << "您的点数为：" << stand << endl ;
    	cout << "电脑的点数为：" << com << endl ;
    	if (stand > com)
    	cout << "恭喜您，你赢了！" << endl ;
    	else if (stand == com)
    	cout << "平局！" << endl ;
    	else
    	cout << "很遗憾，您输了！" << endl ;
    	
    	cout << "按 Y 再来一局" << endl ;
		cout << "按 N 退出游戏" << endl ;
		
		if (re == 'N') 
		return 0 ;
	}
	  
	return 0 ;
}
