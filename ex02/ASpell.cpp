#include"ASpell.hpp"

ASpell::ASpell(std::string const &_name, std::string const &_effects):
    name(_name),
    effects(_effects){};

ASpell::~ASpell(){

}

ASpell::ASpell(ASpell const &rhs):
    name(rhs.name),
    effects(rhs.effects){}

ASpell &ASpell::operator=(ASpell const &rhs){
    name = rhs.name;
    effects = rhs.effects;
    return(*this);
}


std::string const &ASpell::getName() const{
    return(name);
}

std::string const &ASpell::getEffects() const{
    return(effects);
}

void ASpell::launch(ATarget const &el) const{
    el.getHitBySpell(*this);
}