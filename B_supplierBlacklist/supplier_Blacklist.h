#include<iostream>

using namespace std;

//enum
enum blacklistSupplier {
    ACTIVE,
    BLACKLISTED
};

//Supplier struct
struct Supplier {
    int id;
    string name;
    blacklistSupplier status;
};


void blacklist_Supplier(int id);
bool is_Blacklisted(int id);