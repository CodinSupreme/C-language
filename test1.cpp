#include <iostream>
using namespace std;

class part{
    public:
    void Data(){
        cout << "this is just mulple inheritance test" << endl;
    }
};


class vehicle{
    protected:
    string Model_no;
    float Max;

    public:
    string Name;
    int Wheels;
    int Seats;
    string Family;
    string Engine;

    void Max_speed(){
        cout << Max << endl;
    }

    void print(){
        cout << "Name:   " << Name << endl;
        cout << "Family: " << Family << endl;
        cout << "Engine: " << Engine << endl;
        cout << "Seats:  " << Seats << endl;
        cout << "Wheels: " << Wheels << endl;
    }
};

class Truck: public vehicle{
    public:

    Truck(string name, int typ, int seat, string engine){
        Name = name;
        Seats = seat;
        Engine = engine;

        switch (typ)
        {
        case 1:
            Family = "Trailer";
            Wheels = 14;
            Max = 89.2;
            Model_no = "7RUK102";
            break;
        case 2:
            Family = "Mini-lorry";
            Wheels = 4;
            Max = 110.2;
            Model_no = "7RUK103";
            break;
        
        default:
            Family = "Lorry";
            Wheels = 6;
            Max = 100.0;
            Model_no = "7RUK100";
            break;
        }
    }

};

class Car: public vehicle, public part{
    public:
    Car(string name, string typ, int seat, string engine){
        Name = name;
        Wheels = 4;
        Family = typ;
        Seats = seat;
        Engine = engine;
        Model_no = "C4R1204";
        friend void Model(Car Vehicle);
    }

};

void Model(Car Vehicle){
    cout << "Model: " << Vehicle.Model_no << endl;
}


int main(){
    Car car1("Volks Wagon", "Family", 4, "v6");
    Truck truck1("Isuzu", 3, 3, "V8");
    Truck truck2("Scania", 1, 3, "V12");
    Truck truck3("Volks Wagon", 2, 3, "V8");

    car1.Data();
    car1.print();
    Model(car1);

    return 0;
}