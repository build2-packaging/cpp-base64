# cpp-base64 - Base64 encoding and decoding C++ library

This is a `build2` package repository for [`cpp-base64`](https://github.com/ReneNyffenegger/cpp-base64),
a C++ library for Base64 encoding and decoding.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`cpp-base64` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libcpp-base64/PACKAGE-README.md) file.

The development setup for `cpp-base64` uses the standard `bdep`-based workflow.
For example:

```
git clone --recursive https://github.com/build2-packaging/cpp-base64.git
cd cpp-base64

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
