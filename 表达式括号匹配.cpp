# include <bits/stdc++.h>
int main (void)
{
	while (1)
	{
		char expressing[1000] ;
		int  judge = 0 ;
		scanf ("%s",expressing) ;
		
		for (int a = 0; a < strlen (expressing); a++)
		{
			if (expressing[a] == '(')
			judge++ ;
			if (expressing[a] == ')'&&judge != 0)
			judge-- ;
			
		}
		if (judge == 0)
		printf ("YES") ;
		else
		printf ("NO") ;
		
		printf ("\ncycle\n") ;
	}
	
	return 0 ;
}
