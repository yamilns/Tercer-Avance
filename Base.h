#ifndef BASE_H
#define BASE_H

class Base {
protected:
    int id;
public:
    Base(int _id) : id(_id) {}
    virtual int getId() const { return id; }
    virtual void mostrarInfo() const = 0;
    virtual ~Base() = default;
};

#endif // BASE_H
