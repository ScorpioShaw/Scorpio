# include <stdio.h>
int main (void)
{//   int cycle = 1 ;
 //   while (cycle)
 //   {
	
	int m, a ;
	scanf ("%d",&m) ;
	if (m % 2 ==0&&m > 6)
	{for (a = 3; a <= (m - a); a++)
	 {int n, c = 0, d, f =0 ;
	  for (n = 2; n < a; n++) //判断a是否是质数 
	  if (a % n == 0)    
	  {c++ ;
	  }  
	  if (c==0) //a是质数 
	  
	  {for (d = 2; d < (m - a); d++) //判断m-a是否是质数
	   if ((m-a) % d == 0)
	   {f++ ;
		} 
	  if (f==0) //m-a是质数 
	  {printf ("%d ",a) ;
	   printf ("%d\n",m-a) ;
	  }
	  }
	 }
	}
	else
	printf ("ERROR\n") ;
  //printf ("cycle\n") ;
  //  }
	return 0 ;
}
