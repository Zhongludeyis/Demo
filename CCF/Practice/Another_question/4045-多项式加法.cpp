#include<bits/stdc++.h> 
using namespace std;
int main(){
	map<int,int>mp;
	map<int,int>::reverse_iterator rit;
	int a,b;
	int c;
	c = 0; 
	while(cin>>a>>b){
		if(a==0&&b==0){
			break;
		}
		if(mp.empty()){//Ϊ�ղ��� 
			mp.insert(pair<int,int>(a,b));
			continue;
		}
		//���ж���û����mp��
		if(mp.find(a)!=mp.end()){
			c = mp[a] + b;
			mp[a] = c; 
			
		}else{
			mp.insert(pair<int,int>(a,b));
		}
	}
	while(cin>>a>>b){
		if(a==0&&b==0){
			break;
		}
		if(mp.empty()){//Ϊ�ղ��� 
			mp.insert(pair<int,int>(a,b));
			continue;
		}
		//���ж���û����mp��
		if(mp.find(a)!=mp.end()){
			c = mp[a] + b;
			mp[a] = c; 
		}else{
			mp.insert(pair<int,int>(a,b));
		}
	}
	for(rit=mp.rbegin();rit!=mp.rend();rit++){
		cout<<rit->first<<" "<<rit->second<<endl;
	}
	return 0; 
}

//��Ϊǰ��������� 
// #include<bits/stdc++.h> 
//using namespace std;
//int main(){
//	map<int,int>mp;
//	map<int,int>::iterator it;
//	int a,b;
//	int c,i;
//	c = 0; 
//	while(cin>>a>>b){
//		if(a==0&&b==0){
//			break;
//		}
//		if(mp.empty()){//Ϊ�ղ��� 
//			mp.insert(pair<int,int>(a,b));
//			continue;
//		}
//		//���ж���û����mp��
//		if(mp.find(a)!=mp.end()){
//			c = mp[a] + b;
//			mp[a] = c; 
//			
//		}else{
//			mp.insert(pair<int,int>(a,b));
//		}
//	}
//	c = 0; 
//	while(cin>>a>>b){
//		if(a==0&&b==0){
//			break;
//		}
//		if(mp.empty()){//Ϊ�ղ��� 
//			mp.insert(pair<int,int>(a,b));
//			continue;
//		}
//		//���ж���û����mp��
//		if(mp.find(a)!=mp.end()){
//			c = mp[a] + b;
//			mp[a] = c; 
//		}else{
//			mp.insert(pair<int,int>(a,b));
//		}
//	} 
//	for(it=mp.end();it!=mp.begin();it--){
//		cout<<it->first<<" "<<it->second<<endl;
//	}
//	return 0; 
//}
