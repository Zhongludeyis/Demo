#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
char codeNum(int y); 
int main(){
	int w[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int i,count,y;
	long long int a;
	string credit;
	char code;
	
	while(cin>>credit){
		//如果为-1就跳出 
		if(credit=="-1"){
			break;
		}
		count = 0;
		for(i=0;i<17;i++){
			a = credit[i]-'0';
			count += a*w[i];
		}
		//校验码转换 
		y = count%11;
		code = codeNum(y); 
		if(code==credit[17]){
			cout<<1<<endl;
		}else{
			cout<<0<<endl;
		}
	}
	
	return 0;
}
char codeNum(int y){
	char code;
	if(y==0){
		code = '1';
	}else if(y==1){
		code = '0';
	}else if(y==2){
		code = 'X'; 
	}else if(y==3){
		code = '9';
	}else if(y==4){
		code = '8';
	}else if(y==5){
		code = '7';
	}else if(y==6){
		code = '6';
	}else if(y==7){
		code = '5';
	}else if(y==8){
		code = '4';
	}else if(y==9){
		code = '3';
	}else if(y==10){
		code = '2';
	}
	return code;
}
