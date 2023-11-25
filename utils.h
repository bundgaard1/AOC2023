#pragma once

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

template <typename T>
void print_vector(vector<T> v) {
    cout << "{";
    for (T a : v) {
        cout << a << ", ";
    }
    cout << "}" << endl;
}
