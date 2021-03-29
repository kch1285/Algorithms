#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int input;
    int ans = 1;
    cin >> input;
    
    for(int i=0;i<=input;i++){
        cout << ans << ' ';
        ans *= 2;
    }
	return 0;
}