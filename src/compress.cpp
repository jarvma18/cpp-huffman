#include <iostream>
#include <fstream>
#include <string>
using namespace std;
using namespace std;

int compress(char* fileName) {
  string line;
  ifstream file(fileName, ios::binary);
  if (file.is_open()) {
    while (getline(file,line)) {
      cout << line << '\n';
    }
    file.close();
  }
  else {
    cout << "Unable to open file, exiting" << endl;
  }
  return 0;
}