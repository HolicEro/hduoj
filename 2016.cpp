#include <cstdio>

int i,t,n,min,temp;


int main(int argc, char const *argv[])
{
	while(scanf("%d", &n) != EOF){
		if(n==0) return 0;
		int a[n];
		for (i=0; i<n; i++){
			scanf("%d", &t);
			a[i] = t;
		}
		min = 0;
		for (i=1; i<n; i++){
			if(a[min]>a[i]) min = i;
		}
		temp = a[0];
		a[0] = a[min];
		a[min] = temp;

		for (i=0; i<n;i++){
			if (i==0) printf("%d", a[i]);
			else printf(" %d", a[i]);
		}
		printf("\n");


	}
	return 0;
}