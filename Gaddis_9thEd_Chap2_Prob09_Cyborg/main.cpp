/* 
 * File:   main.cpp
 * Author: Peter T Ronning
 * Created: 20220218 1835 PST
 * Purpose: Provide a proof for the number of bytes in 
 *          each of the following data types:
 *          char, int, float, double
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip> //for using setprecision(_)<<fixed for decimals - 
                   //via google 20220218 1718 PST
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
     
    //Initialize Variables

    //Map the inputs/known to the outputs
    
    //Display the outputs
    cout<<"char     contains "<<sizeof(char)<<" byte(s) of memory"<<endl;
    cout<<"int      contains "<<sizeof(int)<<" byte(s) of memory"<<endl;
    cout<<"float    contains "<<sizeof(float)<<" byte(s) of memory"<<endl;
    cout<<"double   contains "<<sizeof(double)<<" byte(s) of memory"<<endl;
    //Exit the program
    return 0;
}