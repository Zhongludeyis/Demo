//最小的k个数
//#include<iostream>
//#include<string>
//#include<set>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,k,i;
	cin>>n>>k;
	long long int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	set<int>s;
	set<int>::iterator it;
	for(i=0;i<n;i++){
		s.insert(a[i]);
	}
	i = 0;
	for(it=s.begin();it!=s.end();it++){
		cout<<*it<<" ";
		i = i+1;
		if(k==i)break;
	} 
	return 0;
} 
