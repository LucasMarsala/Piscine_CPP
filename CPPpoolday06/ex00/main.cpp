#include <iostream>
#include <fstream>

using namespace std;

void display_help(void)
{
  cout << "my_cat:\tUsage:\t./my_cat file [...]";
}

void display_content_files(int ac, char **av)
{
  string content;

  for (int i = 1; ac > i; ++i) {
    ifstream my_file(av[i]);
    if (my_file.is_open()) {
      while (getline(my_file, content)) {
        cout << content << "\n";
      }
    } else {
      cerr << string{av[i]} + string{": No such file or directory\n"};
    }
    my_file.close();
  }
}

int main(int ac, char **av)
{
  try {
    if (ac == 1)
      display_help();
    else
      display_content_files(ac, av);
  } catch (const exception &e) {
    cerr << "my_cat: " << e.what();
    return 1;
  }
  return 0;
}
