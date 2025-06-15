#include<iostream>
using namespace std;

class flight {
private:
    int flightnumbers;
    string distination;
    float distance;
    float fuel;
    
    void calfuel(){
    if (distance <= 1000) 
            fuel = 500;
        else if (distance > 1000 && distance <= 2000) 
            fuel = 1100;
        else 
            fuel = 2200;
    }
    public:
    void feedinfo(){
        cout<<"enter a flight number: ";
        cin>>flightnumbers;
        cin.ignore();
        cout<<"enter distination: ";
        getline(cin, distination);
        cout<<"enter distance(in km): ";
        cin>>distance;
        calfuel();
    }
    
    void showinfo(){
        cout<<"\n flight details\n";
        cout<<"flight numbers: "<<flightnumbers<< endl;
        cout<<"distination: "<<distination<< endl;
        cout<<"distance: "<<distance << " km" << endl;
        cout<<"required fuel: "<<fuel<<"liters"<<endl;
    }
    
    };
    int main(){
        flight flight;
        flight.feedinfo();
        flight.showinfo();
        return 0;
    }