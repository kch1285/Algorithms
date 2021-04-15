#include<iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, h;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        string input;
        cin >> input >> h;
        vector<int> pos(h);
        for(int i=0;i<h;i++){
            cin >> pos[i];
        }
        sort(pos.begin(), pos.end(), greater<int>());
        
        for(int i=0;i<h;i++){
            input.insert(pos[i], "-");
        }
        cout << "#" << test_case << ' ' << input << '\n';
	}
	return 0;
}