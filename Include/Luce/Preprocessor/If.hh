#ifndef LUCE_HEADER_PREPROCESSOR_IF_HH
#define LUCE_HEADER_PREPROCESSOR_IF_HH

#include <Luce/Preprocessor/Bool.hh>

#define LUCE_MACRO_IF(bit, do_true, do_false) LUCE_MACRO_I_IF(bit, do_true, do_false)
#define LUCE_MACRO_I_IF(bit, do_true, do_false) \
LUCE_MACRO_I_IF2(LUCE_MACRO_I_IF2_##bit(do_true, do_false))
#define LUCE_MACRO_I_IF2(input) input
#define LUCE_MACRO_I_IF2_0(do_true, do_false) do_false
#define LUCE_MACRO_I_IF2_1(do_true, do_false) do_true

#endif