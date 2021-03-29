#include<iostream>
#include <string>
#include <map>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    map<int, int> calendar;
    calendar[1] = 31;
    calendar[2] = 28;
    calendar[3] = 31;
    calendar[4] = 30;
    calendar[5] = 31;
    calendar[6] = 30;
    calendar[7] = 31;
    calendar[8] = 31;
    calendar[9] = 30;
    calendar[10] = 31;
    calendar[11] = 30;
    calendar[12] = 31;

	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        string num;
        int idx = 5;
        cin >> num;
        num.insert(4, "/");
        num.insert(7, "/");
        
        string month = num.substr(5, 2);
        string date = num.substr(8, 2);
        
        int mm = stoi(month);
        int dd = stoi(date);
        
        cout << "#" << test_case << ' ';
        if(dd <= calendar[mm])	cout << num << '\n';
        else	cout << "-1" << '\n';

	}
	return 0;
}