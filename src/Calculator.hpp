/*
 * Description - Calculator.hpp
 *
 * @authors Suhail.m (suhailmalik19.5@gmail.com)
 * @date    2021-04-02 23:22:01
 *
 */

#pragma once

namespace calculator {

/* Many compilers don't like putting definition of templated func in separate .cpp file, hence we need to add definition here only */
template <class T>
T sum(T a, T b) {
  return a + b;
}

/* We can put non templated func in .cpp */
void printHello();

}  // namespace calculator
