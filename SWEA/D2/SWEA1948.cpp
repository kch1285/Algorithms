
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int test_case;
	int T, answer = 0;
    int first_month, first_date, second_month, second_date;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        answer = 0;
        cin >> first_month >> first_date >> second_month >> second_date;
        
        for(int i=first_month-1;i<second_month-1;i++){
            answer += month[i];
        }
        answer += second_date - first_date + 1;
        cout << "#" << test_case << ' ' << answer << '\n';
	}
	return 0;
}