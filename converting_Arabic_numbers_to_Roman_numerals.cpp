#include <iostream>

//CONVERTING ARABIC NUMBERS TO ROMAN NUMERALS

using namespace std;

int main()
{
    char *tabOfRomanNumbers[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};//Table with Roman numbers including 4 and 9 multiplied by 10
    int tabOfValuesRomanNumbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}; //table with decimal values of Roman numbers
    int inputNumber;

    cout<<"*******************************************"<<endl;
    cout<<"CONVERTING ARABIC NUMBERS TO ROMAN NUMERALS"<<endl;
    cout<<"Integer numbers"<<endl;

    cout<<"What Arabic number do you want to convert?"<<endl;
    cin>>inputNumber;

    if(inputNumber==0)
        cout<<"Try number different than 0"<<endl;//Protection when input is equal to 0

//-----------------------------------
//CONVERTING
    for(int i=0 ; inputNumber>0;)
    {
        if(inputNumber >= tabOfValuesRomanNumbers[i])//Comparing number with table with Roman values
        {
            cout<<tabOfRomanNumbers[i];
            inputNumber = inputNumber - tabOfValuesRomanNumbers[i];//Subtraction            
        }
        else
            i++;//when number is bigger you have to go to next lower value in table
    }
        cout<<endl;
}
