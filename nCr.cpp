#include<iostream>
using namespace std;

int factorial(int a){
    int fact = 1;
    for(int i = 1; i<=a; i++){
        fact *= i;
    }
    return fact;
}



int main(){
    int n, r;
    cout << "Enter n and r" << endl;
    cin >> n >> r;
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);

    int ans = num/denom;
    cout << "Answer is:" << ans;
}