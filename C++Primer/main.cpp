//
//  main.cpp
//  C++Primer
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void show_values(vector<int> vec);
int linear_search(const int list[], int val, int length);

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
        
    
    /** ******************** vector *********************/
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
    
    
    /** ******************** search *********************/
    int list[] = {12, 45, 7, 2, 10, 66};
    int val = 16;
    int len = sizeof(list)/sizeof(list[0]);
    int position = linear_search(list, val, len);
    if (position == -1) {
        cout << "do not find the value " << val << endl;
    }
    else {
        cout << "find the value " << list[position] << " in the list" << endl;
    }
    
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
    int position = -1, index = 0;
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
