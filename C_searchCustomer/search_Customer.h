#include<iostream>

using namespace std;

struct Customer {
    int id;
    string name;
    string contact;
};

//overloading
void search_Customer(int id);
void search_Customer(string name);
void search_Customer(string contact);