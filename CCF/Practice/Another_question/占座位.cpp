#include<bits/stdc++.h>
using namespace std;
struct S{
	int id;
	int num;
	int get[20];
	bool f = true;
};
int main(){
	int n,m,k;
	cin>>n>>m;
	string order;
	int id,num,count; 
	int seat[n*n];
	char flag[n*n];
	
	for(int i=0;i<n*n;i++){
		seat[i] = 0;
		flag[i] = 'T';
	}
	cin>>k;
	S s[k];
	for(int i=0;i<k;i++){
		cin>>order;
		if(order=="in"){
			cin>>id>>num;
			if(flag[id-1]=='T'){//未占用，可插入
				
			}
		}
	}
	return 0;
} 
// 
//int main(){
//	int n,m,k;
//	cin>>n>>m;
//	string order;
//	int id,num,count; 
//	int seat[n*n];
//	char flag[n*n];
//	
//	for(int i=0;i<n*n;i++){
//		seat[i] = 0;
//		flag[i] = 'T';
//	}
//	cin>>k;
//	for(int i=0;i<k;i++){
//		cin>>order;
//		int get[20];
//		if(order=="in"){//占座 
//			//num个座位：
//			cin>>id>>num;
//			if(flag[id-1]=='F'){//之前已占未释放 
//				cout<<"no"<<endl;
//				break; 
//			}
//			count = 0;
//			for(int p=0;p<n;p++){
//				if(seat[p]==0){
//					get[count] = p;
//					seat[p] = 1;
//					count++;
//				}
//				if(count==num){ //有连续的位置 
//					flag[id-1] = 'F'; //占用 
//					cout<<"yes"<<endl;
//				}else{
//					cout<<"no"<<endl;
//				}
//			}
//		}else if(order=="out"){
//			cin>>id;
//			if(flag[id-1]=='T'){//无被占用，释放 
//				break; 
//			}
//			
//			for(j=0;j<n;j++){
//				
//			}
//		} 
//		
//	} 
//}


