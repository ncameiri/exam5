#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){};

TargetGenerator::TargetGenerator(TargetGenerator const &rhs){
    (void) rhs;
};

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &rhs){
    (void) rhs;
    return(*this);
}
TargetGenerator::~TargetGenerator(){

};

void TargetGenerator::learnTargetType(ATarget *el){
    std::vector<ATarget *> ::iterator it;
    for(it=arr.begin(); it!=arr.end(); it++){
        if((*it)->getType() == el->getType())
            return;
    }
        arr.push_back(el);
}

void TargetGenerator::forgetTargetType(std::string const &str){
    std::vector<ATarget *> ::iterator it;
        for(it=arr.begin(); it!=arr.end(); it++){
            if((*it)->getType() == str)
            {
                delete *it;
                arr.erase(it);
                return;
            }
        }
}


ATarget *TargetGenerator::createTarget(std::string const &str){
     std::vector<ATarget *> ::iterator it;
        for(it=arr.begin(); it!=arr.end(); it++){
            if((*it)->getType() == str)
            {
                return ( *it);

            }
        }
        return 0;
}



