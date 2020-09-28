# awesome-cpp-warning

c++ warning correspondence table (Clang/GCC and Visual Studio)

## Reference

* Clang
  * [Diagnostic flags in Clang — Clang 12 documentation](https://clang.llvm.org/docs/DiagnosticsReference.html#winconsistent-missing-destructor-override)
* GCC
  * [Warning Options (Using the GNU Compiler Collection (GCC))](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)
* MSVC
  * [コンパイラ警告 | Microsoft Docs](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-c5999?view=vs-2019)
  * [Compiler warnings | Microsoft Docs](https://docs.microsoft.com/en-US/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-c5999?view=vs-2019)
  * [コンパイラのバージョン別のコンパイラの警告 | Microsoft Docs](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-by-compiler-version?view=vs-2019)

## Details

* [VC++ List](./VCLIST.md)
* [GCC/Clang warning release notes](./GccClangWarningReleaseNotes.md)

## Table

|GCC Group|GCC Warn|Clang Group|Clang Warn|VC Group|VC Warn|
|:-------:|:------:|:---------:|:--------:|:------:|:-----:|
|           | warning                   |           | [-Wmacro-redefined][]              | /W1   | C4005 |
|           | -Wcomment                 |           | [-Wcomment][]                      | /W1   | C4010 |
|           | -Wsign-compare            |           | [-Wsign-compare][]                 | /W3   | C4018, C4287 |
|           | -Wsign-compare            |           | [-Wsign-compare][]                 | /W4   | C4388, C4389 |
|           |                           |           | [-Wextra-semi-stmt][]              | /W4   | C4019 |
| -         | -Wswitch-enum             | -         | [-Wswitch-enum][]                  | /W4   | C4061 |
|           | -Wswitch                  |           | [-Wswitch][]                       | /W4   | C4062 |
|           | -Wswitch                  |           | [-Wswitch][]                       |       | C4063 |
|           | -Wendif-labels            |           | [-Wextra-tokens][]                 | /W1   | C4067 |
|           | -Wunknown-pragmas         |           | [-Wunknown-pragmas][]              | /W1   | C4068 |
|           |                           |           | [-Wmismatched-tags][]              | /W2   | C4099 |
|           | -Wunused-parameter        |           | [-Wunused-parameter][]             | /W4   | C4100 |
|           | -Wunused-variable         |           | [-Wunused-variable][]              | /W3   | C4101 |
|           | -Wunused-variable         |           | [-Wunused-variable][]              | /W4   | C4189 |
|           | -Wunused-label            |           | [-Wunused-label][]                 | /W3   | C4102 |
|           |                           |           | [-Wpragma-pack][]                  | /W1   | C4103 |
| -pedantic | warning                   | -pedantic | [-Wgnu-zero-line-directive][]      | /W1,4 | C4112 |
|           |                           |           | [-Wduplicate-decl-specifier][]     | /W1   | C4114, C4141 |
|           | -Wbuiltin-macro-redefined |           | [-Wbuiltin-macro-redefined][]      | /W1   | C4117 |
|           | warning                   |           | [-Wunknown-escape-sequence][]      | /W1   | C4129 |
|           | [-Waddress][]             |           | [-Wstring-compare][]               | /W4   | C4130 |
|           |                           |           | [-Wswitch-bool][]                  | /W1   | C4144, C4145 |
|           | -Wdelete-incomplete       |           | [-Wdelete-incomplete][]            | /W2   | C4150 |
|           | [-Wreturn-local-addr][]   |           | [-Wreturn-stack-address][]         | /W1   | C4172 |
|           | [-Wnarrowing][]           | error     | [-Wc++11-narrowing][]              | /W1   | C4178, C4838 |
|           |                           |           | [-Wignored-qualifiers][]           | /W1   | C4180 |
|           | -Wignored-qualifiers      |           |                                    | /W3   | C4197 |
|           |                           |           | [-Wreturn-type-c-linkage][]        | /W1   | C4190 |
| -pedantic | -Wpedantic                | -pedantic | [-Wzero-length-array][]            | /W2,4 | C4200 |
| -pedantic | -Wpedantic                | -pedantic | [-Wgnu-anonymous-struct][]         | /W4   | C4201 |
| -         | -Wconversion              | -         | [-Wimplicit-int-conversion][]      | /W4   | C4242 |
| -         | -Wfloat-conversion        | -         | [-Wfloat-conversion][]             | /W2   | C4244 |
| -         | -Wconversion              | -         | [-Wconversion][]                   | /W3,4 | C4244 |
| -         | -Wsign-conversion         | -         | [-Wsign-conversion][]              | /W2   | C4308 |
| -         | -Wsign-conversion         | -         | [-Wsign-conversion][]              | /W4   | C4245, C4365 |
| -         | -Woverloaded-virtual      |           | [-Woverloaded-virtual][]           | /W4   | C4263 |
| -         | -Wnon-virtual-dtor        | -         | [-Wnon-virtual-dtor][]             | /W3   | C4265 |
| -         | -Wnon-virtual-dtor        | -         | [-Wnon-virtual-dtor][]             |       | C5204 |
| -         | -Wconversion              | -         | [-Wshorten-64-to-32][]             | /W3   | C4267 |
|           | warning                   |           | [-Wexceptions][]                   | /W1   | C4286 |
|           | -Wshift-count-overflow    |           | [-Wshift-count-overflow][]         | /W1   | C4293 |
|           | [-Wtype-limits][]         |           | [-Wtautological-unsigned-zero-compare][] | /W4 | C4296 |
| -         | -Wold-style-cast          | -         | [-Wold-style-cast][]               |       | C4303 |
| -         | -Wfloat-conversion        | -         | [-Wimplicit-float-conversion][]    | /W1   | C4305 |
|           | [-Woverflow][]            |           | [-Winteger-overflow][]             | /W2   | C4307 |
| -         | -Wconversion              |           | [-Wconstant-conversion][]          | /W2   | C4309 |
|           | -Wint-to-void-pointer-cast|           | [-Wint-to-void-pointer-cast][]     | /W1   | C4312 |
|           | -Wformat                  |           | [-Wformat][]                       | /W1   | C4313, C4473, C4477 |
|           | -Wformat                  |           | [-Wformat][]                       | /W3   | C4475, C4476 |
|           | -Wformat-extra-args       |           | [-Wformat-extra-args][]            | /W1   | C4317 |
|           | -Wformat-extra-args       |           | [-Wformat-extra-args][]            | /W3   | C4474 |
|           | -Wmemset-transposed-args  |           | [-Wmemset-transposed-args][]       |       | C4318 |
|           | -Wempty-body              |           | [-Wempty-body][]                   | /W3   | C4390 |
|           | warning                   |           | [-Wmissing-declarations][]         | /W4   | C4408 |
|           | error                     |           | [-Wunicode][]                      | /W4   | C4429 |
| -         | -Wshadow                  | -         | [-Wshadow][]                       | /W4   | C4456, C4457, C4458, C4459 |
|           |                           |           | [-Wbitfield-constant-conversion][] | /W4   | C4463 |
|           | -Waddress                 |           | [-Wcomma][]                        | /W1   | C4545, C4546 |
|           |                           |           | [-Wcomma][]                        | /W4   | C4913 |
|           | [-Wtautological-compare][]|           | [-Wunused-comparison][]            | /W1   | C4547 |
|           | -Wunused-value            |           | [-Wunused-comparison][]            | /W1   | C4549, C4553 |
|           | -Wunused-value            |           | [-Wunused-value][]                 | /W1   | C4548, C4552, C4555 |
|           | -Wunused-value (-Waddress)|           | [-Wunused-value][]                 | /W1   | C4551 |
|           | -Wparentheses             |           | [-Wshift-op-parentheses][]         | /W3   | C4554 |
|           | [-Wmultichar][]           |           | error                              | /W1   | C4566 |
|           | -Winaccessible-base       |           | [-Winaccessible-base][]            | /W1   | C4584 |
| -         | -Wundef                   | -         | [-Wundef][]                        | /W4   | C4668 |
|           | -Wuninitialized           |           | [-Wuninitialized][]                | /W1,4 | C4700 |
|           |                           |           | [-Wsometimes-uninitialized][]      | /W4   | C4701, C4703 |
| -         | -Wunreachable-code        | -         | [-Wunreachable-code][]             | /W1   | C4288 |
| -         | -Wunreachable-code        | -         | [-Wunreachable-code][]             | /W4   | C4702 |
|           | -Wparentheses             |           | [-Wparentheses][]                  | /W4   | C4706 |
|           | [-Wcomma-subscript][]     |           | [-Wdeprecated-comma-subscript][]   | /W4   | C4709 |
|           | -Wreturn-type             |           | [-Wreturn-type][]                  | /W1   | C4715, C4716 |
|           |                           |           | [-Winfinite-recursion][]           | /W1   | C4717 |
|           | -Wdiv-by-zero             |           | [-Wdivision-by-zero][]             | /W3   | C4723, C4274 |
|           |                           |           | [-Wcast-align][]                   | /W1   | C4739 |
|           |                           |           | [-Wfortify-source][]               | /W1   | C4789 |
|           | -Wbool-compare            |           | [-Wtautological-constant-out-of-range-compare][] | /W1 | C4806 |
|           | [-Wswitch-outside-range][]|           | (-Wswitch-bool)                    | /W1   | C4808 |
|           |                           |           | [-Wvexing-parse][]                 | /W1   | C4930 |
|           |                           |           | [-Wreinterpret-base-class][]       | /W1   | C4946 |
|           | -Wdeprecated              |           | -Wdeprecated                       | /W1   | C4973, C4974 |
|           | warning                   |           | [-Wc++17-extensions][]             |       | C4984 |
|           | -Wdeprecated-declarations |           | [-Wdeprecated-declarations][]      | /W3   | C4996 |
|           | -Wreorder                 |           | [-Wreorder-ctor][]                 |       | C5038 |
|           | -Wexpansion-to-defined    |           | [-Wexpansion-to-defined][]         | /W1   | C5105 |
|           |                           |           | [-Wabsolute-value][]               | | |
|           |                           |           | [-Wabstract-final-class][]         | | |
|           |                           | -         | [-Winconsistent-missing-destructor-override][] | | |
|           |                           |           | [-Winconsistent-missing-override][]| | |
|           | -Wdangling-else           |           | [-Wdangling-else][]                | | |
|           | -Wconversion-null         |           | [-Wnull-conversion][]              | | |
|           |                           |           | [-Wparentheses-equality][]         | | |
|           |                           | -         | [-Wsuggest-destructor-override][]  | | |
| -         | -Wsuggest-override        | -         | [-Wsuggest-override][]             | | |
|           |                           | -         | [-Wzero-as-null-pointer-constant][]| | |


[-Wabsolute-value]:https://wandbox.org/permlink/wd0wbHes8nqkNsTQ
[-Wabstract-final-class]:https://wandbox.org/permlink/r7k7wieaf2d9qbdJ
[-Waddress]:https://wandbox.org/permlink/MQnCpnpN1HPmr7lz
[-Wbitfield-constant-conversion]:https://wandbox.org/permlink/K3a0oFD1KHuA6B5n
[-Wbuiltin-macro-redefined]:https://wandbox.org/permlink/fP8RAUGwYj4qsPfO
[-Wc++11-narrowing]:https://wandbox.org/permlink/GCuBpZyoVaCLGYeU
[-Wc++17-extensions]:https://wandbox.org/permlink/9pfAyZ5GNv6WTZxt
[-Wcast-align]:https://wandbox.org/permlink/89DcTrPTtwLv3XKb
[-Wcomma]:https://wandbox.org/permlink/T14XeAelFnxMHDlU
[-Wcomma-subscript]:https://wandbox.org/permlink/aOaBTW9UwVfb9hfP
[-Wcomment]:https://wandbox.org/permlink/cK2Ulm07VwtI2NIN
[-Wconstant-conversion]:https://wandbox.org/permlink/YCDxr5fAZmoTYlDP
[-Wconversion]:https://wandbox.org/permlink/pl2CyQXzdcUzrkBy
[-Wdangling-else]:https://wandbox.org/permlink/GroeDOmm6CQWjxVV
[-Wdelete-incomplete]:https://wandbox.org/permlink/K6r1Yfsu7n9bfGCk
[-Wdeprecated-comma-subscript]:https://wandbox.org/permlink/mmD72OEmb9GsIEU1
[-Wdeprecated-declarations]:https://wandbox.org/permlink/dBNHrMNwieFpDru9
[-Wdivision-by-zero]:https://wandbox.org/permlink/0HhGfj6Vyya45bZT
[-Wduplicate-decl-specifier]:https://wandbox.org/permlink/3j36NXx7PZRFSowX
[-Wempty-body]:https://wandbox.org/permlink/G6Ts7ShpqVRBFK6J
[-Wexceptions]:https://wandbox.org/permlink/hPSJuIMRT0tMXdhj
[-Wexpansion-to-defined]:https://wandbox.org/permlink/eHT8F2Wo5RMZXgbC
[-Wextra-semi-stmt]:https://wandbox.org/permlink/t2lN0EJnAuktq96r
[-Wextra-tokens]:https://wandbox.org/permlink/GWAzROCAePlNDfxT
[-Wfloat-conversion]:https://wandbox.org/permlink/DKO2n3JIUqlIbgrv
[-Wformat]:https://wandbox.org/permlink/UEnKVbHljnoDpEkZ
[-Wformat-extra-args]:https://wandbox.org/permlink/BI3Z7W3t02EoAQ00
[-Wfortify-source]:https://wandbox.org/permlink/8kVPyQRJP9LiEJV4
[-Wgnu-anonymous-struct]:https://wandbox.org/permlink/SlT2dcwmnJRE8eKo
[-Wgnu-zero-line-directive]:https://wandbox.org/permlink/68eMjVotYyqwkaqd
[-Wignored-qualifiers]:https://wandbox.org/permlink/eCGVd8s2oBd7tqGi
[-Wimplicit-float-conversion]:https://wandbox.org/permlink/mlDb0iY7nmCfWsLa
[-Wimplicit-int-conversion]:https://wandbox.org/permlink/jw7P7K3ei05sCgmM
[-Winaccessible-base]:https://wandbox.org/permlink/A5gzOVfFAaQhXrjw
[-Winconsistent-missing-destructor-override]:https://wandbox.org/permlink/E3uyAwlJUPujbmv0
[-Winconsistent-missing-override]:https://wandbox.org/permlink/098vW5kNxd6AuF5f
[-Winfinite-recursion]:https://wandbox.org/permlink/RlZOz4cCTGLWpeFL
[-Wint-to-void-pointer-cast]:https://wandbox.org/permlink/ENteC23V5rCJNKBu
[-Winteger-overflow]:https://wandbox.org/permlink/5CFSu1o33qOFG8Hr
[-Wmacro-redefined]:https://wandbox.org/permlink/FeN9eryQ6AjJtPm1
[-Wmemset-transposed-args]:https://wandbox.org/permlink/DsZYpzhpjLn6Yer5
[-Wmismatched-tags]:https://wandbox.org/permlink/a7KmDSJZeiKS8ICp
[-Wmissing-declarations]:https://wandbox.org/permlink/rNlYQGT2lyhtNYU4
[-Wmultichar]:https://wandbox.org/permlink/zFGKNIXEuswp8qrR
[-Wnarrowing]:https://wandbox.org/permlink/38PevVKq6JDJbGEh
[-Wnon-virtual-dtor]:https://wandbox.org/permlink/KeW1Px6KLH9WB9bz
[-Wnull-conversion]:https://wandbox.org/permlink/ABZSxzM9XR0r1a4B
[-Wold-style-cast]:https://wandbox.org/permlink/s8vAGt63s0XVZbzq
[-Woverflow]:https://wandbox.org/permlink/jXOSXzTg16ZeVG8T
[-Woverloaded-virtual]:https://wandbox.org/permlink/ZAV9lUH5hRDbZZgv
[-Wparentheses]:https://wandbox.org/permlink/0aY8EHsyCWoz93fa
[-Wparentheses-equality]:https://wandbox.org/permlink/MzEiGaVxP3AZfwry
[-Wpragma-pack]:https://wandbox.org/permlink/ip1Ds0WQRxFwdQp4
[-Wreinterpret-base-class]:https://wandbox.org/permlink/QBpE5D0NuXS8oHiH
[-Wreorder-ctor]:https://wandbox.org/permlink/wF1sODcNFjIIfXQ0
[-Wreturn-local-addr]:https://wandbox.org/permlink/pBWhp5u8AugJyQDD
[-Wreturn-stack-address]:https://wandbox.org/permlink/LWuZrYzmknFgkHav
[-Wreturn-type]:https://wandbox.org/permlink/l8AKsXFnsPgQtD5o
[-Wreturn-type-c-linkage]:https://wandbox.org/permlink/SEWKt2JcLBnAdeZH
[-Wshadow]:https://wandbox.org/permlink/aFyQBg6xvJ4oYPay
[-Wshift-count-overflow]:https://wandbox.org/permlink/0c0V7KDrG6bzAelS
[-Wshift-op-parentheses]:https://wandbox.org/permlink/amX76yhKYrTeGblb
[-Wshorten-64-to-32]:https://wandbox.org/permlink/PV73kTvl4LkSOcQG
[-Wsign-compare]:https://wandbox.org/permlink/fxZyhxNfIrukjAjs
[-Wsign-conversion]:https://wandbox.org/permlink/nar9aUENFpL8ZlCq
[-Wsometimes-uninitialized]:https://wandbox.org/permlink/OKj3yYplXtXeG1uB
[-Wstring-compare]:https://wandbox.org/permlink/zgBHQfYXOT7KIGGg
[-Wsuggest-destructor-override]:https://wandbox.org/permlink/9hBh6F59skKaNE3Y
[-Wsuggest-override]:https://wandbox.org/permlink/QATLGuvGEZAfPnlK
[-Wswitch]:https://wandbox.org/permlink/X14xNQbbxmgU1W2f
[-Wswitch-bool]:https://wandbox.org/permlink/vL1ObRTKd8d0hkOR
[-Wswitch-outside-range]:https://wandbox.org/permlink/RYbygUf1gRwsEXkh
[-Wswitch-enum]:https://wandbox.org/permlink/PUm5ULD8MXDnpoye
[-Wtautological-constant-out-of-range-compare]:https://wandbox.org/permlink/5JWWi1sh4UzxlbaH
[-Wtautological-compare]:https://wandbox.org/permlink/Y7SS3gQJXDkicCwI
[-Wtautological-unsigned-zero-compare]:https://wandbox.org/permlink/oMzIhOyrkFxlUsi0
[-Wtype-limits]:https://wandbox.org/permlink/8naEWNJet3GNbWpV
[-Wundef]:https://wandbox.org/permlink/jGR75x8PNLTi3dfB
[-Wuninitialized]:https://wandbox.org/permlink/hy2fINy0pbOrCjJR
[-Wunknown-escape-sequence]:https://wandbox.org/permlink/PfTVPU34dqwKMRSh
[-Wunknown-pragmas]:https://wandbox.org/permlink/D8mn6FhQXORZBUkp
[-Wunreachable-code]:https://wandbox.org/permlink/9Tr3vBQAxzTEvuN2
[-Wunicode]:https://wandbox.org/permlink/GPxeMy17a3L2yibh
[-Wunused-comparison]:https://wandbox.org/permlink/zhaQHii56U35haMG
[-Wunused-label]:https://wandbox.org/permlink/slCUpdY7trnfRtFU
[-Wunused-parameter]:https://wandbox.org/permlink/Lg6HoqMG8MZGuvHp
[-Wunused-value]:https://wandbox.org/permlink/vm2J5xlyxySBqWgz
[-Wunused-variable]:https://wandbox.org/permlink/sZKVILFpyoQUnljb
[-Wvexing-parse]:https://wandbox.org/permlink/VOOIavontGmvvYVE
[-Wzero-as-null-pointer-constant]:https://wandbox.org/permlink/C2A7xhoBUe5bgLjB
[-Wzero-length-array]:https://wandbox.org/permlink/dCOhebgvxxv9adE5

