#include<iostream>

using namespace std;

enum transactionType{
    sale,
    purchase
};

struct Transaction {
    transactionType type; 
    double amount;
    string date;
};

//to track new customers
struct Customer {
    int id;
    string name;
    string contact;
    string registrationDate;
};


void generate_Monthly_Summary(const string& monthYear);
