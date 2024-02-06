/* why do we use switch statement?
ager hum if, if-else, if-elseif-else statements use krte h for multiple statements to bhot sare if if else put krne 
padenge and code will not look good. isliye hum switch staement use krte h kyuki switch statement allows us to
put multiple statements together without making the code look ugly

syntax: 
        switch (expression){

            case (int/char): -----  //statement
                break;      //adding break here so that the below other statements do not get executed

            case (int/char): ----       // note here in case float or string value cannot be added
                break;      // it can be added or not depending upon the question

            default: ----        // this is the default case which gets executed if the expression mentioned does not 
                                 match with the above cases
        }

switch and if-elseif-else statements are interchangeable 

*/ 

#include <iostream>
using namespace std;

int main(){

    int num=2;
    char ch='a';

// switch statement with number

    switch (num){

        case 1: cout<<"first"<<endl;
            break;
        case 2: cout<<"second"<<endl;
            break;
        default: cout<<"it is a default case"<<endl;
    }

// switch statement with character

    switch (ch){
        case 'a': cout<<"small a"<<endl;
           // break;
        case 'A': cout<<"captial A"<<endl;
            break;
        default: cout<<"wrong input"<<endl;
    }

// nested switch statement

    switch (num){
        case 1: cout<<"first"<<endl;
            break;
        case 2: cout<<"second"<<endl;
            switch (ch){
                case 'a': cout<<"small a"<<endl;
                    break;
                case 'A': cout<<"captial A"<<endl;
                    break;
                default: cout<<"wrong input"<<endl; 
            }
            break;
        default: cout<<"default statement"<<endl;
    }
}