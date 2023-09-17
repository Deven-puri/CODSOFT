#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int ) time(NULL));
    int number=(rand()%100)+1;
    int guess=0;
    do
    {
       cout<<"Entre the guess between 1-100 "<<endl;
        cin>>guess;
        if(guess>number){
            cout<<"GUess is too high , guess lower "<<endl;
        }
            else if(guess<number){
                cout<<"Guess is too low, guess higher "<<endl;

            }
            else{
                cout<<"Congratulation! Your guess is correct"<<endl;
            }
        
        }
        /* code */
    while (guess != number);
    return 0;
        
 
    
}
