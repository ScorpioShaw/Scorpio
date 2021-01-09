# include <stdio.h>
# define N 100
int main (void)
{   
	int i, n ,c;
	scanf ("%d",&n) ;
	for (i = 0;i < n; i++)
	{
		char input[N+1];
		int m, t = 3 ;
		scanf ("%s",input) ;
		if (input[0]=='S')
			{if (input[1]=='C')
			 {if (input[2]=='U'&&input[t++]=='\0')
		 	 printf ("YES\n") ;
		  	else 
		 	 printf ("NO\n") ;
			 }	
			else 
			printf ("NO\n") ; 
			}
		if (input[0]=='A')
		{
		for (m = 1;; m++)
		{  if (input[m]!='A'&&input[m]!='S'){
		printf ("NO\n");break;}
		   if (input[m]=='S')
		   {if (input[m+1]=='C')
		    {if (input[m+2]=='U'){
		     for (c=m+3;input[c]!='\0';c++){
		     	if (input[c]!='A')break;
			 }
			 if (input[c]=='\0'&&input[m+3]=='A'){printf ("YES\n");break;}
			 else {printf ("NO\n");break;}
			 }
			 else {printf ("NO\n");break;}
			 }			 
		    else 
		    {
			printf ("NO\n");break;}
		    }	
		   }	    
	    }
	
	if(input[0]!='A'&&input[0]!='S')printf ("NO\n");	
	for (c=0;input[c]!='\0';c++)
	input[c]='\0';
}
return 0 ;}
