#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    string input;
    cin >> input;
    for(int i=0;i<input.length();i++){
        cout << input[i] - 'A' + 1 << ' ';
    }
	return 0;
}