#include<iostream>
using namespace std; 
void swap(int a[],int x,int y)
{
	int t=a[x];
	a[x]=a[y];
    	a[y]=t;
}
int find(int a[],int l,int h,int *c)
{
	int m=a[l],p=l;
	for(int i=l;i<=h;i++)
	{
		if(m>a[i])
		{
			m=a[i];
			p=i;
		} 
		(*c)++;
	}
	return(p);
}
void selec(int a[],int n,int *sw,int *c)
{
	int l=0,h=n-1;
	while(l<=h)
	{
		int m=find(a,l,h,c);
		if(m!=l)
		{
			swap(a,m,l);
			(*sw)++;
		}
		l++;  
	} 
}
int main()
{
	int n;
	cout<<"Entetr number of elements: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements:\n";
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int sw=0,c=0; 
	selec(a,n,&sw,&c);
	
	cout<<"The Sorted Array: \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	
        cout<<"\nNo. of swaps: "<<sw;
        cout<<"\nNo. of comparisons: "<<c<<"\n";
	return 0;
}
