#include <cpp-base64/base64.h>

#include <string>

#undef NDEBUG
#include <cassert>

int main ()
{
  // Call non-inline entry points to check the public header install path
  // and that symbols are exported from lib{cpp-base64}.
  //
  std::string encoded (base64_encode (std::string ("abc"), false));
  assert (encoded == "YWJj");

  std::string decoded (base64_decode (encoded));
  assert (decoded == "abc");
}
