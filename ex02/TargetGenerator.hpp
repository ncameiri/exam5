#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include <iostream>
#include <vector>
#include <iterator>
#include "ATarget.hpp"
class TargetGenerator{
    private:
    std::vector<ATarget *> tg_book;
    TargetGenerator(TargetGenerator const &rhs);
    TargetGenerator &operator=(TargetGenerator const &rhs);
    
    public:
    
    TargetGenerator();
    ~TargetGenerator();
    
    void learnTargetType(ATarget *el);
    void forgetTargetType(std::string const &targ);
    ATarget *createTarget(std::string const &n_targ);


};


#endif