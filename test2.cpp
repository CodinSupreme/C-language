#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Vehicle{
    public:
    string manufacturer;
    string date;
    string color;

    void Detail(string Color, string Manufacturer, string Date){
        manufacturer = Manufacturer;
        date = Date;
        color = Color;
    }
};

class Personal_car:public  Vehicle{
    private:
    string number_plate = "";

    void plate_gen(){
        for (int i=0; i < 6; i++){
            number_plate += char(rand() % 101);
        };

    }
    
    public:
    string name;
    int seats;
    string steering_side;
    

    Personal_car(string Name, int Seats, string steer, string Color,string Manufacturer, string Date){
        name = Name;
        manufacturer = Manufacturer;
        date = Date;
        color = Color;
        seats = Seats;
        steering_side = steer;
        plate_gen();

    }

    void Detail(){
        cout << "Name:           " <<  name << endl;
        cout << "Color:          " <<  color << endl;
        cout << "Seats:          " <<  seats << endl;
        cout << "Steering Side:  " << steering_side  << endl;
        cout << "Number Plate:   " <<  number_plate << endl;
        cout << "Manufacturer:   " <<  manufacturer << endl;
        cout << "Date:           " <<  date << endl;
    }

};

int main(){
    Personal_car Voxwagon("Voxwagon Beetle", 4, "left", "Red", "Voxwagon", "2024-10-26");
    Voxwagon.Detail();
    return 0;
}
