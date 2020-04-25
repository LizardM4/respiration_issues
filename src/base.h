#ifndef BASE_H
#define BASE_H

#include <cstdio>

/**
 * @todo This TODO directive causes <tt>(!) Unabridged API: unexpected kind 'page' (IGNORED)</tt>
 */
class my_base {
    int _foo;
public:
    inline my_base(int foo) : _foo{foo} {}
};

struct bases_friend {
private:
    friend class my_base;
    double bar = 0.0;
};

#endif
