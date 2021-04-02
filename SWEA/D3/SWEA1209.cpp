#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	for(test_case = 1; test_case <= 10; ++test_case)
	{
        int max_num = -9999999999, leftToRight = 0, rightToLeft = 0;
        cin >> T;
        vector<vector<int> > arr(100, vector<int>(100, 0));
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                cin >> arr[i][j];
            }
        }
        
        for(int i=0;i<100;i++){
            int row_sum = 0;
            int col_sum = 0;
            for(int j=0;j<100;j++){
                row_sum += arr[i][j];
                col_sum += arr[j][i];
            }
            max_num = max(max(row_sum, col_sum), max_num);
        }
        
        for(int i=0;i<100;i++){
            leftToRight += arr[i][i];
            rightToLeft += arr[i][99-i];
        }
        max_num = max(max(leftToRight, rightToLeft), max_num);
        cout << "#" << test_case << ' ' << max_num << '\n';
	}
	return 0;
}