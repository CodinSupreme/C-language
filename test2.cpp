#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    string data = "thought";

    switch('A'){
    case 'A':
        cout << "thought" << endl;
        break;
    
    case 'B':
        cout << "wifi"<< endl;
        break;

    default:
        cout << "speed" << endl;
        break;}

    return 0;
}