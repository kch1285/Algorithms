#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, n, q, l, r;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> n >> q;
        vector<int> box(n, 0);
        for(int i=0;i<q;i++){
            cin >> l >> r;
            for(int j=l-1;j<r;j++){
                box[j] = i + 1;
            }
        }
        cout << "#" << test_case << ' ';
        for(int i=0;i<n;i++){
            cout << box[i] << ' ';
        }
        cout << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}