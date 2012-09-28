#include <iostream>
#include <ctime>
#include "../../include/declarations"

int main() {
  int start, end, elapsed;
  double seconds;

  start = clock(); //get starting ticks

  Queue* q = new Queue();

  for (int i=0; i<9999999; i++) {
    q->enqueue(i);
  }                                                                                                                                                                         
  delete q;

  end = clock(); //get ending ticks
  elapsed = end - start; //calculate total elapsed ticks

  seconds = (double) elapsed/CLOCKS_PER_SEC; //convert to seconds

  std::cout << "elapsed time: " << seconds << " seconds " << std::endl;
}
