#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int b[50];
	unsigned int i,j,n;
	int min,tag;
	getline(cin,a);
	n = 0;
	for(i=0;i<a.size();i++){
		if(a[i]!=' '){
			b[n++] = a[i]-'0';
		}else{
			continue;
		}
	}
	//b[]��n��Ԫ��,����С��0Ԫ��
	min = 10;
	for(j=0;j<n;j++){
		if(b[j]!=0&&b[j]<min){
			min = b[j];
			b[j] = b[0];
			b[0] = min;
		}
	}
	//�ӵ�һ����ʼ����ð������
	for(i=1;i<n;i++){
		for(j=i+1;j<n;j++){
			if(b[i]>b[j]){
				tag = b[i];
				b[i] = b[j];
				b[j] = tag;
			}
		}
	} 
	for(i=0;i<n;i++){
		cout<<b[i];
	} 
	
	return 0;
}
