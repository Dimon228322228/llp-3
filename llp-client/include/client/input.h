
#ifndef LLP_INPUT_H
#define LLP_INPUT_H

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "ast.h"
#include "parser.tab.h"
#include "../serializer/xml.h"

//int yywrap();
void yyerror(const char *s);
int input();

#endif//LLP_INPUT_H
