#include<bits/stdc++.h>
using namespace std;
char change(char a);
int main(){
	string insert;
	char content[101][200];
	int i,j,count;
//	getline(cin,insert);
//	cout<<insert;
	count = 0;
	while(getline(cin,insert)){
		if(insert=="ENDOFINPUT"){
			break;
		}
		if(insert=="START"){
			getline(cin,insert);
			for(i=0;i<insert.size();i++){
				//变化函数
				content[count][i] = change(insert[i]);
			}
			count +=1;
		}
		if(insert=="END"){
			continue;
		}	
	}
	for(i=0;i<count;i++){
		cout<<content[i]<<endl;
	}
	return 0;
}
//二十六个字母的变换 
char change(char x){
	char a[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char b[26] = {'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U'};
	int i;
	for(i=0;i<26;i++){
		if(x==a[i]){
			x = b[i];
			return x; 
		}
	}
	return x;
//	if(a==' '||a==','){
//		return a;
//	}else if(a=='') 
//	if()
}
