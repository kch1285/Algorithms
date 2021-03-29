#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        bool check;
        int mult, tmp;
        int ans = -1;
        cin >> n;
        vector<int> v(n);
        
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                check = true;
                mult = v[i] * v[j];
                while(mult > 0){
                    tmp = mult % 10;
                    mult /= 10;
                    if(mult == 0)	break;
                    if(mult % 10 + 1 != tmp)	check = false;
                }
                if(check)	ans = max(v[i] * v[j], ans);
            }
        }
        cout << "#" << test_case << ' '  << ans << '\n';
	}
	return 0;
}