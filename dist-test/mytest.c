#ifdef CS333_P2
/*This was a test written/provided by Josh W.
I was informed that tests can be shared among
students, if this is untrue, please let me know
as i am in no way/shape/form trying to cheat or 
do something i am not allowed and I will gladly 
lose the points this test may provide me. */
#include "types.h"
#include "user.h"
#include "uproc.h"

int
main(int argc, char *argv[]){
 
  int ret;
  
  
  ret = fork();
  //Fills P-Table with dummy procs 
  if (ret == 0){
    //Modify this for loop if you want less processes in ptable
    for(int i = 0; i < 60; i++){
    ret = fork();
    if(ret > 0){
      wait();
      exit();
    }
   }
    printf(1, "THIS IS THE CTRL-P OUTPUT\n");//Press Ctrl-P when you see this line
    printf(1, "-------------------------\n");
    sleep(1000);
    printf(1, "\nPS USER PROGRAM OUTPUT\n");
    printf(1, "  ---MAX SET TO 72--- \n"); //Modify this line when you test MAX with diff values
    printf(1, "----------------------\n");
    exec("ps", argv);
    exit();

  }
  wait();
  exit();

}
#endif 
