#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a,b,i;
	while((cin>>a>>b)&&a!=EOF){
		long long int count1,count2;
		count1 = count2 = 0;
		for(i=1;i<((a/2)+1);i++){
			if(a%i==0){
				count1 +=i;
			}
		}
		for(i=1;i<((b/2)+1);i++){
			if(b%i==0){
				count2 +=i;
			}
		}
		if(count1==b&&count2==a){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}	
	}
	return 0; 
}
