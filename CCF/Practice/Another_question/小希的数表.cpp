#include<bits/stdc++.h>
using namespace std;
int main(){
	int	n,i,j;
	while((cin>>n)){
		if(n==0){
			break;
		}
		int M = n*(n-1)/2;
		int num[n];
		int sum[M];
		bool mark[M]; 
		for(i=0;i!=M;i++){
			cin>>sum[i];
		}
		for(i=2;i<M;i++){
			for(j=0;j!=M;i++){
				mark[i] = false;
			}
			num[1] = (sum[0]-sum[1]+sum[i])/2;
			num[0] = sum[0] - num[1];
			num[2] = sum[1] - num[0];
			if((num[1]+num[2])!=sum[i]){
				continue;
			}
			
			mark[0] = true;
			mark[1] = true;
			mark[i] = true;
			bool flag = true;
			//num1,2,3确定：
			for(j=3;j<n&&flag;j++){
				int k=0;
				while(mark[k])    //找到第一个没被标记的数，减去num[0]即为num[j]
					k++;
				num[j] = sum[k]-num[0];
				mark[k]=true;
				for(int l=1;l<j&&flag; l++) 
				{
					flag=false;
					for(int m=k+1; m<M; m++)
						if(!mark[m]&&num[l]+num[j]==sum[m]) 
						{
							flag=true;
							mark[m] = true;    //每确定一个num，将其与前面的num相加，并将结果在mark中标记，如果没有找到对应的sum，则说明不符合情况故break
							break;
						}
				}	
			}
			if(flag) break;
		} 
		cout<<1<<endl;
		for(int i=0;i<n;i++) 
		{
			cout<<num[i];
			if(i!=n-1)                  
				cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}

//#include<iostream>
//using namespace std;
//int main()  {
//	int N;
//	while(cin>>N)      
//	{
//		if(N==0)              
//			break;
//		int M=N*(N-1)/2;
//		int sum[M];
//		int num[N];
//		bool mark[M];
//		for(int i=0; i!=M; i++)
//			cin>>sum[i];
//		for(int i=2; i<M; i++) 
//		{
//			for(int j=0; j!=M; j++)
//				mark[j]=false;
//			num[1]=(sum[0]-sum[1]+sum[i])/2; //三个不等式联立解得
//			num[0]=sum[0]-num[1];
//			num[2]=sum[1]-num[0];
//			if(num[1]+num[2]!=sum[i])
//				continue;
//			mark[0]=true;
//			mark[1]=true;
//			mark[i]=true; //将被加过的结果标记为true，此时num[0]num[1]num[2]已经确定
//			bool flag=true;
//			for(int j=3; j<N&&flag; j++) 
//			{
//				int k=0;
//				while(mark[k])    //找到第一个没被标记的数，减去num[0]即为num[j]
//					k++;
//				num[j]=sum[k]-num[0];
//				mark[k]=true;
//				for(int l=1; l<j&&flag; l++) 
//				{
//					flag=false;
//					for(int m=k+1; m<M; m++)
//						if(!mark[m]&&num[l]+num[j]==sum[m]) 
//						{
//							flag=true;
//							mark[m] = true;    //每确定一个num，将其与前面的num相加，并将结果在mark中标记，如果没有找到对应的sum，则说明不符合情况故break
//							break;
//						}
//				}
//			}
//			if(flag) break;
//		}
//		for(int i=0; i<N; i++) 
//		{
//			cout<<num[i];
//			if(i!=N-1)                  
//				cout<<' ';
//		}
//		cout<<endl;
//	}
//	return 0;
//}
