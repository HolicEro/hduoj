#include <cstdio>
#include <cstring>
#include <algorithm>
#include <readline>

int i,n;
char buf[100];

int main(int argc, char const *argv[])
{
	while(scanf("%d\n", &n) != EOF){
		while(n-- > 0){
			gets(buf);
			

			if (buf[0] != '_' && (buf[0]>'0' &&buf[0]<'9')) printf("no\n");
		else {
			std::sort(buf, buf+strlen(buf));
			if (buf[0] < '0') printf("no\n");
			else printf("yes\n");
		}
		}
	}
	return 0;
}