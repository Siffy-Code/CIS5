/* 
 * File:   main.cpp
 * Author: Peter T Ronning
 * Created: 20220218 1632 PST
 * Purpose:  To calculate metrics regarding the sale and commission of stocks
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip> //std:setprecision access
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
    float ShrsPur, //Number of Shares customer purchases
            ShrsPrc, //Price of Shares at time of purchase
            CommRte, //Commission Rate, enter as percentage (5=5%)
            CstTTL, //Total cost of Shares and commission together
            CstBase, //Base cost of Shares Purchased at Price of Shares
            CstComm; //Cost of commission, on top of Base costs
    
    //Initialize Variables
    ShrsPur=750;
    ShrsPrc=35;
    CommRte=2;
            
    //Map the inputs/known to the outputs
    CstTTL=ShrsPur*ShrsPrc*(CommRte/100 +1);
    CstBase=ShrsPur*ShrsPrc;
    CstComm=CstTTL-CstBase;
    
    //Display the outputs
    cout<<"Stock Purchase transaction details:"<<endl;
    cout<<"Base Stock Purchase Price: $"<<setprecision(2)<<fixed<<CstBase<<endl;
    cout<<"Stockbroker Commission:    $"<<setprecision(2)<<fixed<<CstComm<<endl;
    cout<<"Total Cost:                $"<<setprecision(2)<<fixed<<CstTTL<<endl;
    
    //Exit the program
    return 0;
}