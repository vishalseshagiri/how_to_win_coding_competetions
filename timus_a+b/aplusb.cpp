#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string input, output;
	int temp, sum = 0;
	getline(cin, input);
	istringstream ss(input);
	string token;
	while(getline(ss, token, ' ')){
		stringstream string_to_number(token);
		string_to_number >> temp;
		sum+=temp;
	}
	cout << sum;
	return 0;
}