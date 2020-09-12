# cpp-warn-table

c++ warning correspondence table (Clang/GCC and Visual Studio)

## VC++ List

[VC++ List](./VCLIST.md)

## Table

|GCC Group|GCC Warn|Clang Group|Clang Warn|VC Group|VC Warn|
|:-------:|:------:|:---------:|:--------:|:------:|:-----:|
|   | warning            |           | [-Wmacro-redefined][]        | /W1   | C4005 |
|   | -Wcomment          |           | [-Wcomment][]                | /W1   | C4010 |
|   | -Wsign-compare     |           | [-Wsign-compare][]           | /W3   | C4018 |
|   |                    |           | [-Wextra-semi-stmt][]        | /W4   | C4019 |
|   | -Wpedantic         | -pedantic | [-Wzero-length-array][]      | /W2,4 | C4200 |
|   | -Wpedantic         | -pedantic | [-Wgnu-anonymous-struct][]   | /W4   | C4201 |
| - | -Wundef            | -         | [-Wundef][]                  | /W4   | C4668 |
|   | -Wuninitialized    |           | [-Wuninitialized][]          | /W1,4 | C4700 |
|   |                    |           | [-Wsometimes-uninitialized][]| /W4   | C4701, C4703 |
| - | -Wunreachable-code | -         | -Wunreachable-code           | /W4   | C4702 |
|   | -Wparentheses      |           | [-Wparentheses][]            | /W4   | C4706 |
|   | -Wcomma-subscript  |           | -Wdeprecated-comma-subscript | /W4   | C4709 |
|   |                    |           | -Winfinite-recursion         | /W1   | C4717 |
|   | -Wreturn-type      |           | -Wreturn-type                | /W1   | C4715, C4716 |
|   | -Wdiv-by-zero      |           | -Wdivision-by-zero           | /W3   | C4723, C4274 |
|   | -Wconversion-null  |           | [-Wnull-conversion][]        | | |
|   | -Wdangling-else    |           | [-Wdangling-else][]          | | |

[-Wmacro-redefined]:https://wandbox.org/permlink/FeN9eryQ6AjJtPm1
[-Wcomment]:https://wandbox.org/permlink/cK2Ulm07VwtI2NIN
[-Wsign-compare]:https://wandbox.org/permlink/fxZyhxNfIrukjAjs
[-Wextra-semi-stmt]:https://wandbox.org/permlink/t2lN0EJnAuktq96r
[-Wzero-length-array]:https://wandbox.org/permlink/dCOhebgvxxv9adE5
[-Wgnu-anonymous-struct]:https://wandbox.org/permlink/SlT2dcwmnJRE8eKo
[-Wundef]:https://wandbox.org/permlink/jGR75x8PNLTi3dfB
[-Wuninitialized]:https://wandbox.org/permlink/hy2fINy0pbOrCjJR
[-Wsometimes-uninitialized]:https://wandbox.org/permlink/OKj3yYplXtXeG1uB
[-Wparentheses]:https://wandbox.org/permlink/0aY8EHsyCWoz93fa
[-Wnull-conversion]:https://wandbox.org/permlink/ABZSxzM9XR0r1a4B
[-Wdangling-else]:https://wandbox.org/permlink/GroeDOmm6CQWjxVV
