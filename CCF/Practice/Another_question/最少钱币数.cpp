#include<bits/stdc++.h>
using namespace std;
int main(){
	int M,i; 
	while(cin>>M){
		if(M==0){
			break;
		}
		int K;
		cin>>K;
		int a[K];
		for(i=0;i<K;i++){
			cin>>a[i];
		}
		sort(a,a+K); 
		int num = 0;
		for(i=K-1;i>=0;i--){
			num += M/a[i]; 
			M = M%a[i];
		}
		if(M!=0){
			cout<<"Impossible"<<endl;
		}else if(M==0){
			cout<<num<<endl; 
		}
	}
	return 0;
}
//思路：
//1.从大到小依次除以面值数； 
//2.每种币换后看还剩余多少，继续往下算  
