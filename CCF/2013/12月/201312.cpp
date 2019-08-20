#include<bits/stdc++.h>
using namespace std;
int main(){
	string num;
	cin>>num;
	int count = 0;
	int mul = 1;
	for(int i=0;i<11;i++){
		if(num[i]!='-'){
			count += mul*(num[i]-'0');
			mul++;
		}
	}
	if((count%11)>9){//´óÓÚ9 
		if(num[12]=='X'){
			cout<<"Right"; 
		}else{
			num[12] = 'X';
			cout<<num;
		}
	}else{
		if(num[12]==(count%11 +'0')){
			cout<<"Right";
		}else{
			num[12] = count%11 + '0';
			cout<<num;
		}
	}
	return 0;
}
