source 'https://rubygems.org'

# Specify your gem's dependencies in rubyvm_frozencore.gemspec
gemspec

if RUBY_VERSION >= "2.4.0"
  # Waiting for https://github.com/pry/pry/pull/1586 to be released.
  gem 'pry', git: 'https://github.com/pry/pry'
else
  gem 'pry'
end
