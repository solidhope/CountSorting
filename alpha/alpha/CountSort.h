// init. count array to 0
// count the # of times each value occurs in the input. 
// modify the counting array to give the number of values smaller than index
// xfer numbers from input to output array at locations provided by counting array

#pragma once
#ifndef alpha_CountSort_h
#define alpha_CountSort_h

#include <iostream>
using namespace std;

void countSort(int a[], int k, int n)
{
    int i, j;
    
    int b[10], c[50];
    
    for(i = 0; i <= k; i++)
        
        c[i] = 0;
    
    for(j = 1; j <= n; j++)
        
        c[a[j]] = c[a[j]] + 1;
    
    for(i = 1; i <= k; i++)
        
        c[i] = c[i] + c[i - 1];
    
    for(j = n; j >= 1; j--) {
        
        b[c[a[j]]] = a[j];
        c[a[j]] = c[a[j]] - 1;
    }
    
}


#endif
