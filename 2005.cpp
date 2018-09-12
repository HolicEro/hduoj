#include<cstdio>

int i,ret;
int y,m,d;
char c;
int big[] = {1, 3, 5, 7, 8, 10, 12};
int small[]= {4, 6, 9, 11};

int main(int argc, char const *argv[])
{
	while(scanf("%d%c%d%c%d", &y, &c, &m, &c, &d) != EOF){
		ret = 0;
		bool uniq;
		if( y%4==0 && y%100!=0 || y%400==0)uniq = true;
		else uniq = false;
		for(i=0;i<7;++i){
			if(m>big[i]) ret+=31;
			else break;
		}
		for(i=0;i<4;++i){
			if(m>small[i]) ret+=30;
			else break;
		}
		if(m>2){
			if(uniq) ret+=29;
			else ret+=28;
		}
		ret+=d;
		printf("%d\n", ret);
	}
	return 0;
}