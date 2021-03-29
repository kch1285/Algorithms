#include<iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int sum = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        
        map<string, int> deck;
        for(int i=2;i<10;i++){
            deck[to_string(i)] = 4;
        }
        deck["11"] = 4;
        deck["10"] = 16;

        cin >> n;
        vector<int> card(n);
        for(int i=0;i<n;i++){
            cin >> card[i];
            sum += card[i];
            deck[to_string(card[i])]--;
        }
        
        for(auto it=deck.begin();it!=deck.end();it++){
            if(sum + stoi(it->first) > 21)	cnt1 += it->second;
            else	cnt2 += it->second;
        }
        cout << "#" << test_case << ' ';
        if(cnt1 >= cnt2)	cout << "STOP" << '\n';
        else	cout << "GAZUA" << '\n';
	}
	return 0;
}