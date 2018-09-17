#include <cstdio>
#include <iostream>

int i,n,t,total;

int main(int argc, char const *argv[])
{
	while (std::cin >> n && n != 0){
		total = 0;
		while(n-- > 0){
			std::cin >> t;
			while(t>0){
				i=100;
				total += t/100;
				t = t%100;
				total += t/50;
				t = t%50;
				total += t/10;
				t = t%10;
				total += t/5;
				t = t%5;
				total += t/2;
				t = t%2;
				total +=t;
				t=0;
			}
		}
		std::cout << total << std::endl;
	}
	return 0;
}