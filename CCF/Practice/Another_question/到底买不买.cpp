#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	string b;
	unsigned int i,j,flag;
	unsigned int count1,count2;
	cin>>a;
	cin>>b;
	count1 = count2 = 0; 
	int p[1000] = {0};
	for(i=0;i<b.size();i++){
		flag = 0;
		for(j=0;j<a.size();j++){
			if(b[i]==a[j]&&p[j]==0){
				count1++;
				flag = 1;
				p[j] = 1;
				break;
			}
		}
		if(flag==0){
			count2++; 
		}
	}
	if(count1==b.size()){
		cout<<"Yes"<<" "<<a.size()-b.size(); 
	}else{
		cout<<"No"<<" "<<count2;
	}
	return 0;
} 
