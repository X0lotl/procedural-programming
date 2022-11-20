//
// Created by x0lotl on 18.11.22.
//

struct Matrix2x2 {
    int _11, _12, _21, _22;
};

struct Vector2 {
    int _1, _2;
};

Matrix2x2 matrixMultiplication(Matrix2x2 m1, Matrix2x2 m2) {
  return {
    (m1._11 * m2._11 + m1._12 * m2._21),
    (m1._11 * m2._21 + m1._12 * m2._22),
    (m1._21 * m2._11 + m1._22 * m2._21),
    (m1._21 * m2._12 + m1._22 * m2._22)
  };;
}

Matrix2x2 quickPowMatrixRecursive(Matrix2x2 matrix, int powNumber, int &counter) {
  if (powNumber == 1) {
    return {1, 1, 1, 0};
  }
  if (powNumber % 2 == 0) {
    //return quickPowMatrixRecursive(matrixMultiplication(matrix, matrix), powNumber / 2, ++counter);
    return matrixMultiplication(quickPowMatrixRecursive(matrix, powNumber / 2, ++counter), quickPowMatrixRecursive(matrix, powNumber / 2, ++counter));
  } else {
    //return quickPowMatrixRecursive(matrixMultiplication(matrix, {1, 1, 1, 0}), powNumber - 1, ++counter);
    return matrixMultiplication(quickPowMatrixRecursive(matrix, --powNumber, ++counter), {1, 1, 1, 0});
  }
}

int quickFibNumber(int fibNumber, int &counter) {
  Matrix2x2 matrix = quickPowMatrixRecursive({1, 1, 1, 0}, fibNumber-1, ++counter);
  return matrix._11;
}