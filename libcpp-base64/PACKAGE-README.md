# libcpp-base64 - Base64 encoding and decoding C++ library

This is a `build2` package for the [`cpp-base64`](https://github.com/ReneNyffenegger/cpp-base64)
C++ library. It provides Base64 encoding and decoding, including URL-safe,
PEM, and MIME variants. C++17 adds `std::string_view` overloads. The package
version `2.0.0-b.9` corresponds to upstream `2.rc.09`. The documented include
is `#include <cpp-base64/base64.h>`.


## Usage

To start using `libcpp-base64` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libcpp-base64 ^2.0.0-b.9
```

Then import the library in your `buildfile`:

```
import libs = libcpp-base64%lib{cpp-base64}
```


## Importable targets

This package provides the following importable targets:

```
lib{cpp-base64}
```

`lib{cpp-base64}` is the compiled encode/decode library.


## Configuration variables

This package provides no configuration variables.
