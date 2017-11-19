#include <string>
#include <iostream> 
using namespace std;
int main() {
	string input, result = "";
	int i, j=0;
	cout << "Enter input" << endl;
	cin >> input;
	for(i = 0; i < input.size(); i++){
		// cout << input[i] << endl;
		result += input[i];
		if(input[i] == '-'){
			i++;
			result	+=	input[i++];
			while(i < input.size() && input[i++] == '0'){
				result	+=	"+0";
			}
			if(i < input.size() && input[i] >= '1' && input[i] <= '9'){
				result+=input[i];
			}
		}
	}
	cout << "Result is "+result << endl;
	return 0;
}