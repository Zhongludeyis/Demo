#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	//�����ַ���(���пո�) 
	getline(cin,a);
	int i,num;
	int b[10];
	//��ʼ�����֣����������ִ����ļ�¼ 
	for(i=0;i<10;i++){
		b[i] = 0;
	}
	//�ж�ÿ���ַ� 
	for(i=0;i<a.size();i++){
		//ת��������num 
		num = a[i]-'0';
		//�ж� 
		if(num==0){
			cout<<"(Zero)";
			b[num] +=1;
		}else if(num==1){
			cout<<"(One)";
			b[num] +=1;		
		}else if(num==2){
			cout<<"(Two)";
			b[num] +=1;
		}else if(num==3){
			cout<<"(Three)";
			b[num] +=1;
		}else if(num==4){
			cout<<"(Four)";
			b[num] +=1;
		}else if(num==5){
			cout<<"(Five)";
			b[num] +=1;
		}else if(num==6){
			cout<<"(Six)";
			b[num] +=1;
		}else if(num==7){
			cout<<"(Seven)";
			b[num] +=1;
		}else if(num==8){
			cout<<"(Eight)";
			b[num] +=1;
		}else if(num==9){
			cout<<"(Nine)";
			b[num] +=1;
		}else{
			cout<<a[i];
		}
	}
	cout<<endl;
	for(i=0;i<10;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}

//˼·��
//���ո���ַ������뷽�����ؼ� 
//getline(cin,a) ���� cin.get(a,����) cin.getline(a,����)  
//cin��string����" "��"\n"�ͷ���
//1.�����ַ���
//2. ��ʼ�����֣����������ִ����ļ�¼ 
//3.�ж�ÿ���ַ� 
