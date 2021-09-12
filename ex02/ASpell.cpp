#include"ASpell.hpp"
#include"ATarget.hpp"

ASpell::ASpell ( std::string _name, std::string _effects):
    name(_name),
    effects(_effects)
{};

ASpell::~ASpell(){};

ASpell::ASpell (ASpell const& to_copy){
    *this=to_copy;
};

ASpell &ASpell::operator=(ASpell const &to_copy){
    this->name= to_copy.name;
    this->effects = to_copy.effects;
    return(*this);
};


std::string const &ASpell::getName(void){
    return(this->name);
};


std::string  const &ASpell::getEffects(void)const{
    return(this->effects);
};

 void ASpell::launch(ATarget const &el) const{
    el.getHitBySpell(*this);
 };
