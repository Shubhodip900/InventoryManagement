#include <iostream>
#include "Inventory.h"

void displayMenu() {
    std::cout << "Inventory Management System\n";
    std::cout << "1. Add Product\n";
    std::cout << "2. Update Product\n";
    std::cout << "3. Delete Product\n";
    std::cout << "4. View All Products\n";
    std::cout << "5. Add Supplier\n";
    std::cout << "6. Update Supplier\n";
    std::cout << "7. Delete Supplier\n";
    std::cout << "8. View All Suppliers\n";
    std::cout << "9. Generate Inventory Report\n";
    std::cout << "10. Generate Supplier Report\n";
    std::cout << "0. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    Inventory inventory;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;
        switch (choice) {
            case 1: {
                int id, quantity, supplierId;
                std::string name, category;
                double price;
                std::cout << "Enter product ID: ";
                std::cin >> id;
                std::cout << "Enter product name: ";
                std::cin >> name;
                std::cout << "Enter category: ";
                std::cin >> category;
                std::cout << "Enter quantity: ";
                std::cin >> quantity;
                std::cout << "Enter price: ";
                std::cin >> price;
                std::cout << "Enter supplier ID: ";
                std::cin >> supplierId;
                Product product(id, name, category, quantity, price, supplierId);
                inventory.addProduct(product);
                break;
            }
            case 2: {
                int id, quantity, supplierId;
                std::string name, category;
                double price;
                std::cout << "Enter product ID to update: ";
                std::cin >> id;
                std::cout << "Enter new product name: ";
                std::cin >> name;
                std::cout << "Enter new category: ";
                std::cin >> category;
                std::cout << "Enter new quantity: ";
                std::cin >> quantity;
                std::cout << "Enter new price: ";
                std::cin >> price;
                std::cout << "Enter new supplier ID: ";
                std::cin >> supplierId;
                Product updatedProduct(id, name, category, quantity, price, supplierId);
                inventory.updateProduct(id, updatedProduct);
                break;
            }
            case 3: {
                int id;
                std::cout << "Enter product ID to delete: ";
                std::cin >> id;
                inventory.deleteProduct(id);
                break;
            }
            case 4: {
                std::vector<Product> products = inventory.getAllProducts();
                for (const auto& product : products) {
                    std::cout << "ID: " << product.getId() << ", Name: " << product.getName()
                              << ", Category: " << product.getCategory() << ", Quantity: " << product.getQuantity()
                              << ", Price: " << product.getPrice() << ", Supplier ID: " << product.getSupplierId() << "\n";
                }
                break;
            }
            case 5: {
                int id;
                std::string name, contactInfo;
                std::cout << "Enter supplier ID: ";
                std::cin >> id;
                std::cout << "Enter supplier name: ";
                std::cin >> name;
                std::cout << "Enter contact info: ";
                std::cin >> contactInfo;
                Supplier supplier(id, name, contactInfo);
                inventory.addSupplier(supplier);
                break;
            }
            case 6: {
                int id;
                std::string name, contactInfo;
                std::cout << "Enter supplier ID to update: ";
                std::cin >> id;
                std::cout << "Enter new supplier name: ";
                std::cin >> name;
                std::cout << "Enter new contact info: ";
                std::cin >> contactInfo;
                Supplier updatedSupplier(id, name, contactInfo);
                inventory.updateSupplier(id, updatedSupplier);
                break;
            }
            case 7: {
                int id;
                std::cout << "Enter supplier ID to delete: ";
                std::cin >> id;
                inventory.deleteSupplier(id);
                break;
            }
            case 8: {
                std::vector<Supplier> suppliers = inventory.getAllSuppliers();
                for (const auto& supplier : suppliers) {
                    std::cout << "ID: " << supplier.getId() << ", Name: " << supplier.getName()
                              << ", Contact Info: " << supplier.getContactInfo() << "\n";
                }
                break;
            }
            case 9: {
                inventory.generateInventoryReport();
                break;
            }
            case 10: {
                inventory.generateSupplierReport();
                break;
            }
            case 0:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
