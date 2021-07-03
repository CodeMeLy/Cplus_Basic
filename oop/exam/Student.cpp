#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
        string id;
        string name;
        float gpa;
    public:
        //khởi tạo mặc định
        Student();
        // khởi tạo có tham số
        Student(string id, string name, float gpa);
        // khởi tạo sao chép
        Student(const Student &student);
        // ham huy
        ~Student(){cout<<"đã xóa student "<<id<<endl;};
        // setter và getter
        void setId(string id){this->id=id;};
        string getId(){return this->id;};
        void setName(string name){this->name=name;};
        string getName(){return this->name;};
        void setGPA(float gpa){this->gpa=gpa;};
        float getGPA(){return gpa;};
        string toString(){
            ostringstream ss;
            ss<<"id:"<<id<<", name:"<<name<<", gpa:"<<gpa;
            return ss.str();
        }
};
Student::Student(){
    this->id = "000";
    this->name = "Student";
    this->gpa = 0.0;
}
Student::Student(string id, string name, float gpa){
    this->id = id;
    this->name = name;
    this->gpa = gpa;
}
Student::Student(const Student &student){
    this->id = student.id;
    this->name = student.name;
    this->gpa = student.gpa;
}
int main(){
    Student student1;// goi ham khoi tao mac dinh
    cout<<student1.toString()<<endl;
    Student student2 = Student("001","Minh Anh", 3.4);// khoi tao co doi so
    cout<<student2.toString()<<endl;
    Student student3 = student2;// khoi tao sao chep
    cout<<student3.toString()<<endl;
    // vì hàm setId public nên mình có thể thay đổi được giá trị thông qua hàm set
    cout<<"sau khi thay đổi: "<<endl;
    student3.setId("003");
    cout<<student3.toString()<<endl;
}