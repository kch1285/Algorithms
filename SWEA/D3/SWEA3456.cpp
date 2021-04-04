#include<iostream>
#include <map>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, input;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        map<int, int> sq;
        for(int i=0;i<3;i++){
            cin >> input;
            if(sq.find(input) != sq.end())	sq[input]++;
            else	sq[input] = 1;
        }
        cout << "#" << test_case << ' ';
        for(auto it=sq.begin();it!=sq.end();it++){
            if(it->second % 2 != 0){
                cout << it->first << '\n';
                break;
            }
        }
	}
	return 0;
}