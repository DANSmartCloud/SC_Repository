#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cout<<"DAN答题系统V1.1.1";
	cout<<"下面开始答题每题答案直接输入在题后，然后回车提交。" ;
	cout<<"第一题，找规律；121，144，169，（  ），225.";
	cin>>a;
	if(a==196)
	{
		cout<<"正确！";
	}
	else
	{
		cout<<"错误！";
	}
	int b;
	cout<<"第二题，计算；11111*11111=()";
	cin>>b;
	if(b==123454321 )
	{
		cout<<"正确！";
	}
	else
	{
		cout<<"错误！";
	}
	int c;
	cout<<"第三题，计算：11*15=()";
	cin>>c;
	if(c==165)
	{
		cout<<"正确！";
	}
	else
	{
		cout<<"错误！";
	}
	cout<<"答题完成，输入任意字符并回车以关闭窗口。";
	int stop;
	cin>>stop;
	return 0;
}
