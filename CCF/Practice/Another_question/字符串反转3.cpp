#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j;
	int N;
	cin>>N;
	cin.ignore();
	string s[N];
	for(i=0;i<N;i++){
		getline(cin,s[i]);
		int pos[1000];
		int k = 1;
		for(j=0;j<s[i].size();j++){
			if(s[i][j]==' '){
				pos[k] = j;
				k++;
			}
		}
		pos[0] = -1;
		string n[k];
		//得到k个字符串 
		for(j=0;j<k;j++){
			n[j] = s[i].substr(pos[j]+1,pos[j+1]-pos[j]-1);
		}
		//每个字符串反转
		int l;
		for(j=0;j<k;j++){
			for(l= n[j].size()-1;l>=0;l--){
				cout<<n[j][l];
			}
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
