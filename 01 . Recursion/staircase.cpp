#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//#define    lli       long long int
//#define    mod       1e9+7
//#define    fio       ios_base::sync_with_stdio(false);cin.tie(NULL);
int func(int arr[],int si,int ei,int item)
{
	if(ei>=si)
	{
		int mid=(si+ei)/2;
		if(item==arr[mid])
			return mid;
		if(item<arr[mid])
			return func(arr,si,mid-1,item);
		return func(arr,mid+1,ei,item);
	}
	return -1;
}
int main() 
{
	int n;
	cout<<"enter n: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int item;
	cout<<"enter item to be searched: ";
	cin>>item;
	cout<<func(arr,0,n-1,item);
    return 0;
}
