#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,i,a,b,c;
	int first,second; 
	map<int,int>mp;
	map<int,int>::iterator it;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>a>>b;
		if(mp.empty()){
			mp.insert(pair<int,int>(a,b));
			continue;
		}
		//�ҵ�Ԫ�� 
		if(mp.find(a)!=mp.end()){
			c = mp[a]+ b;
			mp[a] = c;			
		}else{//û�ҵ�ֱ�Ӳ��� 
			mp.insert(pair<int,int>(a,b)); 
		}
	}
	//�ҵ���ֵ����Ԫ�أ�	
	it = mp.begin();
	first = it->first;
	second = it->second;
	for(it=mp.begin();it!=mp.end();it++){
		if(second<it->second){
				first = it->first;
				second = it->second;
		}
	}
	cout<<first<<" "<<second<<endl;
	return 0; 
}
