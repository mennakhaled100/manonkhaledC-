#include<iostream>
using namespace std;
int main()
{
    int t ; cin>>t ;
    while(t--)
    {
        string str ;
        cin>>str ;

    bool isGood = false ;

    for(int i=0; i<str.size(); i++)
    {
        string sub = str.substr(i, 3);

            if(sub == "101" || sub == "010")
            {
                isGood = true ;
                break ;
            }
        i++;
    }

    if(isGood)
        cout<<"Good\n";
    else
        cout<<"Bad\n";
    }


    return 0 ;
}
