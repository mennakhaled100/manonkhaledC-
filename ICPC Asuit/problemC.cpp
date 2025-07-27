#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c=='z')
        cout<<'a';
    else
    {
         char p=c+1;
         cout<<p;
    }


    /* another solution
    #include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    char nextChar = (c - 'a' + 1) % 26 + 'a';
    cout << nextChar;

    return 0;
}
*/

    return 0;
}
