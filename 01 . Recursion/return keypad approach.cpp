#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//#define    lli       long long int
//#define    mod       1e9+7
//#define    fio       ios_base::sync_with_stdio(false);cin.tie(NULL);
void func(int n,string output)
{
	if(n==0)
	{
		cout<<output<<endl;
		return;
	}
	int rem=n%10;
	string smallString;
	if(rem==0 || rem==1)
		smallString="";
	else if(rem==2)
		smallString="abc";
	else if(rem==3)
		smallString="def";
	else if(rem==4)
		smallString="ghi";
	else if(rem==5)
		smallString="jkl";
	else if(rem==6)
		smallString="mno";
	else if(rem==7)
		smallString="pqrs";
	else if(rem==8)
		smallString="tuv";
	else if(rem==9)
		smallString="wxyz";
	int string_size=smallString.size();
	for(int i=0;i<string_size;i++)
		func(n/10,smallString[i]+output);
}
int main() 
{
	int n;
	cin>>n;
	string* output=new string[1000];
	func(n,"");
    return 0;
}
