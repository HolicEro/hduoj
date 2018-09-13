#include<cstdio>

int i,n,m;
double sum, di;

int main(int argc, char const *argv[])
{
	/* code */
	scanf("%d", &m);
	while(m>0){
		scanf("%d", &n);
		i = 1;
		sum = 0;
		while(i<=n){
			di = double(i);
			if(i%2) sum += 1/di;
			else sum -= 1/di;
			i++;
			
		}
		printf("%.2lf\n", sum);
		m--;
	}
	return 0;
}