//
//  fileexample.c
//  learningc
//
//  Created by Vlad Petrishin on 31.07.2025.
//

#include "fileexample.h"


#include <stdio.h>

//int tempfile(void) {
//  
//  FILE *fp;
//  double tmpC[11] = {-10.0, -8.0, -6.0,
//              -4.0, -2.0,  0.0,  2.0,
//               4.0,  6.0,  8.0, 10.0};
//  double tmpF;
//  int i;
//  // Open a file in the write mode
//  fp = fopen("/Users/vladpetrishin/Desktop/engineering/c/learningc/learningc/output/outfile.txt", "w");
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



//int tempfile(void) {
//
//  FILE *fp;
//  char buffer[256];
//  double tempC, tempF;
//  double sumC = 0.0;
//  double sumF = 0.0;
//  int numread = 0;
//
//  fp = fopen("/Users/vladpetrishin/Desktop/engineering/c/learningc/learningc/output/outfile.txt", "r");
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
//  return 0;
//}


//int tempfile(void) {
//
//  FILE *fp;
//  int year = 2024;
//  int month = 5;
//  int day = 21;
//  int mydata[5] = {2, 4, 6, 8, 10};
//
//  fp = fopen("/Users/vladpetrishin/Desktop/engineering/c/learningc/learningc/output/data.bin", "wb");
//  if (fp == NULL) {
//    printf("Error opening data.bin\n");
//    return 1;
//  }
//  else {
//    // Write out the header
//    int itemsOut;
//    itemsOut = fwrite(&year, sizeof(year), 1, fp);
//    itemsOut += fwrite(&month, sizeof(month), 1, fp);
//    itemsOut += fwrite(&day, sizeof(day), 1, fp);
//    // Write the data
//    itemsOut += fwrite(mydata, sizeof(int), 5, fp);
//    fclose(fp);
//    printf("No. of items written to the file: %d", itemsOut);
//  }
//
//  return 0;
//}


//void writeBinaryFile(char *fname); // Function code given at the end
//
int tempfile(void) {

  FILE *fp;
  int itemsRead;
  int yy, mm, dd;
  int thedata[5];

  //Create a binary file first so we can read from it
//  writeBinaryFile("data.bin");
  fp = fopen("/Users/vladpetrishin/Desktop/engineering/c/learningc/learningc/output/data.bin", "rb"); // Open the same binary file for reading
  if (fp == NULL) {
    printf("Error opening data.bin\n");
    return 1;
  }
  else {
    // Read the header
    itemsRead = fread(&yy, sizeof(int), 1, fp);
    itemsRead += fread(&mm, sizeof(int), 1, fp);
    itemsRead += fread(&dd, sizeof(int), 1, fp);
    printf("year = %d, month = %d, day = %d\n", yy, mm, dd);
    // Read the data
    itemsRead += fread(thedata, sizeof(int), 5, fp);
    printf("data = [%d, %d, %d, %d, %d]\nNo. of items read: %d\n",
        thedata[0], thedata[1], thedata[2], thedata[3], thedata[4], itemsRead);
    fclose(fp);
  }

  return 0;
}
//
//// This is test code to check that the data written is correctly read
//void writeBinaryFile(char *fname){
//  int year = 2024, month = 5, day = 21;
//  int mydata[5] = {2, 4, 6, 8, 10};
//  // Write this data to file with filename given by *fname
//  FILE *fp = fopen(fname, "wb");
//  if (fp == NULL) {
//    printf("Error opening data.bin\n");
//    return 1;
//  }
//  else {
//    // Read the header
//    fwrite(&year, sizeof(int), 1, fp);
//    fwrite(&month, sizeof(int), 1, fp);
//    fwrite(&day, sizeof(int), 1, fp);
//    fwrite(mydata, sizeof(int), 5, fp);
//  }
//  fclose(fp);
//}
