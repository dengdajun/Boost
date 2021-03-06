/*=============================================================================
    Copyright (c) 2001-2007 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying 
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#include <iostream>
#include <boost/spirit/include/phoenix_core.hpp>

using namespace boost::phoenix;
using namespace boost::phoenix::arg_names;
using namespace std;

template <typename F>
void print(F f)
{
    cout << f() << endl;
}

int
main()
{
    print(val(3));
    print(val("Hello World"));
    return 0;
}
