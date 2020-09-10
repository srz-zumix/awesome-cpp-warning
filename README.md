# cpp-warn-table

c++ warning correspondence table (Clang/GCC and Visual Studio)

## VS C4000-C4199

|Summary|Visual Studio|GCC|Clang|Clang message|is Same|
|:---|:--:|:--:|:--:|:--|:--|
|too many actual parameters for macro|[/W1 C4002](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4002?view=vs-2019)|[error](https://wandbox.org/permlink/8SFncs69GcLtlNcK)|[error](https://wandbox.org/permlink/NMJghV6xyMrLU6Ib)|too many arguments provided to function-like macro invocation|
|not enough actual parameters for macro|[/W1 C4003](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4003?view=vs-2019)|[error](https://wandbox.org/permlink/z7JPqYdrPWgONuEX)|[error](https://wandbox.org/permlink/Ry7oPJtRCaVDkQ1L)|too few arguments provided to function-like macro invocation|
|macro redefinition|[/W1 C4005](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4005?view=vs-2019)|[warning](https://wandbox.org/permlink/F1QN6QcE2x57As02)|[-Wmacro-redefined](https://wandbox.org/permlink/FeN9eryQ6AjJtPm1)|'_IDENTIFIER_' macro redefined|:ballot_box_with_check:|
|#undef expected an identifier|[/W1 C4006](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4006?view=vs-2019)|[error](https://wandbox.org/permlink/JzPNq7dImE3ImzbB)|[error](https://wandbox.org/permlink/OqC9XrRoSwfqUHVQ)|macro name missing|
'function' : must be 'attribute'|[/W2 C4007](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4007?view=vs-2019)|-|-|-|
|'identifier' : 'attribute' attribute ignored|[/W2,3 C4008](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-levels-2-and-3-c4008?view=vs-2019)|[error](https://wandbox.org/permlink/1BfTcrQzsHUGg3yC)|[error](https://wandbox.org/permlink/M6FgeoEUAeoz56lx)|'main' is not allowed to be declared inline|
|single-line comment contains line-continuation character|[/W1 C4010](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4010?view=vs-2019)|[-Wcomment](https://wandbox.org/permlink/mM2gHi6GbYWVCKJ2)|[-Wcomment](https://wandbox.org/permlink/cK2Ulm07VwtI2NIN)|multi-line // comment|:ballot_box_with_check:|
|'function' undefined; assuming extern returning int|[/W3 C4013](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4013?view=vs-2019)||||
|'identifier' : type of bit field must be integral|~[/W1 C4015](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4015?view=vs-2019)~ [error C2150](https://docs.microsoft.com/en-us/cpp/error-messages/compiler-errors-1/compiler-error-c2150?view=vs-2019)|[error](https://wandbox.org/permlink/WAcuoBfxIkWruthx)|[error](https://wandbox.org/permlink/iy7ELswBh55cSs2G)|bit-field '_IDENTIFIER_' has non-integral type '_TYPE_'|
|'expression' : signed/unsigned mismatch|[/W3 C4018](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4018?view=vs-2019)|[-Wsign-compare](https://wandbox.org/permlink/z4RHK3d2JBRE7y4d)|[-Wsign-compare](https://wandbox.org/permlink/fxZyhxNfIrukjAjs)|comparison of integers of different signs: 'unsigned _TYPE_' and '_TYPE_'|:ballot_box_with_check:|
|empty statement at global scope|[/W4 C4019](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4019?view=vs-2019)|-|[-Wextra-semi-stmt](https://wandbox.org/permlink/t2lN0EJnAuktq96r)|empty expression statement has no effect; remove unnecessary ';' to silence this warning |:ballot_box_with_check:|
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
|nonstandard extension used : zero-sized array in struct/union|[/W2,4 C4200](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-levels-2-and-4-c4200?view=vs-2019)|[-Wpedantic](https://wandbox.org/permlink/hxVlDP6TC49qj0P1)|[-pedantic (-Wzero-length-array)](https://wandbox.org/permlink/dCOhebgvxxv9adE5)|zero size arrays are an extension|:ballot_box_with_check:|
|nonstandard extension used : nameless struct/union|[/W4 C4201](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4201?view=vs-2019)|[-Wpedantic](https://wandbox.org/permlink/hxVlDP6TC49qj0P1#wandbox-resultwindow-code-body-9)|[-pedantic (-Wgnu-anonymous-struct)](https://wandbox.org/permlink/SlT2dcwmnJRE8eKo)|anonymous structs are a GNU extension|:ballot_box_with_check:|
|nonstandard extension used : '...': prototype parameter in name list illegal|[/W4 C4202](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4202?view=vs-2019)|error|[error](https://wandbox.org/permlink/69GUyNXqErEAuIvh)||
|nonstandard extension used : non-constant aggregate initializer|[/W4 C4203](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4204?view=vs-2019)|ok|[ok](https://wandbox.org/permlink/KArBPvAgfcL9tS21)||
|nonstandard extension used : static function declaration in function scope|[/W4 C4205](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4205?view=vs-2019)|||
|nonstandard extension used : translation unit is empty|[/W4 C4206](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4206?view=vs-2019)||||
|nonstandard extension used : extended initializer form|[/W4 C4207](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4207?view=vs-2019)||||
|nonstandard extension used : delete [exp] - exp evaluated but ignored|[/W4 C4208](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4208?view=vs-2019)|error|[error](https://wandbox.org/permlink/Op9pUGFtEVjCxP4f)||
|nonstandard extension used : function given file scope|[/W4 C4210](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4210?view=vs-2019)|error|[error](https://wandbox.org/permlink/1nNPehJwnEjXUOBz)||
|nonstandard extension used : redefined extern to static|[/W4 C4211](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4211?view=vs-2019)|error|[error](https://wandbox.org/permlink/kRBIv4tLQQ11vRTZ)||
|nonstandard extension used : function declaration used ellipsis|[/W4 C4212](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4212?view=vs-2019)|ok|[ok](https://wandbox.org/permlink/z7cyGh7pWaAiXpPL)||
|nonstandard extension used : cast on l-value|[/W4 C4213](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4213?view=vs-2019)|error|[error](https://wandbox.org/permlink/p6R5UAsDKSePzOAD)|-|-|-|
|'bitfield' : member is bit field|[/W1 C4401](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4401?view=vs-2019)|||
|must use PTR operator|[/W1 C4402](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4402?view=vs-2019)||||

## VS C4400-C4599

|Summary|Visual Studio|GCC|Clang|Clang message|
|:---|:--:|:--:|:--:|:--|
|'type' : const/volatile qualifiers on this type are not supported|[/W4 C4400](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4400?view=vs-2019)|||

## VS C4600-C4799

|Summary|Visual Studio|GCC|Clang|Clang message|
|:---|:--:|:--:|:--:|:--|
|#pragma 'macro name' : expected a valid non-empty string|[/W1 C4600](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4600?view=vs-2019)|ok|[ok](https://wandbox.org/permlink/SRW40qjGweai7rqm)||
|#pragma pop_macro : 'macro name' no previous #pragma push_macro for this identifier|[/W1 C4602](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4602?view=vs-2019)|[ok](https://wandbox.org/permlink/gC77rsnxWZtRIlfv)|[-Wignored-pragmas](https://wandbox.org/permlink/nRpbm8fZSYJU1QqP)| pragma pop_macro could not pop '_x_', no matching push_macro|
|'identifier' : macro is not defined or definition is different after precompiled header use|[/W1 C4603](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4603?view=vs-2019)||||
|#pragma warning : 'warning_number' ignored; Code Analysis warnings are not associated with warning levels|[/W1 C4604](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4606?view=vs-2019)|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/heYKtzAVVury2uG5)|unknown pragma ignored|
|'union_member' has already been initialized by another union member in the initializer list, 'union_member'|[/W3 C4608](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4608?view=vs-2019)|error|[error](https://wandbox.org/permlink/9obu7gH744zT7909)|initializing multiple members of union|
|object 'class' can never be instantiated - user-defined constructor required|[/W4 4610](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4610?view=vs-2019)|error|[error](https://wandbox.org/permlink/MLWyAdkYiRb0HW02)|extra qualification on member 'operator='|
|interaction between 'function' and C++ object destruction is non-portable|[/W4 C4611](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4611?view=vs-2019)||
|This warning occurs with #pragma include_alias when a filename is incorrect or missing|[/W1 C4612](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4612?view=vs-2019)|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/gek3vezcBnv9odDt)||
|'segment' : class of segment cannot be changed|[/W1 C4613](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4613?view=vs-2019)|||
|#pragma warning : unknown user warning type|[/W1 C4615](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4615?view=vs-2019)|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/OEJ8i9lfC2n6fczq)||
||||


## no VS

|Summary|Visual Studio|GCC|Clang|Clang message|
|:---|:--:|:--:|:--:|:--|
|int x = NULL;|-|[-Wconversion-null](https://wandbox.org/permlink/CKYlII9m0sW7PpOv)|[-Wnull-conversion](https://wandbox.org/permlink/ABZSxzM9XR0r1a4B)|implicit conversion of NULL constant to '_TYPE_'|
|if .. else ..|-|[-Wdangling-else](https://wandbox.org/permlink/2dYFvxgWxBJSRdwN)|[-Wdangling-else](https://wandbox.org/permlink/GroeDOmm6CQWjxVV)|add explicit braces to avoid dangling else|
