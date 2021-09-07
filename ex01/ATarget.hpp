#ifndef ATARGET_HPP
#define ATARGET_HPP

#include<iostream>

class ATarget{
    private:
        std::string _type;
    public:
        ATarget(std::string type);
        ~ATarget();
        ATarget(ATarget &const to_copy);
        ATarget &operator =(ATarget const &to_copy);

        std::string const getType(void);

        void getHitBySpell (ASpell const &el)const;

        virtual ATarget *clone() const = 0;

}; 

#endif