#include "rubyvm_frozencore.h"

extern VALUE rb_cRubyVM;
extern VALUE rb_mRubyVMFrozenCore;

void
Init_rubyvm_frozencore(void)
{
  rb_define_const(rb_cRubyVM, "FrozenCore", rb_mRubyVMFrozenCore);
}
