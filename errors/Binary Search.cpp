#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n , q;
  cin>>n >>q;
  vector<int> numbers(n) ;
  for(int i=0; i<n; i++)
    cin>>numbers[i];



  while(q--)
  {
      int x ; cin>>x ;
  bool isExist = false ;
      for(auto num : numbers)
  {
      if(num == x)
        isExist = true ;
  }

  if(isExist)
    cout<<"found\n";
  else
    cout<<"not found\n";
  }

    return 0;
    }




