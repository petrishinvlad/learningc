//
//  openmpcritical.c
//  learningc
//
//  Created by Vlad Petrishin on 31.07.2025.
//
//
//#include "openmpcritical.h"
//#include <stdio.h>
//#include <omp.h>
//
//int main(void)
//{
//    int i, thread_id;
//    int total_iter, priv_iter; // To store number of iterations
//    total_iter = 0;
//
//    // Specify the number of threads explicitly if needed
//    omp_set_num_threads(8);
//
//    // Create multiple threads and spawn a team of threads
//    #pragma omp parallel private(priv_iter, thread_id)
//    {
//        priv_iter = 0;
//        thread_id = omp_get_thread_num();
//
//        // Parallelize this for loop
//        #pragma omp for
//        for (i = 0; i < 100000; ++i)
//        {
//            ++priv_iter;
//        }
//
//        // Make this a critical section
//        #pragma omp critical
//        {
//            printf("Thread %d is adding its iterations (%d) to sum (%d), ",
//                   thread_id, priv_iter, total_iter);
//            total_iter += priv_iter;
//            printf("total no. of iterations is now %d.\n", total_iter);
//        }
//    }
//    printf("Total no. of loop iterations is %d\n",
//           total_iter);
//    return 0;
//}
