#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>


class Warlock{

    private:
        std::string name;
        std::string title;
        Warlock(Warlock const &to_copy);
        Warlock &operator=(Warlock const &to_copy);
    
    public:
        Warlock(std::string _name, std::string __title);
        ~Warlock();

        //getters
        std::string const &getName() const;
        std::string const &getTitle() const;

        //setters
        void setTitle(std::string const &new_title);

        void introduce() const;



};

#endif