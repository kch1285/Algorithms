#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, h1, h2, m1, m2, hh, mm;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin >> h1 >> m1 >> h2 >> m2;
        hh = h1 + h2;
        mm = m1 + m2;
        
        if(mm >= 60){
            mm -= 60;
            hh++;
        }
        if(hh > 12)	hh -= 12;
        
        cout << "#" << test_case << ' ' << hh << ' ' << mm << '\n';
	}
	return 0;
}