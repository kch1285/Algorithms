#include<iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string input;
    cin >> input;
    for(int i=0;i<input.length();i++){
        if(isalpha(input[i]))	input[i] = toupper(input[i]);
    }
    cout << input << '\n';
	return 0;
}