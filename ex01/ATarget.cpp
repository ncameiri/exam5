#include "ATarget.hpp"

ATarget::ATarget(std::string _type):
    type(_type)
    {};

ATarget::~ATarget(){};

ATarget::ATarget(ATarget const &to_copy):
    type(to_copy.type)
    {};

ATarget &ATarget::operator=(ATarget const &to_copy){
    this->type = to_copy.type;
    return(*this);
};

std::string const &ATarget::getType() const{
    return(this->type);
};

void ATarget::getHitBySpell(ASpell const &el) const{
    std::cout<<this->getType()<<
    " has been "<<el.getEffects()<<"!"<<std::endl;
};