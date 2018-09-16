#include <cstdio>

int n, m, i;

int main(int argc, char const *argv[])
{
	while(scanf("%d %d", &n, &m) != EOF){
		int i = 1;
		while(i+m <= n){
			printf("%d ", 2*i + m - 1);
			i += m;
		}
		printf("%d\n", i + n);
	}
	return 0;
}