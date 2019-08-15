#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned int n,m,count,tag;
	unsigned int i,j,k;
	cin>>n>>m;
	string a[m];
	string temp;
	int b[m];
	for(i=0;i<m;i++){
		cin>>a[i];
		count = 0;
		for(j=0;j<a[i].size();j++){
			tag = a[i][j]-'A';
			for(k=j+1;k<a[i].size();k++){
				if(tag>a[i][k]-'A'){
					count++;
				} 
			}
		}
		b[i] = count; 
	}
	//≈≈–Ú£∫
	for(i=0;i<m;i++){
		for(j=i+1;j<m;j++){
			if(b[i]>b[j]){
				tag = b[i];
				b[i] = b[j];
				b[j] = tag;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	} 
	for(i=0;i<m;i++){
		cout<<a[i]<<endl;
	}
	return 0;
	 
}
