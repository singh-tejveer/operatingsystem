#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,h;
	printf("Enter no. of requests:-");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the %d th request:-",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter Head Position:-");
    scanf("%d",&h);
    int s=0,t;
    printf("Seek order--- %d ",h);
	for(i=0;i<n;i++)
	{
		t=abs(a[i]-h);
		s=s+t;
		h=a[i];
		printf(" %d",a[i]);
		
	}
	printf("\nTotal Seek movements:- %d ",s);  
	
	return 0;
}
