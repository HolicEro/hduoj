#include <cstdio>

int n, i,t, min,max,sum;
double avg;

int main(int argc, char const *argv[])
{
	while(scanf("%d", &n) != EOF){
		sum = 0;
		max = 0, min = 100;
		i = n;
		while(i-- > 0){
			scanf("%d", &t);
			sum += t;
			if (t > max) max = t;
			if (t < min) min = t;
		}
		avg = 1.0 * (sum - max - min)/(n-2);
		printf("%.2lf\n", avg);

	}
	return 0;
}