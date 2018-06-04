#ifndef BBS_H
#define BBS_H

#include <cstdint>
#include <numeric>
#include <vector>


class bbs {
private:
  uint64_t m;
  uint32_t x;

public:
  bbs();
  bbs(uint16_t p, uint16_t q, uint32_t s);

  std::vector<uint8_t> generate_keystream(uint_fast32_t n);
};

#endif
