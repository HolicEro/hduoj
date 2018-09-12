#include<cstdio>
#include<cmath>

double n, m, sum;

int main(int argc, char const *argv[])
{
	while(scanf("%lf %lf", &n, &m) != EOF){
		sum = 0;
		while(m--){
			sum += n;
			n = sqrt(n);
		}
		printf("%.2f\n", sum);
	}
	return 0;
}