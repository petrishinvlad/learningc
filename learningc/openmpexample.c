//
//  openmpexample.c
//  learningc
//
//  Created by Vlad Petrishin on 31.07.2025.
//

//#include "openmpexample.h"
//#include <stdio.h>
//#include <omp.h>
//
//int main(void)
//{
//  int i, thread_id, num_iter;
//
//  // Specify the number of threads explicitly if needed
//  omp_set_num_threads(8);
//  
//  #pragma omp parallel private(thread_id, num_iter)
//  {
//    num_iter = 0;
//
//    #pragma omp for
//      for (i = 0; i < 1000; ++i)
//      {
//        ++num_iter;
//      }
//
//    thread_id = omp_get_thread_num();
//
//    printf("Thread %d performed %d iterations of the loop.\n",
//       thread_id, num_iter );
//  }
//
//  return 0;
//}
