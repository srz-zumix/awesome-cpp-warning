# cpp-warn-table

c++ warning correspondence table (Clang/GCC and Visual Studio)

## VS C4000-C4199

|Summary|Visual Studio|GCC|Clang|Clang message|
|:---|:--:|:--:|:--:|:--|
|too many actual parameters for macro|[/W1 C4002](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4002?view=vs-2019)|[error](https://wandbox.org/permlink/8SFncs69GcLtlNcK)|[error](https://wandbox.org/permlink/NMJghV6xyMrLU6Ib)|too many arguments provided to function-like macro invocation|
|not enough actual parameters for macro|[/W1 C4003](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4003?view=vs-2019)|[error](https://wandbox.org/permlink/z7JPqYdrPWgONuEX)|[error](https://wandbox.org/permlink/Ry7oPJtRCaVDkQ1L)|too few arguments provided to function-like macro invocation|
|macro redefinition|[/W1 C4005](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4005?view=vs-2019)|[warning](https://wandbox.org/permlink/F1QN6QcE2x57As02)|[-Wmacro-redefined](https://wandbox.org/permlink/FeN9eryQ6AjJtPm1)|'_IDENTIFIER_' macro redefined|
|#undef expected an identifier|[/W1 C4006](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4006?view=vs-2019)|[error](https://wandbox.org/permlink/JzPNq7dImE3ImzbB)|[error](https://wandbox.org/permlink/OqC9XrRoSwfqUHVQ)|macro name missing|
'function' : must be 'attribute'|[/W2 C4007](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4007?view=vs-2019)|-|-|-|
|'identifier' : 'attribute' attribute ignored|[/W2,3 C4008](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-levels-2-and-3-c4008?view=vs-2019)|[error](https://wandbox.org/permlink/1BfTcrQzsHUGg3yC)|[error](https://wandbox.org/permlink/M6FgeoEUAeoz56lx)|'main' is not allowed to be declared inline|
|single-line comment contains line-continuation character|[/W1 C4010](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4010?view=vs-2019)|[-Wcomment](https://wandbox.org/permlink/mM2gHi6GbYWVCKJ2)|[-Wcomment](https://wandbox.org/permlink/cK2Ulm07VwtI2NIN)|multi-line // comment|
|'function' undefined; assuming extern returning int|[/W3 C4013](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4013?view=vs-2019)||||
|'identifier' : type of bit field must be integral|~[/W1 C4015](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4015?view=vs-2019)~ [error C2150](https://docs.microsoft.com/en-us/cpp/error-messages/compiler-errors-1/compiler-error-c2150?view=vs-2019)|[error](https://wandbox.org/permlink/WAcuoBfxIkWruthx)|[error](https://wandbox.org/permlink/iy7ELswBh55cSs2G)|bit-field '_IDENTIFIER_' has non-integral type '_TYPE_'|
|'expression' : signed/unsigned mismatch|[/W3 C4018](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4018?view=vs-2019)|[-Wsign-compare](https://wandbox.org/permlink/z4RHK3d2JBRE7y4d)|[-Wsign-compare](https://wandbox.org/permlink/fxZyhxNfIrukjAjs)|comparison of integers of different signs: 'unsigned _TYPE_' and '_TYPE_'|
|empty statement at global scope|[/W4 C4019](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4019?view=vs-2019)|-|[-Wextra-semi-stmt](https://wandbox.org/permlink/t2lN0EJnAuktq96r)|empty expression statement has no effect; remove unnecessary ';' to silence this warning |
|'function' : too many actual parameters|~[/W1 C4020](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4020?view=vs-2019)~ [error C2660](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-errors-2/compiler-error-c2660?view=vs-2019)|error|[error](https://wandbox.org/permlink/lomKAAkKfSylm4XI)||
|'function' : pointer mismatch for actual parameter 'number'|[/W1 C4022](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4022?view=vs-2019)||||
|'symbol' : based pointer passed to unprototyped function : parameter number|[/W3 4023](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4023?view=vs-2019)||||
|'function' : different types for formal and actual parameter 'number'|[/W1 C4024](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4024?view=vs-2019)||||
|'number' : based pointer passed to function with variable arguments: parameter number|[/W1 C4025](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4025?view=vs-2019)||||
|function declared with formal parameter list|[/W1 C4026](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4026?view=vs-2019)||||
|function declared without formal parameter list|[/W1 C4027](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4027?view=vs-2019)||||
|formal parameter 'number' different from declaration|[/W1 C4028](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4028?view=vs-2019)|-|-||
|declared formal parameter list different from definition|[/W1 C4029](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4029?view=vs-2019)|||
|first formal parameter list longer than the second list|[/W1 C4030](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4030?view=vs-2019)|||
|second formal parameter list longer than the first list|[/W1 C4031](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4031?view=vs-2019)|||
|formal parameter 'number' has different type when promoted|[/W4 C4032](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4032?view=vs-2019)|-|-||
|'function' must return a value|[/W1 C4033](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4033?view=vs-2019)|error|[error](https://wandbox.org/permlink/18liO7Ylnhpypszb)|non-void function 'test_1' should return a value|
|sizeof returns 0|[/W1 C4034](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4034?view=vs-2019)|||
|unnamed 'type' as actual parameter|[/W1 C4036](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4036?view=vs-2019)|-|-||
|'modifier' : illegal ambient class modifier|[/W1 C4038](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4038?view=vs-2019)|-|-||
|compiler limit : terminating browser output|[/W1 C4041](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4041?view=vs-2019)|-|-||

## VS C4200-C4399

|Summary|Visual Studio|GCC|Clang|Clang message|
|:---|:--:|:--:|:--:|:--|
|nonstandard extension used : zero-sized array in struct/union|[/W2,4 C4200](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-levels-2-and-4-c4200?view=vs-2019)||

## no VS

|Summary|Visual Studio|GCC|Clang|Clang message|
|:---|:--:|:--:|:--:|:--|
|int x = NULL;|-|[-Wconversion-null](https://wandbox.org/permlink/CKYlII9m0sW7PpOv)|[-Wnull-conversion](https://wandbox.org/permlink/ABZSxzM9XR0r1a4B)|implicit conversion of NULL constant to '_TYPE_'|
|if .. else ..|-|[-Wdangling-else](https://wandbox.org/permlink/2dYFvxgWxBJSRdwN)|[-Wdangling-else](https://wandbox.org/permlink/GroeDOmm6CQWjxVV)|add explicit braces to avoid dangling else|
