# include <time.h>

double My_variable = 3.0;

int fact(int n){
  if(n<=1) 
    return 1;
  else 
    return n*fact(n-1);
}


int my_mod(int x, int y){
  return (x%y);
}


char *get_time(){
  time_t ltime;
  time(&ltime);// Get the system time 
  return ctime(&ltime);// convert time_t to string. 
}
