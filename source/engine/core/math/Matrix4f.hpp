#ifndef MATRIX4F_H
#define MATRIX4F_H

namespace glPortal {
class Vector3f;

class Matrix4f {
public:
  float array[16];
  float operator[](int idx) const {
    return array[idx];
  }
  float& operator[](int idx) {
    return array[idx];
  }

  Matrix4f();
  Matrix4f(float[]);
  void setIdentity();
  void translate(Vector3f v);
  void translate(float x, float y, float z);
  void rotate(float angle, float x, float y, float z);
  void rotate(Vector3f v);
  void scale(Vector3f v);
  void scale(float x, float y, float z);
  Vector3f transform(Vector3f v);
  void print() const;
};

float determinant(const Matrix4f &m);
Matrix4f inverse(const Matrix4f &m);
Matrix4f inverse3(const Matrix4f &m);
Matrix4f transpose(const Matrix4f &m);

} /* namespace glPortal */

#endif /* MATRIX4F_H */
