#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,count,num,m;
	while((cin>>n)&&n!=EOF){
		m = n;
		count = 0;
		num = 0;
		while(n>0){
			num += 1;
			n -= num;
			count += num*num;
		}
		if(n==0){
			cout<<m<<" "<<count<<endl;
		}else if(n<0){
			n += num;
			count -= num*num;
			count += n*num;
			cout<<m<<" "<<count<<endl;	
		}
		//µ±nĞ¡ÓÚÁã
	}
	return 0;
}
