#!/bin/sh
cat  << EOF
#ifndef $1_HPP
#define $1_HPP

#include <iostream>

class $1{
    private:
    //args
    
    public:
    $1(/*args*/);
    ~$1();
    $1($1 const &rhs);
    $1 &operator=($1 const &rhs);
};

#endif
EOF