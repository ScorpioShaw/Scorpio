# include <stdio.h>
# define N 100
void max_min (int a[], int n, int *max, int *min) ;
int *find_middle (int a[], int n) ;
int main (void)
{
	int shu[N], length, big, small, middle, i ;
	for (i = 0; ;i++)
	{
		scanf ("%d",&shu[i]) ;
		if (getchar () == '\n')
		break ;
	}
	printf ("i = %d\n",i) ;
	length = i+1 ;//sizeof(shu)/sizeof(shu[0]) ;
	printf ("length = %d\n",length) ;
	max_min (shu, length, &big, &small) ;
	middle = *find_middle(shu, length) ;
	printf ("big = %d, small = %d, middle = %d",big, small, middle) ;
	
	return 0 ;
} 
void max_min (int a[], int n, int *max, int *min) 
{
	int i ;
	*max = *min = a[0] ;
	for (i = 1; i < n; i++)
	{
		if (a[i] > *max)
		*max = a[i] ;
		else if (a[i] < *min)
		*min = a[i] ; 		
	}
}
int *find_middle (int a[], int n)
{
	return &a[n/2] ;
}
