#include<cstdio>
int m,n,a,b,c,i;
bool exist, first;
int main(int argc, char const *argv[])
{
	while(scanf("%d %d", &m, &n) != EOF){
		exist = false;
		first = true;

		while(m<=n){
			a = m%10;
			b = (m/10)%10;
			c = (m/100)%10;
			i = a*a*a + b*b*b + c*c*c;
			if(m==i) {
				exist = true;
				if(first){
					first = false;
					printf("%d", m);
				}
				else printf(" %d", m);
			}
			m++;
		}
		if(exist) printf("\n");
		else printf("no\n");
	}
	return 0;
}