//
// Created by rrivas on 28/03/2025.
//

#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
    std::string name_;
public:
    Person() = default;
    Person(std::string name);
    [[nodiscard]] std::string get_name() const;
};

struct Figura {
    virtual void draw() = 0;
    virtual ~Figura() = default;
};


#endif //PERSON_H


/*
    p1.get_name();

    auto name = p1.get_name();
    std::cout << p1.get_name();

 */