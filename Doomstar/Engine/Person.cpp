#include "pch.h"
#include "Person.h"
using namespace std;

Person::Person(const string& uniqueId) : _uniqueId(uniqueId) {
}

Relationship* Person::GetRelationship(const string& fellow, const bool create) {
  auto it = _rels.find(fellow);
  if (it == _rels.end()) {
    if (create) {
      Relationship *ans;
      _rels.emplace(fellow, ans = new Relationship(_uniqueId, fellow));
      return ans;
    }
    else {
      return nullptr;
    }
  }
  return it->second.get();
}
