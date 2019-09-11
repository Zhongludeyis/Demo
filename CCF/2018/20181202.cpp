#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int r,y,g;
	cin>>r>>y>>g;
	long long int n;
	cin>>n;
	long long int total = 0;
	long long int now = 0;
	long long int a[n][2];
	long long int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++){
		if(a[i][0]==0){
			total += a[i][1];
		}
		if(a[i][0]==1){//红灯 
			//转变成当前的灯
			//1.取余
			now = total%(r+y+g);//经过的时间 
			if(now<a[i][1]){
				now = a[i][1]-now;//显示红灯 
			}else if(now>=a[i][1]&&now<a[i][1]+g){
				now = 0;//显示绿灯，不用等 
			}else if(now>=a[i][1]+g&&now<a[i][1]+g+y){
				now = y - (now - a[i][1] - g) + r; //显示黄灯，等黄灯和红灯 
			}else if(now>=a[i][1]+g+y&&now<a[i][1]+g+y+r){
				now = r-(now-a[i][1]-g-y);//显示红灯 
			}
			total += now;//加上等待 
		}else if(a[i][0]==2){
			now = total%(r+y+g);
			if(now<a[i][1]){
				now = a[i][1]-now + r;// 显示黄灯 
			}else if(now>=a[i][1]&&now<a[i][1]+r){
				now = r-(now-a[i][1]);//显示红灯 
			}else if(now>=a[i][1]+r&&now<a[i][1]+r+g){
				now = 0;//显示绿灯 
			}else if(now>=a[i][1]+r+g&&now<a[i][1]+r+g+y){
				now = y-(now-a[i][1]-r-g) + r;//显示黄灯 
			}
			total += now;//加上等待 
		}else if(a[i][0]==3){
			now = total%(r+y+g);
			if(now<a[i][1]){
				now = 0;// 显示绿灯 
			}else if(now>=a[i][1]&&now<a[i][1]+y){
				now = y-(now-a[i][1])+r;//显示黄灯 
			}else if(now>=a[i][1]+y&&now<a[i][1]+y+r){
				now = r-(now-a[i][1]-y);//显示红灯 
			}else if(now>=a[i][1]+y+r&&now<a[i][1]+y+r+g){
				now = 0;//显示绿灯 
			}
			total += now;//加上等待 
		}
	}
	cout<<total; 
	return 0;
}
