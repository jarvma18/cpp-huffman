#include <iostream>
#include <cstdlib>
#include "string.h"
using namespace std;

int main(int argc, char** argv) {
  if (argc < 3) {
    cout << "Not enough arguments, exiting" << endl;
    return 0;
  }
  if (strcmp(argv[1], "compress") == 0) {
    cout << "Starting with compress action" << endl;
    cout << "Getting file name from second argument" << endl;
  }
  else if (strcmp(argv[1], "decompress") == 0) {
    cout << "Starting with decompress action" << endl;
    cout << "Getting file name from second argument" << endl;
  }
  else {
    cout << "First argument is invalid, exiting" << endl;
    return 0;
  }
}