/* CMSC 430: Compiler Theory and Design */
/* Name: Angel Lee */
/* Project 1* /
/* Date: Oct 30, 2021*/
// This file contains the enumerated type definition for tokens
// edited from lecture source file to fit Project 1 criteria
//more tokens added

enum Tokens {RELOP = 256, ADDOP, MULOP, ANDOP, BEGIN_, BOOLEAN, END, ENDREDUCE,
	FUNCTION, INTEGER, IS, REDUCE, RETURNS, IDENTIFIER, INT_LITERAL, 
	ARROW, CASE, ELSE, ENDCASE, ENDIF, IF, OTHERS, REAL, THEN, WHEN, 
	OROP, NOTOP, REMOP, EXPOP, REAL_LITERAL, BOOL_LITERAL};
