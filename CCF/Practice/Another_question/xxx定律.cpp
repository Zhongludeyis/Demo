#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,count;
	while((cin>>n&&n!=0)){
		count = 0;
		while(n!=1){
			if(n%2==0){
				n /=2;
			}else{
				n = (3*n+1)/2;
			}
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}

