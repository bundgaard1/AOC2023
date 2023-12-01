#pragma once

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <cassert>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

template <typename T>
void print_vector(vector<T> v) {
    cout << "{";
    for (T a : v) {
        cout << a << ", ";
    }
    cout << "}" << endl;
}


// vector<string> tokenize(const string& l, char tokenizer) {
//     vector<string> tokens;
//     stringstream check(l);
//     string part;
//     while (getline(check, part, tokenizer)) {
//         tokens.push_back(part);
//     }
//     return tokens;
// }