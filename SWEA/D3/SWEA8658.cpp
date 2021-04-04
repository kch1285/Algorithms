#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, max_num, min_num;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        max_num = 0;
        min_num = 55;
        vector<int> num(10);
        for(int i=0;i<10;i++)	cin >> num[i];
        
        for(int i=0;i<10;i++){
            int tmp = 0;
            while(num[i] > 0){
                tmp += num[i] % 10;
                num[i] /= 10;
            }
            max_num = max(max_num, tmp);
            min_num = min(min_num, tmp);
        }
        
        cout << "#" << test_case << ' ' << max_num << ' ' << min_num << '\n';
	}
	return 0;
}