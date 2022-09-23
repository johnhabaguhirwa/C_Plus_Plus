#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>


class HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;

    public:
        HumanB(std::string name);// when you recieve weapon... treat it as a reference
        ~HumanB();
        void        attack();
        void        setWeapon(Weapon &weapon);
};
#endif