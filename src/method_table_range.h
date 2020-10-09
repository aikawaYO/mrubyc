/* Auto generated by make_method_table.rb */
#include "symbol_builtin.h"
struct RClass *mrbc_init_class_range(struct VM *vm)
{
  static const mrbc_sym method_symbols[] = {
    MRBC_SYMID_EQ_EQ_EQ,
    MRBC_SYMID_exclude_end_Q,
    MRBC_SYMID_first,
#if MRBC_USE_STRING
    MRBC_SYMID_inspect,
#endif
    MRBC_SYMID_last,
#if MRBC_USE_STRING
    MRBC_SYMID_to_s,
#endif
  };
  static const mrbc_func_t method_functions[] = {
    c_range_equal3,
    c_range_exclude_end,
    c_range_first,
#if MRBC_USE_STRING
    c_range_inspect,
#endif
    c_range_last,
#if MRBC_USE_STRING
    c_range_inspect,
#endif
  };

  return mrbc_define_builtin_class("Range", 0, method_symbols, method_functions, sizeof(method_symbols)/sizeof(mrbc_sym) );
}