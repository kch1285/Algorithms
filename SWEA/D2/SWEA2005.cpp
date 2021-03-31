#include<iostream>

using namespace std;

int arr[11][11];

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int N;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> N;
        for(int i=0;i<N;i++){
            arr[i][0] = 1;
            arr[i][i] = 1;
        }
        
        for(int i=2;i<N;i++){
            for(int j=1;j<i;j++){
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
        cout << "#" << test_case << '\n';
        for(int i=0;i<N;i++){
            for(int j=0;j<=i;j++){
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }
	}
	return 0;
}