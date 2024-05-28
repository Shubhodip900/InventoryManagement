#include "Inventory.h"
#include <iostream>
#include <algorithm>

void Inventory::addProduct(const Product& product) {
    products.push_back(product);
}

void Inventory::updateProduct(int id, const Product& updatedProduct) {
    for (auto& product : products) {
        if (product.getId() == id) {
            product = updatedProduct;
            break;
        }
    }
}

void Inventory::deleteProduct(int id) {
    products.erase(std::remove_if(products.begin(), products.end(),
                                  [id](const Product& product) { return product.getId() == id; }),
                   products.end());
}

Product* Inventory::findProduct(int id) {
    for (auto& product : products) {
        if (product.getId() == id) {
            return &product;
        }
    }
    return nullptr;
}

std::vector<Product> Inventory::getAllProducts() const {
    return products;
}

void Inventory::addSupplier(const Supplier& supplier) {
    suppliers.push_back(supplier);
}

void Inventory::updateSupplier(int id, const Supplier& updatedSupplier) {
    for (auto& supplier : suppliers) {
        if (supplier.getId() == id) {
            supplier = updatedSupplier;
            break;
        }
    }
}

void Inventory::deleteSupplier(int id) {
    suppliers.erase(std::remove_if(suppliers.begin(), suppliers.end(),
                                   [id](const Supplier& supplier) { return supplier.getId() == id; }),
                    suppliers.end());
}

Supplier* Inventory::findSupplier(int id) {
    for (auto& supplier : suppliers) {
        if (supplier.getId() == id) {
            return &supplier;
        }
    }
    return nullptr;
}

std::vector<Supplier> Inventory::getAllSuppliers() const {
    return suppliers;
}

void Inventory::generateInventoryReport() const {
    std::cout << "Inventory Report:\n";
    for (const auto& product : products) {
        std::cout << "Product ID: " << product.getId() << ", Name: " << product.getName()
                  << ", Category: " << product.getCategory() << ", Quantity: " << product.getQuantity()
                  << ", Price: " << product.getPrice() << "\n";
    }
}

void Inventory::generateSupplierReport() const {
    std::cout << "Supplier Report:\n";
    for (const auto& supplier : suppliers) {
        std::cout << "Supplier ID: " << supplier.getId() << ", Name: " << supplier.getName()
                  << ", Contact Info: " << supplier.getContactInfo() << "\n";
    }
}
