#ifndef LUCE_HEADER_PREPROCESSOR_IF_HH
#define LUCE_HEADER_PREPROCESSOR_IF_HH

#include <Luce/Preprocessor/Bool.hh>

#define LUCE_MACRO_IF(value, do_true, do_false) LUCE_MACRO_I_IF(value, do_true, do_false)
#define LUCE_MACRO_I_IF(value, do_true, do_false) \
LUCE_MACRO_I_IF_IO(LUCE_MACRO_I_IF_##value(do_true, do_false))
#define LUCE_MACRO_I_IF_IO(input) input

#define LUCE_MACRO_I_IF_0(do_true, do_false) do_false
#define LUCE_MACRO_I_IF_1(do_true, do_false) do_true

#endif