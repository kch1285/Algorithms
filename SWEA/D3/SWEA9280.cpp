#include<iostream>
#include <vector>
#include <queue>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, m;
	cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int park, cost, total = 0;
        int inout;
        cin >> n >> m;
        vector<pair<pair<int, int>,  bool> > w_cost;
        vector<int> weight(m);
        queue<int> q;
        park = n;
        for(int i=0;i<n;i++){
            cin >> cost;
            w_cost.push_back(make_pair(make_pair(0, cost), false));
        }
        for(int i=0;i<m;i++)	cin >> weight[i];
        
        for(int i=0;i<2*m;i++){
            cin >> inout;
            if(inout > 0){
                int idx = 0;
                while(idx < n && w_cost[idx].second)	idx++;
                if(idx == n){
                    q.push(inout);
                }
                else{
                    w_cost[idx].second = true;
                    w_cost[idx].first.first = inout;
                    total += w_cost[idx].first.second * weight[inout - 1];
                }
            }
            else{
                int idx = 0;
                while(w_cost[idx].first.first != (inout * -1) && idx < n)	idx++;
                w_cost[idx].second = false;
                w_cost[idx].first.first = 0;
                if(!q.empty()){
                    w_cost[idx].second = true;
                    w_cost[idx].first.first = q.front();
                    total += w_cost[idx].first.second * weight[q.front() - 1];
                    q.pop();
                }
            }
        }
        cout << "#" << test_case << ' ' << total << '\n';
	}
	return 0;
}