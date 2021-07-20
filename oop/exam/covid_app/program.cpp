#include "Patients.hpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    Patient patient;
    Patients patients = Patients();
    int n;
    cout<<"number of patients:";
    cin>>n;
    int temp = n;
    while(n--){// input
        do{
            cout<<"patient "<<temp-n-1<<": ";
            cin>>patient;
            cout<<endl;
            if(patients.existPatient(patient.getId())){
                cout<<"Error: Exist patient has id = "<<patient.getId()<<endl;
            }
             if(!patients.validInfection(patient.getInfection())){
                cout<<"Error: Invalid Infection "<<patient.getId()<<endl;
            }
        }while(patients.existPatient(patient.getId())||!patients.validInfection(patient.getInfection()));
        patients.add(patient);
    }
    cout<<endl<<"--->output:"<<endl;
    patients.display();
    cout<<"F:";
    patients.F();
    cout<<endl;
    cout<<"F map:";
    patients.F_map();
}