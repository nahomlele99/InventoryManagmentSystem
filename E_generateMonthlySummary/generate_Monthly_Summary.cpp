#include<iostream>
#include<vector>
#include"generate_Monthly_Summary.h"

using namespace std;

vector<Transaction> transactions;
vector<Customer> customers;

void generate_Monthly_Summary(const string& monthYear) {
    double totalSales = 0.0;
    double totalPurchases = 0.0;
    int newCustomers = 0;

    for (const auto& transaction : transactions) {
        if (transaction.date.substr(0, 7) == monthYear) {
            if (transaction.type == sale) {
                totalSales += transaction.amount;
            } else if (transaction.type == purchase) {
                totalPurchases += transaction.amount;
            }
        }
    }

    for (const auto& customer : customers) {
        if (customer.registrationDate.substr(0, 7) == monthYear) {
            ++newCustomers;
        }
    }

    cout << "Monthly Summary for " << monthYear << ":\n";
    cout << "Total Sales: " << totalSales << "\n";
    cout << "Total Purchases: " << totalPurchases << "\n";
    cout << "New Customers: " << newCustomers << "\n";
}

