#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bits = n & 1;
        if(bits == 1){
            ans = (bits* pow(10, i)) +ans;
        }
        n = n>>1;
        i++;
        
    }
    cout<<"Binary representation of the given number is:"<<ans<<endl;
}