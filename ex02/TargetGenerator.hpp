#pragma once


#include <iostream>
#include <vector>
#include <iterator>
class ATarget;

class TargetGenerator{
        public:
            TargetGenerator();
            ~TargetGenerator();


            void learnTargetType(ATarget *el);
            void forgetTargetType(std::string const &str);
            ATarget *createTarget(std::string const &str);

        private:

            std::vector<ATarget *> arr;
            TargetGenerator(TargetGenerator const &rhs);
            TargetGenerator &operator=(TargetGenerator const &rhs);

};
#include "ATarget.hpp"
