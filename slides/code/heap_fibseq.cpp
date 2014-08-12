#include <iostream>
#include <cstdlib>

// fibonacci sequence
int *fibSequence(int N){
  int *seq = new int[N];
  seq[0] = seq[1] = 1;
  for(int i = 2; i < N; ++i)
    seq[i] = seq[i-1] + seq[i-2];
  return seq;
}

int main(int argc, char **argv){
  if(argc != 2){
    std::cerr << "Usage: ./fibonacci N\n";
    return 1;
  }
  int N = atoi(argv[1]);
  int *seq = fibSequence(N);

  // display the sequence
  for(int i = 0; i < N; ++i){
    std::cout << "fib(" << i << ") = " << seq[i] << "\n";
  }
  // free sequence
  delete[] seq;
  return 0;
}
