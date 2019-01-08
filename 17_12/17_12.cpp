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
		//初始化集合:A C E G I
		for (i=0; i<10; i+=2) 
			myset.insert(i+'A'); 
		cout<<"集合中的元素:";
		for(it=myset.begin();it!=myset.end();it++)
			cout<<" "<<*it;
		cout<<endl;
		cout << "属于集合中的元素:";
		IsElem(myset,'A','H');
		cout << "不属于集合中的元素:";
		NotElem(myset,'A','H');	
	}
	void IsElem(set<char> s,char start,char end)
	//输出属于集合中的元素
	{
		char ch;
		for(ch=start;ch<=end;ch++)
			if(s.count(ch)>0)
				cout<<" "<<ch;
		cout<<endl;
	}
	void NotElem(set<char> s,char start,char end)
	//输出不属于集合中的元素
	{
		char ch;
		for(ch=start;ch<=end;ch++)
			if(s.count(ch)==0)
				cout<<" "<<ch;
		cout<<endl;
	}
