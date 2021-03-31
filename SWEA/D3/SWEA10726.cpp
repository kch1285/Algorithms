#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	int test_case;
	int T, n, m;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        bool flag = true;
        cin >> n >> m;
        vector<int> bin;
        while(bin.size() < n){
            bin.push_back(m % 2);
            m /= 2;
        }
        
        for(int i=0;i<bin.size();i++){
            if(bin[i] == 0){
                flag = false;
                break;
            }
        }
        if(flag)	cout << "#" << test_case << ' ' << "ON" << '\n';
        else	cout << "#" << test_case << ' ' << "OFF" << '\n';
	}
	return 0;
}