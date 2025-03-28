//
// Created by rrivas on 28/03/2025.
//

#include "person.h"

Person::Person(std::string name): name_(name) {
}

std::string Person::get_name() const {
    return name_;
}
