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
	  for (n = 2; n < a; n++) //�ж�a�Ƿ������� 
	  if (a % n == 0)    
	  {c++ ;
	  }  
	  if (c==0) //a������ 
	  
	  {for (d = 2; d < (m - a); d++) //�ж�m-a�Ƿ�������
	   if ((m-a) % d == 0)
	   {f++ ;
		} 
	  if (f==0) //m-a������ 
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
