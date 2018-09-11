#include<cstdio>
#include<algorithm>

char buf[11];
int i;

int main()
{
	/* code */
	while(gets(buf)){
		std::sort(buf, buf+3);
		for(i=0; buf[i];++i){
			printf("%c ", buf[i]);
		}
		puts("");
	}
	return 0;
}