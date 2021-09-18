#include "../std_lib_facilities.h"

int main()
{

	string previous = "";
	string current;
	
	/*
	char c = 48;
	int d = '0';
	
	cout << c << endl;
	cout << d << endl;
	*/
	
	while(cin>>current) {
		
		if(current == previous)
			cout << "repeating words: " << current << "\n";
		previous = current;
	}

	return 0;
}
