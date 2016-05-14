#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;


int main()
{
	int N;
	cin>>N;
	string s= "";
	map<string,int> mp;
	for(int i = 0;i<N;i++)
	{
		cin>>s;
		//sort(s.begin(),s.end());
		string ss = "00000000000000000000000000";
		for(int i = 0;i<s.size();i++)
			ss[s[i]-'A']++;
		if (mp.find(ss)!=mp.end())
		{
			mp[ss]++;
		}
		else
		{
			mp[ss] = 0;
		}
		cout<<mp[ss]<<endl;
	}
	return 0;
}