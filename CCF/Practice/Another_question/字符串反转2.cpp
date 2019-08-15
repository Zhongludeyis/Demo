#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int i;
	i=0;
	while(!cin.eof()){//!!!返回流结束位，按ctrl+z 
		string s;
		getline(cin,s);
		int pos[1000];
		int k=1;
		for(i=0;i<s.size();i++){
			if(s[i]==' '){
				pos[k] = i;
				k++;
			}
		}
		pos[0] = -1;
		string a[k];//k个单词！
		for(i=0;i<k;i++){
			a[i] = s.substr(pos[i]+1,pos[i+1]-pos[i]-1);
			
		}
		
		for(i=k-1;i>=0;i--){
			cout<<a[i]<<" ";
		}
		cout<<endl; 
	}
	return 0;
}
//思路：1.cin.eof() ;2.string.substr(起始位置，长度) 

