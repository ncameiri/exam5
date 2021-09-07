#include"ASpell.hpp"

ASpell::ASpell ( std::string _name, std::string _effects):
    name(_name),
    effects(_effects)
{};

ASpell::~ASpell(){};

ASpell::ASpell (ASpell const& to_copy){
    *this=to_copy;
};

ASpell ASpell::operator=(ASpell const& to_copy){
    this->name= to_copy.name;
    this->effects = to_copy.effects;
    return(*this);
};


std::string ASpell::getName(void){
    return(this->name);
};


std::string ASpell::getEffects(void){
    return(this->effects);
};
