#include <cstdlib>
#include<stdio.h>
#include<cstring>
using namespace std;

char str[100000+100];

int main() {
	int N;
	int prod = 1;
	while (scanf("%d",&N))
	{
		getchar();
		gets(str);
		int a;
		int b;
		for (int i = 0; i < N; i++)
		{
			prod = 1;
			scanf("%d %d", &a,&b);
			for (int j = a - 1; j <= b - 1; j++)
			{  
				prod = (prod*(str[j] - 28))%9973;
			}
			printf("%d\n", prod);
		}
	}
	return 0;
}