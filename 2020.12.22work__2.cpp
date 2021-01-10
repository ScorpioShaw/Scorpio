# include <stdio.h>
int main (void)
{ //  int cycle = 1 ;
  //  while (cycle)
//{
	int i, t ;
	scanf ("%d",&i) ; 
	for (t = 0; t < i; t++)
	{int m, n, a = 0, b, c = 0, stand = 0, sum = 0, x, y, z ;
	 scanf ("%d %d",&m,&n) ;
	 while (m <= n)
//	 printf("%d %d\n",m,n) ;   //判断是否是水仙花数 
	 {
//	 printf ("%d %d\n",m,n) ;
	  x = m%10 ;
	  y = (m/10)%10 ;
	  z = m/100 ;
	  sum = x*x*x + y*y*y +z*z*z ;
//   printf ("%d\n",sum) ;
	  if (sum == m)
	  {
	  printf ("%d ",m) ;
	  c++ ;
      } 
	  m++ ;
     }
	 if (c == 0)
	 printf ("-1") ;
	 printf ("\n") ;
	}
//	printf ("cycle\n") ;
//}
	return 0 ;
}

