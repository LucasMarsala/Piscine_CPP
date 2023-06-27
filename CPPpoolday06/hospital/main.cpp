#include "SickKoala.hpp"

int main(void)
{
  try {
    SickKoala test("Poo");
    test.poke();
    test.takeDrug("MaRs");
    test.takeDrug("kinDER");
    test.takeDrug("nada");
    test.takeDrug("");
    test.overDrive("Kreog! How's it going ?\n");
    test.overDrive("Kreog! How's it Kreog!Kreog!Kreog!Kreog! going ?\n");
    test.overDrive("dwqidjqwjdi jdwijqw pidjqiw How's it going ?\n");
  } catch (const exception &e) {
    cerr << "Error in the program: " << e.what();
    return 1;
  }
  return 0;
}
