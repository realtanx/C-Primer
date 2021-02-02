//
//  main.cpp
//  C++Primer
//

#include <iostream>
#include <string>
#include <vector>

#include "Rectangle.hpp"

using namespace std;

const int SEARCH_NOT_FOUND = -1;

void show_values(vector<int> vec);
int linear_search(const int list[], int val, int length);
int binary_search(const int list[], int val, int length);

// class declaration
class Car {
private:
    string name;
    
public:
    void set_name(string);
    
    // inline member function
    string get_name() {
        return name;
    }
};

void Car::set_name(string s)
{
    name = s;
}

int main(int argc, const char * argv[])
{
    char w;
    w = 65;
    cout << w << endl;
    
    double apple = 324.456;
    cout << sizeof(apple) << endl;
    
    /*
    double length, width, area;
    cout << "enter length?" << endl;
    cin >> length;
    cout << "enter width?" << endl;
    cin >> width;
    area = length * width;
    cout << "the area is " << area << endl;
    
    cout << "enter the length and width, separated by a space." << endl;
    cin >> length >> width;
    area = length * width;
    cout << "the new area is " << area << endl;
     */
        
    cout << endl;
    cout << "/********************** vector **********************/" << endl;
    cout << endl;
    
    vector<int> numbers;
    vector<char> str (10, 'a');
    for (char sVal : str) {
        cout << sVal << endl;
    }
    str.push_back('b');
    cout << str.size() << endl;
    
    numbers.push_back(23);
    numbers.push_back(24);
    numbers.push_back(25);
    show_values(numbers);
    
    cout << numbers.at(1) << endl;
    
    numbers.pop_back();
    show_values(numbers);
    
    numbers.clear();
    show_values(numbers);
    cout << numbers.size() << endl;
    
    bool empty = numbers.empty();
    cout << empty << endl;
    
    
    cout << endl;
    cout << "/********************** search **********************/" << endl;
    cout << endl;
    
    int list[] = {12, 45, 7, 2, 10, 66};
    int val = 16;
    int len = sizeof(list)/sizeof(list[0]);
    int position = linear_search(list, val, len);
    if (position == SEARCH_NOT_FOUND) {
        cout << "do not find the value " << val << endl;
    }
    else {
        cout << "find the value " << list[position] << " in the list" << endl;
    }
    
    cout << endl;
    cout << "/********************** class **********************/" << endl;
    cout << endl;
    
    Car car;
    car.set_name("Benz");
    cout << "the car's name is " << car.get_name() << endl;
    
    // Dynamically allocate
    Rectangle *rec = new Rectangle;
    rec->set_width(20.0);
    rec->set_height(20.0);
    
    cout << "the square's area: " << rec->get_area() << endl;
    delete rec;
    rec = nullptr;
    
    cout << endl << endl;
    
    return 0;
}

void show_values(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

int linear_search(const int list[], int val, int length)
{
    int position = SEARCH_NOT_FOUND, index = 0;
    bool found = false;
    
    while (index < length && !found) {
        if (val == list[index]) {
            found = true;
            position = index;
        }
        
        index++;
    }
    
    return position;
}

// the list must be sorted before searching.
int binary_search(const int list[], int val, int length)
{
    int position = SEARCH_NOT_FOUND;
    int first = 0;
    int last = length - 1;
    
    while (first <= last) {
        int middle = (first + last)/2;
        
        if (list[middle] == val) {
            return middle;
        }
        else if (val < list[middle]) {
            last = middle - 1;
        }
        else {
            first = middle + 1;
        }
    }
    
    return position;
}


