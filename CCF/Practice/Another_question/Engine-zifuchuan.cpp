#include<bits/stdc++.h>
using namespace std;
//�ṹ�������
//struct{
//	int num;
//	 
//}
int main(){
	int N,M,i,n,j;
	string::size_type idx;
	while(cin>>N&&N!=0){
		cin.ignore();
		string a[N];
		int b[N];
		for(i=0;i<N;i++){
			getline(cin,a[i]);
			cin>>b[i];
			cin.ignore();
		}
			
		cin>>M;
		cin.ignore();
		string find_path[M];
		for(i=0;i<M;i++){
			getline(cin,find_path[i]);
		}
		//��ʼ��һ�жϣ�
		for(i=0;i<M;i++){
			string get[N];//����ҵ�n�� 
			n = 0;
			for(j=0;j<N;j++){
				idx = a[j].find(find_path[i]);
				if(idx = string::npos){//
					continue;
				}else{//�ҵ� 
					get[n] = a[j].substr(0);
					n++;
				}
			}
			for(i=0;i<n;i++){
				cout<<get[i];//������ ,�˴���Ҫ���� 
			}
			cout<<"***"<<endl;
		}
		cout<<"---"<<endl;
	}
	return 0;
	
}
 
