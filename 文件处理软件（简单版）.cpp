# include <stdio.h>
# include <string.h>
int main (void)
{
	while (1)
	{
		int m, n, a, b, c, d, e, f, act ;
		char str[101] ;
		scanf ("%d",&m) ;
		scanf ("%s",str) ; 
	
		for (n = 1; n <= m; n++)
		{
			scanf ("%d",&act) ;
			if (act == 1)  //操作一 
			{char str3[101] ;
			 scanf ("%s",str3) ;
			 strcat (str, str3) ;
			 printf ("%s\n",str) ;
			}
			if (act == 2)  //操作二 
			{scanf ("%d %d",&a,&b) ;
			 for (c = a; c <= a+b-1; c++)
			 {
			     printf ("%c",str[c]) ;
			     str[c-a] = str[c] ;
		     }
		     for (e = b; e < 101; e++)
		     str[e] = '\0' ;
			 printf ("\n") ; 
			}
			if (act == 3)  //操作三 
			{scanf ("%d",&d) ; 
			 char str1[101] = {'\0'}, str4[101] = {'\0'} ;
			 for (f = d; f < b; f++)
			 {
			 	str1[f-d] = str[f] ;
			 }
			 for (; d < 101; d++)
			 {
			 	str[d] = '\0' ;
			 }
			 scanf ("%s",str4) ;
			 strcat (str, str4) ;
			 strcat (str, str1) ;
			 printf ("%s\n",str) ;
			}
			if (act == 4)  //操作四 
			{char str2[101] ;
			 int num1, num2, g = 0, h = 0, i = 0 ;
			 scanf ("%s",str2) ;
			 num1 = strlen (str) ;
			 num2 = strlen (str2) ;
//			 printf ("num1 = %d, num2 = %d\n",num1, num2) ;
			 for (h = 0; h < num2; h++)
			 {
			     for (; g < num1; g++)
			     {
			 	     if (str2[h] == str[g])
			 	     break ;
			     }
			     g++ ;
			     if (g == num1+1)
			     break ;
			     i++ ;
		     }
		     if (i == num2)
		     printf ("%d\n",g-i) ;
		     else
		     printf ("-1\n") ;
			}
		}
		printf ("\ncycle\n") ;
	}
	return 0 ;
} 
