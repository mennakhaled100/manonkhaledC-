#include<iostream>
using namespace std ;

 bool isPalindeome(int arr[], int left, int right)
{
    if(left >= right)  //base case : يعني هيوصل للنص من غير اي اختلاف
        return true;
    if(arr[left] != arr[right])
        return false;
    return isPalindeome(arr, left+1, right-1) ;

}
int main()
{
    int len ; cin>>len ;
    int arr[len] ;
    for(int i=0; i<len; i++)
    {
        cin>>arr[i] ;
    }

    if(isPalindeome(arr, 0, len-1) )
        cout<<"palindrome\n";
    else
        cout<<"not palindrome\n";
    return 0 ;
}


