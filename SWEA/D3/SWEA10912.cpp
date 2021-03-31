#include<iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        map<char, int> check;
        vector<char> ans;
        string input;
        cin >> input;
        
        for(int i=0;i<input.length();i++){
            if(check.find(input[i]) == check.end())	check[input[i]] = 1;
            else	check[input[i]]++;
        }
        
        for(auto it=check.begin();it!=check.end();it++){
            if(it->second % 2 != 0)	ans.push_back(it->first);
        }
        
        cout << "#" << test_case << ' ';
        if(ans.empty())	cout << "Good" << '\n';
        else{
            for(int i=0;i<ans.size();i++){
                cout << ans[i];
            }
            cout << '\n';
        }
	}
	return 0;
}