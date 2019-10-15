#pragma once

#include "OpinionVector.h"

// Directed relationship
class Relationship {
  // From |first| to |second|
  std::pair<std::string, std::string> _people;
  std::unordered_map<std::string, std::shared_ptr<OpinionVector>> _levels;
public:
  Relationship(const std::string &from, const std::string &to);
};
