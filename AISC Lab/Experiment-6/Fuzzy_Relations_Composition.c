/*
=========================================================================================
Terna Engineering College
Computer Engineering Department

EXPERIMENT NO. 06

Name: Amey Mahendra Thakur    Roll No: 50
Class: BE-COMPS-B             Batch: B3
Date: 21-09-2021

Repository:
https://github.com/Amey-Thakur/ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-AND-ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-LAB
Profile: https://github.com/Amey-Thakur
=========================================================================================

Subject: Artificial Intelligence and Soft Computing (AISC)
Aim: To implement a program to calculate cartesian product on fuzzy relation
using:
     1. Max-Min Composition
     2. Max-Product Composition

Description:
This program calculates the composition of two fuzzy relations (matrices) R and
S. Fuzzy relations describe the degree of association between elements of two
sets. Composition combines these relations to find the association between
elements of the first and last sets.

1. Max-Min Composition (RoS):
   T[i][j] = max(min(R[i][k], S[k][j])) for all k
   This is analogous to matrix multiplication, but with 'multiplication'
replaced by 'min' and 'addition' replaced by 'max'.

2. Max-Product Composition (RoS):
   U[i][j] = max(R[i][k] * S[k][j]) for all k
   Here, 'multiplication' remains arithmetic multiplication, but 'addition' is
replaced by 'max'.

Input:
- Dimensions and elements of Fuzzy Relation Matrix R.
- Dimensions and elements of Fuzzy Relation Matrix S.

Output:
- The Composition Matrix (T for Max-Min, U for Max-Product).
*/

#include <stdio.h>

int main() {
  int i, j, m1, n1, m2, n2, c, k;
  float R[50][50], S[50][50], T[50][50], U[50][50], a[50];

  // Input for Matrix R
  printf("Enter the number of rows and columns of matrix R: ");
  scanf("%d %d", &m1, &n1);
  printf("Enter the Elements:\n");
  for (i = 0; i < m1; i++) {
    for (j = 0; j < n1; j++) {
      scanf("%f", &R[i][j]);
    }
  }

  // Input for Matrix S
  printf("\nEnter the number of rows and columns of matrix S: ");
  scanf("%d %d", &m2, &n2);
  printf("Enter the Elements:\n");
  for (i = 0; i < m2; i++) {
    for (j = 0; j < n2; j++) {
      scanf("%f", &S[i][j]);
    }
  }

  // Check for compatibility
  if (n1 != m2) {
    printf("Cartesian product can't be determined.");
    return 0;
  }

  // Menu for Composition Type
  printf("\nCartesian Product on Fuzzy Relation using:\n\n1. Max-Min "
         "Composition\n2. Max-Product Composition\n Enter your choice:");
  scanf("%d", &c);

  switch (c) {
  case 1: // Max-Min Composition
    for (i = 0; i < m1; i++) {
      for (j = 0; j < n2; j++) {
        for (k = 0; k < m2; k++) {
          if (R[i][k] >= S[k][j]) {
            a[k] = S[k][j];
          } else {
            a[k] = R[i][k];
          }
        }
        // Find Max
        for (k = 1; k < m2; k++) {
          if (a[0] < a[k])
            a[0] = a[k];
        }
        T[i][j] = a[0];
      }
    }
    printf("\nThe Max-Min of R and S is T:\n");
    for (i = 0; i < m1; i++) {
      for (j = 0; j < n2; j++) {
        printf(" %f", T[i][j]);
      }
      printf("\n");
    }
    break;

  case 2: // Max-Product Composition
    for (i = 0; i < m1; i++) {
      for (j = 0; j < n2; j++) {
        for (k = 0; k < m2; k++) {
          a[k] = R[i][k] * S[k][j];
        }
        // Find Max
        for (k = 1; k < m2; k++) {
          if (a[0] < a[k])
            a[0] = a[k];
        }
        U[i][j] = a[0];
      }
    }
    printf("\nThe Max-Product of R and S is U:\n");
    for (i = 0; i < m1; i++) {
      for (j = 0; j < n2; j++) {
        printf(" %f", U[i][j]);
      }
      printf("\n");
    }
    break;

  default:
    printf("Please choose correct option.");
  }
  return 0;
}
