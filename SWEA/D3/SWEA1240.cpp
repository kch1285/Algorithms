#include<iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    map<string, int> pscode;
    pscode["0001101"] = 0;
    pscode["0011001"] = 1;
    pscode["0010011"] = 2;
    pscode["0111101"] = 3;
    pscode["0100011"] = 4;
    pscode["0110001"] = 5;
    pscode["0101111"] = 6;
    pscode["0111011"] = 7;
    pscode["0110111"] = 8;
    pscode["0001011"] = 9;
	int test_case;
	int T, n, m;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        int idx, oddCheck = 0, evenCheck = 0, result = 0;
        string ps;
        cin >> n >> m;
        vector<string> input(n);
        vector<int> sum;
        
        for(int i=0;i<n;i++){
            cin >> input[i];
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(input[i][j] == '1'){
                    ps = input[i];
                    break;
                }
            }
        }
        for(int i=ps.length()-1;i>0;i--){
            if(ps[i] == '1'){
                idx = i;
                break;
            }
        }
        ps = ps.substr(idx - 55, 56);
        idx = 0;
        while(idx <= ps.length()-7){
            string code = ps.substr(idx, 7);
            sum.push_back(pscode[code]);
            idx+=7;
        }
        for(int i=0;i<sum.size();i++){
            if((i+1) % 2 != 0)	oddCheck += sum[i];
            else	evenCheck += sum[i];
            result += sum[i];
        }

        oddCheck *= 3;
        if((oddCheck + evenCheck) % 10 != 0)	result = 0;
        
        cout << "#" << test_case << ' ' << result << '\n';
	}
	return 0;
}