#include <chrono>
#include <cstdint>
#include <iostream>
#include <unistd.h>
// #include <cstdlib>

int main() {
  while(true)
  {
    unsigned __int64 now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    std::cout << now << std::endl;
    sleep(1);
    system("cls");
  }
    return 0;
}
