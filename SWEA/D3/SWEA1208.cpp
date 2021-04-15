#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
    int dumpCnt;

	for(test_case = 1; test_case <= 10; ++test_case)
	{
        vector<int> box(100, 0);
        cin >> dumpCnt;
        
        for(int i=0;i<100;i++){
            cin >> box[i];
        }
        
        
        for(int i=0;i<dumpCnt;i++){
            (*max_element(box.begin(), box.end()))--;
            (*min_element(box.begin(), box.end()))++;
        }
        cout << "#" << test_case << ' ' << *max_element(box.begin(), box.end()) - *min_element(box.begin(), box.end()) << '\n';
	}
	return 0;
}