#include<bits/stdc++.h>
using namespace std;
struct{
	
	int a[100] = {0}; //���������Ļ��۴��� 
	int score = 0;
	string name = "*";
}aq[100]; 
int update_score(int x,int y);
int main(){
	int t,i,j,k,flag;
	int n;
	string player;
	map<string,int>mp;
//	map<string,int>::iteration it;
	 
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n;
		for(j=0;j<n;j++){
			cin>>player;
			flag = 0; 
			for(k=0;k<100;k++){
				//�ҵ����ڽṹ���� 
				if(player==aq[k].name){
					//���·��� 
					aq[k].score = update_score(k,j);
					//���������
					aq[k].a[j]++;
					flag = 1;
					break; 
				}
			}
			if(flag == 0){//˵����δ��� 
				for(k=0;k<100;k++){
					if(aq[k].name=="*"){
						//�������
						aq[k].name = player;
						//���·��� 
						aq[k].score = update_score(k,j);
						//���������
						aq[k].a[j]++;
						break;
					}
				}
			}	
		}
	}
	//���ֱȽϷ�����
	//�ȷ����ٱ���λ�� 
	for(i=0;i<) 
} 
int update_score(int x,int y){
	if(y>10){
	}else if(y==0){
		aq[x].score = aq[x].score + 25;
	}else if(y==1){
		aq[x].score = aq[x].score + 18;
		
	}else if(y==2){
		aq[x].score = aq[x].score + 15;
	}else if(y==3){
		aq[x].score = aq[x].score + 12;
	}else if(y==4){
		aq[x].score = aq[x].score + 10;
	}else if(y==5){
		aq[x].score = aq[x].score + 8;
	}else if(y==6){
		aq[x].score = aq[x].score + 6;
	}else if(y==7){
		aq[x].score = aq[x].score + 4;
	}else if(y==8){
		aq[x].score = aq[x].score + 2;
	}else if(y==9){
		aq[x].score = aq[x].score + 1;	
	}
	return aq[x].score;
}
