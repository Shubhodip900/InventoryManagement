#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <string>

class Supplier {
public:
    Supplier(int id, const std::string& name, const std::string& contactInfo);

    int getId() const;
    std::string getName() const;
    std::string getContactInfo() const;

    void setName(const std::string& name);
    void setContactInfo(const std::string& contactInfo);

private:
    int id;
    std::string name;
    std::string contactInfo;
};

#endif // SUPPLIER_H
