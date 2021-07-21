#include <bits/stdc++.h>
using namespace std;
class Patient{
    private:
        string id; //mã bệnh nhân
        string name;
        int day; //số ngày cách ly
        string infection; //lây nhiễm từ ai
    public:
        Patient(){
            this->id = "12345";
            this->name = "Meo";
            this->day = 1;
            this->infection = "23456";
        }
        Patient(string id, string name, int day, string infection){
            this->id = id;
            this->name = name;
            this->day = day;
            this->infection = infection;
        }
        string getId(){
            return id;
        }
        string getInfection(){
            return infection;
        }
        int getDay(){
            return day;
        }
        friend istream& operator>>(istream &input, Patient &patient){
            do{
                cout<<"id: ";
                input>>patient.id;
            }while(patient.id.size()!=5);
            cout<<"Name: ";
            fflush(stdin);
            getline(cin,patient.name);
            cout<<"Day: ";
            fflush(stdin);
            input>>patient.day;
            do{
                cout<<"Infection: ";
                input>>patient.infection;
            }while((patient.infection != "NO") && (patient.infection.size() != 5));
        }
        void display(){
            cout<<"id: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Day: "<<day<<endl;
            cout<<"Infection: "<<infection<<endl;
        }
};