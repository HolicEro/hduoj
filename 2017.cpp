#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>

int n,i,j;

using namespace std;
string str;

int main(int argc, char const *argv[])
{
	/* code */
	scanf("%d\n", &n);
	while(n-- > 0){
		int count = 0;
		getline(cin, str);
		sort(str.begin(),str.end());
		for(i=0;;i++){
			if (str[i] >= '0' && str[i]<='9') count ++;
			else break;
		}
		printf("%d\n", count);
		
	}
	return 0;
}