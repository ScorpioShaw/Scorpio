# include <bits/stdc++.h>
int main (void)
{
	while (1)
	{
		int n, m, b, judge[1000] ;
		scanf ("%d",&n) ;
		for (int a = 0; a < n; a++)
		{
			char shu[100] ;
			
			
			scanf ("%s",shu) ;
			b = strlen (shu) ;
			
			printf ("b = %d\n",b) ;  
			if ((shu[b-1]-48)%2 == 0)
			judge[a] = 0 ;
			else
			judge[a] = 1 ;
		}
		for (int c = 0; c < n; c++)
		{
			if (c != n-1)
			{if (judge[c] == 0)
			 printf ("even\n") ;
			 else
			 printf ("odd\n") ;
		    }
		    else
		    {if (judge[c] == 0)
			 printf ("even") ;
			 else
			 printf ("odd") ;
			}
		}	
		printf ("\ncycle\n") ;
	}
	return 0 ;
}
