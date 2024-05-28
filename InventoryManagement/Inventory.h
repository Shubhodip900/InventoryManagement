#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Product.h"
#include "Supplier.h"

class Inventory {
public:
    void addProduct(const Product& product);
    void updateProduct(int id, const Product& updatedProduct);
    void deleteProduct(int id);
    Product* findProduct(int id);
    std::vector<Product> getAllProducts() const;

    void addSupplier(const Supplier& supplier);
    void updateSupplier(int id, const Supplier& updatedSupplier);
    void deleteSupplier(int id);
    Supplier* findSupplier(int id);
    std::vector<Supplier> getAllSuppliers() const;

    void generateInventoryReport() const;
    void generateSupplierReport() const;

private:
    std::vector<Product> products;
    std::vector<Supplier> suppliers;
};

#endif // INVENTORY_H

