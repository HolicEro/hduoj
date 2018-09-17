#include <cstdio>
#include <algorithm>


int i,j, n, m, sum, count,s;
int a[100][100];
double avg_stu, avg_course[100];

int main(int argc, char const *argv[])
{
	while(scanf("%d %d\n", &n, &m) != EOF){
		if (n==0 && m ==0) return 0;
		for (i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d", &a[i][j]);
			}
			
		}

		for (i=0;i<n;i++){
			sum = 0;
			for(j=0;j<m;j++){
				sum += a[i][j];
			}
			avg_stu =(double) sum/m;
			if (i==n-1) printf("%.2lf\n", avg_stu);
			else printf("%.2lf ", avg_stu);
		}
		for (j=0;j<m;j++){
			sum = 0;
			for(i=0;i<n;i++){
				sum += a[i][j];
			}
			avg_course[j] = (double) sum/n;
			if (j==m-1) printf("%.2lf\n", avg_course[j]);
			else printf("%.2lf ", avg_course[j]);
		}

		count = 0;
		for (i=0;i<n;i++){
			s = 0;
			for (j=0;j<m;j++){
				if (a[i][j]>=avg_course[j]) s++;
				// else printf("%d %.2lf %d\n", a[i][j], avg_course[j], s);
			}
			if(s==m) count++;
		}
		printf("%d\n\n", count);

	}
	return 0;
}