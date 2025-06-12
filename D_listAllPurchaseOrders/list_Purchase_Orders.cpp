#include<iostream>
#include<vector>
#include"list_Purchase_Orders.h"

using namespace std;

vector<PurchaseOrder> purchaseOrders;

void list_All_Purchase_Orders() {
    for (const auto& po : purchaseOrders) {
        cout << "Order ID: " << po.orderId
                  << ", Product ID: " << po.productId
                  << ", Quantity: " << po.quantity
                  << ", Status: " << (po.status == ACTIVE ? "Active" : "Completed") << "\n";
    }
}