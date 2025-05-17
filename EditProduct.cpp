void editProduct(vector<Product>& inventory) {
    if (inventory.empty()) {
        cout << "\nNo products in inventory to edit.\n";
        return;
    }
    
    viewProducts(inventory);
    int idToEdit;
    cout << "\nEnter the ID of the product to edit: ";
    cin >> idToEdit;
    
    bool found = false;
    for (auto& product : inventory) {
        if (product.id == idToEdit) {
            found = true;
            
            cout << "\nEditing Product ID: " << product.id << "\n";
            cout << "Current name: " << product.name << "\n";
            cout << "Enter new name (or press enter to keep current): ";
            cin.ignore();
            string newName;
            getline(cin, newName);
            if (!newName.empty()) {
                product.name = newName;
            }
            
            cout << "Current description: " << product.description << "\n";
            cout << "Enter new description (or press enter to keep current): ";
            string newDesc;
            getline(cin, newDesc);
            if (!newDesc.empty()) {
                product.description = newDesc;
            }
            
            cout << "Current price: " << product.price << "\n";
            cout << "Enter new price (or 0 to keep current): ";
            double newPrice;
            if (cin >> newPrice && newPrice > 0) {
                product.price = newPrice;
            }
            
            cout << "Current quantity: " << product.quantity << "\n";
            cout << "Enter new quantity (or -1 to keep current): ";
            int newQty;
            if (cin >> newQty && newQty >= 0) {
                product.quantity = newQty;
            }
            
            cin.ignore();
            cout << "Current category: " << product.category << "\n";
            cout << "Enter new category (or press enter to keep current): ";
            string newCat;
            getline(cin, newCat);
            if (!newCat.empty()) {
                product.category = newCat;
            }
            
            cout << "Product updated successfully.\n";
            break;
        }
    }
    
    if (!found) {
        cout << "Product with ID " << idToEdit << " not found.\n";
    }
}

