#include "rubyvm_frozencore.h"

VALUE rb_mRubyvmFrozencore;

void
Init_rubyvm_frozencore(void)
{
  rb_mRubyvmFrozencore = rb_define_module("RubyvmFrozencore");
}
