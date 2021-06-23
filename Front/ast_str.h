#ifndef __AST_STR_H
#define __AST_STR_H

#include "deque.h"
#include "ident.h"

// Alphabet
// - list of symbols
// - list of alhabet vars
// - number of bits
// - number of chars
class Alphabet {
  // symbol list
  public:
    Alphabet(IdentList *s) : symbols(s) {}
    ~Alphabet() {delete symbols;}
    Ident id;
    IdentList *symbols;
};

class MonaString {
  public:
    MonaString() : bits(0) {}
    ~MonaString() {delete bits;}
    Ident alphabet;
    Ident length;
    IdentList *bits;
};

class MonaChar {
  public:
    Ident var1id;
    Ident alphabet;
};

#endif