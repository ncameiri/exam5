#include "ASpell.hpp"

ASpell::ASpell(std::string _name, std::string _effect):
    name(_name),
    effects(_effect)
    {};

ASpell::~ASpell(){};

ASpell::ASpell(ASpell const &to_copy)