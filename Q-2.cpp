#include <iostream>
using namespace std;

class Car_record{
    public:

    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

};

int main(){

    Car_record BMW;

    BMW.car_id = 01;
    BMW.car_company_name = "BMW";
    BMW.car_color = "Metalic Black";
    BMW.car_model = "7 Series Sedan";
    BMW.car_release_year = 2024;

    cout<< " car on record"<<endl;
    cout<< " ID :"<<BMW.car_id<<endl;
    cout<< " Company_name: "<<BMW.car_company_name<<endl;
    cout<< " Color: "<<BMW.car_color<<endl;
    cout<< " Model : "<<BMW.car_model<<endl;
    cout<< " Release_year : " <<BMW.car_release_year<<endl;

    Car_record Porsche;

    Porsche.car_id = 02;
    Porsche.car_company_name = "Porsche";
    Porsche.car_color = "Guards Red";
    Porsche.car_model = "911 sports car";
    Porsche.car_release_year = 2026;

    cout<< " car on record"<<endl;
    cout<< " ID :"<<Porsche.car_id<<endl;
    cout<< " Company_name: "<<Porsche.car_company_name<<endl;
    cout<< " Color: "<<Porsche.car_color<<endl;
    cout<< " Model : "<<Porsche.car_model<<endl;
    cout<< " Release_year : " <<Porsche.car_release_year<<endl;

    Car_record mercedes_benz;

    mercedes_benz.car_id = 03;
    mercedes_benz.car_company_name = "mercedes benz";
    mercedes_benz.car_color = "Diamond White Bright";
    mercedes_benz.car_model = " Mercedes-Benz S-Class";
    mercedes_benz.car_release_year = 2024;

    cout<< " car on record"<<endl;
    cout<< " ID :"<<mercedes_benz.car_id<<endl;
    cout<< " Company_name: "<<mercedes_benz.car_company_name<<endl;
    cout<< " Color: "<<mercedes_benz.car_color<<endl;
    cout<< " Model : "<<mercedes_benz.car_model<<endl;
    cout<< " Release_year : " <<mercedes_benz.car_release_year<<endl;


    Car_record Bugatti;

    Bugatti.car_id = 04;
    Bugatti.car_company_name = "Bugatti";
    Bugatti.car_color = "traditional gloss";
    Bugatti.car_model = "V16-powered Tourbillon";
    Bugatti.car_release_year = 2026;

    cout<< " car on record"<<endl;
    cout<< " ID :"<<Bugatti.car_id<<endl;
    cout<< " Company_name: "<<Bugatti.car_company_name<<endl;
    cout<< " Color: "<<Bugatti.car_color<<endl;
    cout<< " Model : "<<Bugatti.car_model<<endl;
    cout<< " Release_year : " <<Bugatti.car_release_year<<endl;


    return 0;
};