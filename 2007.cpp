#include<cstdio>

int i,n,m,a,b,t;
int main(int argc, char const *argv[])
{
	while(scanf("%d %d", &n, &m) != EOF){

		if(n>m){
			t = n;
			n = m;
			m = t;
		}
		a = 0;
		b = 0;
		for(i=n;i<=m;++i){
			if(i%2) b += i*i*i;
			else a += i*i;
		}
		printf("%d %d\n", a, b);
	}
	return 0;
}