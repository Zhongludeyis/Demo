#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	string a;
	int count,i,j;
	cin>>a;
	int b[10];
	count = 0;
	for(i=0;i<a.size();i++){
		count += a[i]-'0';
	}
	i=0;
	//���壡����Ҫ����0����� 
	if(count==0){
		cout<<"ling";
	}
	while(count>0){
		//�Ӹ�λ����ʼ����λ���� 
		b[i] = count%10;
		count = count/10;
		i = i+1; 
	}
	for(j=i-1;j>=0;j--){
		if(b[j]==0){
			cout<<"ling";
		}else if(b[j]==1){
			cout<<"yi";		
		}else if(b[j]==2){
			cout<<"er";
		}else if(b[j]==3){
			cout<<"san";
		}else if(b[j]==4){
			cout<<"si";
		}else if(b[j]==5){
			cout<<"wu";
		}else if(b[j]==6){
			cout<<"liu";
		}else if(b[j]==7){
			cout<<"qi";
		}else if(b[j]==8){
			cout<<"ba";
		}else{
			cout<<"jiu";
		}
		if(j>0){
			cout<<" "; 
		}	
	}
	return 0;
} 


