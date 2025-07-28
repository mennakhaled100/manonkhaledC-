#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Let's enjoy this fun guessing game!\n";
    cout<<"\nGet ready for an exciting challenge\n";

    //Random Number Generation
    srand(time(0));
    int start=0;
    int endn=100;
    int random= rand()% (endn+1);
   // cout<<random;
    //Player Guessing
    int guess;
    int guess_num=0;
    cout<<"\nI've picked a number between 0 and 100.\n";
    cout<<"Start guessing!\n";

    do
    {
        cin>>guess;

        //Feedback Mechanism
        if(guess==random)
            cout<<"You got it!\n";
        else
        {
            guess_num++;

            if(guess>random)
                cout<<"Too high! Don't give up, you're getting closer!\n";
            else
                cout<<"Too low! Keep going, you've got this!\n";
        }

    }while(guess!=random);

    //Game Completion and Grading
    cout<<"\nYou have found the number in "<<guess_num<<" tries!\n";
    if(guess_num<=3  && guess_num!=1)
        cout<<"Excellent! You're a natural at this\n";
    else if(guess_num<=6)
        cout<<"Great Job! Impressive skills!\n";
    else if(guess_num<=10)
        cout<<"Good Effort! Solid performance\n";
    else if(guess_num<=15)
        cout<<"Keep Practicing! You're improving with every guess\n!";
    else
        cout<<"Try Again! Every attempt makes you better\n!";

    return 0;
}
