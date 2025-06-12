#include<iostream>
#include<vector>
#include"supplier_Blacklist.h"

using namespace std;

vector<Supplier> suppliers;

void blacklist_Supplier(int id) {
    for (auto& s : suppliers) {
        if (s.id == id) {
            s.status = BLACKLISTED;
            cout << "Supplier blacklisted.\n";
            return;
        }
    }
    cout << "Supplier not found.\n";
}

bool is_Blacklisted(int id) {
    for (const auto& s : suppliers) {
        if (s.id == id)
            return s.status == BLACKLISTED;
    }
    return false;
}