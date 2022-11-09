//
// Created by x0lotl on 09.11.22.
//

#include <iostream>

struct Matrix2x2 {
    int _11, _12, _21, _22;
};

struct Vector2 {
    int _1, _2;
};

int quickFib(int fibNumber) {
  Matrix2x2 defaultMatrix{
    1, 1, 1, 0
  };

  Vector2 outputVector = {1, 0};

  for (int i = 1; i < fibNumber; i++) {

    Vector2 tempVector{
      defaultMatrix._11 * outputVector._1 + defaultMatrix._12 * outputVector._2,
      defaultMatrix._21 * outputVector._1 + defaultMatrix._22 * outputVector._2
    };

    outputVector = tempVector;
  }

  return outputVector._1;
}