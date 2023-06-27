#include "SickKoala.hpp"

SickKoala::SickKoala(string name) noexcept : _name(name)
{
}

SickKoala::~SickKoala() noexcept
{
  cout << "Mr." << _name << ": Kreooogg!! I'm cuuuured!\n";
}

void SickKoala::poke(void) noexcept
{
  cout << "Mr." << _name << ": Gooeeeeerrk!!\n";
}

bool SickKoala::takeDrug(string drug)
{
  transform(drug.begin(), drug.end(), drug.begin(), ::tolower);
  if (drug == "mars")
    cout << "Mr." << _name << ": Mars, and it kreogs!\n";
  else if (drug == "kinder")
    cout << "Mr." << _name << ": There is a toy inside!\n";
  else {
    cout << "Mr." << _name << ": Goerkreog!\n";
    return false;
  }
  return true;
}

void SickKoala::overDrive(string fever) noexcept
{
  while (fever.find("Kreog!") != string::npos)
    fever.replace(fever.find("Kreog!"), 6, "1337!");
  cout << "Mr." << _name << ": " << fever;
}
