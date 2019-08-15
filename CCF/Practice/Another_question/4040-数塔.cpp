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
			path[i][j] = 0;//记录 
		}
	}
	//自底向上，递归
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
	//输出最终结果： 
	cout<<dp[0][0]<<endl;
	//遍历输出路径：
	j = 0;
	cout<<a[0][0]<<" ";//输出第一个 
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
//思路：
//1.初始化数组定义：a[n][n]、path[n][n]、dp[n][n];
//2.从最后一行递归回第一行，加到dp[n][n]; 
//3. 输出dp[0][0](最大的);
//4.从上至下遍历,找加起来能得到上一层最大dp[][]的a[][]. 
