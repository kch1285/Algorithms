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
        cin >> n;
        vector<string> input(n);
        vector<string> a;
        vector<string> b;
        
        for(int i=0;i<n;i++){
            cin >> input[i];
        }
        
        cout << "#" << test_case << ' ';
        
        if(n % 2 == 0){
            for(int i=0;i<n;i++){
                if(i < n / 2)	a.push_back(input[i]);
                else	b.push_back(input[i]);
            }
            for(int i=0;i<n/2;i++){
                cout << a[i] << ' ' << b[i] << ' ';
            }
            cout << '\n';
        }
        else{
            for(int i=0;i<n;i++){
                if(i < n / 2 + 1)	a.push_back(input[i]);
                else	b.push_back(input[i]);
            }
            for(int i=0;i<n/2;i++){
                cout << a[i] << ' ' << b[i] << ' ';
            }
            cout << a.back() << '\n';
        }
	}
	return 0;
}