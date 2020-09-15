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
|'function' : too many actual parameters|~[/W1 C4020](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4020?view=vs-2019)~ [error C2660][]|error|[error](https://wandbox.org/permlink/lomKAAkKfSylm4XI)||
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
|'identifier' : has bad storage class|[/W1 C4042](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4042?view=vs-2019)|-|-|
|'array' : array bounds overflow|[/W1 C4045](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4045?view=vs-2019)||||
|'operator' : 'identifier1' differs in levels of indirection from 'identifier2'|~[/W1 C4047](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4047?view=vs-2019)~ [error C2440](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-errors-1/compiler-error-c2440?view=vs-2019)|error|[error](https://wandbox.org/permlink/XqSUNx7DtRSDNQcF)|
|different declared array subscripts : 'identifier1' and 'identifier2'|[/W1 C4048](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4048?view=vs-2019)|||
|compiler limit : terminating line number emission|[/W1 C4049](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4049?view=vs-2019)||
|type conversion; possible loss of data|[/W2 C4051](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4051?view=vs-2019)||
|function declarations different; one contains variable arguments|[/W1 C4052](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4052?view=vs-2019)||
|one void operand for '?:'|[/W4 C4053](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4053?view=vs-2019)||
|'conversion' : from data pointer 'type1' to function pointer 'type2'|~[/W1 4055](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4055?view=vs-2019)~ [Obsolete VS2017][]|-|-|
|overflow in floating point constant arithmetic|[/W2 C4056](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4056?view=vs-2019) ??|||
|'operator' : 'identifier1' indirection to slightly different base types from 'identifier2'|[/W4 C4057](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4057?view=vs-2019) [C-Only][]|||
|enumerator 'identifier' in switch of enum 'enumeration' is not explicitly handled by a case label|[/W4 C4061](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4061?view=vs-2019) [Off][]|-Wswitch-enum|[-Wswitch-enum](https://wandbox.org/permlink/PUm5ULD8MXDnpoye)|enumeration value '_NAME_' not explicitly handled in switch |:ballot_box_with_check:|
|enumerator 'identifier' in switch of enum 'enumeration' is not handled|[/W4 C4062](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4062?view=vs-2019) [Off][]|-Wswitch|[-Wswitch](https://wandbox.org/permlink/X14xNQbbxmgU1W2f)|enumeration value '_NAME_' not handled in switch|:ballot_box_with_check:|
|characters beyond first in wide-character constant ignored|[/W3 C4066](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4066?view=vs-2019)||
|unexpected tokens following preprocessor directive - expected a newline|[/W1 C4067](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4067?view=vs-2019)|[error,warning,-Wendif-labels](https://wandbox.org/permlink/Ht27NdPvIYzkLU6s)|[error, -Wextra-tokens](https://wandbox.org/permlink/GWAzROCAePlNDfxT)|extra tokens at end of _TOKEN_ directive|:ballot_box_with_check:|
|unknown pragma|[/W1 C4068](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4068?view=vs-2019)|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/D8mn6FhQXORZBUkp)|unknown pragma ignored|:ballot_box_with_check|
|initializers put in library initialization area|[/W3 C4073](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4073?view=vs-2019)|-Wunknown-pragmas|-Wunknown-pragmas||
|initializers put in compiler reserved initialization area|[/W1 C4074](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4074?view=vs-2019)|-Wunknown-pragmas|-Wunknown-pragmas||
|initializers put in unrecognized initialization area|[/W1 C4075](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4075?view=vs-2019)|-Wunknown-pragmas|-Wunknown-pragmas||
|'type modifier' : can not be used with type 'typename'|[/W1 C4076](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4076?view=vs-2019)|error|[error](https://wandbox.org/permlink/vvwd35DoNR40fW7f)||
|unknown check_stack option|[/W1 C4077](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4077?view=vs-2019)|-Wunknown-pragmas|-Wunknown-pragmas||
|unexpected token 'token'|[/W1 C4079](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4079?view=vs-2019)|-Wpragma|-Wignored-pragmas|
|expected identifier for segment name; found 'symbol'|[/W1 C4080](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4080?view=vs-2019)|-Wunknown-pragmas|-Wunknown-pragmas||
|expected 'token1'; found 'token2'|[/W1 C4081](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4081?view=vs-2019)|-Wunknown-pragmas|-Wunknown-pragmas||
|expected 'token'; found identifier 'identifier'|[/W1 C4083](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4083?view=vs-2019)|-Wunknown-pragmas|-Wunknown-pragmas||
|expected pragma parameter to be 'on' or 'off'|[/W1 C4085](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4085?view=vs-2019)|-Wunknown-pragmas|-Wunknown-pragmas||
|expected pragma parameter to be '1', '2', '4', '8', or '16'|[/W1 C4086](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4086?view=vs-2019)|-Wpragma|-Wignored-pragmas|
|'function' : declared with 'void' parameter list|~[/W1 C4087](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4087?view=vs-2019)~ [error C2660][]|error|error|
|'function' : pointer mismatch in actual parameter 'number', formal parameter 'number'|[/W1 C4088](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4088?view=vs-2019)||
|'function' : different types in actual parameter 'number', formal parameter 'number'|[/W1 C4089](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4089?view=vs-2019)|||
|'operation' : different 'modifier' qualifiers|[/W1 C4090](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4090?view=vs-2019) [C-Only][]||
|'keyword' : ignored on left of 'type' when no variable is declared|[/W1 C4091](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4091?view=vs-2019)|error|error|
|sizeof returns 'unsigned long'|[/W4 C4092](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4092?view=vs-2019)||
|untagged 'token' declared no symbols|[/W2 4094](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4094?view=vs-2019)|error|[error](https://wandbox.org/permlink/sKSWL8bsVWNxvIBn)||
|'a': interface is not a COM interface; will not be emitted to IDL|[/W1 C4096](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4096?view=vs-2019)|-|-|
|expected pragma parameter to be 'restore' or 'off'|[/W1 C4097](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4097?view=vs-2019)|-Wunknown-pragmas|-Wunknown-pragmas||
|'function' : void function returning a value|[/W1 C4098](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4098?view=vs-2019)|||
|'identifier' : type name first seen using 'objecttype1' now seen using 'objecttype2'|[/W2 C4099](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4099?view=vs-2019)|NOWARN|[-Wmismatched-tags](https://wandbox.org/permlink/a7KmDSJZeiKS8ICp)|'?IDENTIFIER_' defined as a class here but previously declared as a struct; this is valid, but may result in linker errors under the Microsoft C++ ABI|:ballot_box_with_check:|
|'identifier' : unreferenced formal parameter|[/W4 C4100](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4100?view=vs-2019)|-Wunused-parameter|[-Wunused-parameter](https://wandbox.org/permlink/Lg6HoqMG8MZGuvHp)|unused parameter '_IDENTIFIER_'|:ballot_box_with_check:|
|'identifier' : unreferenced local variable|[/W3 C4101](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4101?view=vs-2019)|-Wunused-variable|[-Wunused-variable](https://wandbox.org/permlink/sZKVILFpyoQUnljb)|unused variable '_IDENTIFIER_'|:ballot_box_with_check:|
|'label' : unreferenced label|[/W3 C4102](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4102?view=vs-2019)|-Wunused-label|[-Wunused-label](https://wandbox.org/permlink/slCUpdY7trnfRtFU)|unused label '_LABEL_'|:ballot_box_with_check:|

## VS C4200-C4399

|Summary|Visual Studio|GCC|Clang|Clang message|is Same|
|:---|:--:|:--:|:--:|:--|:--|
|nonstandard extension used : zero-sized array in struct/union|[/W2,4 C4200](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-levels-2-and-4-c4200?view=vs-2019)|[-Wpedantic](https://wandbox.org/permlink/hxVlDP6TC49qj0P1)|[-pedantic (-Wzero-length-array)](https://wandbox.org/permlink/dCOhebgvxxv9adE5)|zero size arrays are an extension|:ballot_box_with_check:|
|nonstandard extension used : nameless struct/union|[/W4 C4201](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4201?view=vs-2019)|[-Wpedantic](https://wandbox.org/permlink/hxVlDP6TC49qj0P1#wandbox-resultwindow-code-body-9)|[-pedantic (-Wgnu-anonymous-struct)](https://wandbox.org/permlink/SlT2dcwmnJRE8eKo)|anonymous structs are a GNU extension|:ballot_box_with_check:|
|nonstandard extension used : '...': prototype parameter in name list illegal|[/W4 C4202](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4202?view=vs-2019)|error|[error](https://wandbox.org/permlink/69GUyNXqErEAuIvh)||
|nonstandard extension used : non-constant aggregate initializer|[/W4 C4203](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4204?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/KArBPvAgfcL9tS21)||
|nonstandard extension used : static function declaration in function scope|[/W4 C4205](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4205?view=vs-2019)|||
|nonstandard extension used : translation unit is empty|[/W4 C4206](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4206?view=vs-2019)||||
|nonstandard extension used : extended initializer form|[/W4 C4207](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4207?view=vs-2019)||||
|nonstandard extension used : delete [exp] - exp evaluated but ignored|[/W4 C4208](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4208?view=vs-2019)|error|[error](https://wandbox.org/permlink/Op9pUGFtEVjCxP4f)||
|nonstandard extension used : function given file scope|[/W4 C4210](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4210?view=vs-2019)|error|[error](https://wandbox.org/permlink/1nNPehJwnEjXUOBz)||
|nonstandard extension used : redefined extern to static|[/W4 C4211](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4211?view=vs-2019)|error|[error](https://wandbox.org/permlink/kRBIv4tLQQ11vRTZ)||
|nonstandard extension used : function declaration used ellipsis|[/W4 C4212](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4212?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/z7cyGh7pWaAiXpPL)||
|nonstandard extension used : cast on l-value|[/W4 C4213](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4213?view=vs-2019)|error|[error](https://wandbox.org/permlink/p6R5UAsDKSePzOAD)|-|-|-|
|'bitfield' : member is bit field|[/W1 C4401](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4401?view=vs-2019)|||
|must use PTR operator|[/W1 C4402](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4402?view=vs-2019)||||

## VS C4400-C4599

|Summary|Visual Studio|GCC|Clang|Clang message|is Same|
|:---|:--:|:--:|:--:|:--|:--|
|'type' : const/volatile qualifiers on this type are not supported|[/W4 C4400](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4400?view=vs-2019)|||

## VS C4600-C4799

|Summary|Visual Studio|GCC|Clang|Clang message|is Same|
|:---|:--:|:--:|:--:|:--|:--|
|#pragma 'macro name' : expected a valid non-empty string|[/W1 C4600](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4600?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/SRW40qjGweai7rqm)||
|#pragma pop_macro : 'macro name' no previous #pragma push_macro for this identifier|[/W1 C4602](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4602?view=vs-2019)|[NOWARN](https://wandbox.org/permlink/gC77rsnxWZtRIlfv)|[-Wignored-pragmas](https://wandbox.org/permlink/nRpbm8fZSYJU1QqP)| pragma pop_macro could not pop '_x_', no matching push_macro|
|'identifier' : macro is not defined or definition is different after precompiled header use|[/W1 C4603](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4603?view=vs-2019)||||
|#pragma warning : 'warning_number' ignored; Code Analysis warnings are not associated with warning levels|[/W1 C4604](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4606?view=vs-2019)|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/heYKtzAVVury2uG5)|unknown pragma ignored|
|'union_member' has already been initialized by another union member in the initializer list, 'union_member'|[/W3 C4608](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4608?view=vs-2019)|error|[error](https://wandbox.org/permlink/9obu7gH744zT7909)|initializing multiple members of union|
|object 'class' can never be instantiated - user-defined constructor required|[/W4 4610](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4610?view=vs-2019)|error|[error](https://wandbox.org/permlink/MLWyAdkYiRb0HW02)|extra qualification on member 'operator='|
|interaction between 'function' and C++ object destruction is non-portable|[/W4 C4611](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4611?view=vs-2019)||
|This warning occurs with #pragma include_alias when a filename is incorrect or missing|[/W1 C4612](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4612?view=vs-2019)|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/gek3vezcBnv9odDt)||
|'segment' : class of segment cannot be changed|[/W1 C4613](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4613?view=vs-2019)|||
|#pragma warning : unknown user warning type|[/W1 C4615](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4615?view=vs-2019)|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/OEJ8i9lfC2n6fczq)||
||||
|#pragma warning : warning number 'number' not a valid compiler warning|[/W1 C4616](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4616?view=vs-2019)|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/1Bc05bFexobk1XYf)||
|pragma parameters included an empty string; pragma ignored|[/W1 C4618](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4618?view=vs-2019)|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/iXptC3K3HUL3ajDE)||
|#pragma warning : there is no warning number 'number'|[/W3 C4619](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4619?view=vs-2019)|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/4PIcyBCyiNOpK2o3)||
|no postfix form of 'operator ++' found for type 'type', using prefix form|~[/W1 C4620](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4620?view=vs-2019)~ [error C2676](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-errors-2/compiler-error-c2676?view=vs-2019)|error|[error](https://wandbox.org/permlink/aNs6WNcXqS5ds9jh)||
|no postfix form of 'operator --' found for type 'type', using prefix form|~[/W1 C4621](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4621?view=vs-2019)~ [error C2676](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-errors-2/compiler-error-c2676?view=vs-2019)|error|[error](https://wandbox.org/permlink/6aB2sUf0ku6mWyPD)||
|Overwriting debug information formed during creation of the precompiled header in object file: 'file'|[/W3 C4622](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4622?view=vs-2019)|-|-||
|'derived class' : default constructor was implicitly defined as deleted because a base class default constructor is inaccessible or deleted|[/W4 C4623](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4623?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/lOmTdC1IjPDxUf0R)||
|'derived class' : destructor was implicitly defined as deleted because a base class destructor is inaccessible or deleted|[/W1 C4624](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4624?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/SyZyzDs7G5s78xvF)||
|'derived class' : copy constructor was implicitly defined as deleted because a base class copy constructor is inaccessible or deleted|[/W4 C4625](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4625?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/Z7d3OpCYDBRacU3k)|
|'derived class' : assignment operator was implicitly defined as deleted because a base class assignment operator is inaccessible or deleted|[/W4 C4626](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4626?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/gSDUOyspDkIraTy0)||
|'header_file': skipped when loNOWARNing for precompiled header use|[/W1 C4627](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4627?view=vs-2019)|-|-||
|digraphs not supported with -Ze. Character sequence 'digraph' not interpreted as alternate tNOWARNen for 'char'|[/W1 C4628](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4628?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/vgFgoG1ZO2HJlgQV)||
|digraph used, character sequence 'digraph' interpreted as tNOWARNen 'char' (insert a space between the two characters if this is not what you intended)|[/W4 C2629](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4629?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/vgFgoG1ZO2HJlgQV)||
|'symbol' : 'extern' storage class specifier illegal on member definition|[/W1 C4630](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4630?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/u8eTU1EKS84iRpuX)||
|MSXML or XPath unavailable, XML document comments will not be processed. reason|[/W1 C4631](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4631?view=vs-2019)||||
|XML document comment: file - access denied: reason|[/W1 C4632](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4632?view=vs-2019)|-|-|
|XML document comment target: error: reason|[/W3 C4633](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4633?view=vs-2019)|-|-|
|XML document comment: cannot be applied: reason|[/W4 C4634](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4634?view=vs-2019)|-|-|
|XML document comment target: badly-formed XML: reason|[/W3 C4635](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4635?view=vs-2019)|-|-|
|XML document comment applied to 'construct': tag requires non-empty '' attribute.|[/W3 C4636](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4636?view=vs-2019)|-|-|
|XML document comment target: <include> tag discarded. reason|[/W3 C4637](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4637?view=vs-2019)|-|-|
|XML document comment target: reference to unknown symbol 'symbol'|[/W3 C4638](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4638?view=vs-2019)|-|-|
|MSXML error, XML document comments will not be processed. reason|[/W4 C4639](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4639?view=vs-2019)|-|-|
|'instance' : construction of local static object is not thread-safe|[/W3 C4640](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4640?view=vs-2019)|||
|XML document comment has an ambiguous cross reference|[/W3 C4641](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4641?view=vs-2019)|-|-|
|function declared with __declspec(noreturn) has a return statement|[/W3 C4645](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4645?view=vs-2019)|-|-|
|function declared with __declspec(noreturn) has non-void return type|[/W3 C4647](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4646?view=vs-2019)|-|-|
|debugging information not in precompiled header; only global symbols from the header will be available|[/W1 C4650](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4650?view=vs-2019)|||
|'definition' specified for precompiled header but not for current compile|[/W1 C4651](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4651?view=vs-2019)|||
|compiler option 'option' inconsistent with precompiled header; current command-line option will override that defined in the precompiled header|[/W1 C4652](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4652?view=vs-2019)|-|-|
|compiler option 'option' inconsistent with precompiled header; current command-line option ignored|[/W2 C4653](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4653?view=vs-2019)|-|-|
|'symbol' : variable type is new since the last build, or is defined differently elsewhere|[/W1 C4655](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4655?view=vs-2019)|-|-|
|'symbol' : data type is new or has changed since the last build, or is defined differently elsewhere|[/W1 C4656](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4656?view=vs-2019)|-|-|
|expression involves a data type that is new since the last build|[/W1 C4657](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4657?view=vs-2019)|-|-|
|#pragma 'pragma' : use of reserved segment 'segment' has undefined behavior, use #pragma comment(linker, ...)|[/W1 C4659](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4659?view=vs-2019)|-Wunknown-pragmas|-Wunknown-pragmas|
|'identifier' : no suitable definition provided for explicit template instantiation request|[/W1 C4661](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4661?view=vs-2019)|error|[error](https://wandbox.org/permlink/jykUefT9A4KJP6KX)|declaration does not declare anything|
|explicit instantiation; template-class 'identifier1' has no definition from which to specialize 'identifier2'|[/W1 C4662](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4662?view=vs-2019)|error|[error](https://wandbox.org/permlink/QNUfW5HY2CiBhDVB)|declaration does not declare anything|
|'function' : no function template defined that matches forced instantiation|[/W1 C4667](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4667?view=vs-2019)|error|[error](https://wandbox.org/permlink/ADhMmGLMzznQ6tE9)|explicit instantiation of 'max' does not refer to a function template, variable template, member function, member class, or static data member|
|'symbol' is not defined as a preprocessor macro, replacing with '0' for 'directives'|[/W4 C4668](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4668?view=vs-2019)|-Wundef|[-Wundef](https://wandbox.org/permlink/jGR75x8PNLTi3dfB)|'_SYMBOL_' is not defined, evaluates to 0|:ballot_box_with_check:|
|'cast' : unsafe conversion: 'class' is a managed or WinRT type object|[/W1 C4669](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4669?view=vs-2019)|-|-|
|'identifier' : this base class is inaccessible|[/W4 C4670](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4670?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/2mv6iDt1dazHeLbY)|
|'identifier1' : ambiguous. First seen as 'identifier2'|[/W4 C4672](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4672?view=vs-2019)|||
|throwing 'identifier' the following types will not be considered at the catch site|[/W4 C4673](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4673?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/CAvsDUutz2weriyy)||
|'method' should be declared 'static' and have exactly one parameter|[/W C4674](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4674?view=vs-2019)|-|-|
|'function': signature of non-private member contains assembly private type 'private_type'|[/W1 C4677](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4677?view=vs-2019)|-|-|
|base class 'base_type' is less accessible than 'derived_type'|[/W1 C4678](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4678?view=vs-2019)|-|-|
|'member' : could not import member|[/W1 C4679](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4679?view=vs-2019)|||
|'class' : coclass does not specify a default interface|[/W4 C4680](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4680?view=vs-2019)|-|-|
|'class' : coclass does not specify a default interface that is an event source|[/W4 C4681](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4681?view=vs-2019)|-|-|
|'parameter' : no directional parameter attribute specified, defaulting to [in]|[/W4 C4682](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4682?view=vs-2019)|-|-|
|'function': event source has an 'out'-parameter; exercise caution when hoNOWARNing multiple event handlers|[/W1 C4683](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4683?view=vs-2019)|-|-|
|'attribute' : WARNING!! attribute may cause invalid code generation: use with caution|[/W1 C4884](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4684?view=vs-2019)|-|-|
|expecting '> >' found '>>' when parsing template parameters|[/W1 C4685](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4685?view=vs-2019)|||
|'user-defined type' : possible change in behavior, change in UDT return calling convention|[/W3 C4686](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4686?view=vs-2019)|||
|'class': a sealed abstract class cannot implement an interface 'interface'|[C4687](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-c4687?view=vs-2019)|-|-|
|'constraint': constraint list contains assembly private type 'type'|[/W1 C4688](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4688?view=vs-2019)|-|-|
|[ emitidl( pop ) ] : more pops than pushes|[/W4 C4690](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4690?view=vs-2019)|-|-|
|'type' : type referenced was expected in unreferenced assembly 'file', type defined in current translation unit used instead|[/W1 C4691](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4691?view=vs-2019)|-|-|
|'function': signature of non-private member contains assembly private native type 'native_type'|[/W1 C4692](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4692?view=vs-2019)|-|-|
|'class': a sealed abstract class cannot have any instance members 'Test'|[C4693](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-c4693?view=vs-2019)|-|-|
|'class': a sealed abstract class cannot have a base-class 'base_class'|[C4694](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-c4694?view=vs-2019)|-|-|
|uninitialized local variable 'name' used|[/W1,4 C4700](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700?view=vs-2019)|-Wuninitialized|[-Wuninitialized](https://wandbox.org/permlink/hy2fINy0pbOrCjJR)|variable '_NAME_' is uninitialized when used here|:ballot_box_with_check:|
|Potentially uninitialized local variable 'name' used|[/W4 C4701](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4701?view=vs-2019)|[NOWARN](https://wandbox.org/permlink/ejMqCxRYfnXUPFNN)|[-Wsometimes-uninitialized](https://wandbox.org/permlink/zu5wQuK7XdEpvTQ0)|variable '_NAME_' is used uninitialized whenever 'if' condition is false|:ballot_box_with_check:|
|unreachable code|[/W4 C4702](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4702?view=vs-2019)|[-Wunreachable-code](https://wandbox.org/permlink/V1QwKj7XMKH1dUgY) ?|[-Wunreachable-code](https://wandbox.org/permlink/9Tr3vBQAxzTEvuN2)|code will never be executed|:ballot_box_with_check:|
|Potentially uninitialized local pointer variable 'name' used|[/W4 C4703](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4703?view=vs-2019)|[NOWARN](https://wandbox.org/permlink/yegteB9ImJWUJiw1)|[-Wsometimes-uninitialized](https://wandbox.org/permlink/OKj3yYplXtXeG1uB)|variable '_NAME_' is used uninitialized whenever 'if' condition is false|:ballot_box_with_check:|
|assignment within conditional expression|[/W4 C4706](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4706?view=vs-2019)|-Wparentheses|[-Wparentheses](https://wandbox.org/permlink/0aY8EHsyCWoz93fa)|using the result of an assignment as a condition without parentheses|:ballot_box_with_check:|
|comma operator within array index expression|[/W4 C4709](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4709?view=vs-2019)|[-Wcomma-subscript](https://wandbox.org/permlink/aOaBTW9UwVfb9hfP)|[-Wdeprecated-comma-subscript](https://wandbox.org/permlink/mmD72OEmb9GsIEU1)|top-level comma expression in array subscript is deprecated|:ballot_box_with_check:|
|'function' : function not inlined|[/W4 C4710](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4710?view=vs-2019)|||
|function 'function' selected for inline expansion|[/W1 C4711](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4711?view=vs-2019)||
|function 'function' marked as __forceinline not inlined|[/W4 C4714](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4714?view=vs-2019)|-|-|
|'function' : not all control paths return a value|[/W1 C4715](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4715?view=vs-2019)|-Wreturn-type|[-Wreturn-type](https://wandbox.org/permlink/l8AKsXFnsPgQtD5o)|non-void function does not return a value in all control paths|:ballot_box_with_check:|
|'function' must return a value|[/W1 C4716](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4716?view=vs-2019)|-Wreturn-type|[-Wreturn-type](https://wandbox.org/permlink/wXgzH3kx3rwVk6lq)|non-void function does not return a value in all control paths|:ballot_box_with_check:|
|'function' : recursive on all control paths, function will cause runtime stack overflow|[/W1 C4717](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4717?view=vs-2019)|[NOWARN](https://wandbox.org/permlink/EFNyAShbinMuUHND)|[-Winfinite-recursion](https://wandbox.org/permlink/RlZOz4cCTGLWpeFL)|all paths through this function will call itself|:ballot_box_with_check:|
|'function call' : recursive call has no side effects, deleting|[/W4 C4718](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4718?view=vs-2019)|||
|'function' : destructor never returns, potential memory leak|[/W1 C4722](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4722?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/xeg78jjGUxUEUCqy)||
|potential divide by 0|[/W3 C4723](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4723?view=vs-2019)|[-Wdiv-by-zero](https://wandbox.org/permlink/XZ52dNiIgihgQSwE)|[-Wdivision-by-zero](https://wandbox.org/permlink/0HhGfj6Vyya45bZT)|division by zero is undefined|:ballot_box_with_check:|
|potential mod by 0|[/W3 C4724](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4724?view=vs-2019)|[-Wdiv-by-zero](https://wandbox.org/permlink/6g3Ra2rrZS3HpUcv)|[-Wdivision-by-zero](https://wandbox.org/permlink/dwFP798TPltiXyS8)|division by zero is undefined|:ballot_box_with_check:|
|instruction may be inaccurate on some Pentiums|[/W4 C4725](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4725?view=vs-2019)|-|-|
|"PCH named pch_file with same timestamp found in obj_file_1 and obj_file_2. Using first PCH.|[/W1 C4727](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4727?view=vs-2019)|-|-|
|function too big for flow graph based warnings|[/W1 C4729](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4729?view=vs-2019)|-|-|
|'main' : mixing _m64 and floating point expressions may result in incorrect code|[/W1 C4730](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4730?view=vs-2019)|-|-|
|'pointer' : frame pointer register 'register' modified by inline assembly code|[/W1 C4731](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4731?view=vs-2019)|-|-|
|Inline asm assigning to 'FS:0' : handler not registered as safe handler|[/W1 C4733](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4733?view=vs-2019)|-|-|
|storing 32-bit float result in memory, possible loss of performance|[/W3 C4738](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4738?view=vs-2019)|||
|reference to variable 'var' exceeds its storage space|[/W1 C4739](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4739?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/Nm6lNFGZUuKUvNue)||
|flow in or out of inline asm code suppresses global optimization|[/W4 C4740](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4740?view=vs-2019)|-|-|
|'variable' has different alignment in 'file1' and 'file2': number1 and number2|[/W1 C4742](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4742?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/NxZ5cBxPDESGLMCA)|
|'type' has different size in 'file1' and 'file2': number and number bytes|[/W1 C4743](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4743?view=vs-2019)|||
|'var' has different type in 'file1' and 'file2': 'type1' and 'type2'|[/W1 C4744](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4744?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/VTGaxBT9KdsTWV7x)|
|volatile access of '<expression>' is subject to /volatile:[iso|ms] setting; consider using __iso_volatile_load/store intrinsic functions.|[C4746](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-c4746?view=vs-2019)|||
|Calling managed 'entrypoint': Managed code may not be run under loader lock, including the DLL entrypoint and calls reached from the DLL entrypoint|[/W1 C4747](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4747?view=vs-2019)||-|-|
|'identifier': function with _alloca() inlined into a loop|[/W1 C4750](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4750?view=vs-2019)|-|-|
|Conversion rules for arithmetic operations in a comparison mean that one branch cannot be executed.|[/W4 C4754](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4754?view=vs-2019)|NOWARN|[NOWARN](https://wandbox.org/permlink/ldFsxiff0do4CUmZ)|
|overflow in constant arithmetic|[/W2 C4756](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4756?view=vs-2019)|||
|Cannot align catch objects to greater than 16 bytes|[/W1 C4764](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4764?view=vs-2019)|NOWARN|[-Wunderaligned-exception-object](https://wandbox.org/permlink/nueakfJmemeVmshl)|underaligned exception object thrown|
|#import referenced a type from a missing type library; 'missing-type' used as a placeholder|[/W1 C4772](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4772?view=vs-2019)|-|-|
|'identifier' : identifier was truncated to 'number' characters|[/W1 C4788](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4788?view=vs-2019)|-|-|
|buffer 'identifier' of size N bytes will be overrun; M bytes will be written starting at offset L|[/W1 C4789](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4789?view=vs-2019)|NOWARN|[-Wfortify-source](https://wandbox.org/permlink/8kVPyQRJP9LiEJV4)|'_NAME_' will always overflow; destination buffer has size _SIZE_, but size argument is _SIZE_|:ballot_box_with_check:|
|function 'function' declared using sysimport and referenced from native code; import library required to link|[/W3 C4792](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4792?view=vs-2019)|-|-|
|'function' : function is compiled as native code: 'reason'|[/W1,3 C4793](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-and-3-c4793?view=vs-2019)|-|-|
|segment of thread local storage variable 'variable' changed from 'section name' to '.tls$'|[/W1 C4794](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4794?view=vs-2019)|-|-|
|No EMMS at end of function 'function'|[/W1 C4799](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4799?view=vs-2019)|||

## VS C4800-C5999

|Summary|Visual Studio|GCC|Clang|Clang message|is Same|
|:---|:--:|:--:|:--:|:--|:--|
|Implicit conversion from 'type' to bool. Possible information loss|[/W4 C4800](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4800?view=vs-2019)|[-Wdeprecated](https://wandbox.org/permlink/7WPm3AtsK9MNJQzM)|[-Wdeprecated-increment-bool](https://wandbox.org/permlink/nN08ecy8eyAaR7IN)|incrementing expression of type bool is deprecated and incompatible with C++17|:ballot_box_with_check:|
|'method' : the raise method has a different storage class from that of the event, 'event'|[/W1 C4803](https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4803?view=vs-2019)|-|-|


## no VS

|Summary|Visual Studio|GCC|Clang|Clang message|is Same|
|:---|:--:|:--:|:--:|:--|:--|
|int x = NULL;|-|[-Wconversion-null](https://wandbox.org/permlink/CKYlII9m0sW7PpOv)|[-Wnull-conversion](https://wandbox.org/permlink/ABZSxzM9XR0r1a4B)|implicit conversion of NULL constant to '_TYPE_'|
|if .. else ..|-|[-Wdangling-else](https://wandbox.org/permlink/2dYFvxgWxBJSRdwN)|[-Wdangling-else](https://wandbox.org/permlink/GroeDOmm6CQWjxVV)|add explicit braces to avoid dangling else|

## Annotaion

### C-Only

C only warning??

### Off

This warning is off by default.

### Obsolete

* VS2017  
Obsolete: This warning is not generated by Visual Studio 2017 and later versions.

[Obsolete VS2017]:#Obsolete
[C-Only]:#C-Only
[Off]:#Off

[error C2660]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-errors-2/compiler-error-c2660?view=vs-2019
