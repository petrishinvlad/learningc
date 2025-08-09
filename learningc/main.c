//
//  main.c
//  learningc
//
//  Created by Vlad Petrishin on 30.07.2025.
//

//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
//#include "primes.h"
#include "fileexample.h"

#define IS_LOWER_CASE(x) ( ((x) >= 'a') && ((x) <= 'z') )
#define debugPrintf(...) printf("DEBUG: " __VA_ARGS__)
#define DEBUG
//
//int roundOff(int i , int j) {
//    int k;
//    k = i + j - i % j;
//    return k;
//}
//
//int main() {
//    int i = 256;
//    int j = 7;
//    int k;
//    k = roundOff(i , j);
//    printf ("Next largest multiple = %d\n" , k);
//    
//    return 0;
//}


//int main() {
//    enum Months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
//    enum Months the_month;
//    the_month = JAN;
//    if (the_month == JAN) {
//      printf("It's January\n");
//    }
//}


//int main() {
//    int x = 5;
//    double d = 123.6;
//    double res = x / d;
//    printf ("%f\n",res);
//}


//int main(void) {
//    char intString[] = "1234";
//    char floatString[] = "328.4";
//    int myInt = atoi(intString);
//    double myDouble = atof(floatString);
//    printf("intString = %s, floatString = %s\n", intString, floatString);
//    printf("myInt = %d, myDouble = %.1f\n\n", myInt, myDouble);
//
//    return 0;
//}


//int main(void) {
//    int a = 2;
//    double b = 3.14;
//    char intString[64], doubleString[64];
//    sprintf(intString, "%d", a);
//    sprintf(doubleString, "%.2f", b);
//    printf("a = %d, b = %.2f\n", a, b);
//    printf("intString = %s, doubleString = %s", intString, doubleString);
//    return 0;
//}


//void multiply(int i, float f)
//{
//  printf("%f\n", i * f);
//}
//
//int main(void)
//{
//  double d = 2.3;
//  float f = 10;
//  multiply(d, f);
//  return 0;
//}


//double mean(int count, ...)
//{
//  va_list ap;
//  int i, sum;
//
//  va_start(ap, count);         // Initializing the list of arguments
//
//  sum = 0;
//  for (i = 0; i < count; i++)
//    sum += va_arg(ap, int);    // Retrieving the next argument from the argument list
//
//  va_end(ap);                  // Cleaning up
//  return 1.0 * sum / count;     // Multiply by 1.0 to convert to a floating-point number
//}
//
//int main(void)
//{
//  // The first argument represents the count of the remaining arguments
//  printf ("%.2f\n", mean (3, 2, 3, 4));
//       
//  // Called with seven arguments
//  printf ("%.2f\n", mean(6, 10, 4, 4, 10, 9, 8));
//  return 0;
//}

//int main(void) {
//    int n;
//    // We discuss scanf later. For now, note that n holds the input integer.
//    scanf("%i", &n);
//    printf("Entered length: %d\n", n);
//
//    int grades[n];
//    int i;
//    for (i = 0; i < n; i++) {
//      grades[i] = i;
//      printf("grades[%d] = %d\n", i, grades[i]);
//    }
//    return 0;
//}


//int main(int argc, char* argv[]) {
//  int i;
//  printf("argc = %d\n", argc);
//  for (i=0; i<argc; i++) {
//    printf("argv[%d] = %s\n", i, argv[i]);
//  }
//  return 0;
//}



//int main(void)
//{
//
//typedef struct {
//    int x;
//    int y;
//    int z;
//  } Point3D;
//
//  Point3D p1;
//  p1.x = 0;
//  p1.y = 0;
//  p1.z = 0;
//
//  Point3D p2 = {.x=1, .y=2, .z=3};
//
//  printf("p1 = (%d, %d, %d) and p2 = (%d, %d, %d)\n", p1.x, p1.y, p1.z, p2.x, p2.y, p2.z);
//
//  return 0;
//}


//double *multiplyByTwo(double *input) {
//  double *twice = malloc(sizeof(double));
//  *twice = *input * 2.0;
//  return twice;
//}
//
//int main(void)
//{
//  int *age = malloc(sizeof(int));
//  *age = 30;
//  double *salary = malloc(sizeof(double));
//  *salary = 12345.67;
//  double *myList = malloc(3 * sizeof(double));
//  myList[0] = 1.2;
//  myList[1] = 2.3;
//  myList[2] = 3.4;
//
//  double *twiceSalary = multiplyByTwo(salary);
//
//  printf("Your doubled salary is %.3f\n", *twiceSalary);
//
//  free(age);
//  free(salary);
//  free(myList);
//  free(twiceSalary);
//
//  return 0;
//}


//int add(int a, int b) {
//    return a + b;
//}
//
//int subtract(int a, int b) {
//    return a - b;
//}
//
//int multiply(int a, int b) {
//    return a * b;
//}
//
//int calculate(int (*fn)(int a, int b), int a, int b) {
//    return fn(a, b);
//}
//
//void increase(int *a) {
//    *a = *a + 1;
//}
//
//int main() {
//    int a = 5;
//    int b = 6;
//    
////    printf("%d\n", calculate(subtract, a, b));
//
//    int *x = malloc(sizeof(int));
//    *x = 4;
//    
//    increase(x);
////    increase(&a);
//    
////    printf("%d\n", a);
//    free(x);
//    printf("%d\n", *x);
//    
//}



