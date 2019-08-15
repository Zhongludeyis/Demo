#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,number;
	cin>>n;
	int a[n];
	int b[n];
	set<int>s;
	set<int>::reverse_iterator rit;
	for(i=0;i<n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	number = 1;
	for(rit = s.rbegin();rit!=s.rend();rit++){
		for(i=0;i<n;i++){
			if(a[i]==*rit){
				b[i] = number;	
			}
		}
		number++;
	}
	for(i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
} 
