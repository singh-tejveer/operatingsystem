#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,i,j,k,h,z,s,t;
	cout<<"Enter no. of requests:-";
	cin>>n;
	int a[n+3];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the %dth request:-"<<i+1;
		cin>>a[i];
	}
	   cout<<"Enter Head Position:-";
        cin>>h;
     	 a[n]=0,a[n+1]=h;
		cout<<"Are you already included max value/upper Limit if yes press 0 if no give value-";
		int ki;
		cin>>ki;
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
cout<<"Moving Upward/Right=1\nMoving Downward/Left=2\n";
cin>>z;
if(z==1)
{
	s=0,t;
  cout<<"Seek order---"<<h;
	for(i=j+1;i<n+2;i++)
	{
		t=abs(a[i]-h);
		s=s+t;
		h=a[i];
		cout<<a[i];	
	}
	for(i=j-1;i>0;i--)
	{
		t=abs(a[i]-h);
		s=s+t;
		h=a[i];
		cout<<a[i];	
	}
	
}
else if(z==2)
{
	s=0;
   cout<<"Seek order---"<<h;
    	for(i=j-1;i>=0;i--)
	{
		t=abs(a[i]-h);
		s=s+t;
		h=a[i];
		cout<<a[i];	
	}
	for(i=j+1;i<n+1;i++)
	{
		t=abs(a[i]-h);
		s=s+t;
		h=a[i];
		cout<<a[i];	
	}
	if(ki==0)
	{
     	t=abs(a[i]-h);
		s=s+t;
		h=a[i];
		cout<<a[i];		
	}

	
}
else
{
cout<<"Invalid Entry";
	return 0;
}
	cout<<"Total Seek movements:-<<s; 
	
}
