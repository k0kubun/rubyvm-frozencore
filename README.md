# RubyVM::FrozenCore

An evil gem to expose hidden class in CRuby core.

## Usage

```rb
RubyVM::FrozenCore
# NameError: uninitialized constant RubyVM::FrozenCore

require 'rubyvm/frozencore'
RubyVM::FrozenCore #=> BasicObject

RubyVM::FrozenCore.methods
# => [:"core#set_method_alias",
#  :"core#set_variable_alias",
#  :"core#undef_method",
#  :"core#define_method",
#  :"core#define_singleton_method",
#  :"core#set_postexe",
#  :"core#hash_from_ary",
#  :"core#hash_merge_ptr",
#  :"core#hash_merge_kwd",
#  ...

# You can call hidden core methods with this class.
# Of course you can use Module.remove_method in normal use case. This is a useless example.
RubyVM::FrozenCore.send(:"core#undef_method", String, :prepend)

"b".prepend("a")
# NoMethodError: undefined method `prepend' for "b":String
```

## See also

There is already a gem with the same purpose.

https://github.com/charliesome/frozen_core

But it relied on a bug which was fixed in Ruby 2.1.0.
rubyvm-frozencore works with Ruby >= 2.1.0.

## License

The gem is available as open source under the terms of the [MIT License](http://opensource.org/licenses/MIT).
