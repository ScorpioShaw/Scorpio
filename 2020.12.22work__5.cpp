# include <stdio.h>
# define N 1000
int main (void)
{
//	int cycle = 1 ;
//	while (cycle)
//	{
	  int m, n, t, a, b, c, d, e = 0 ;
	  char ch, allstr[N] = {} ;
	  for (a = 0; a < N; a++)
	  {
	  	allstr[a] = getchar () ; // ÊäÈë I like thinking
		if (allstr[a] == ' ')
		e++ ;
		if (allstr[a] == '\n')
		break ;		 	  	
	  }
//	  printf ("e = %d\n",e) ;   //e = 2
//	  printf ("a = %d\n",a) ;	//a = 15
	  b = 0, n = 0 ;
	  char str[N] = {} ;
	  for (d = 1; d <= (e+1); d++)
	  {	 
	    for (; allstr[b] != ' '&&allstr[b] != '\n'; b++)
	    {
	  	  str[b] = allstr[b] ;
	    } 
	    m = b ;
	    t = m - n ;
//	    printf ("b = %d\n",b) ;  // b = 1 , b = 6
//	    printf ("%c\n",str[1]) ;
	    for (c = (b-1); c >= (m-t); c--)
	    {
	      printf ("%c",str[c]) ;	   	 
	    }	
	    b++ ;
	    n = b ;
	    if (d < (e+1))
	    printf (" ") ;
      }
//	  printf ("\n") ;
//	  printf ("cycle\n") ;	
//	} 
	return 0 ;
}
