#include<bits/stdc++.h>
using namespace std;
int atoi(string s)  
{  
    int i;  
    int n = 0;  
    for (i = 1; s[i] >= '0' && s[i] <= '9'; ++i)  
    {  
        n = 10 * n + (s[i] - '0');  
    }  
    return n;  
} 
int main(){
	long long int N,A,B,C;
	unsigned int i; 
	while(scanf("%lld%lld%lld%lld",&N,&A,&B,&C)!=EOF){
		string s[N];
		for(i=0;i<N;i++){
			cin>>s[i];
		}
		//���L��Y��λ�ã�
		int location1 = 0,location2 = 0; 
		//��ʼ��
		while(1){//ֱ������ѭ��
			//L����:
			C = (A*C+B)%6+1;
			//�����ж��Ƿ񳬹�N-1�򵽴�N-1��
			if((location1+C)==N-1){//LeleӮ 
				cout<<"Lele"<<endl;
				break;
			}else if((location1+C)>N-1){//�����յ㷵�� 
				location1 = N-1-(location1+C-(N-1));
				while(s[location1]!="N"){//������ 
					location1 = atoi(s[location1]);//ȡG�����λ��,��ת��Ϊ���� 	
				}
			}else if((location1+C)<N-1){//δ�����յ� 
				location1 +=C;
				while(s[location1]!="N"){
					//������
					location1 = atoi(s[location1]);//ȡG�����λ��,��ת��Ϊ����
				}
			}
			//Y����:
			C = (A*C+B)%6+1;
			if((location2+C)==N-1){//LeleӮ 
				cout<<"Yueyue"<<endl;
				break;
			}else if((location2+C)>N-1){//�����յ㷵�� 
				location2 = N-1-(location2+C-(N-1));
				while(s[location2]!="N"){//������ 
					location2 = atoi(s[location2]);//ȡG�����λ��,��ת��Ϊ���� 	 
				}
			}else if((location2+C)<N-1){//δ�����յ� 
				location2 +=C;
				while(s[location2]!="N"){
					//������
					location2 = atoi(s[location2]);//ȡG�����λ��,��ת��Ϊ����
				}
				
			}
		}
	}
	return 0;
}
//˼·���ж�GX�����ַ���ת��Ϊ���͵�����atoi()������ס������; 
//while(....!=EOF)��ʹ��;
