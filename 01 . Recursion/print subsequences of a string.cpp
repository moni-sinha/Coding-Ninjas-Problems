#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//#define    lli       long long int
//#define    mod       1e9+7
//#define    fio       ios_base::sync_with_stdio(false);cin.tie(NULL);
void func(string s,string output)
{
	if(s.length()==0)
	{
		cout<<output<<endl;
		return;
	}
	func(s.substr(1),output);
	func(s.substr(1),output+s[0]);
}
int main() 
{
	string s;
	cin>>s;
	func(s,"");
    return 0;
}
