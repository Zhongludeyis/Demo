#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cin>>n;
	int a[n][n],path[n][n],dp[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){	
			cin>>a[i][j];
			dp[i][j] = a[i][j];
			path[i][j] = 0;//��¼ 
		}
	}
	//�Ե����ϣ��ݹ�
	for(i=n-1;i>=0;i--){
		for(j=0;j<i;j++){
			if(dp[i][j]>dp[i][j+1]){
				dp[i-1][j] +=dp[i][j];
				path[i][j] = 1;
			}else{
				dp[i-1][j] +=dp[i][j+1];
				path[i][j+1] = 1;
			}
		}
	}
	//������ս���� 
	cout<<dp[0][0]<<endl;
	//�������·����
	j = 0;
	cout<<a[0][0]<<" ";//�����һ�� 
	for(i=1;i<n;i++){
		if(dp[i-1][j]==(dp[i][j]+a[i-1][j])){
			cout<<a[i][j]<<" ";
		}else{
			j++;
			cout<<a[i][j]<<" "; 
		} 
	}
	return 0;
}
//˼·��
//1.��ʼ�����鶨�壺a[n][n]��path[n][n]��dp[n][n];
//2.�����һ�еݹ�ص�һ�У��ӵ�dp[n][n]; 
//3. ���dp[0][0](����);
//4.�������±���,�Ҽ������ܵõ���һ�����dp[][]��a[][]. 
