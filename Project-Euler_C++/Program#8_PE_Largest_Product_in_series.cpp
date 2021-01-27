#include <iostream>
#include <string>
using namespace std;

int main(){
    unsigned int t;
    cin >> t;
    while(t--){
        unsigned int n;
        unsigned int k;
        string num;
        cin >>n>>k>>num;

        unsigned long long best =0;
        for (int start =0; start + k < n; start ++)
        {
            unsigned long long current =1;
            for(unsigned int i =0;i<k;i++)
            current *=num[start+i] -'0';

            if(best<current)
            best=current;
        }
        cout<<best<<endl;
    }
    return 0;
}