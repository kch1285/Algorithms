#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        vector<int> totalBus(5001, 0);
        vector<int> busStop;
        vector<pair<int, int> > bus;
        int n, p, a, b, c;
        cin >> n;

        for(int i=0;i<n;i++){
            cin >> a >> b;
            bus.push_back(make_pair(a, b));
        }
        
        cin >> p;
        for(int i=0;i<p;i++){
            cin >> c;
            busStop.push_back(c);
        }
        
        for(int i=0;i<n;i++){
            for(int j=bus[i].first;j<=bus[i].second;j++){
                totalBus[j]++;
            }
        }
        
        cout << "#" << test_case << ' ';
        for(int i=0;i<p-1;i++){
            cout << totalBus[busStop[i]] << ' ';
        }
        cout << totalBus[busStop[p-1]] << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}