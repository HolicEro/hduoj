#include<cstdio>

int n,negetive,zero,possitive;
double i;
int main(int argc, char const *argv[])
{
	while(scanf("%d", &n) != EOF){
		if(!n) continue;
		possitive = 0;
		zero = 0;
		negetive = 0;
		while(n--){
			scanf("%lf", &i);
			if(i>0) possitive += 1;
			else{
				if(i<0) negetive += 1;
				else zero += 1;
			}
		}
		printf("%d %d %d\n", negetive , zero, possitive);
	}
	return 0;
}