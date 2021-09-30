#include "ATarget.hpp"


ATarget::ATarget(std::string const &_type):
type(_type){}

ATarget::~ATarget(){}

ATarget::ATarget(ATarget const &rhs):
    type(rhs.type){}

ATarget &ATarget::operator=(ATarget const &rhs){
    type=rhs.type;
    return(*this);

}

std::string const &ATarget::getType()const{
    return(type);
}

void ATarget::getHitBySpell(ASpell const &el)const{
    std::cout<< type <<" has been "<< el.getEffects()
    <<"!"<<std::endl;

}