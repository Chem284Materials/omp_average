#include <iostream>
#include <vector>

int main(int argc, char **argv) {
  int N = 200000000;

  // Initialize a
  std::vector<double> a;
  a.resize(N);
  for (int i=0; i<N; i++) {
    a[i] = 1.0;
  }

  // Initialize b
  std::vector<double> b;
  b.resize(N);
  for (int i=0; i<N; i++) {
    b[i] = 1.0 + double(i);
  }

  // Add the two arrays
  for (int i=0; i<N; i++) {
    a[i] = a[i] + b[i];
  }

  // Average the result
  double average = 0.0;
  for (int i=0; i<N; i++) {
    average += a[i] / double(N);
  }

  std::cout.precision(12);
  std::cout << "Average: " << average << std::endl;
  return 0;
}
