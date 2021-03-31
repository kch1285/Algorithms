#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int n, cnt;

	for(test_case = 1; test_case <= 10; ++test_case)
	{
        cnt = 0;
        cin >> n;
        vector<vector<int> > table(n, vector<int>(n, 0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> table[i][j];
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(table[j][i] == 1){
                    int idx = j;
                    while(idx < n){
                        if(table[idx][i] == 1)	table[idx][i] = 0;
                        else if(table[idx][i] == 2){
                            cnt++;
                            break;
                        }
                        idx++;
                    }
                }
            }
        }
        cout << "#" << test_case << ' ' << cnt << '\n';
	}
	return 0;
}