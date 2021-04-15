#include<iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;


bool comp(pair<string, int> a, pair<string, int> b){
    return a.second < b.second;
}
int main(int argc, char** argv)
{
	int test_case;
	int T, n;

	cin>>T;
    map<string, int> num;
    num["ZRO"] = 0;
    num["ONE"] = 1;
    num["TWO"] = 2;
    num["THR"] = 3;
    num["FOR"] = 4;
    num["FIV"] = 5;
    num["SIX"] = 6;
    num["SVN"] = 7;
    num["EGT"] = 8;
    num["NIN"] = 9;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        string tc, input;
        cin >> tc >> n;
        vector<pair<string, int> > v;
        for(int i=0;i<n;i++){
            cin >> input;
            v.push_back(make_pair(input, num[input]));
        }
        sort(v.begin(), v.end(), comp);
        
        cout << tc << '\n';
        for(int i=0;i<n;i++){
            cout << v[i].first << ' ';
        }
        cout << '\n';
	}
	return 0;
}