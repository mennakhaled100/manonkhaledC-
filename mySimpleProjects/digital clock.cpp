#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std ;
int main()
{
    int hour , minute , second ;
    cout<< "Hour: \n" ;
    cin>>hour ;
    cout<< "Minute: \n" ;
    cin>>minute ;
    cout<< "second: \n" ;
    cin>>second ;

    while (true)
    {


        system("cls");  // clear screen
         cout<<"************************************\n" ;
         cout<<"         CLOCK          \n";


         if(second == 59){
            minute++ ;
            second = 1;
        }

        if(minute == 59){
            hour++ ;
            minute = 1 ;
        }

        if(hour == 12){
             hour = 10;
        }
        cout<<hour << " : " <<minute <<" : " <<second  ;
        second++ ;
        cout<<"\n9************************************\n" ;
        Sleep(1000) ;
    }
    return 0 ;
}
