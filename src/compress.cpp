#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm> 
using namespace std;

class CharacterFrequency {
  public:
    int frequency = 0;
    char character;
    CharacterFrequency(int f, const char& c) : frequency(f), character(c) {}
    bool operator > (const CharacterFrequency& charFreq) const {
      return (frequency > charFreq.frequency);
    }
};

vector<CharacterFrequency> countCharacterFrequencies(char* fileName) {
  vector<CharacterFrequency> characterFrequencies;
  CharacterFrequency characterFrequency(0, 0);
  char byte = 0;
  ifstream file(fileName, ios::binary);
  if (file.is_open()) {
    while (file.get(byte)) {
      if (characterFrequencies.size() != 0) {
        int exists = 0;
        for (int i = 0; i < characterFrequencies.size(); i++) {
          if (characterFrequencies[i].character == byte) {
            characterFrequencies[i].frequency += 1;
            exists = 1;
            break;
          }
        }
        if (exists == 0) {
          characterFrequency.character = byte;
          characterFrequency.frequency = 1;
          characterFrequencies.push_back(characterFrequency);
        }
      }
      else {
        characterFrequency.character = byte;
        characterFrequency.frequency = 1;
        characterFrequencies.push_back(characterFrequency);
      }
    }
    file.close();
  }
  else {
    cout << "Unable to open file, exiting" << endl;
    exit(0);
  }
  return characterFrequencies;
}

int compress(char* fileName) {
  vector<CharacterFrequency> characterFrequencies;
  characterFrequencies = countCharacterFrequencies(fileName);
  // implement sorting by frequency (desc)
  sort(characterFrequencies.begin(), characterFrequencies.end(), greater<CharacterFrequency>());
  cout << "Ordered characters" << endl;
  for (int i = 0; i < characterFrequencies.size(); i++) {
    cout << characterFrequencies[i].character << " " << characterFrequencies[i].frequency << endl;
  }
  characterFrequencies.clear();
  // clear vectors
  return 0;
}