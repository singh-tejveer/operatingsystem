#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k,h,z,s,t;
	printf("Enter no. of requests:-");
	scanf("%d",&n);
	int a[n+3];
	for(i=0;i<n;i++)
	{
		printf("Enter the %dth request:-",i+1);
		scanf("%d",&a[i]);
	}
	    printf("Enter Head Position:-");
         scanf("%d",&h);
     	 a[n]=0,a[n+1]=h;
		printf("Are you already included max value/upper Limit if yes press 0 if no give value-");
		int ki;
		scanf("%d",&ki);
		if(ki!=0)
		{   a[n+2]=ki;
			n=n+1;
		}
    int temp;
    for(i=0;i<n+2;i++)
	{
    	 for(j=0;j<(n+2)-i-1;j++)
 				{ 
				 if(a[j]>a[j+1])
                 {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp; 
                 }    }
			}
			
for(i=0;i<n+2;i++){
if(a[i]==h){
j=i;
}
}
printf("Moving Upward/Right=1\nMoving Downward/Left=2\n");
scanf("%d",&z);
if(z==1)
{
	s=0,t;
    printf("Seek order--- %d",h);
	for(i=j+1;i<n+2;i++)
	{
		t=abs(a[i]-h);
		s=s+t;
		h=a[i];
		printf(" %d",a[i]);	
	}
	for(i=j-1;i>0;i--)
	{
		t=abs(a[i]-h);
		s=s+t;
		h=a[i];
		printf(" %d",a[i]);	
	}
	
}
else if(z==2)
{
	s=0;
    printf("Seek order--- %d",h);
    	for(i=j-1;i>=0;i--)
	{
		t=abs(a[i]-h);
		s=s+t;
		h=a[i];
		printf(" %d",a[i]);	
	}
	for(i=j+1;i<n+1;i++)
	{
		t=abs(a[i]-h);
		s=s+t;
		h=a[i];
		printf(" %d",a[i]);	
	}
	if(ki==0)
	{
     	t=abs(a[i]-h);
		s=s+t;
		h=a[i];
		printf(" %d",a[i]);		
	}

	
}
else
{
	printf("Invalid Entry");
	return 0;
}
	printf("\nTotal Seek movements:- %d ",s);  
	
}
