#include<cstdio>
#include<cmath>

int x,y,i,n,e;

bool isTrue;

int main(int argc, char const *argv[])
{
	
	while (scanf("%d %d", &x, &y) != EOF){
		if (x ==0 && y== 0) return 0;
		isTrue = true;
		n = x;
		while (n<=y){
			e = n * n + n + 41;
			i = 2;
			while (i <= sqrt(e)){
				if (e % i == 0){
					isTrue = false;
					break;
				}
				i++;
			}
			if (!isTrue) break;
			n++;
		}
		if (isTrue) printf("OK\n");
		else printf("Sorry\n");	

	}
	
	return 0;
}