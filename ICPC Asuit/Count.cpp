#include<iostream>
using namespace std;
int main()
{
    string str ;
    cin>>str ;
 // overflow with this way !! string numbers >> long long


   /* long long integer = 0;

    for(auto c : str)
    {
        integer = integer * 10  + (c - '0') ;
        // num * 10 عشان نزود خانة لليسار
        // + (c - '0') نضيف الرقم الجديد في الخانة الأخيرة
    }

    long long sum = 0 ;
    for(int i=0; i<str.size(); i++)
    {
        sum+= integer % 10 ;
        integer/= 10 ;
    }
    cout<<sum ;*/

    int sum = 0 ;
    for(auto c : str)
    {
        sum  += (c - '0') ;
    }
    cout<<sum ;
    return 0 ;
}
