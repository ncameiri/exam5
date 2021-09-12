#include "Dummy.hpp"
dummy::dummy():ATarget("dummy"){}

dummy::~dummy(){}

ATarget *dummy::clone() const{
    return (new dummy());
}