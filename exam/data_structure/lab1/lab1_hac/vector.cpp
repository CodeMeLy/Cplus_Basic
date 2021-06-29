#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> animals = {"dog", "cat", "horse", "turtle", "duck"};
    int size = animals.size();
    string animal;
    cin >> animal;

    for(int i=0; i<size; i++)
        if((i = size - 1) && (animals[i] != animal))
            {
                animals.push_back(animal);
                size++;
            }
    for(vector<string>::iterator it = animals.begin(); it!= animals.end(); it++)
        cout << *it << " ";
    return 0;
}