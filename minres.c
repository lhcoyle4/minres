#include <stdio.h>  /* printf */
#include <stdlib.h> /* atoi */

//having a problem right now with which data structures to pass around
//I don't think that multi-D arrays will work quite right.
//it might need to be arrays of structs which contain flags

void PrintHelp(void)
{
  //print the correct usage
  printf("Usage:\n\t minres <value of resistor> <number of resistors> <desired REQ>\n");
  
  //and an example usage
  printf("Example:\n\t minres 100 100 99\n");
}

/* generates all the combinations of the resistors, from using only 1 to using
 * up to resval. Note that these are combinations, not perumations. So, having
 * a 100ohm resistor in series with two 100ohm resistors in parallel is the 
 * same as having the two 100ohm resistors in parallel with a series 100ohm
 * after. The idea is to store this in a 2-D array atm, but I don't think that
 * will actually work.
 */
int** GenCombos(int resval, int numres, int reqval)
{
  
}

//helper function for EquivRes
int Parallel(int* parallelres, int size)
{
  int i = 0;
  int denominator = 0;
  int reqparallel = 0;
  
  for(i = 0; i < size; i++)
  {
    
  } 
  
  reqparallel = (1/
  
  return reqparallel;
}

//calculates the equivalent resistances for all of the combinations, and returns
//them in an array.
int* EquivRes(int** combos)
{
  
}

void PrintMinRes(int* minres)
{
  //lots of printf statements, to print what the circuit would look like on cmd line
  /*
   *          |---100---|
   * ---100---|         |---100--- 
   *          |---100---|
   *          
   */
  //something like above
}

int main(int argc, char *argv[])
{
  int resval = 0;
  int numres = 0;
  int reqval = 0;
  int* minres = 0;
  
  //check for appropriate usage of the program
  if(argc < 2)
    PrintHelp();
  
  //default to an arbitrarily large amount of resistors if there is no 4th arg
  if (argc == 3)
    numres = 1000;
  
  //parse the command line for the value of the resistor to be used,
  resval = atoi(argv[1]);
  
  //the number of resistors available
  numres = atoi(argv[2]);
  
  //the value of the desired equivalent resistances
  reqval = atoi(argv[3]);
  
  //use the values to generate list of all combinations of resistors
  //and calculate the equivalent resistances for all entries in list
  minres = EquivRes(GenCombos(resval, numres, reqval));
  
  //return the entry which has the fewest resistors in a readable format
  PrintMinRes(minres);
  
  return 0;
}