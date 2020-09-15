# cpp-warn-table

c++ warning correspondence table (Clang/GCC and Visual Studio)

## VC++ List

[VC++ List](./VCLIST.md)

## Table

|GCC Group|GCC Warn|Clang Group|Clang Warn|VC Group|VC Warn|
|:-------:|:------:|:---------:|:--------:|:------:|:-----:|
|           | warning                |           | [-Wmacro-redefined][]            | /W1   | C4005 |
|           | -Wcomment              |           | [-Wcomment][]                    | /W1   | C4010 |
|           | -Wsign-compare         |           | [-Wsign-compare][]               | /W3   | C4018 |
|           |                        |           | [-Wextra-semi-stmt][]            | /W4   | C4019 |
| -         | -Wswitch-enum          | -         | [-Wswitch-enum][]                | /W4   | C4061 |
|           | -Wswitch               |           | [-Wswitch][]                     | /W4   | C4062 |
|           | -Wendif-labels         |           | [-Wextra-tokens][]               | /W1   | C4067 |
|           | -Wunknown-pragmas      |           | [-Wunknown-pragmas][]            | /W1   | C4068 |
|           |                        |           | [-Wmismatched-tags][]            | /W2   | C4099 |
|           | -Wunused-parameter     |           | [-Wunused-parameter][]           | /W4   | C4100 |
|           | -Wunused-variable      |           | [-Wunused-variable][]            | /W3   | C4101 |
|           | -Wunused-label         |           | [-Wunused-label][]               | /W3   | C4102 |
| -pedantic | -Wpedantic             | -pedantic | [-Wzero-length-array][]          | /W2,4 | C4200 |
| -pedantic | -Wpedantic             | -pedantic | [-Wgnu-anonymous-struct][]       | /W4   | C4201 |
| -         | -Wundef                | -         | [-Wundef][]                      | /W4   | C4668 |
|           | -Wuninitialized        |           | [-Wuninitialized][]              | /W1,4 | C4700 |
|           |                        |           | [-Wsometimes-uninitialized][]    | /W4   | C4701, C4703 |
| -         | -Wunreachable-code     | -         | [-Wunreachable-code][]           | /W4   | C4702 |
|           | -Wparentheses          |           | [-Wparentheses][]                | /W4   | C4706 |
|           | [-Wcomma-subscript][]  |           | [-Wdeprecated-comma-subscript][] | /W4   | C4709 |
|           | -Wreturn-type          |           | [-Wreturn-type][]                | /W1   | C4715, C4716 |
|           |                        |           | [-Winfinite-recursion][]         | /W1   | C4717 |
|           | -Wdiv-by-zero          |           | [-Wdivision-by-zero][]           | /W3   | C4723, C4274 |
|           |                        |           | [-Wfortify-source][]             | /W1   | C4789 |
|           | -Wconversion-null      |           | [-Wnull-conversion][]            | | |
|           | -Wdangling-else        |           | [-Wdangling-else][]              | | |

[-Wcomma-subscript]:https://wandbox.org/permlink/aOaBTW9UwVfb9hfP
[-Wcomment]:https://wandbox.org/permlink/cK2Ulm07VwtI2NIN
[-Wdangling-else]:https://wandbox.org/permlink/GroeDOmm6CQWjxVV
[-Wdeprecated-comma-subscript]:https://wandbox.org/permlink/mmD72OEmb9GsIEU1
[-Wdivision-by-zero]:https://wandbox.org/permlink/0HhGfj6Vyya45bZT
[-Wextra-semi-stmt]:https://wandbox.org/permlink/t2lN0EJnAuktq96r
[-Wextra-tokens]:https://wandbox.org/permlink/GWAzROCAePlNDfxT
[-Wfortify-source]:https://wandbox.org/permlink/8kVPyQRJP9LiEJV4
[-Wgnu-anonymous-struct]:https://wandbox.org/permlink/SlT2dcwmnJRE8eKo
[-Winfinite-recursion]:https://wandbox.org/permlink/RlZOz4cCTGLWpeFL
[-Wmacro-redefined]:https://wandbox.org/permlink/FeN9eryQ6AjJtPm1
[-Wmismatched-tags]:https://wandbox.org/permlink/a7KmDSJZeiKS8ICp
[-Wnull-conversion]:https://wandbox.org/permlink/ABZSxzM9XR0r1a4B
[-Wparentheses]:https://wandbox.org/permlink/0aY8EHsyCWoz93fa
[-Wreturn-type]:https://wandbox.org/permlink/l8AKsXFnsPgQtD5o
[-Wsign-compare]:https://wandbox.org/permlink/fxZyhxNfIrukjAjs
[-Wsometimes-uninitialized]:https://wandbox.org/permlink/OKj3yYplXtXeG1uB
[-Wswitch]:https://wandbox.org/permlink/X14xNQbbxmgU1W2f
[-Wswitch-enum]:https://wandbox.org/permlink/PUm5ULD8MXDnpoye
[-Wundef]:https://wandbox.org/permlink/jGR75x8PNLTi3dfB
[-Wuninitialized]:https://wandbox.org/permlink/hy2fINy0pbOrCjJR
[-Wunknown-pragmas]:https://wandbox.org/permlink/D8mn6FhQXORZBUkp
[-Wunreachable-code]:https://wandbox.org/permlink/9Tr3vBQAxzTEvuN2
[-Wunused-label]:https://wandbox.org/permlink/slCUpdY7trnfRtFU
[-Wunused-parameter]:https://wandbox.org/permlink/Lg6HoqMG8MZGuvHp
[-Wunused-variable]:https://wandbox.org/permlink/sZKVILFpyoQUnljb
[-Wzero-length-array]:https://wandbox.org/permlink/dCOhebgvxxv9adE5
