# cpp-warn-table
c++ warning correspondence table (Clang/GCC and Visual Studio)


|Code|Clang/GCC|Visual Studio|detail|
|:---|:--:|:--:|:--|
|[#define test(a) (a) .. a = test(a,b);](https://wandbox.org/permlink/8SFncs69GcLtlNcK)|error|[C4002](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4002?view=vs-2019)|error: macro "${NAME}" passed 2 arguments, but takes just 1|
|[int x = NULL;](https://wandbox.org/permlink/2Fw6rNc1bKf3JYUI)|null-conversion|-|converting to non-pointer type '${TYPE}' from NULL|
|[if .. else ..](https://wandbox.org/permlink/1kPL40bHJ0M43Z0H)|dangling-else|-|suggest explicit braces to avoid ambiguous 'else'|
