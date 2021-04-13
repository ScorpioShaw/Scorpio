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
		
		void base () // ��˳���ź� 
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
		void order () // �������һ��˳�� 
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
			cout << "��" << i+1 << "����Ϊ��" << card[ord[i]] << endl ;
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
    	
	    cout << "��ʮһ����Ϸ��ʼ��" << endl ;
    	int i ;
    	char re ;
	
    	for (i = 0; i < 52; i++)
    	{
    		game.show(i) ;
    		int dianShu = game.faPai(i) ;
    		stand =dianShu ;
	    	cout << "��ǰ����Ϊ��" << dianShu << endl ;
	    	if (dianShu > 21)
	    	{
	    		cout << "��Ϸ�������������" << endl ;
	    		return 0 ;
			}
		    cout << "�� t ֹͣ����, �� c ����" << endl ;
		    cin >> re ;
    		if (re == 't')
    		break ;	 
    	}
    	
    	int com = rand () % 21+1 ;
    	cout << "���ĵ���Ϊ��" << stand << endl ;
    	cout << "���Եĵ���Ϊ��" << com << endl ;
    	if (stand > com)
    	cout << "��ϲ������Ӯ�ˣ�" << endl ;
    	else if (stand == com)
    	cout << "ƽ�֣�" << endl ;
    	else
    	cout << "���ź��������ˣ�" << endl ;
    	
    	cout << "�� Y ����һ��" << endl ;
		cout << "�� N �˳���Ϸ" << endl ;
		
		if (re == 'N') 
		return 0 ;
	}
	  
	return 0 ;
}
