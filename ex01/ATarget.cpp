#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(std::string type):
    _type(type)
{};

ATarget::~ATarget(){};

ATarget::ATarget(ATarget &const to_copy){
    *this = to_copy;
};

ATarget  &ATarget::operator= (ATarget const &to_copy){
    this->_type = to_copy._type;
    return(*this);
};

std::string const ATarget::getType(void){
    return(this->_type);
};

void ATarget::getHitBySpell(ASpell const &el) const{
    std::cout<<this->_type<<
    " has been "<<el.getEffects()<<"!\n";
};