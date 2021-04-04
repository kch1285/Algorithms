#include<iostream>
#include <set>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        set<int> s;
        cin >> n;
        while(n > 0){
            s.insert(n % 10);
            n /= 10;
        }
        cout << "#" << test_case << ' ' << s.size() << '\n';
	}
	return 0;
}