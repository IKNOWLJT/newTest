#include<stdio.h>
#include<stdlib.h>
void quicksort(int *v,int low,int high)
{
	int l,h;
	l=low;
	h=high;
	int key;
	key=v[low];
	if(low<high)
	{
	while(low<high)
	{
		while(low<high&&v[high]>=key)   high--;
		v[low]=v[high];
		while(low<high&&v[low]<=key)    low++;
		v[high]=v[low];
	}
	v[low]=key;
	quicksort(v,l,low-1);
	quicksort(v,low+1,h);
	}
	else{
		return;
	}
}
int main(void)
{
	int *v,n,i;
	scanf("%d",&n);
	v=(int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
      scanf("%d",&v[i]);
    quicksort(v,0,n-1);
    for(i=0;i<n;i++)
    printf("%5d",v[i]);
    return 0;
} 
