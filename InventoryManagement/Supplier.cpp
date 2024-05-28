#include "Supplier.h"

Supplier::Supplier(int id, const std::string& name, const std::string& contactInfo)
    : id(id), name(name), contactInfo(contactInfo) {}

int Supplier::getId() const { return id; }
std::string Supplier::getName() const { return name; }
std::string Supplier::getContactInfo() const { return contactInfo; }

void Supplier::setName(const std::string& name) { this->name = name; }
void Supplier::setContactInfo(const std::string& contactInfo) { this->contactInfo = contactInfo; }
