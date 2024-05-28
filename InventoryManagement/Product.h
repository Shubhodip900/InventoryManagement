#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    Product(int id, const std::string& name, const std::string& category, int quantity, double price, int supplierId);

    int getId() const;
    std::string getName() const;
    std::string getCategory() const;
    int getQuantity() const;
    double getPrice() const;
    int getSupplierId() const;

    void setName(const std::string& name);
    void setCategory(const std::string& category);
    void setQuantity(int quantity);
    void setPrice(double price);
    void setSupplierId(int supplierId);

private:
    int id;
    std::string name;
    std::string category;
    int quantity;
    double price;
    int supplierId;
};

#endif // PRODUCT_H
