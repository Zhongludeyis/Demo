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
			if(flag[id-1]=='T'){//δռ�ã��ɲ���
				
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
//		if(order=="in"){//ռ�� 
//			//num����λ��
//			cin>>id>>num;
//			if(flag[id-1]=='F'){//֮ǰ��ռδ�ͷ� 
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
//				if(count==num){ //��������λ�� 
//					flag[id-1] = 'F'; //ռ�� 
//					cout<<"yes"<<endl;
//				}else{
//					cout<<"no"<<endl;
//				}
//			}
//		}else if(order=="out"){
//			cin>>id;
//			if(flag[id-1]=='T'){//�ޱ�ռ�ã��ͷ� 
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


