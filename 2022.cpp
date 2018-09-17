#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cmath>

int m, n, t, temp, x, y, max,p,q;
int a[100][100];

int main(int argc, char const *argv[])
{
	while(scanf("%d %d\n", &m, &n) != EOF){
		if (m==0 && n==0) return 0;
		max = 0;
		for(x=0;x<m;x++){
			for(y=0;y<n;y++){
				std::cin >> a[x][y];
				if (abs(a[x][y]) > abs(max)){
					max = a[x][y];
					p = x+1;
					q = y+1;
				}
			}
		}
		std::cout << p << " " << q << " " << max << std::endl;
	}
	return 0;
}