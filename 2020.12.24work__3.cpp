# include <stdio.h>
# define N 100
int main (void)
{
    int cycle = 1 ;
	while (cycle)
	{
	  int i, t ;
	  scanf ("%d",&i) ;
	  
	  for (t = 0; t < i; t++)
	  {
	  	char shu[N] = {}, one[7][5] = {}, two[4][6] = {}, three[4][6] = {} ;
	  	char four[4][6] = {}, five[4][6] = {}, six[4][6] = {}, seven[4][6] = {} ;
	  	char eight[4][6] = {}, nine[4][6] = {} ; 
    char zero[8][6] = {"*****" ,
					   "*   *" ,
					   "*   *" ,
					   "*   *" ,
					   "*   *" ,
					   "*   *" ,
					   "*****"} ;
	/*	  one[7][5] = {"    *" ,
		               "    *" ,
		   			   "    *" ,
					   "    *" ,
					   "    *" , 
					   "    *" ,
					   "    *"} ;
/*		  two[4][6] = {*****
		              {    *
					  {	   *
					  {*****
					  {*
					  {*
					  {*****} ;
		three[4][6] = {*****
		                   *
						   *
					   *****
					       *
				 		   *
					   *****} ;
		 four[4][6] = {*   *
		               *   *
					   *   *
					   *****
					       *
					   	   *
						   *} ;
		 five[4][6] = {*****
		               *
				  	   *
					   *****
					       *
						   *
					   *****} ;
	      six[4][6] = {*****
		               *
					   *
					   *****
					   *   *
					   *   *
					   *****} ;
		seven[4][6] = {*****
		                   *
						   *
						   *
						   *
						   *
						   *} ;
		eight[4][6] = {*****
		               *   *
					   *   *
					   *****
					   *   *
					   *   *
					   *****} ;
		 nine[4][6] = {*****
		               *   *
					   *   *
					   *****
					       *
						   *
					   *****} ;*/
	  	int m, n, a, b, c, d ;
	  	scanf ("%s",shu) ;   // ÊäÈë 13 4950
		for (m = 0; shu[m] != '\0'; m++)
		    ;  // m = 4
		for (a = 0; a < m; a++)
		printf ("%c",shu[a]) ;
		printf (":\n  ") ;
		for (n = 0; n < m; n++)
		{
		  if (shu[n] == '0')
		  {for (b = 0; b <= 4; b++)
		   {
		   	 for (c = 0; c <= 6; c++) 
			 printf ("%c",zero[b][c]) ;
		   	 printf ("\n") ;
		   }		   
		  }	
		  if (shu[n] == '1')
		  {for (b = 0; b <= 4; b++)
		   {
		   	 for (c = 0; c <= 6; c++)
		   	 printf ("%c",one[b][c]) ;
		   }		   
		  }	 
			
		}	 
	
	  	
//		printf ("m = %d\n",m) ;
//		printf ("%c %c %c %c\n",shu[0],shu[1],shu[2],shu[3]) ;
	  }
	  
	 printf ("\ncycle\n") ;
	}	
	
	
	
	
	return 0 ;
} 
