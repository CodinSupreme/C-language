#include <iostream>
#include <mysql/mysql.h> // Include MySQL header

using namespace std;

int main() {
    MYSQL* conn;
    conn = mysql_init(NULL); // Initialize MySQL object

    if (!conn) {
        cerr << "MySQL Initialization Failed!" << endl;
        return 1;
    }

    // Connect to MySQL Server
    conn = mysql_real_connect(conn, "localhost", "root", "C0d1n.Dat@Base", "test1", 3306, NULL, 0);

    if (conn) {
        cout << "Database Connected Successfully!" << endl;
    } else {
        cerr << "Connection Failed: " << mysql_error(conn) << endl;
        return 1;
    }

    // Close the MySQL connection
    mysql_close(conn);
    return 0;
}
