#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int seat[20][5];
	int judge[20][5];
	for(int i=0;i<20;i++){
		for(int j=0;j<5;j++){
			seat[i][j] = i*5+j+1;
			judge[i][j] = 0;
		}
	}
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int p,q;
	for(int i=0;i<n;i++){
		int flag = 0;
		if(a[i]==1){//不用考虑分配不到连续 
			for(p=0;p<20;p++){
				for(q=0;q<5;q++){
					if(judge[p][q]==0){
						flag = 1;
						judge[p][q] = 1;
						//输出位置：
						cout<<seat[p][q]<<endl;
						break;
					}
				}
				if(flag==1){
					break;
				}
			}
			
		}else if(a[i]==2){
			int num[2];
			int tag = 0;
			for(p=0;p<20;p++){
				for(q=0;q<4;q++){
					if(judge[p][q]==0&&judge[p][q+1]==0){
						judge[p][q] = 1;
						judge[p][q+1] = 1;
						flag = 1;
						break; 
					}
				}
				if(flag==1){
					break;
				}
			}
			if(flag==0){//重新分配
				int count = 0;
				for(int x=0;x<20;x++){
					for(int y=0;y<5;y++){
						if(judge[x][y]==0){
							num[count] = seat[x][y];
							count++;
							judge[x][y] = 1;
							if(count==a[i]){
								break;
							}
						}
					}
					if(count==a[i]){
						break;
					}
				}
				for(int x=0;x<2;x++){
					cout<<num[x]<<" ";
				}
				cout<<endl;
			}else{//有连续 
				cout<<seat[p][q]<<" "<<seat[p][q+1]<<endl; 
			}
		}else if(a[i]==3){
			int num[3];
			int tag = 0;
			for(p=0;p<20;p++){
				for(q=0;q<3;q++){
					if(judge[p][q]==0&&judge[p][q+1]==0&&judge[p][q+2]==0){
						judge[p][q] = 1;
						judge[p][q+1] = 1;
						judge[p][q+2] = 1;
						flag = 1;
						break; 
					}
				}
				if(flag==1){
					break;
				}
			}
			if(flag==0){//重新分配
				int count = 0;
				for(int x=0;x<20;x++){
					for(int y=0;y<5;y++){
						if(judge[x][y]==0){
							num[count] = seat[x][y];
							count++;
							judge[x][y] = 1;
							if(count==a[i]){
								break;
							}
						}
					}
					if(count==a[i]){
						break;
					}
				}
				for(int x=0;x<3;x++){
					cout<<num[x]<<" ";
				}
				cout<<endl;
			}else{//有连续 
				cout<<seat[p][q]<<" "<<seat[p][q+1]<<" "<<seat[p][q+2]<<endl; 
			}
		}else if(a[i]==4){
			int num[4];
			int tag = 0;
			for(p=0;p<20;p++){
				for(q=0;q<2;q++){
					if(judge[p][q]==0&&judge[p][q+1]==0&&judge[p][q+2]==0&&judge[p][q+3]==0){
						judge[p][q] = 1;
						judge[p][q+1] = 1;
						judge[p][q+2] = 1;
						judge[p][q+3] = 1;
						flag = 1;
						break; 
					}
				}
				if(flag==1){
					break;
				}
			}
			if(flag==0){//重新分配
				int count = 0;
				for(int x=0;x<20;x++){
					for(int y=0;y<5;y++){
						if(judge[x][y]==0){
							num[count] = seat[x][y];
							count++;
							judge[x][y] = 1;
							if(count==a[i]){
								break;
							}
						}
					}
					if(count==a[i]){
						break;
					}
				}
				for(int x=0;x<4;x++){
					cout<<num[x]<<" ";
				}
				cout<<endl;
			}else{//有连续 
				cout<<seat[p][q]<<" "<<seat[p][q+1]<<" "<<seat[p][q+2]<<" "<<seat[p][q+3]<<endl; 
			}
		}else if(a[i]==5){
			int num[5];
			int tag = 0;
			for(p=0;p<20;p++){
				for(q=0;q<1;q++){
					if(judge[p][q]==0&&judge[p][q+1]==0&&judge[p][q+2]==0&&judge[p][q+3]==0&&judge[p][q+4]==0){
						judge[p][q] = 1;
						judge[p][q+1] = 1;
						judge[p][q+2] = 1;
						judge[p][q+3] = 1;
						judge[p][q+4] = 1;
						flag = 1;
						break; 
					}
				}
				if(flag==1){
					break;
				}
			}
			if(flag==0){//重新分配 
				int count = 0;
				for(int x=0;x<20;x++){
					for(int y=0;y<5;y++){
						if(judge[x][y]==0){
							num[count] = seat[x][y];
							count++;
							judge[x][y] = 1;
							if(count==a[i]){
								break;
							}
						}
					}
					if(count==a[i]){
						break;
					}
				}
				for(int x=0;x<5;x++){
					cout<<num[x]<<" ";
				}
				cout<<endl;
			}else{//有连续 
				cout<<seat[p][q]<<" "<<seat[p][q+1]<<" "<<seat[p][q+2]<<" "<<seat[p][q+3]<<" "<<seat[p][q+4]<<endl; 
			}
		}		
	}
	return 0;
}
