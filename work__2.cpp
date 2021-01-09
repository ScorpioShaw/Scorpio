# include <stdio.h>
# define N 10
int main (void)
{   
	int a[N] ;
	int i ; 
	
	for(; ;)
	{	  
	for (i = 0; i < 5; i++) 
	scanf ("%d",&a[i]) ;
	
	if ((a[0] != 0&&a[0] + a[4] == 2*a[2])||(a[0]==0&&a[1]!=0&&a[0] + a[4] == 2*a[2]))
	{printf ("case one\n") ;
	 for (i = 5; i < N; i++)
	 {a[i] = a[i-1]+(a[1]-a[0]) ;
      printf ("%d ",a[i-1]+(a[1]-a[0])) ;	
	}}
	printf ("\n") ; 
	if (a[0] != 0&&a[0]*a[4]==a[2]*a[2])
	{printf ("\ncase two\n") ;
	 for (i = 5; i < N; i++)
	 {a[i] = a[i-1]*a[1]/a[0] ;
	 printf ("%d ",a[i-1]*a[1]/a[0]) ;
	}}
     printf ("\n") ; 	
	if (a[0] != 0&&a[4]==a[3]+a[2])
	{printf ("\ncase three\n") ;
	 for (i = 5; i < N; i++)
	 {a[i] = a[i-2]+a[i-1] ;
	 printf ("%d ",a[i-2]+a[i-1]) ;
	}}
	printf ("\n") ; 
    if (a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0)
    break ;	
    }
	return 0 ;
}
