#include<iostream>
#include"Product_Status.h"

using namespace std;

// Track if a product is available, low stock, or out of stock

inline Product_Status get_Product_Status(int quantity) {
    if (quantity == 0) return OUT_OF_STOCK;
    else if (quantity < 5) return LOW_STOCK;
    return IN_STOCK;
}

/*
    updated according to the quantity of the product and is calculated
    when the product is added.
*/