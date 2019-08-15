#include<bits/stdc++.h>
using namespace std;
//结构体数组存
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
		//开始逐一判断：
		for(i=0;i<M;i++){
			string get[N];//最多找到n组 
			n = 0;
			for(j=0;j<N;j++){
				idx = a[j].find(find_path[i]);
				if(idx = string::npos){//
					continue;
				}else{//找到 
					get[n] = a[j].substr(0);
					n++;
				}
			}
			for(i=0;i<n;i++){
				cout<<get[i];//输出结果 ,此处还要排序 
			}
			cout<<"***"<<endl;
		}
		cout<<"---"<<endl;
	}
	return 0;
	
}
 
