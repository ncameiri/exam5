#include"TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){}

TargetGenerator::TargetGenerator(TargetGenerator const &rhs)
    {}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &rhs){
    return(*this);
}

void TargetGenerator::learnTargetType(ATarget *el){
    std::vector<ATarget *>::iterator it;
    it = tg_book.begin();
        for(; it != tg_book.end(); it++){
            if((*it)->getType() == el->getType()){
                return;
            }
        }
        tg_book.push_back(el->clone());
}

void TargetGenerator::forgetTargetType(std::string const &targ){
    std::vector<ATarget *>::iterator it;
    it = tg_book.begin();
        for(; it != tg_book.end(); it++){
            if((*it)->getType() == targ){
                
                tg_book.erase(it);
            }
        }
}

ATarget *TargetGenerator::createTarget(std::string const &n_targ){
     std::vector<ATarget *>::iterator it;
    it = tg_book.begin();
        for(; it != tg_book.end(); it++){
            if((*it)->getType() == n_targ){
                return (*it);
            }
        }
        return nullptr;
}