 # include <bits/stdc++.h>
 int main (void)
 {
 	while (1)
 	{
 		int coin, m, n, a, b, c ;
 		scanf ("%d",&coin) ;
 		int final[coin] = {0} ;
 		char condition[coin] = {'0'} ;
 		for (m = 0; m < coin; m++)
 		condition[m] = '0' ;
 		
 		printf ("%d\n",coin) ;
 		
 		
 		for (n = coin-1; n >= 0; n--)
 		{
 			if (n%2 == 1)
 			{for (a = 0; a < n; a++)
 		     condition[a] = '1' ;
 	      	 printf ("%s\n",condition) ;
 			 for (m = 0; m < coin; m++)
 	     	 condition[m] = '0' ;
			}
			if (n%2 == 0&&n != 0)
			{for (b = 0; b < coin-n; b++)
			 condition[b] = '1' ;
	 		 printf ("%s\n",condition) ;
			 for (m = 0; m < coin; m++)
 		     condition[m] = '0' ; 
			}
			if (n == 0)
			for (c = 0; c < coin; c++)
			{
				final[c] = 1 ;
				printf ("%d",final[c]) ;
			}
		}
		
 		printf ("\ncycle\n") ;
	 }
 	return 0 ;
  } 
