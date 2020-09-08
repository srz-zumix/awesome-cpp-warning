# cpp-warn-table
c++ warning correspondence table (Clang/GCC and Visual Studio)


|Code|Clang/GCC|Visual Studio|detail|
|:---|:--:|:--:|:--|
|[int x = NULL;](https://wandbox.org/permlink/2Fw6rNc1bKf3JYUI)|null-conversion|-|converting to non-pointer type '${TYPE}' from NULL|
|[if .. else ..](https://wandbox.org/permlink/1kPL40bHJ0M43Z0H)|dangling-else|-|suggest explicit braces to avoid ambiguous 'else'|
