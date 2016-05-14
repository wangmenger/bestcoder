#include<iostream>
#include<string>
using namespace std;

string add(string s1,string s2)
{
	// s2 is larger than s1
	string result = "";
	int size1 = s1.size();
	int size2 = s2.size();
	int carry = 0;
	for(int i = s1.size()-1;i>=0;i--)
	{
		int addition = (s1[i]-'0')+(s2[i]-'0')+carry;
		result = to_string(addition%10)+result;
		carry = addition/10;
	}
	if (size2>size1)
	{
		if (carry>0)
		{
			result = to_string(s2[0]-'0'+carry)+result;
		}
		else
			result = s2[0]+result;
	}
	else
	{
		if (carry>0) result = to_string(carry)+result;
	}
	return result;
}


int main()
{
	int N;
	string a[201];
	a[0] = "0";
	a[1] = "1";
	a[2] = "2";
	for(int i = 3;i<201;i++)
	{
		a[i] = add(a[i-1],a[i-2]);
	}
	while(cin>>N)
	{
		cout<<a[N]<<endl;
	}
	return 0;
}