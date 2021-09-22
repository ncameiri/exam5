#include "Warlock.hpp"

Warlock::Warlock(std::string _name, std::string _title):
    name(_name),
    title(_title)
    {
        std::cout<< _name
        <<": This looks like another boring day."
        <<std::endl;
    }

Warlock::Warlock(Warlock const &to_copy):
    name(to_copy.name),
    title(to_copy.title)
    {
        std::cout<< name
        <<": This looks like another boring day."
        <<std::endl;
    }
Warlock::~Warlock(){
         std::cout<<name
        <<": My job here is done!"
        <<std::endl;
}

Warlock &Warlock::operator= (Warlock const &to_copy){
    name = to_copy.name;
    title = to_copy.title;
    return(*this);
}

std::string const &Warlock::getName() const{
    return(this->name);
}

std::string const &Warlock::getTitle() const{
    return(this->title);
}

void Warlock::setTitle(std::string const &new_title){
    title = new_title;
}

void Warlock::introduce() const{
    std::cout<< name
    <<": I am "<< name
    <<", "<<title<<
    "!"<<std::endl;
}

void Warlock::learnSpell(ASpell *sp){

}

void Warlock::forgetSpell(std::string const &forg){
   
}

void Warlock::launchSpell(std::string sp, ATarget const &targ){
    std::vector< ASpell *>::iterator it;
     for (it = spells.begin(); it != spells.end(); it++){
        if((*it)->getName() == sp){
            (*it)->launch(targ);
        }
     }


}