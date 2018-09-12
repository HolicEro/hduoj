#include<cstdio>
#include<string>

int i, n, ret;

int main(int argc, char const *argv[])
{
	while(scanf("%d", &n) != EOF){
		ret = 1;
		while(n--){
			scanf("%d", &i);
			if(i%2) ret *= i;
		}
		printf("%d\n", ret);
	}
	return 0;
}