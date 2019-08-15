#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	int i,j,n;
	cin>>N;
	int m = 0;
	int a[N][N];
	for(n=0;n<N;n++){
		//N´ÎÑ­»·
		for(j=0;j<=n;j++){
			a[n-j][j] = ++m;
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N-i;j++){
			cout<<a[i][j];
			if(j!=N-i-1){
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
