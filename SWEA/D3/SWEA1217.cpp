#include<iostream>

using namespace std;

int result;

void recursive_pow(int x, int y){
    if(y <= 0)	return;
    result *= x;
    recursive_pow(x, --y);
}

int main(int argc, char** argv)
{
	int test_case;
	int n, m, T;

	for(test_case = 1; test_case <= 10; ++test_case)
	{
        cin >> T;
        cin >> n >> m;
        result = 1;
        recursive_pow(n, m);
        cout <<  "#" << test_case << ' ' << result << '\n';
	}
	return 0;
}