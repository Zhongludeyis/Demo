#include<bits/stdc++.h>
using namespace std;
int main(){
	int M,i; 
	while(cin>>M){
		if(M==0){
			break;
		}
		int K;
		cin>>K;
		int a[K];
		for(i=0;i<K;i++){
			cin>>a[i];
		}
		sort(a,a+K); 
		int num = 0;
		for(i=K-1;i>=0;i--){
			num += M/a[i]; 
			M = M%a[i];
		}
		if(M!=0){
			cout<<"Impossible"<<endl;
		}else if(M==0){
			cout<<num<<endl; 
		}
	}
	return 0;
}
//˼·��
//1.�Ӵ�С���γ�����ֵ���� 
//2.ÿ�ֱһ��󿴻�ʣ����٣�����������  
