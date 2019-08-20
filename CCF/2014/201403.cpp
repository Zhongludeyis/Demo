#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,M;
	cin>>N>>M;
	int a[N][5];
	//int b[M][2];
	int x,y,tag;
	for(int i=0;i<N;i++){
		for(int j=0;j<4;j++){
			cin>>a[i][j];
		}
		a[i][4] = i+1;
	}
	for(int i=0;i<M;i++){
//		for(int j=0;j<2;j++){
//			cin>>b[i][j];
//		}
		cin>>x>>y;
		//从顶到底遍历 
		int flag = 0; 
		
		for(int j=N-1;j>=0;j--){
			if(x>=a[j][0]&&x<=a[j][2]&&y>=a[j][1]&&y<=a[j][3]){
				//找到窗口
				flag = 1;
				tag = j;
				cout<<a[j][4]<<endl; 
				break;
			}
		}
		if(flag==0){
			cout<<"IGNORED"<<endl; 
		}else{//第flag个窗口 
			//从diflag个开始往前移
			int c[5];
			for(int j=0;j<5;j++){
				c[j] = a[tag][j];
			}
			for(int j=tag;j<N-1;j++){
				for(int k=0;k<5;k++){
					a[j][k] = a[j+1][k];
				}
			}
			for(int j=0;j<5;j++){
				a[N-1][j] = c[j];
			}
		}
	}
	
	return 0;
}

