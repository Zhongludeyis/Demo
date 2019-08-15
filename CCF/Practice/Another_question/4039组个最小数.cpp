#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int b[50];
	unsigned int i,j,n;
	int min,tag;
	getline(cin,a);
	n = 0;
	for(i=0;i<a.size();i++){
		if(a[i]!=' '){
			b[n++] = a[i]-'0';
		}else{
			continue;
		}
	}
	//b[]有n个元素,找最小非0元素
	min = 10;
	for(j=0;j<n;j++){
		if(b[j]!=0&&b[j]<min){
			min = b[j];
			b[j] = b[0];
			b[0] = min;
		}
	}
	//从第一个开始往后冒泡排序：
	for(i=1;i<n;i++){
		for(j=i+1;j<n;j++){
			if(b[i]>b[j]){
				tag = b[i];
				b[i] = b[j];
				b[j] = tag;
			}
		}
	} 
	for(i=0;i<n;i++){
		cout<<b[i];
	} 
	
	return 0;
}
