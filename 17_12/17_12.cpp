	#include <iostream>
	#include <set>
	using namespace std;
	void IsElem(set<char> s,char,char);
	void NotElem(set<char>,char,char);
	void main ()
	{
		set<char> myset;
		set<char>::iterator it;
		int i;
		//��ʼ������:A C E G I
		for (i=0; i<10; i+=2) 
			myset.insert(i+'A'); 
		cout<<"�����е�Ԫ��:";
		for(it=myset.begin();it!=myset.end();it++)
			cout<<" "<<*it;
		cout<<endl;
		cout << "���ڼ����е�Ԫ��:";
		IsElem(myset,'A','H');
		cout << "�����ڼ����е�Ԫ��:";
		NotElem(myset,'A','H');	
	}
	void IsElem(set<char> s,char start,char end)
	//������ڼ����е�Ԫ��
	{
		char ch;
		for(ch=start;ch<=end;ch++)
			if(s.count(ch)>0)
				cout<<" "<<ch;
		cout<<endl;
	}
	void NotElem(set<char> s,char start,char end)
	//��������ڼ����е�Ԫ��
	{
		char ch;
		for(ch=start;ch<=end;ch++)
			if(s.count(ch)==0)
				cout<<" "<<ch;
		cout<<endl;
	}
