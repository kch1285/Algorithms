#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int A, B;
    cin >> A >> B;
    
    if(A == 1){
        if(B == 2)	cout << "B" << '\n';
        else	cout << "A" << '\n';
    }
    else if(A == 2){
        if(B == 1)	cout << "A" << '\n';
        else	cout << "B" << '\n';
    }
    
    else if(A == 3){
        if(B == 1)	cout << "B" << '\n';
        else cout << "A" << '\n';
    }
	return 0;
}