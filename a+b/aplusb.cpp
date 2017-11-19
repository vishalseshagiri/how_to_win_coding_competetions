#include <fstream>
#include <iostream>
#include <sstream>
// #include <string> // works only if the c++ compiler supports c++11 => command to run this:
// g++ -std=c++11 aplusb.cpp -o aplusb 
using namespace std;

int main(){
	string data[2];
	string c;	
	int i = 0, sum = 0;
	//Open file in readonly mode
	ifstream infile ("input.txt");
	if(infile.is_open())
	{
		while(getline(infile, c, ' '))
		{
			data[i++] = c;
		}
		for(i = 0; i < sizeof(data)/sizeof(string); i++){
			int temp;
			stringstream string_to_number(data[i]);
			string_to_number >> temp;
			// temp = stoi(data[i]);
			sum += temp;	
		}
		cout << sum;
		infile.close();
		ofstream outfile ("output.txt");
		outfile << sum << endl;
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
	return 0;
}