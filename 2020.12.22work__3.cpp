/*# include <stdio.h>
# define N 100
int main (void)
{   int cycle = 1 ;
    while (cycle)
    {
	
	int i, t = 0 ;
	scanf ("%d",&i) ;
//	for (t = 0; t <= i; t++)
    while (t <= i)
	{int m, n, a, b, c, d ;
	 char shu[N+1] = {} ;
	 fgets (shu, N+1, stdin) ;// 3 8 5 2
//	 scanf ("%s",shu) ;
	 printf ("%s\n",shu) ;
//	 printf ("%c\n",shu[2]) ;
	 for (m = 0; shu[m] != '\0'; m++)
	    ;                     // m = 8
	 printf ("%d\n",m) ;
	 n = m-2 ; // n = 6
	 for (a = 0; a <= 6;a++)
	 {
	 }
	 )
	 t++ ;
    }
    
    printf ("cycle\n") ;
    }
	return 0 ;
}
*/
# include <stdio.h>
# define N 1000
int main (void)
{
//	int cycle = 1 ;
//	while (cycle) 
//    {
	 int t, i ;
     scanf ("%d",&i) ;
     for (t = 0; t < i; t++)
     {
	  int shu[N] = {}, m, n, a, b, c, d, e, f, i, j, stand1, stand2 ;
      for (m = 0; m < N; m++)
      {
	   scanf ("%d",&shu[m]) ; //输入 3 8 2 5 
       if (getchar () == '\n')
       break ;
	  }
	  int one[N] = {}, two[N] = {} ;//one为奇数数组，two为偶数数组
	  for (n = 0, a = 0, b = 0; n <= m; n++)// m = 4
	  {
	  	if (shu[n]%2 == 1||shu[n]%2 == -1)
	  	{one[a] = shu[n] ; // 存入了 3 5 
	  	 a++ ;
		}
		if (shu[n]%2 == 0)
		{two[b] = shu[n] ; // 存入了 8 2
		 b++ ;
		}
	  }
//	  printf ("a = %d b = %d\n",a,b) ;
	  // 排序代码：
	  for (i = 0; i <=(a-2); i++)
	  for (c = i+1; c <= (a-1); c++) // a = 2
	  {
	  	if (one[i] >= one[c])
	  	{stand1 = one[i] ;
	  	 one[i] = one[c] ;
	  	 one[c] = stand1 ;
		}
	  } 
	  for (f = 0; f <= (a-1); f++)
	  printf ("%d ",one[f]) ;
	  //
	  for (j = 0; j <= (b-2); j++)
	  for (d = j+1; d <= (b-1); d++) // b = 2
	  {
	  	if (two[j] >= two[d])
	  	{stand2 = two[j] ;
	  	 two[j] = two[d] ;
	  	 two[d] = stand2 ;
		}
	  } 
	  for (e = 0; e <= (b-1); e++)
	  printf ("%d ",two[e]) ;
//	  printf ("%d\n",m) ;
      printf ("\n") ;
     }
//	 printf ("cycle\n") ;
//	}	
	return 0 ;
}
