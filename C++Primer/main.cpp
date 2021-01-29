//
//  main.cpp
//  C++Primer
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void showValues(vector<int> vec);

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
    showValues(numbers);
    
    cout << numbers.at(1) << endl;
    
    numbers.pop_back();
    showValues(numbers);
    
    numbers.clear();
    showValues(numbers);
    cout << numbers.size() << endl;
    
    bool empty = numbers.empty();
    cout << empty << endl;
    
    return 0;
}

void showValues(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}
