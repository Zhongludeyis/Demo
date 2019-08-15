#include<bits/stdc++.h>
using namespace std;
int  main(){
	string rest;
	int i,j;
	unsigned int n;
	cin>>rest;
	string against;
	while(cin>>against){
		n = against.size();
		cout<<n<<endl;
		if(n==1){
			for(i=0;i<rest.size();i++){
				if(rest[i]>against[0]){
					cout<<rest[i]<<" ";
				}
			}
			cout<<endl;
		}else if(n==2){
			
		}
	}
	return 0;
}


//思路：
//字符转数字 
