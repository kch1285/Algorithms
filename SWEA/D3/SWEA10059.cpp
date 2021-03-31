#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        bool mmyy = false, yymm = false;
        int input;
        cin >> input;
        if(input / 100 <= 12 && input /100 > 0)	mmyy = true;
        if(input % 100 <= 12 && input % 100 > 0)	yymm = true;
        
        cout << "#" << test_case << ' ';
        if(mmyy && yymm)	cout << "AMBIGUOUS" << '\n';
        else if(mmyy)	cout << "MMYY" << '\n';
        else if(yymm)	cout << "YYMM" << '\n';
        else	cout << "NA" << '\n';
	}
	return 0;
}