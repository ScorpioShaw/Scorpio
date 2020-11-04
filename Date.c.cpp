# include <stdio.h>
int main ()
{
	int month,day,year,n ;
	printf ("输入日期 （mm/dd/yyyy) :") ;
	scanf ("%d / %d / %d",&month,&day,&year) ;
	 
	printf ("日期: %d",day) ;
	switch (day)
	{
	 	case 1 : case 21 : case 31 :
	 	printf ("st") ; break ;
	 	case 2 : case 22 :
		printf ("nd") ; break ;
		case 3 : case 23 :
		printf ("rd") ; break ;
		default : 
		printf ("th") ; break ; 
	}
	printf (" day of ") ;
	
	switch (month)
	{
		case 1 :printf ("January") ; break ;
		case 2 :printf ("February") ; break ;
		case 3 :printf ("March") ; break ;
		case 4 :printf ("April") ; break ;
		case 5 :printf ("May") ; break ;
		case 6 :printf ("June") ; break ;
		case 7 :printf ("July") ; break ;
		case 8 :printf ("August") ; break ;
		case 9 :printf ("September") ; break ;
		case 10 :printf ("October") ; break ;
		case 11 :printf ("November") ; break ;
		case 12 :printf ("December") ; break ; 
	}
    printf (", %d",year)	;
    
    n = (day + 2*month + 3*(month + 1)/5 + year + year/4 - year/100 + year/400 + 1)% 7 ;
    switch (n)
    {
	case 1 : printf (", 星期一") ; break ; 
	case 2 : printf (", 星期二") ; break ;
	case 3 : printf (", 星期三") ; break ;
	case 4 : printf (", 星期四") ; break ;
	case 5 : printf (", 星期五") ; break ;
	case 6 : printf (", 星期六") ; break ;
	case 7 : printf (", 星期日") ; break ;
    }
	
	
	return 0 ;
 } 

