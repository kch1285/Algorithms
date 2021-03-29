#include<iostream>
#include <set>
using namespace std;

int main(int argc, char** argv)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	int test_case;
	int T, n, input;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int cnt = 1;
        cin >> n;
        set<int> s;
        for(int i=0;i<n;i++){
            cin >> input;
            s.insert(input);
        }
        cout << "#" << test_case << ' ';
        if(s.size() == n)	cout << "Yes" << '\n';
        else	cout << "No" << '\n';
	}
	return 0;
}