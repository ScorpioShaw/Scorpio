# include <stdio.h>
int main (void)
{
	while (1)
	{
		float sum_kola, each_kola ;
		int student, cup ;
		scanf ("%f %d",&sum_kola,&student) ;
		
		each_kola = sum_kola/student ;
		cup = 2*student ; 
		printf ("%.3f\n",each_kola) ;
		printf ("%d",cup) ;
		
		printf ("\ncycle\n") ;
	}
	
	return 0 ;
} 
