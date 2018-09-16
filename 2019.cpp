#include <cstdio>
#include <algorithm>

int i,n, m, t;
int a[100];

int main(int argc, char const *argv[])
{
	while(scanf("%d %d\n", &n, &m) != EOF){
		if (n==0 && m==0) return 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &t);
			a[i] = t;
		
		}
		a[n] = m;
		std::sort(a, a+n+1);
		for(i=0;i<n+1;i++){
			if (i) printf(" %d", a[i]);
			else printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}