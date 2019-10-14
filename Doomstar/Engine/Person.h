#pragma once

#include "Relationship.h"

class Person {
  std::string _uniqueId;
  std::string _name;
  std::unordered_map<std::string, std::shared_ptr<Relationship>> _rels;
  std::unordered_map<std::string, double> _levels;

public:
  explicit Person(const std::string& uniqueId);
  Relationship* GetRelationship(const std::string& fellow, const bool create);
};
