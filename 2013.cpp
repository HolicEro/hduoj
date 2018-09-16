#include<cstdio>

int i,n,sum;

int main(int argc, char const *argv[])
{
	while(scanf("%d", &n) != EOF){
		i = 1;
		sum = 1;
		while(i<n){
			sum = sum*2 + 2;
			i++;
		}
		printf("%d\n", sum);
	}
	return 0;
}