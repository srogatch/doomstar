#pragma once

// Directed relationship
class Relationship {
  // From |first| to |second|
  std::pair<std::string, std::string> _people;
  std::unordered_map<std::string, double> _levels;
public:
  Relationship(const std::string &from, const std::string &to);
};
