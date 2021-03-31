#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;
    int command, value;
    int ans, v;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n;
        ans = 0;
        v = 0;
        for(int i=0;i<n;i++){
            cin >> command;

            if(command == 1){
                cin >> value;
                v += value;
                ans += v;
            }
            else if(command == 2){
                cin >> value;
                v -= value;
                if(v < 0)	v = 0;
                ans += v;
            }
            else{
                ans += v;
            }
        }
        
        cout << "#" << test_case << ' ' << ans << '\n';
	}
	return 0;
}