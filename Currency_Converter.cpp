#include <iostream>
using namespace std;

//Ksh is the main currency
float Usd = 129.50;//Usd
float Yen = 0.83;//yen
float Pound = 158.10;//Pound
float Euro = 133.40;//Euro
float Tsh = 0.051;//Tanzanian shilling
float Ush = 0.035;//Ugandan shilling
int curr1,curr2;
float value;

float Currency[6] = {129.50, 0.83, 158.10, 133.40, 0.051, 0.035};


void Input(){
    
    cout << "These are different currency values as compared to Kenyan Shilling" << endl;
    cout <<"1) US Dollar           = 129.50 \n2) Japanese Yen        = 0.83 \n3) Sterling Pound      = 158.10 \n4) Euro                = 133.40 \n5) Tanzanian shilling  = 0.051 \n6) Ugandan shilling    = 0.035 \n7) Kenyan Shilling"<<endl;
    cout<<"enter the currency you want to convert from: ";
    cin>>curr1;
    cout<<"enter the amount of the currency: ";
    cin>>value;
    cout<<"enter the currency you want to convert to: ";
    cin>>curr2;
}

float Converter(){
    if (curr1 == 7){
        float result = value / Currency[curr2 - 1];
        return result;
    }
    else if(curr2 == 7){
        float result = value * Currency[curr2 - 1];
        return result;
    }
    else{
    float val = value * Currency[curr1 - 1];
    float result = val/Currency[curr2 - 1];
    return result;}
}

int main(){
    Input();
    cout << Converter() <<endl;
    return 0;
}