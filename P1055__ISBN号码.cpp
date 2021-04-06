# include <bits/stdc++.h>
using namespace std ;
int main ()
{
	while (1)
	{
		int ans, sum ;
		string book ;
		cin >> book ;
		
		sum = (book[0]-48)*1 + (book[2]-48)*2 + (book[3]-48)*3 + (book[4]-48)*4 + (book[6]-48)*5 + (book[7]-48)*6 + (book[8]-48)*7 + (book[9]-48)*8 + (book[10]-48)*9 ;
        ans = sum % 11 ;
        if (ans == (book[12]-48)||ans == (book[12]-78))
        cout << "Right" ;
        else
        {
        	if (ans != 10)
        	{
        		book[12] = (char) (ans+48) ;
        	    cout << book ;
			}
			else
			{
				book[12] = (char) (ans+78) ;
        	    cout << book ;
			}	
		}
		
		cout << "\ncycle\n" ;
	}
	return 0 ;
 } 
