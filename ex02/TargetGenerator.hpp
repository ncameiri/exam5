#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include "ATarget.hpp"
class TargetGenerator {
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *el);
        void forgetTargetType(std::string const &st);
        ATarget* createTarget(std::string const &st);
    private:
         TargetGenerator( TargetGenerator const &to_copy);
        TargetGenerator operator=(TargetGenerator const &to_ass); 

};

#endif