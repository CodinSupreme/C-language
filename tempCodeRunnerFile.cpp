#include <iostream>
#include <string>

using namespace std;

bool Palindrome(string string_data){
    string data="";
    for (int i= string_data.length() - 1; i >= 0; i--){
        data += string_data[i];}
    
    cout << "word: " << string_data << "\nReverse: " << data << endl;

    if (data == string_data){
        return true;
    }
    else{ return false; }}

int main(){
    cout << "This program checks if the word entered is a Palindrome" << endl;

    //Enter the word
    cout << "Please enter a word: ";
    string data;
    cin >> data;

    //check if the word is a palindrome
    if (Palindrome(data)){
        cout << data << " is a Palindrome." << endl;
    }
    else{
       cout << data << " is not a Palindrome." << endl; }
    return 0;}