//int main(void) {
//  
//  FILE *fp;
//  double tmpC[11] = {-10.0, -8.0, -6.0,
//              -4.0, -2.0,  0.0,  2.0,
//               4.0,  6.0,  8.0, 10.0};
//  double tmpF;
//  int i;
//  // Open a file in the write mode
//  fp = fopen("output/outfile.txt", "w");
//  if (fp == NULL) {
//    printf("Sorry, can't open outfile.txt\n");
//    return 1;
//  }
//  else {
//    // Print a table header to the file
//    fprintf(fp, "%10s %10s\n", "Celsius", "Fahrenheit");
//    for (i = 0; i < 11; i++) {
//      tmpF = ((tmpC[i] * (9.0 / 5.0)) + 32.0);
//      fprintf(fp, "%10.2f %10.2f\n", tmpC[i], tmpF);
//    }
//    fclose(fp);
//  }
//
//  return 0;
//}


//#include <stdio.h>
//
//int main(void) {
//
//  FILE *fp;
//  char buffer[256];
//  double tempC, tempF;
//  double sumC = 0.0;
//  double sumF = 0.0;
//  int numread = 0;
//
//  fp = fopen("outfile.txt", "r");
//  if (fp == NULL) {
//    printf("There was an error opening outfile.txt\n");
//    return 1;
//  }
//  else {
//    // read in the header line first
//    fgets(buffer, 256, fp);
//    while (!feof(fp)) {
//      fscanf(fp, "%lf %lf\n", &tempC, &tempF);
//      printf("tempC = %.2f, tempF = %.2f\n", tempC, tempF);
//      sumC += tempC;
//      sumF += tempF;
//      numread++;
//    }
//    fclose(fp);
//    printf("%d values read, sumC = %.2f and sumF = %.2f\n", numread, sumC, sumF);
//  }
//
//  #ifdef DEBUG
//    printf("Print statement that's only enabled in the debugging mode\n");
//  #endif
//    
//  isPrime();
//  return 0;
//}

//int main() {
//    tempfile();
//}

//# include <stdio.h>
//# include <signal.h>
//
//// signal handler function
//void sighandler ( int signum )
//{
//    printf ( "SIGINT received. Inside sighandler\n" ) ;
//}
//
//int main( )
//{
//            signal ( SIGINT, sighandler ) ;
//            while ( 1 )
//                    printf ( "Program Running\n" ) ;
//            return 0 ;
//}


//
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main() {
//   // Initialize string
//   char str[30] = "Bombay";
//   // Declare structure
//   struct sample{
//       int i;
//       float a;
//       char ch;
//       char data [1];
//   };
//   // Declare pointer to structure
//   struct sample *p;
//   int sz = sizeof (struct sample) + strlen ((str)+1);
//   p = (struct sample*)malloc(sz);
//   strcpy (p->data,str);
//}


//# include <stdio.h>
//#include <unistd.h>
////# include <sys/types.h>
//
//int main( )
//{
//    //    // Prints id of current process
//    //    printf ( "Process ID = %d", getpid( ) ) ;
//    //    return 0 ;
//    
////    printf ( "Before Forking\n" ) ;
////    // fork() system call
////    fork( ) ;
////    printf ( "After Forking\n" ) ;
////    return 0 ;
// 
//    
//    int  pid ;
//    // Create child process
//    pid = fork( ) ;
//    // Display information for child process
//    if ( pid == 0 )
//    {
//        printf ( "Child : Hello I am the child process\n" ) ;
//        printf ( "Child : Child’s PID: %d\n", getpid( ) ) ;
//        printf ( "Child : Parent’s PID: %d\n", getppid( ) ) ;
//    }
//    // Display information for parent process
//    else
//    {
//        printf ( "Parent : Hello I am the parent process\n" ) ;
//        printf ( "Child : Parent’s PID: %d\n", getpid( ) ) ;
//        printf ( "Parent : Child’s PID: %d\n", pid ) ;
//    }
//    return 0 ;
//}

//# include <stdio.h>
//# include <signal.h>
//
//// signal handler function
//void sighandler ( int signum )
//{
//    printf ( "SIGINT received. Inside sighandler\n" ) ;
//}
//
//int main( )
//{
//            signal ( SIGINT, sighandler ) ;
//            while ( 1 )
//                    printf ( "Program Running\n" ) ;
//            return 0 ;
//}


# include <stdio.h>
# include <unistd.h>
# include <signal.h>

// First signal handler
void  f1 ( int signum )
{
        printf ( "\nSIGINT Recd" ) ;
}
// Second signal handler
void  f2 ( int signum )
{
        printf ( "\nSIGTERM Recd.\n" ) ;
}
int main( )
{
        signal ( SIGINT, f1 ) ;
        signal ( SIGTERM, f2 ) ;
            
        while ( 1 )
            printf ( "\nRunning" ) ;
    
        return 0 ;
}
