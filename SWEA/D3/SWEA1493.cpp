#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, p, q, num = 1;

	cin>>T;
    vector<vector<int> > val(1001, vector<int>(1001, 0));

    for(int i=1;num<=100000;i++){
        for(int j=1, k=i;j<=i;j++, k--){
            val[k][j] = num++;
        }
    }


	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> p >> q;
        vector<pair<int, int> > v;
        bool qFlag = false, pFlag = false, flag = false;

        for(int i=1;i<300;i++){
        	for(int j=1;j<300;j++){
                if(val[i][j] == p){
                    v.push_back(make_pair(i, j));
                    pFlag = true;
                }
                if(val[i][j] == q){
                    v.push_back(make_pair(i, j));
                    qFlag = true;
                }
                if(qFlag && pFlag)	flag = true;
            }
            if(flag)	break;
    	}
        pair<int, int> pos = {v[0].first + v[1].first, v[0].second + v[1].second};
        cout << "#" << test_case << ' ' << val[pos.first][pos.second] << '\n';
	}
	return 0;
}