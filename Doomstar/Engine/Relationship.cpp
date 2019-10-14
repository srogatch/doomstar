#include "pch.h"
#include "Relationship.h"

Relationship::Relationship(const std::string &from, const std::string &to) : _people(from, to) {
}
