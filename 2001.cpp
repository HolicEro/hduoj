#include<cstdio>
#include<cmath>

int main()
{
	double x1, y1, x2, y2;
	double x,y;
	while(scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != EOF){
		x = abs(x1-x2);
		y = abs(y1-y2);
		printf("%.2lf\n", sqrt(x*x+y*y));
	}
	return 0;
}