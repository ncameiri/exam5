#!/bin/sh
cat  << EOF
#include "$1.hpp"

$1::$1(){
};

$1::$1($1 const &rhs){
   
}

$1 &$1::operator=($1 const &rhs){
    return (*this);
}

$1::~$1(){
   
}
EOF

