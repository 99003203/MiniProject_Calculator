/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALC_H__
#define __CALC_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/

int divide(int operand1, int operand2);

int kmtom(int operand1, int operand2);

int mtocm(int operand1, int operand2);

int ftoi(int operand1, int operand2);

int itocm(int operand1, int operand2);

int cmtom(int operand1, int operand2);

int ytom(int operand1, int operand2);

int ytocm(int operand1, int operand2);


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */

