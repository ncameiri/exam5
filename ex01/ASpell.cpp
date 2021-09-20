#include "ASpell.hpp"

ASpell::ASpell(std::string _name, std::string _effect):
    name(_name),
    effects(_effect)
    {};

ASpell::~ASpell(){};

ASpell::ASpell(ASpell const &to_copy):
    name(to_copy.name),
    effects(to_copy.effects)
{};

ASpell &ASpell::operator=(ASpell const &to_copy){
    name = to_copy.name;
    effects = to_copy.effects;
    return (*this);
}

std::string const &ASpell::getName() const{
    return (this->name);
}

std::string const &ASpell::getEffects() const{
    return (this->effects);
}

void ASpell::launch(ATarget const &el){
    el.getHitBySpell(*this);
}