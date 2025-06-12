#include<iostream>
#include<vector>
#include"search_Customer.h"

using namespace std;

vector<Customer> customers;

//applying overloading - same function name each with different parameters
//Search by ID
void search_Customer(int id) {
    for (const auto& c : customers) {
        if (c.id == id) {
            cout << "Customer Found: " << c.name << ", Contact: " << c.contact << "\n";
            return;
        }
    }
    cout << "Customer not found.\n";
}

//Search by Name
void search_Customer(string name) {
    for (const auto& c : customers) {
        if (c.name == name) {
            cout << "Customer Found: ID: " << c.id << ", Contact: " << c.contact << "\n";
            return;
        }
    }
    cout << "Customer not found.\n";
}

//Search by Contact
void search_Customer(string contact) {
    for (const auto& c : customers) {
        if (c.contact == contact) {
            cout << "Customer Found: ID: " << c.id << ", Name: " << c.name << "\n";
            return;
        }
    }
    cout << "Customer not found.\n";
}