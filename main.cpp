#include <iostream>
#include <cstdlib>
#include "string.h"
#include "./src/compress.h"
#include "./src/decompress.h"
using namespace std;

int main(int argc, char** argv) {
  if (argc < 3) {
    cout << "Not enough arguments, exiting" << endl;
    return 0;
  }
  if (strcmp(argv[1], "compress") == 0) {
    cout << "Starting with compress action" << endl;
    cout << "File to compress: " << argv[2] << endl;
    compress(argv[2]);
  }
  else if (strcmp(argv[1], "decompress") == 0) {
    cout << "Starting with decompress action" << endl;
    cout << "File to decompress: " << argv[2] << endl;
    decompress();
  }
  else {
    cout << "First argument is invalid, exiting" << endl;
    return 0;
  }
}