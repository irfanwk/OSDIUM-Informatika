#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int t,a[200],n,diff;
bool p,ar;

void InsertionSort(int a[], int n)
{
	int tmp,j,i;
	for(i=0;i<n;i++)
	{
		tmp=a[i];
		j=i-1;
		while(j>=0 && a[j]>tmp)
		{
			a[j+1]=a[j];
			j-=1;
		}
		a[j+1]=tmp;
	}
}

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		p=true;
		ar=true;
		scanf("%d", &n);
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
		}
		diff=a[1]-a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]-a[i-1]!=diff) ar=false;
		}
		if(!ar)
		{
			InsertionSort(a,n);
			diff=a[1]-a[0];
			for(int i=1;i<n;i++)
			{
				if(a[i]-a[i-1]!=diff) p=false;
			}
		}
		else p=false;

		if(ar) printf("arithmetic\n");
		else if(p) printf("permuted arithmetic\n");
		else printf("non-arithmetic\n");
	}
