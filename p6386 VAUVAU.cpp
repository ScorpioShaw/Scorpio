# include <bits/stdc++.h>
int main (void)
{
	while (1)
	{
		int angry1, angry2, quiet1, quiet2, courier, milkman, cleaner ;
		scanf ("%d %d %d %d",&angry1, &quiet1, &angry2, &quiet2) ; 
		int man[3] ;
		for (int a = 0; a < 3; a++)
		scanf ("%d",&man[a]) ;
		
		for (int b = 0; b < 3; b++)
		{
			int judge = 0 ;
			if (man[b] <= angry1)
			{judge++ ;
			 if (man[b] <= angry2)
			 judge++ ;
			 else if (man[b] > angry2)
			 {if (man[b]%(angry2 + quiet2) != 0&&man[b]%(angry2 + quiet2) <= angry2)
			  judge++ ;
//			  if (man[b]%(angry2 + quiet2) == 0||man[b]%(angry2 + quiet2) > angry2)
			 }			 
			}
			if (man[b] > angry1)
			{if (man[b]%(angry1 + quiet1) != 0&&man[b]%(angry1 + quiet1) <= angry1)
			 judge++ ;
//			 if (man[b]%(angry1 + quiet1) == 0||man[b]%(angry1 + quiet1) > angry1)
             if (man[b] <= angry2)
			 judge++ ;
			 else if (man[b] > angry2)
			 {if (man[b]%(angry2 + quiet2) != 0&&man[b]%(angry2 + quiet2) <= angry2)
			  judge++ ;
//			  if (man[b]%(angry2 + quiet2) == 0||man[b]%(angry2 + quiet2) > angry2)
			 }		
			}
			if (judge == 0)
			printf ("none\n") ;
			if (judge == 1)
			printf ("one\n") ;
			if (judge == 2)
			printf ("both\n") ;
		}
		printf ("\b") ;
		printf ("\ncycle\n") ;
	}
	
	return 0 ;
}
