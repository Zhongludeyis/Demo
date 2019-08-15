#include<bits/stdc++.h>
using namespace std;
int main(){
	string W,X;
	int i;
	int a,b;
	while((cin>>W>>X)){
		int num = 0; 
		cout<<num<<endl;
		int flag = 0;
		for(i=0;i<strlen(W);i++){
			a = W[i] - '0';
			b = X[i] - '0';
			if(a==b){//两个数相等，继续判断下一位 
				continue; 
			}else if(W[i]!='?'&&a<b){//从这一位比较出大小，所有位都比X小
				flag = 1; // 
				break;
			}else if(W[i]!='?'&&a>b){//从这一位比较出大小，所有位都比X大 
				flag = 2;
				break; 
			} 
		}
		if(flag==1){
			cout<<0<<endl;	
		}else if(flag==2){
			//找有多少个？
			int count = 0;
			for(i=0;i<strlen(W);i++){
				if(W[i]=='?'){
					count++;
				}
			}
			cout<<pos(10,count)<<endl;
		}else if(flag==3){
			int count = 0;
			
		}
	}
	return 0;
}
//思路
