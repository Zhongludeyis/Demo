#include<bits/stdc++.h>
using namespace std;
//int compare(int x,int y){
//	
//}
string num[10] = {"123456","34","23567","23457","1347","12457","124567","234","1234567","123457"};
int compare(int x,int y){
	//�Ƚ�˭���ַ�����
	unsigned int i,n,j;
	unsigned int count = 0;
	n = 0;
	if(num[x].size()>num[y].size()){
		count = num[y].size();
		for(i=0;i<num[y].size();i++){
			for(j=0;j<num[x].size();j++){
				if(num[y][i]==num[x][j]){
					n++;
				}
			}
		}
	}else{
		count = num[x].size();
		for(i=0;i<num[x].size();i++){
			for(j=0;j<num[y].size();j++){
				if(num[x][i]==num[y][j]){
					n++;
				}
			}
		}
	}
//	cout<<n<<" "<<count<<endl;
	if(n==count){
		//���Ա�ʾ 
		return 1; 
	}else{
		//���ɱ�ʾ 
		return 0;
	}
}

int main(){
	//�ֱ��ʾ1-7; 

	int i,flag;
	int a[10];
	while(cin>>a[0]){
		if(a[0]==-1){
			break;
		}
		flag = 1;
		//ֻҪ�жϺ�һ���ɱ��ǰһ������
		for(i=1;i<10;i++){
			cin>>a[i];
		}
		for(i=1;i<10;i++){
			flag = compare(a[i-1],a[i]); 
			if(flag == 0){
				break;
			}
		}
		if(flag==1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

