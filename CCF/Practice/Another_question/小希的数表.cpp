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
			//num1,2,3ȷ����
			for(j=3;j<n&&flag;j++){
				int k=0;
				while(mark[k])    //�ҵ���һ��û����ǵ�������ȥnum[0]��Ϊnum[j]
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
							mark[m] = true;    //ÿȷ��һ��num��������ǰ���num��ӣ����������mark�б�ǣ����û���ҵ���Ӧ��sum����˵�������������break
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
//			num[1]=(sum[0]-sum[1]+sum[i])/2; //��������ʽ�������
//			num[0]=sum[0]-num[1];
//			num[2]=sum[1]-num[0];
//			if(num[1]+num[2]!=sum[i])
//				continue;
//			mark[0]=true;
//			mark[1]=true;
//			mark[i]=true; //�����ӹ��Ľ�����Ϊtrue����ʱnum[0]num[1]num[2]�Ѿ�ȷ��
//			bool flag=true;
//			for(int j=3; j<N&&flag; j++) 
//			{
//				int k=0;
//				while(mark[k])    //�ҵ���һ��û����ǵ�������ȥnum[0]��Ϊnum[j]
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
//							mark[m] = true;    //ÿȷ��һ��num��������ǰ���num��ӣ����������mark�б�ǣ����û���ҵ���Ӧ��sum����˵�������������break
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
