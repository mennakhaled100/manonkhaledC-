#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    string str ;
    cin>>str ;
//دي لحروف ورا بعض
/*
    vector<pair<char , int >> sorting ;
    for(int i=0; i<str.size(); )
    {
        int noChar = 0 ;
        for(int j=0; j<str.size(); j++)
        {
            if(str[i] == str[j])
                noChar++;
        }
        sorting.push_back({str[i] , noChar});
        i+=noChar;
    }
    sort(sorting.begin() , sorting.end()) ;
    for(auto p : sorting)
    {
        cout<<p.first << " : " << p.second <<"\n";
    }*/

    int freq[256]= {0};
    for(auto c: str)
    {
        freq[c]++ ;
    }

    for(char c='a'; c<='z'; c++)
    {
        if(freq[c] >0)
            cout<< c <<" : " << freq[c]<<"\n" ;
    }
    return 0 ;
}


