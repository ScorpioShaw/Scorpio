# include <stdio.h>
int main (void)
{
//	int cycle = 1 ;
//	while (cycle)
//	{
	  int i, t ;
	  scanf ("%d",&i) ;
	  for (t = 0; t < i; t++)
	  {
	  	 int shu, m, n, a, b, c, d ;
	  	 scanf ("%d",&shu) ; // shu = 210 = 2*3*5*7
		  
	  	 for (m = 2; shu != 1; m++) //Ҫ�ж�shu������Ƿ�������������Ǿ�ֱ���������ֹѭ�����������ѭ�� 
	  	 {
		   
	       for (n = 2, c = 0; n < m; n++) //�ж�m�Ƿ������� ��m Ӧ��ÿ�ζ���2��ʼ 
	       {
		     if (m % n == 0)    
   	         {c++ ;
	         }
	       }
	       if (c == 0) //m������
	       {while (shu > 1)
		    {			  
		    a = shu/m ;		    
	        if (shu != a*m) 
	        break ;
	        if (shu == a*m)
		    {shu = a ;
		     if (shu > 1)
		     printf ("%d*",m) ;
		     if (shu == 1)
		     printf ("%d",m) ;
	        }
	        }
	       }
	     }
	     printf ("\n") ;
	  }
		
		
		
//	  printf ("\ncycle\n") ;
//	}
	return 0 ;
}
