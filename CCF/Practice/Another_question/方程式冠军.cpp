#include<bits/stdc++.h>
using namespace std;
struct{
	
	int a[100] = {0}; //各个排名的积累次数 
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
				//找到已在结构体内 
				if(player==aq[k].name){
					//更新分数 
					aq[k].score = update_score(k,j);
					//添加名次数
					aq[k].a[j]++;
					flag = 1;
					break; 
				}
			}
			if(flag == 0){//说明还未添加 
				for(k=0;k<100;k++){
					if(aq[k].name=="*"){
						//添加名字
						aq[k].name = player;
						//更新分数 
						aq[k].score = update_score(k,j);
						//添加名次数
						aq[k].a[j]++;
						break;
					}
				}
			}	
		}
	}
	//两种比较方法：
	//比分数再比排位： 
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
