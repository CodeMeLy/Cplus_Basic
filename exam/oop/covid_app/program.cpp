/*https://scontent-hkg4-1.xx.fbcdn.net/v/t1.15752-9/217815206_1034530194059074_8696076127746650903_n.png?_nc_cat=102&ccb=1-3&_nc_sid=ae9488&_nc_ohc=Inum_GTyRMMAX-KqG7O&_nc_ht=scontent-hkg4-1.xx&oh=c71af09a2b36e8f8d4f3ca2d33430bfb&oe=60FC0D54*/
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
    patients.F0_patient();
    cout<<"F:";
    patients.F();
    cout<<endl;
    cout<<"F map:";
    patients.F_map();
}