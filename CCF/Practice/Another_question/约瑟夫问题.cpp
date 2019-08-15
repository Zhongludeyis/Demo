#include<bits/stdc++.h>
using namespace std;
int Joseph(int n,int m)
{
	vector<int>v;
	vector<int>::iterator it; 
	for(int i=1;i<=n;i++)
	{
		v.push_back(i);
	}
	int start=0;
	while(v.size()!=1)
	{
		
		//语法问题： 
//		cout<<"v.size()="<<v.size()<<endl;
		start=(start+m-1)%v.size();
//		cout<<"start="<<start<<endl;
		//cout<<"remove="<<v[v.begin()+(start)]<<endl;
		it = v.begin()+(start);
//		if(it==v.end()){
//			cout<<*it<<endl;
//		}
		
		//指向最后一个
//		cout<<*(v.end());
		v.erase(it);
		//最后一个元素
	}
	return v[0];
}
int main()
{
	int t=0;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,m;
		cin>>n>>m;
		int t=Joseph(n,m);
		cout<<t<<endl;
	}
	return 0;
}

























