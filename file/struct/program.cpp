#include <bits/stdc++.h>
using namespace std;
class info_type
{
    private:
        std::string name;
        int age;
        float height;
    public:
        info_type(){};
        info_type(string name, int age, float height){this->name = name;this->age = age;this->height = height;}
        string getName(){return name;}
        int getAge(){return age;}
        float getHeight(){return height;}
    // we define an overload of operator>> as a friend function which
    // gives in privileged access to private data members
    friend std::istream &operator>>(std::istream &is, info_type &info)
    {
        // skip whitespace
        is >> std::ws;
        std::getline(is, info.name);
        is >> info.age;
        is >> info.height;
        return is;
    }
};
class info_types
{
public:
    vector<info_type> v;
    info_types() { v = vector<info_type>(); }
    vector<info_type> readFromFile(string path)
    {
        auto file = std::ifstream(path);
        info_type info;
        while (file >> info)
        {
            v.push_back(info);
        }
        return v;
    }
    string toString()
    {
        ostringstream ss;
        for (auto &info : v)
        {
            ss << " name: " << info.getName() << '\n';
            ss << " age: " << info.getAge() << " years" << '\n';
            ss << "height: " << info.getHeight() << "lbs" << '\n';
            ss << '\n';
        }
        return ss.str();
    }
};
int main()
{
    info_types types;
    types.readFromFile("./file/struct/data.in");
    cout<<types.toString()<<endl;
    return 0;
}