#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int N;
    cin >> N;
    for(int i=N;i>0;i--){
        if(N % i == 0)	cout << N / i << ' ';
    }
	return 0;
}