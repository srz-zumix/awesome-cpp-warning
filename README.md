# cpp-warn-table
c++ warning correspondence table (Clang/GCC and Visual Studio)


||Visual Studio|Clang/GCC|Clang message|
||:---|:--:|:--:|:--|
|too many actual parameters for macro 'identifier'|[C4002](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4002?view=vs-2019)|[error](https://wandbox.org/permlink/8SFncs69GcLtlNcK)|too many arguments provided to function-like macro invocation|
|int x = NULL;|-|[null-conversion](https://wandbox.org/permlink/2Fw6rNc1bKf3JYUI)|converting to non-pointer type '${TYPE}' from NULL|
|if .. else ..|-|[dangling-else](https://wandbox.org/permlink/1kPL40bHJ0M43Z0H)|suggest explicit braces to avoid ambiguous 'else'|
