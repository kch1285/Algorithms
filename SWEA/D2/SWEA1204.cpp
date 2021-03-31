#include<iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second)	return a.first > b.first;
    return a.second > b.second;
}

int main(int argc, char** argv)
{
	int test_case;
	int T, tnum, n, idx;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        idx = 0;
        cin >> tnum;
        vector<pair<int, int> > num;
        map<int, int> input;
        for(int i=0;i<1000;i++){
            n;
            cin >> n;
            if(input.find(n) != input.end())	input[n]++;
            else	input[n] = 1;
        }

        for(auto it = input.begin();it!=input.end();it++){
            num.push_back(make_pair(it->first, it->second));
        }
        sort(num.begin(), num.end(), comp);
        
        while(num[idx].second == num[idx+1].second){
            idx++;
        }
        cout << "#" << test_case << ' ';
        for(int i=0;i<=idx;i++){
            cout << num[i].first << ' ';
        }
        cout << '\n';
	}
	return 0;
}