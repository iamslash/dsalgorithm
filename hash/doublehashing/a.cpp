// Copyright (C) 2016 by iamslash

#include <cstdio>

DoubleHash(data) {
  index = hash_function(data);
  while(hash_table(index) is not empty)
    index = secondary_hash(data);
  // do something
}

int main() {
  return 0;
}

