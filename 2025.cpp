#include <iostream>	
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	string ar;


	int i;
	while(cin >> ar){
		char max = 'A';
		for(i=0;i<ar.size();i++){
			if (ar[i] > max) max = ar[i];
		}
		
		for(i=0;i<ar.size();i++){
			if (ar[i] == max) ar.insert(i+1,"(max)");
			i += 5;
		}
		cout << ar << endl;
	}

	return 0;
}