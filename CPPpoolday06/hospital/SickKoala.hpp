#ifndef SICKKOALA_HPP_
#define SICKKOALA_HPP_

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class SickKoala {
    public:
        explicit SickKoala(string) noexcept;
        // SickKoala(SickKoala const &) noexcept;
        // explicit SickKoala(SickKoala &&) noexcept;
        ~SickKoala() noexcept;
        void poke(void) noexcept;
        bool takeDrug(string);
        void overDrive(string) noexcept;
    private:
      string _name;
};

#endif /* SickKoala_HPP_ */
