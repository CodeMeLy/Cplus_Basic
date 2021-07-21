#include "patient.hpp"
#include <bits/stdc++.h>
using namespace std;
class Patients{
    private:
        vector<Patient> list;

    public:
        Patients(){
            list = vector<Patient>();
        }
        void add(Patient patient){
                list.push_back(patient);
            }
        bool existPatient(string id){
            bool exist = false;
                for(auto i = list.begin(); i != list.end(); i++){
                if(id == i->getId()){
                    exist = true;
                    break;
                    }
            }
        
            return exist;
        }
        bool validInfection(string infection){
            bool valid = false;
            if(infection == "NO"){
                valid = true;
            }
            else{
                for(auto i = list.begin(); i != list.end(); i++){
                if(infection == i->getId()){
                    valid = true;
                    break;
                    }
                }
            }
        
            return valid;
        }
        void display(){
            for(auto i : list){
                cout<<"------"<<endl;
                i.display();
            }
        }
        void F0_patient(){
            cout<<"-->F0 patient:"<<endl;
            for(auto i =list.begin(); i != list.end(); i++){
                if(i->getInfection() == "NO"){
                    i->display();
                    cout<<"------"<<endl;
                }
            }
        }
        void quarantine(){
            cout<<"-->Patients have the most quarantine time:"<<endl;
            Patient max = list[0];
            for(auto i=list.begin()+1; i != list.end(); i++){
                if(i->getDay()>max.getDay()){
                    max = *i;
                }
            }
            for(auto i=list.begin(); i != list.end(); i++){
                if(i->getDay()==max.getDay()){
                    i->display();
                    cout<<"------"<<endl;
                }
            }
        }
        //  0 1 2 3 4 5 6 (list)
        //  0 0 0 0 0 0 0 (f)
        //  0 1 0 1 1 2 0
        void F_map(){
            map<string,int> map;
            for(int i=0; i<list.size();i++){
                if(list.at(i).getInfection()=="NO"){// NOTE: tìm F0
                    map.insert(make_pair(list.at(i).getId(),0));
                }else{
                    for(int j = 0;j<i;j++){// duyệt các đứa trước đó
                        if(list.at(i).getInfection()==list.at(j).getId()){
                                map.insert(make_pair(list.at(i).getId(),map.at(list.at(j).getId())+1));
                                break;
                        }
                    }  
                }
            }
            for(auto item:map){
                cout<<"("<<item.first<<": F"<<item.second<<")";
            }
        }
        void F(){
            int size = list.size();
            int a[size];
            for(int i=0; i<size;i++){// duyệt đứa hiện tại
                if(list.at(i).getInfection()=="NO"){
                    a[i] = 0;
                }
                else{
                    for(int j = 0;j<i;j++){// duyệt các đứa trước đó
                        if(list.at(i).getInfection()==list.at(j).getId()){
                                a[i] = a[j]+1;
                                break;
                        }
                    }  
                }
            }
            for(int i=0; i<size;i++){
                cout<<a[i]<<" ";
            }         
        }
};
