#include <iostream>
using namespace std;

int main(){
    unsigned int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long n;
        cin >> n;

        unsigned long long sum = 0;
        unsigned long long sumSquared=0;

        for(unsigned long long i=1;i<=n; i++)
        {
            sum += i;
            sumSquared += i*i;
        }

        unsigned long long squaredSum = sum * sum;
        cout<<(squaredSum -sumSquared)<<endl;

    }
    return 0;
}