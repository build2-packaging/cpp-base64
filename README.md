# cpp-base64 - <SUMMARY>

This is a `build2` package repository for [`cpp-base64`](https://<UPSTREAM-URL>),
a <SUMMARY-OF-FUNCTIONALITY>.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`cpp-base64` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](<PACKAGE>/PACKAGE-README.md) file.

The development setup for `cpp-base64` uses the standard `bdep`-based workflow.
For example:

```
git clone .../cpp-base64.git
cd cpp-base64

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
