#include <iostream>
#include <ctime>

int main() {
  int start, end, elapsed;
  double seconds;

  start = clock(); //get starting ticks

  //insert code you want to time here        
  for (int i=0; i<9999999; i++) {
  
  }                                                                                                                                                                         

  end = clock(); //get ending ticks
  elapsed = end - start; //calculate total elapsed ticks

  seconds = (double) elapsed/CLOCKS_PER_SEC; //convert to seconds

  std::cout << "elapsed time: " << seconds << " seconds " << std::endl;
}