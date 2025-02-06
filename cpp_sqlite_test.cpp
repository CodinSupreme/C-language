#include <iostream>
using namespace std;

extern "C"{
    #include "sqlite3.h"
    
}


int main(){
    sqlite3* db;
    sqlite3_stmt* stmt;
    int exit = sqlite3_open("test.db", &db);

    if (exit != SQLITE_OK) {
        cerr << "Error opening database: " << sqlite3_errmsg(db) << endl;
    } else {
        cout << "Database opened successfully!" << endl;
    }

    sqlite3_close(db);
    return 0;
}