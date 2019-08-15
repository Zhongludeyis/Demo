#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,i,p,q;
	n = 0;
	while((cin>>m)&&m!=0){
		n++;
		string a[m];
		
		string temp;
		for(i=0;i<m;i++){
			cin>>a[i];
		}
		string b[m];
		int count = 0;
//		for(i=0;i<m;i++){
//			for(j=i;j<m;j++){
//				//按字符串的大小从小到大排序
//				if(a[i].size()>a[j].size()){
//					temp = a[i];
//					a[j] = a[i];
//					a[i] = temp;
//				}	
//			}
//		}
		i = 0;
		p = 0;
		q = m-1;
		while(count<m){
			b[p++] = a[i++];
			count++;
			if(count==m){
				break;
			} 
			b[q--] = a[i++];
			count++;
		}
		cout<<"set-"<<n<<endl; 
		for(i=0;i<m;i++){
			cout<<b[i]<<endl;
		}
	}
	return 0;
}
