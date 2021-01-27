#include <iostream>
using namespace std;

unsigned int buildPalindrome(unsigned int num)
{
    unsigned int output = num*1000;
    output+=num/100;
    output+=((num/10)%10)*10;
    output+=(num%10)*100;
    return output;
}

int main(){
    unsigned int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned int n;
        cin >> n;

        bool isfound = false;

        for(auto first3 = n/1000;first3 >=100 && !isfound; first3--)
        {
            auto palindrome = buildPalindrome(first3);

            if(palindrome >= n)
            continue;

            for(unsigned int i=100; i*i<=palindrome; i++)
              if(palindrome%i==0)
                {
                    auto other =palindrome/i;

                    if(other<100 || other>999)
                    continue;

                    cout<<palindrome<<endl;
                    isfound=true;
                    break;

                }

        }


    }
    return 0;
}