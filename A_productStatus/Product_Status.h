#include <iostream>

using namespace std;

//enum
enum Product_Status {
    IN_STOCK,
    LOW_STOCK,
    OUT_OF_STOCK
};

Product_Status get_Product_Status(int quantity);