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

  Matrix2x2 outputMatrix = defaultMatrix;

  for (int i = 1; i < fibNumber; i++) {
    Matrix2x2 tempMatrix{
      outputMatrix._11 * defaultMatrix._11 + outputMatrix._12 * defaultMatrix._21,
      outputMatrix._11 * defaultMatrix._12 + outputMatrix._12 * defaultMatrix._22,
      outputMatrix._21 * defaultMatrix._11 + outputMatrix._22 * defaultMatrix._21,
      outputMatrix._21 * defaultMatrix._12 + outputMatrix._22 * defaultMatrix._22
    };

    outputMatrix = tempMatrix;
  }

  return outputMatrix._21;
}