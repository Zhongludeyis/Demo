#include<bits/stdc++.h>
using namespace std;
int num(char x);
int main(){
	int t;
	int i,j,count,left;
	unsigned int k;
	int B;
	string N;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>B>>N;
		count = 0;
		//判断个位数字之和 
		for(k=0;k<N.size();k++){
			//转换成数字
			count += num(N[k]);
		}
		for(j=0;j<B;j++){
			left = count+j;
			if((left%(B-1))==0){
				break;
			}
		}
		if(j<10){
			cout<<j;
		}else if(j==10){
			cout<<'a';
		}else if(j==11){
			cout<<'b';
		}else if(j==12){
			cout<<'c';
		}else if(j==13){
			cout<<'d';
		}else if(j==14){
			cout<<'e';
		}else if(j==15){
			cout<<'f';
		}
		cout<<endl;
	}	
	return 0;
}
int num(char x){
	int i;
	i = 0;
	if((x-'0')<10){
		i = x-'0';
	}else if(x=='a'){
		i = 10;
	}else if(x=='b'){
		i = 11; 
	}else if(x=='c'){
		i = 12;
	}else if(x=='d'){
		i = 13;
	}else if(x=='e'){
		i =14;
	}else if(x=='f'){
		i= 15;
	}
	return i;
}
