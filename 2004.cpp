#include<cstdio>

int i;

int main(int argc, char const *argv[])
{
	while(scanf("%d", &i) != EOF){
		if(i<0 || i>100)printf("Score is error!");
		else{
			if(i >= 90)printf("A");
			else{
				if(i>=80)printf("B");
				else{
					if(i>=70)printf("C");
					else{
						if(i>=60)printf("D");
						else printf("E");
					}
				}
			}
		}
		printf("\n");
	}
	return 0;
}