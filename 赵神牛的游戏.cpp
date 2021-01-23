# include <stdio.h>
int main (void)
{
	while (1)
	{
		int lan, skill, boss ;
		scanf ("%d %d %d",&lan, &skill, &boss) ;
		int kill[skill][2], m, n, a, b, c, d  = 0 ;
		 
		for (m = 0; m < skill; m++)
		for (n = 0; n < 2; n++)
		scanf ("%d",&kill[m][n]) ; 
		
		for (a = 0, c = 1; a < skill; a++, c++)
		{
			if (lan >= kill[a][0])
			{if (kill[a][0] > 0)
			 {b = lan/kill[a][0] ;
			  if (b*kill[a][1] >= boss)
			  {if (a == skill - 1)
			   printf ("%d",c) ;
			   else 
			   printf ("%d ",c) ;
			   d++ ; 
			  }
		     }
		     if (kill[a][0] == 0)
		     {if (kill[a][1] > 0)
		      {if (a == skill - 1)
			   printf ("%d",c) ;
			   else 
			   printf ("%d ",c) ;
			   d++ ;
			  }
			 }
		    }
		}
		if (d == 0)
		printf ("-1") ;		
		printf ("\ncycle\n") ;
	}
	
	return 0 ;
}
