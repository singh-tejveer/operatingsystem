#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,i,h;
	cout<<"Enter no. of requests:-";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the request  "<<i+1;
			cin>>a[i];
	}
	cout<<"Enter Head Position:-";
  	cin>>h;
    int s=0,t;
    cout<<"Seek order-- "<<h;
	for(i=0;i<n;i++)
	{
		t=abs(a[i]-h);
		s=s+t;
		h=a[i];
		cout<<a[i];
		
	}
	cout<<"Total Seek movements:-"<<s;  
	
	return 0;
}
