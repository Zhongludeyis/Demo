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
		//找到元素 
		if(mp.find(a)!=mp.end()){
			c = mp[a]+ b;
			mp[a] = c;			
		}else{//没找到直接插入 
			mp.insert(pair<int,int>(a,b)); 
		}
	}
	//找到键值最大的元素：	
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
