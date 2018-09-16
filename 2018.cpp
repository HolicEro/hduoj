#include<cstdio>

int i,n,tail,sum,total,a[100];

int main(int argc, char const *argv[])
{
	while(scanf("%d\n", &n) != EOF){
		if (n == 0) return 0;
		a[0] = 0;
		a[1] = 0;
		a[2] = 0;
		a[3] = 1;
		tail = 3;
		total = 1;
		
		while(n-- > 1){
			for(i=tail;i>-1;i--){
				a[i+1] = a[i];
				}
			tail++;
			sum=0;
			for(i=tail;i>2;i--){
				sum+=a[i];
				}
			a[0] = sum;
			total += sum;
			for (int j=0;j<tail+1;j++){
				// printf("%d ", a[j]);
			}
			// printf("\n");
		}

		printf("%d\n", total);
		
	}
	return 0;
}