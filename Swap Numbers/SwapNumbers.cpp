#include <iostream>

using namespace std;

int SwapNumbers(int A, int B){
    int temp = A;
    A = B;
    B = temp;
    return A,B;
}

int main(){

    int varA =25;
    int varB =100;

    cout << "varA before swap: " << varA << endl;
    cout << "varB before swap: " << varB << endl;

    SwapNumbers(varA,varB);

    cout<< "varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;

    return 0;
}