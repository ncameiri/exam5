#ifndef DUMMY_HPP
#define DUMMY_HPP
#include "ATarget.hpp"

class dummy : public ATarget
{
    public:
    dummy();
    virtual ~dummy();
    ATarget *clone() const;
};

#endif