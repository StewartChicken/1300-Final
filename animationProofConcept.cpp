#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>



int main() {
    for (int i = 0; i < 5; i++) {
        system("CLS");
        std::cout << R"( 
              _,-'|
           ,-'._  |
 .||,      |####\ |
\.`',/     \####| |
= ,. =      |###| |
/ || \    ,-'\#/,'`.
  ||     ,'   `,,. `.
  ,|____,' , ,;' \| |
 (3|\    _/|/'   _| |
  ||/,-''  | >-'' _,\\
  ||'      ==\ ,-'  ,'
  ||       |  V \ ,|
  ||       |    |` |
  ||       |    |   \
  ||       |    \    \
  ||       |     |    \
  ||       |      \_,-'
  ||       |___,,--_)_\
  ||         |_|   ccc/
  ||        ccc/
  ||                
)" << "\n";

        using namespace std::this_thread;     // sleep_for, sleep_until
        using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
        using std::chrono::system_clock;

        sleep_for(10ns);
        sleep_until(system_clock::now() + 1s);
        system("CLS");

        std::cout << R"( 
                          _,-'|
                       ,-'._  |
             .||,      |####\ |
            \.`',/     \####| |
            = ,. =      |###| |
            / || \    ,-'\#/,'`.
              ||     ,'   `,,. `.
              ,|____,' , ,;' \| |
             (3|\    _/|/'   _| |
              ||/,-''  | >-'' _,\\
              ||'      ==\ ,-'  ,'
              ||       |  V \ ,|
              ||       |    |` |
              ||       |    |   \
              ||       |    \    \
              ||       |     |    \
              ||       |      \_,-'
              ||       |___,,--_)_\
              ||         |_|   ccc/
              ||        ccc/
              ||                
)" << "\n";
        sleep_for(10ns);
        sleep_until(system_clock::now() + 1s);

    }
}
