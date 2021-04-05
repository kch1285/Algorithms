#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, k, people, boring;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        boring = 0;
        people = 1;
        cin >> k;
        for(int i=0;i<k;i++)	people *= 2;
        vector<int> fight(people);
        
        for(int i=0;i<people;i++)	cin >> fight[i];
        int idx = 0;
        while(fight.size() > 1){
            idx = 0;
            while(idx < fight.size()){
                if(fight[idx] < fight[idx + 1]){
                    boring += fight[idx+1] - fight[idx];
                    fight.erase(fight.begin() + idx);
                }
                else{
                    boring += fight[idx] - fight[idx + 1];
                    fight.erase(fight.begin() + idx + 1);
                }
                idx++;
            }
        }
        cout << "#" << test_case << ' ' << boring << '\n';
	}
	return 0;
}