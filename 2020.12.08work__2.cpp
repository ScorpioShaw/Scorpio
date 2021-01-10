# include <stdio.h>
# define N 201
int main (void)
{
	char str[N]={} ;
	int m, t ;
	scanf ("%d\n",&m) ;
		
	fgets (str, 200, stdin) ;//fgetsÊäÈë×Ö·û´® :study hard
//	printf ("%d\n",m) ;
//	printf ("%s",str) ;
    
//  printf ("%d\n",sizeof(str)/sizeof(str[0])) ;
    for (t = 0; str[t]!='\0'; t++)
              ;
    int n = t - 1 ;//t==11,n==10
//  printf ("%d\n",t) ;
    int a = n - m ; //a==8
//  printf ("%d\n",a) ;
	for (; a <= (n-1) ; a++)
	{printf ("%c",str[a]) ;
	}
//	printf ("%c",str[2]) ;
	int b ;
	for (b = 0; b <= (n-m-1); b++)
	{printf ("%c",str[b]) ;
	}
//	printf ("%d\n",b) ;
	return 0 ;
}
