#include "Product.h"

Product::Product(int id, const std::string& name, const std::string& category, int quantity, double price, int supplierId)
    : id(id), name(name), category(category), quantity(quantity), price(price), supplierId(supplierId) {}

int Product::getId() const { return id; }
std::string Product::getName() const { return name; }
std::string Product::getCategory() const { return category; }
int Product::getQuantity() const { return quantity; }
double Product::getPrice() const { return price; }
int Product::getSupplierId() const { return supplierId; }

void Product::setName(const std::string& name) { this->name = name; }
void Product::setCategory(const std::string& category) { this->category = category; }
void Product::setQuantity(int quantity) { this->quantity = quantity; }
void Product::setPrice(double price) { this->price = price; }
void Product::setSupplierId(int supplierId) { this->supplierId = supplierId; }
