
# include <stdio.h>
# include <math.h>
int main ()
{

int a,b,c ;
printf ("�����򽫼���һԪ���η��̵Ľ�\n") ;
printf ("����������3��������Ϊ���̵�ϵ�����Զ��Ÿ���\n") ;
scanf ("%d,%d,%d",&a,&b,&c) ;

int delta ;
delta = b*b - 4*a*c ;

double x1 = (-b+sqrt(delta))/2*a ;
double x2 = (-b-sqrt(delta))/2*a ;

if (delta < 0)
  printf ("�޽�\n") ;
  
else if (delta == 0) 
  {printf ("������������ͬ��\n") ;
   printf ("x1 = x2 = %lf\n",x1,x2) ;
  }

else
  {printf ("������������ͬ��\n") ;
   printf ("x1 = %lf,x2 = %lf\n",x1,x2) ;
  }

  return 0 ;
}
