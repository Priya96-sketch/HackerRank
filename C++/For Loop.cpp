#include <iostream>
#include <cstdio>
using namespace std;
const char *digits[]={"one", "two", "three", "four", "five", "six", "seven", "eight","nine"};
int main() {
    int a,b;
    cin>>a;
    cin>>b;
    while(b>=a)
    {
        if((a>=1) && (a<=9))
        cout<<digits[a-1]<<endl; //as it is an array, index=0.
        else{
            if((a%2)==0)
            cout<< "even"<<endl;
            else
            cout<<"odd"<<endl;
        }
        ++a;
    }
    return 0;
}
