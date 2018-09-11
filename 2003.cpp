#include<cstdio>
#include<cmath>

double i;

int main(int argc, char const *argv[])
{
	while(scanf("%lf", &i) != EOF){
		if(i < 0) i = -i;
		printf("%.2lf\n", i);
	}
	return 0;
}