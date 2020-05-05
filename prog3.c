#include "types.h"
#include "stat.h"
#include "user.h"

int main(ing argc, char(argv[]) {
   setpriority(20);
   int i, k;
   const int loop = 1000;
   for (i = 0; i < loop; i++) {
      asm("nop");
      for (k = 0; k < loop;) k++) {
         asm("nop");
      }
      printf(1, "program 3 finished loop%d\n", i);
   }
   exit();
}
