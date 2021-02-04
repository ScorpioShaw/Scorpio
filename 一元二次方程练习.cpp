
# include <stdio.h>
# include <math.h>
int main ()
{

int a,b,c ;
printf ("本程序将计算一元二次方程的解\n") ;
printf ("请输入任意3个整数作为方程的系数且以逗号隔开\n") ;
scanf ("%d,%d,%d",&a,&b,&c) ;

int delta ;
delta = b*b - 4*a*c ;

double x1 = (-b+sqrt(delta))/2*a ;
double x2 = (-b-sqrt(delta))/2*a ;

if (delta < 0)
  printf ("无解\n") ;
  
else if (delta == 0) 
  {printf ("方程有两个相同解\n") ;
   printf ("x1 = x2 = %lf\n",x1,x2) ;
  }

else
  {printf ("方程有两个不同解\n") ;
   printf ("x1 = %lf,x2 = %lf\n",x1,x2) ;
  }

  return 0 ;
}
