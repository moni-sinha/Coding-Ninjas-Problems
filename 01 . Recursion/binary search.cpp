#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//#define    lli       long long int
//#define    mod       1e9+7
//#define    fio       ios_base::sync_with_stdio(false);cin.tie(NULL);
vector<vector<int>> func(int arr[],int n,vector<vector<int>> res,int ind,vector<int> smallOutput)
{
	res.push_back(smallOutput);
	for(int i=ind;i<n;i++)
	{
		smallOutput.push_back(arr[i]);
		res=func(arr,n-1,res,i+1,smallOutput);
		smallOutput.pop_back();
	}
	return res;
}
int main() 
{
	int n;
	cout<<"enter n: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<vector<int>> res;
	vector<int> smallOutput;
	vector<vector<int>> result= func(arr,n,res,0,smallOutput);
	for(int i=0;i<result.size();i++)
	{
		for(int j=0;j<result[i].size();j++)
		{
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}
