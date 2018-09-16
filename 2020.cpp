#include <cstdio>
#include <algorithm>
#include <cmath>
#include <iostream>

int i,n,t;
int a[100];

bool cmp (int i, int j){
	return abs(i) > abs(j);
}

int main(int argc, char const *argv[])
{
	while(scanf("%d", &n) != EOF){
		if(n==0) return 0;
		
		for(i=0;i<n;i++){
			scanf("%d", &t);
			a[i] = t;
		}


		std::sort(a,a+n,cmp);
		for (i=0;i<n;i++){
			if (i==n-1) printf("%d\n", a[i]);
			else printf("%d ", a[i]);
		}
	}
	
	return 0;
}