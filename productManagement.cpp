#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//             STRUCTS
struct Product {
    int id;
    string name;
    string category;
    double price;
    int quantity;
};

struct Supplier {
    int id;
    string name;
    string contact;
};

struct Customer {
    int id;
    string name;
    string contact;
};