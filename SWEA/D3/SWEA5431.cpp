#include<iostream>
#include <set>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, k, input;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n >> k;
        set<int> list;
        for(int i=0;i<k;i++){
            cin >> input;
            list.insert(input);
        }
        auto it = list.begin();
        cout << "#" << test_case << ' ';
        for(int i=1;i<=n;i++){
            if(it!= list.end() && *it == i)	it++;
            else	cout << i << ' ';
        }
        cout << '\n';
	}
	return 0;
}