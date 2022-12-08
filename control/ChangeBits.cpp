//Danylo Khomichenko

#include <bitset>

unsigned int changeBits(unsigned int word) {
  std::bitset<32> bitSetOfWord(word);
  std::bitset<32> saveBitSet(word);

 for (int i = 0; i < 32; i+=8) {
   for (int j = 0; j < 8; j++) {
     if (j < 4) {
       bitSetOfWord[i + j] = saveBitSet[i + j + 4];
     } else {
       bitSetOfWord[i + j] = saveBitSet[i + j - 4];
     }
    
   }
 }

  return (unsigned int) bitSetOfWord.to_ullong();
//
//
}