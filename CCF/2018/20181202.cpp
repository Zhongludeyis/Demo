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
		if(a[i][0]==1){//��� 
			//ת��ɵ�ǰ�ĵ�
			//1.ȡ��
			now = total%(r+y+g);//������ʱ�� 
			if(now<a[i][1]){
				now = a[i][1]-now;//��ʾ��� 
			}else if(now>=a[i][1]&&now<a[i][1]+g){
				now = 0;//��ʾ�̵ƣ����õ� 
			}else if(now>=a[i][1]+g&&now<a[i][1]+g+y){
				now = y - (now - a[i][1] - g) + r; //��ʾ�Ƶƣ��ȻƵƺͺ�� 
			}else if(now>=a[i][1]+g+y&&now<a[i][1]+g+y+r){
				now = r-(now-a[i][1]-g-y);//��ʾ��� 
			}
			total += now;//���ϵȴ� 
		}else if(a[i][0]==2){
			now = total%(r+y+g);
			if(now<a[i][1]){
				now = a[i][1]-now + r;// ��ʾ�Ƶ� 
			}else if(now>=a[i][1]&&now<a[i][1]+r){
				now = r-(now-a[i][1]);//��ʾ��� 
			}else if(now>=a[i][1]+r&&now<a[i][1]+r+g){
				now = 0;//��ʾ�̵� 
			}else if(now>=a[i][1]+r+g&&now<a[i][1]+r+g+y){
				now = y-(now-a[i][1]-r-g) + r;//��ʾ�Ƶ� 
			}
			total += now;//���ϵȴ� 
		}else if(a[i][0]==3){
			now = total%(r+y+g);
			if(now<a[i][1]){
				now = 0;// ��ʾ�̵� 
			}else if(now>=a[i][1]&&now<a[i][1]+y){
				now = y-(now-a[i][1])+r;//��ʾ�Ƶ� 
			}else if(now>=a[i][1]+y&&now<a[i][1]+y+r){
				now = r-(now-a[i][1]-y);//��ʾ��� 
			}else if(now>=a[i][1]+y+r&&now<a[i][1]+y+r+g){
				now = 0;//��ʾ�̵� 
			}
			total += now;//���ϵȴ� 
		}
	}
	cout<<total; 
	return 0;
}
