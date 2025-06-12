#include<iostream>

using namespace std;


enum Order_Status {
    ACTIVE,
    COMPLETED
};

struct PurchaseOrder {
    // purchase information
    int orderId;
    int productId;
    int quantity;
    // add more information
    Order_Status status;
};

void list_All_Purchase_Orders();