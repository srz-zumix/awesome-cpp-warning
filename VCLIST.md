# cpp-warn-table

c++ warning correspondence table (Clang/GCC and Visual Studio)

## VS C4000-C4199

|Summary|Visual Studio|GCC|Clang|Clang message|is Same|
|:---|:--:|:--:|:--:|:--|:--|
|UNKNOWN WARNING|[C4000][]|-|-|
|too many actual parameters for macro|[/W1 C4002][]|[error](https://wandbox.org/permlink/8SFncs69GcLtlNcK)|[error](https://wandbox.org/permlink/NMJghV6xyMrLU6Ib)|too many arguments provided to function-like macro invocation|
|not enough actual parameters for macro|[/W1 C4003][]|[error](https://wandbox.org/permlink/z7JPqYdrPWgONuEX)|[error](https://wandbox.org/permlink/Ry7oPJtRCaVDkQ1L)|too few arguments provided to function-like macro invocation|
|macro redefinition|[/W1 C4005][]|[warning](https://wandbox.org/permlink/F1QN6QcE2x57As02)|[-Wmacro-redefined](https://wandbox.org/permlink/FeN9eryQ6AjJtPm1)|'_IDENTIFIER_' macro redefined|:ballot_box_with_check:|
|#undef expected an identifier|[/W1 C4006][]|[error](https://wandbox.org/permlink/JzPNq7dImE3ImzbB)|[error](https://wandbox.org/permlink/OqC9XrRoSwfqUHVQ)|macro name missing|
'function' : must be 'attribute'|[/W2 C4007][]|-|-|-|
|'identifier' : 'attribute' attribute ignored|[/W2,3 C4008][]|[error](https://wandbox.org/permlink/1BfTcrQzsHUGg3yC)|[error](https://wandbox.org/permlink/M6FgeoEUAeoz56lx)|'main' is not allowed to be declared inline|
|single-line comment contains line-continuation character|[/W1 C4010][]|[-Wcomment](https://wandbox.org/permlink/mM2gHi6GbYWVCKJ2)|[-Wcomment](https://wandbox.org/permlink/cK2Ulm07VwtI2NIN)|multi-line // comment|:ballot_box_with_check:|
|'function' undefined; assuming extern returning int|[/W3 C4013][]||||
|'identifier' : type of bit field must be integral|~[/W1 C4015][]~ [error C2150](https://docs.microsoft.com/en-us/cpp/error-messages/compiler-errors-1/compiler-error-c2150?view=vs-2019)|[error](https://wandbox.org/permlink/WAcuoBfxIkWruthx)|[error](https://wandbox.org/permlink/iy7ELswBh55cSs2G)|bit-field '_IDENTIFIER_' has non-integral type '_TYPE_'|
|'expression' : signed/unsigned mismatch|[/W3 C4018][]|[-Wsign-compare](https://wandbox.org/permlink/z4RHK3d2JBRE7y4d)|[-Wsign-compare](https://wandbox.org/permlink/fxZyhxNfIrukjAjs)|comparison of integers of different signs: 'unsigned _TYPE_' and '_TYPE_'|:ballot_box_with_check:|
|empty statement at global scope|[/W4 C4019][]|-|[-Wextra-semi-stmt](https://wandbox.org/permlink/t2lN0EJnAuktq96r)|empty expression statement has no effect; remove unnecessary ';' to silence this warning |:ballot_box_with_check:|
|'function' : too many actual parameters|~[/W1 C4020][]~ [error C2660][]|error|[error](https://wandbox.org/permlink/lomKAAkKfSylm4XI)||
|'function' : pointer mismatch for actual parameter 'number'|[/W1 C4022][]||||
|'symbol' : based pointer passed to unprototyped function : parameter number|[/W3 4023][]||||
|'function' : different types for formal and actual parameter 'number'|[/W1 C4024][]||||
|'number' : based pointer passed to function with variable arguments: parameter number|[/W1 C4025][]||||
|function declared with formal parameter list|[/W1 C4026][]||||
|function declared without formal parameter list|[/W1 C4027][]||||
|formal parameter 'number' different from declaration|[/W1 C4028][]|-|-||
|declared formal parameter list different from definition|[/W1 C4029][]|||
|first formal parameter list longer than the second list|[/W1 C4030][]|||
|second formal parameter list longer than the first list|[/W1 C4031][]|||
|formal parameter 'number' has different type when promoted|[/W4 C4032][]|-|-||
|'function' must return a value|[/W1 C4033][]|error|[error](https://wandbox.org/permlink/18liO7Ylnhpypszb)|non-void function 'test_1' should return a value|
|sizeof returns 0|[/W1 C4034][]|||
|'function': no return value|[/W3 C4035][]||
|unnamed 'type' as actual parameter|[/W1 C4036][]|-|-||
|'modifier' : illegal ambient class modifier|[/W1 C4038][]|-|-||
|compiler limit : terminating browser output|[/W1 C4041][]|-|-||
|'identifier' : has bad storage class|[/W1 C4042][]|-|-|
|'array' : array bounds overflow|[/W1 C4045][]||||
|'operator' : 'identifier1' differs in levels of indirection from 'identifier2'|~[/W1 C4047][]~ [error C2440][]|error|[error](https://wandbox.org/permlink/XqSUNx7DtRSDNQcF)|
|different declared array subscripts : 'identifier1' and 'identifier2'|[/W1 C4048][]|||
|compiler limit : terminating line number emission|[/W1 C4049][]||
|type conversion; possible loss of data|[/W2 C4051][]||
|function declarations different; one contains variable arguments|[/W1 C4052][]||
|one void operand for '?:'|[/W4 C4053][]||
|'conversion' : from data pointer 'type1' to function pointer 'type2'|~[/W1 4055][]~ [Obsolete VS2017][]|-|-|
|overflow in floating point constant arithmetic|[/W2 C4056][] ??|||
|'operator' : 'identifier1' indirection to slightly different base types from 'identifier2'|[/W4 C4057][] [C-Only][]|||
|switch statement contains no 'case' or 'default' labels|[C4060][]|NOWARN|[NOWARN](https://wandbox.org/permlink/2fOrUDbtAUetkWBV)||
|case 'identifier' is not a valid value for switch of enum 'enumeration'|[C4063][]|-Wswitch|[-Wswitch](https://wandbox.org/permlink/jYVWs0XcJ4BH3SUi)|case value not in enumerated type 'Hoge'|:ballot_box_with_check:|
|switch of incomplete enum 'enumeration'|[C4064][]|error|[error](https://wandbox.org/permlink/6RF7OUnFHwXsWrXL)|
|switch statement contains 'default' but no 'case' labels|[C4065][]|NOWARN|[NOWARN](https://wandbox.org/permlink/akrMz1sEyXp4pkDn)|
|enumerator 'identifier' in switch of enum 'enumeration' is not explicitly handled by a case label|[/W4 C4061][] [Off][]|-Wswitch-enum|[-Wswitch-enum](https://wandbox.org/permlink/PUm5ULD8MXDnpoye)|enumeration value '_NAME_' not explicitly handled in switch |:ballot_box_with_check:|
|enumerator 'identifier' in switch of enum 'enumeration' is not handled|[/W4 C4062][] [Off][]|-Wswitch|[-Wswitch](https://wandbox.org/permlink/X14xNQbbxmgU1W2f)|enumeration value '_NAME_' not handled in switch|:ballot_box_with_check:|
|characters beyond first in wide-character constant ignored|[/W3 C4066][]||
|unexpected tokens following preprocessor directive - expected a newline|[/W1 C4067][]|[error,warning,-Wendif-labels](https://wandbox.org/permlink/Ht27NdPvIYzkLU6s)|[error, -Wextra-tokens](https://wandbox.org/permlink/GWAzROCAePlNDfxT)|extra tokens at end of _TOKEN_ directive|:ballot_box_with_check:|
|unknown pragma|[/W1 C4068][]|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/D8mn6FhQXORZBUkp)|unknown pragma ignored|:ballot_box_with_check|
|long double is the same precision as double|[C4069][]|||
|initializers put in library initialization area|[/W3 C4073][]|-Wunknown-pragmas|-Wunknown-pragmas||
|initializers put in compiler reserved initialization area|[/W1 C4074][]|-Wunknown-pragmas|-Wunknown-pragmas||
|initializers put in unrecognized initialization area|[/W1 C4075][]|-Wunknown-pragmas|-Wunknown-pragmas||
|'type modifier' : can not be used with type 'typename'|[/W1 C4076][]|error|[error](https://wandbox.org/permlink/vvwd35DoNR40fW7f)||
|unknown check_stack option|[/W1 C4077][]|-Wunknown-pragmas|-Wunknown-pragmas||
|unexpected token 'token'|[/W1 C4079][]|-Wpragma|-Wignored-pragmas|
|expected identifier for segment name; found 'symbol'|[/W1 C4080][]|-Wunknown-pragmas|-Wunknown-pragmas||
|expected 'token1'; found 'token2'|[/W1 C4081][]|-Wunknown-pragmas|-Wunknown-pragmas||
|expected 'token'; found identifier 'identifier'|[/W1 C4083][]|-Wunknown-pragmas|-Wunknown-pragmas||
|expected pragma parameter to be 'on' or 'off'|[/W1 C4085][]|-Wunknown-pragmas|-Wunknown-pragmas||
|expected pragma parameter to be '1', '2', '4', '8', or '16'|[/W1 C4086][]|-Wpragma|-Wignored-pragmas|
|'function' : declared with 'void' parameter list|~[/W1 C4087][]~ [error C2660][]|error|error|
|'function' : pointer mismatch in actual parameter 'number', formal parameter 'number'|[/W1 C4088][]||
|'function' : different types in actual parameter 'number', formal parameter 'number'|[/W1 C4089][]|||
|'operation' : different 'modifier' qualifiers|[/W1 C4090][] [C-Only][]||
|'keyword' : ignored on left of 'type' when no variable is declared|[/W1 C4091][]|error|error|
|sizeof returns 'unsigned long'|[/W4 C4092][]||
|untagged 'token' declared no symbols|[/W2 4094][]|error|[error](https://wandbox.org/permlink/sKSWL8bsVWNxvIBn)||
|'a': interface is not a COM interface; will not be emitted to IDL|[/W1 C4096][]|-|-|
|expected pragma parameter to be 'restore' or 'off'|[/W1 C4097][]|-Wunknown-pragmas|-Wunknown-pragmas||
|'function' : void function returning a value|[/W1 C4098][]|||
|'identifier' : type name first seen using 'objecttype1' now seen using 'objecttype2'|[/W2 C4099][]|NOWARN|[-Wmismatched-tags](https://wandbox.org/permlink/a7KmDSJZeiKS8ICp)|'?IDENTIFIER_' defined as a class here but previously declared as a struct; this is valid, but may result in linker errors under the Microsoft C++ ABI|:ballot_box_with_check:|
|'identifier' : unreferenced formal parameter|[/W4 C4100][]|-Wunused-parameter|[-Wunused-parameter](https://wandbox.org/permlink/Lg6HoqMG8MZGuvHp)|unused parameter '_IDENTIFIER_'|:ballot_box_with_check:|
|'identifier' : unreferenced local variable|[/W3 C4101][]|-Wunused-variable|[-Wunused-variable](https://wandbox.org/permlink/sZKVILFpyoQUnljb)|unused variable '_IDENTIFIER_'|:ballot_box_with_check:|
|'label' : unreferenced label|[/W3 C4102][]|-Wunused-label|[-Wunused-label](https://wandbox.org/permlink/slCUpdY7trnfRtFU)|unused label '_LABEL_'|:ballot_box_with_check:|
|'filename' : alignment changed after including header, may be due to missing #pragma pack(pop)|[/W1 C4103][]|NOWARN|[-Wpragma-pack](https://wandbox.org/permlink/ip1Ds0WQRxFwdQp4)|unterminated '#pragma pack (push, ...)' at end of file|:ballot_box_with_check:|
|unexpected identifier 'identifier'|[/W1 C4109][]|-Wunknown-pragmas|-Wunknown-pragmas||
|#line requires an integer between 1 and number|[/W1,4 C4112][]|-pedantic|[-pedantic  (-Wgnu-zero-line-directive)](https://wandbox.org/permlink/68eMjVotYyqwkaqd)|#line directive with zero argument is a GNU extension|:ballot_box_with_check:|
|'identifier1' differs in parameter lists from 'identifier2'|[/W1 C4113][]|
|same type qualifier used more than once|[/W1 C4114][]|[error](https://wandbox.org/permlink/siOF7EaGz3wfSlHh)|[-Wduplicate-decl-specifier](https://wandbox.org/permlink/3j36NXx7PZRFSowX)|duplicate 'volatile' declaration specifier|:ballot_box_with_check:|
|'type' : named type definition in parentheses|[/W1,4 C4115][]|
|unnamed type definition in parentheses|[/W1 C4116][]||
|macro name 'name' is reserved; 'Command' ignored|[/W1 C4117][]|-Wbuiltin-macro-redefined|[-Wbuiltin-macro-redefined](https://wandbox.org/permlink/fP8RAUGwYj4qsPfO)|redefining builtin macro|:ballot_box_with_check:|
|different bases 'base1' and 'base2' specified|[/W1 C4119][]|
|based/unbased mismatch|[/W1 C4120][]||
|'symbol' : alignment of a member was sensitive to packing|[/W4 C4121][]|NOWARN|NOWARN|
|'function' : alloc_text applicable only to functions with C linkage|[/W1 C4122][]||
|different base expressions specified|[C4123][]|||
|__fastcall with stack checking is inefficient|[/W1 C4124][]|-|-|
|decimal digit terminates octal escape sequence|[/W4 C4125][]|NOWARN|[NOWARN](https://wandbox.org/permlink/wrEjGtNr0eZVIxbQ)|
|conditional expression is constant|[/W4 C4127][]|NOWARN|[NOWARN](https://wandbox.org/permlink/ijA6mkWtbtcyeS6r)||
|'character' : unrecognized character escape sequence|[/W1 C4129][]|warning|[-Wunknown-escape-sequence](https://wandbox.org/permlink/PfTVPU34dqwKMRSh)|unknown escape sequence '\/'|:ballot_box_with_check:|
|'operator' : logical operation on address of string constant|[/W4 C4130][]|[-Waddress](https://wandbox.org/permlink/MQnCpnpN1HPmr7lz)|[-Wstring-compare](https://wandbox.org/permlink/zgBHQfYXOT7KIGGg)|result of comparison against a string literal is unspecified (use an explicit string comparison function instead)|:ballot_box_with_check:|
|'function' : uses old-style declarator|[/W4 C4131][] [C-Only][]||
|'object' : const object should be initialized|[/W4 C4132][] [C-Only][]||
|'type' : incompatible types - from 'type1' to 'type2'|[/W3 C4133][]|
|'function': no return value from floating-point function|[C4137][]|
|'*/' found outside of comment|[/W1 C4138][]|NOWARN|NOWARN|
|'modifier' : used more than once|[/W1 C4141][]|[error](https://wandbox.org/permlink/5Tg8vC90cOfdNxV1)|[-Wduplicate-decl-specifier](https://wandbox.org/permlink/X31ATqUlUa6lhta7)|duplicate 'inline' declaration specifier|:ballot_box_with_check:|
|benign redefinition of type|[/W1 C4142][] [C-Only]|
|pragma 'same_seg' not supported; use __based allocation|[/W1 C4143][]|-|-|
|'expression' : relational expression as switch expression|[/W1 C4144][]|[NOWARN](https://wandbox.org/permlink/U29cGgVjgVW0N0m3)|[-Wswitch-bool](https://wandbox.org/permlink/vL1ObRTKd8d0hkOR)|switch condition has boolean value|:ballot_box_with_check:|
|'expression1' : relational expression as switch expression; possible confusion with 'expression2'|[/W1 C4145][]|[NOWARN](https://wandbox.org/permlink/lKdLUwlALFsg2wMT)|[-Wswitch-bool](https://wandbox.org/permlink/I7tkSfzYGp1wbjwL)|switch condition has boolean value|:ballot_box_with_check:|
|unary minus operator applied to unsigned type, result still unsigned|[/W2 C4146][]|[NOWARN](https://wandbox.org/permlink/WLbZQBxJSjElyd7m)|[NOWARN](https://wandbox.org/permlink/JmCiSANwPoPvVhoJ)||
|deletion of pointer to incomplete type 'type'; no destructor called|[/W2 C4150][]|-Wdelete-incomplete|[-Wdelete-incomplete](https://wandbox.org/permlink/K6r1Yfsu7n9bfGCk)|deleting pointer to incomplete type 'IncClass' may cause undefined behavior|:ballot_box_with_check:|
|non standard extension, function/data ptr conversion in expression|[/W4 C4152][]|-|-|
|function/data pointer conversion in expression|[/W1 C4153][]|-|-|
|deletion of an array expression; conversion to pointer supplied|[/W1 C4154][]|[warning](https://wandbox.org/permlink/5VyqHAVaqVtzytbl)|[error](https://wandbox.org/permlink/A8NhfM8AyiDaVwnH)|
|deletion of an array expression without using the array form of 'delete'|[/W1 C4155][]|[NOWARN](https://wandbox.org/permlink/Y7TpPMDYCT3nMHlz)|[warning](https://wandbox.org/permlink/VsmYJ28AEJfE87o4)|'delete' applied to a pointer-to-array type 'int (*)[10]' treated as 'delete[]'||
|deletion of an array expression without using the array form of 'delete'; array form substituted|[/W2 C4156][]|NOWARN|warning|'delete' applied to a pointer-to-array type 'int (*)[10]' treated as 'delete[]'|
|pragma was ignored by C compiler|[/W1 C4157][]|-|-|
|assuming #pragma pointers_to_members(full_generality, inheritance)|[/W1 C4158][]|-|-|
|#pragma pragma(pop,...) : has popped previously pushed identifier 'identifier'|[/W3 C4159][]|-|-|
|#pragma (pop,...) : did not find previously pushed identifier 'identifier'|[/W1 C4160][]|-|-|
|#pragma pragma(pop...) : more pops than pushes|[/W3 C4161][]|-|-|
|'identifier' : no function with C linkage found|[/W1 C4162][]|-|-|
|'identifier' : not available as an intrinsic function|[/W1 C4163][]|-|-|
|'identifier' : intrinsic function not declared|[/W1 C4164][]|-|-|
|'HRESULT' is being converted to 'bool'; are you sure this is what you want?|[/W1 4165][]|-|-|
|illegal calling convention for constructor/destructor|[/W1 C4166][]|-|-|
|function : only available as an intrinsic function|[/W1 C4167][]|-|-|
|compiler limit : out of debugger types, delete program database 'database' and rebuild|[/W1 C4168][]|-|-|
|returning address of local variable or temporary|[/W1 C4172][]|[-Wreturn-local-addr](https://wandbox.org/permlink/pBWhp5u8AugJyQDD)|[-Wreturn-stack-address](https://wandbox.org/permlink/LWuZrYzmknFgkHav)|returning reference to local temporary object|:ballot_box_with_check:|
|'name' : not available as a #pragma component|[/W1 C4174][]|-|-|
|#pragma component(browser, on) : browser info must initially be specified on the command line|[/W1 C4175][]|-|-|
|'subcomponent' : unknown subcomponent for #pragma component browser|[/W1 C4176][]|-|-|
|#pragma pragma should be at global scope|[/W1 C4177][]|-|-|
|case constant 'constant' too big for the type of the switch expression|[/W1 C4178][]|[error -Wnarrowing](https://wandbox.org/permlink/38PevVKq6JDJbGEh)|[error -Wc++11-narrowing](https://wandbox.org/permlink/GCuBpZyoVaCLGYeU) ([-Wswitch -std=c++98](https://wandbox.org/permlink/e9dbu69KGQFvYRec))|case value evaluates to _VALUE_, which cannot be narrowed to type 'int'|:ballot_box_with_check:|
|'//*' : parsed as '/' and '/*': confusion with standard '//' comments|[/W1 C4179][]||
|qualifier applied to function type has no meaning; ignored|[/W1 C4180][]|[NOWARN](https://wandbox.org/permlink/9dQ6fHDGttSnVs8D)|[-Wignored-qualifiers](https://wandbox.org/permlink/eCGVd8s2oBd7tqGi)|'_NAME_' qualifier on function type '_IDENTIFIER_' (aka '_SIG_') has no effect|:ballot_box_with_check:|
|qualifier applied to reference type; ignored|[C4181][]|||
|#include nesting level is 'number' deep; possible infinite recursion|[/W1 C4182][]|[error](https://wandbox.org/permlink/z1SSX4Mriiw0zC0A)|[error](https://wandbox.org/permlink/pCxzEFHDXG2SH3IS)||
|'identifier': missing return type; assumed to be a member function returning 'int'|~[/W1 C4183][]~ [error C2334][]|error|[error](https://wandbox.org/permlink/za6YuEv8upM7lSCO)|
|ignoring unknown #import attribute 'attribute'|[/W1 C4185][]|-|-|
|#import attribute 'attribute' requires count arguments; ignored|[/W1 C4186][]|-|-|
|#import attributes 'attribute1' and 'attribute2' are incompatible; both ignored|[/W1 C4187][]|-|-|
|constant expression is not integral|[C4188][]|-|-|
|'identifier' : local variable is initialized but not referenced|[/W4 C4189][]|-Wunused-variable|[-Wunused-variable](https://wandbox.org/permlink/lEHxfWsmAEFCjRDJ)|unused variable '_NAME_'|:ballot_box_with_check:|
|'identifier1' has C-linkage specified, but returns UDT 'identifier2' which is incompatible with C|[/W1 C4190][]|[NOWARN](https://wandbox.org/permlink/xZHYQE7triJLndgD)|[-Wreturn-type-c-linkage](https://wandbox.org/permlink/SEWKt2JcLBnAdeZH)|'func' has C-linkage specified, but returns user-defined type 'X' which is incompatible with C|:ballot_box_with_check:|
|'operator/operation' : unsafe conversion from 'type of expression' to 'type required'|[/W3 C4191][]|-|-|
|automatically excluding 'name' while importing type library 'library'|[/W3 C4192][]|-|-|
|#pragma warning(pop): no matching '#pragma warning(push)'|[C4193][]|-|-|
|#pragma start_map_region cannot be nested; ignored|[C4194][]|-|-|
|#pragma stop_map_region used without matching #pragma start_map_region; ignored|[C4195][]|-|-|
|expected '%$L' or '%$L'; found '%$L'|[C4196][]|-|-|
|'type' : top-level volatile in cast is ignored|[/W3 C4197][]|[-Wignored-qualifiers](https://wandbox.org/permlink/FThm1wRMpnzks9ub)|[NOWARN](https://wandbox.org/permlink/WSQvokj8rpa8yCsF)|:ballot_box_with_check:|

## VS C4200-C4399

|Summary|Visual Studio|GCC|Clang|Clang message|is Same|
|:---|:--:|:--:|:--:|:--|:--|
|nonstandard extension used : zero-sized array in struct/union|[/W2,4 C4200][]|[-Wpedantic](https://wandbox.org/permlink/hxVlDP6TC49qj0P1)|[-pedantic (-Wzero-length-array)](https://wandbox.org/permlink/dCOhebgvxxv9adE5)|zero size arrays are an extension|:ballot_box_with_check:|
|nonstandard extension used : nameless struct/union|[/W4 C4201][]|[-Wpedantic](https://wandbox.org/permlink/hxVlDP6TC49qj0P1#wandbox-resultwindow-code-body-9)|[-pedantic (-Wgnu-anonymous-struct)](https://wandbox.org/permlink/SlT2dcwmnJRE8eKo)|anonymous structs are a GNU extension|:ballot_box_with_check:|
|nonstandard extension used : '...': prototype parameter in name list illegal|[/W4 C4202][]|error|[error](https://wandbox.org/permlink/69GUyNXqErEAuIvh)||
|nonstandard extension used : non-constant aggregate initializer|[/W4 C4203][]|NOWARN|[NOWARN](https://wandbox.org/permlink/KArBPvAgfcL9tS21)||
|nonstandard extension used : static function declaration in function scope|[/W4 C4205][]|||
|nonstandard extension used : translation unit is empty|[/W4 C4206][]||||
|nonstandard extension used : extended initializer form|[/W4 C4207][]||||
|nonstandard extension used : delete [exp] - exp evaluated but ignored|[/W4 C4208][]|error|[error](https://wandbox.org/permlink/Op9pUGFtEVjCxP4f)||
|nonstandard extension used : function given file scope|[/W4 C4210][]|error|[error](https://wandbox.org/permlink/1nNPehJwnEjXUOBz)||
|nonstandard extension used : redefined extern to static|[/W4 C4211][]|error|[error](https://wandbox.org/permlink/kRBIv4tLQQ11vRTZ)||
|nonstandard extension used : function declaration used ellipsis|[/W4 C4212][]|NOWARN|[NOWARN](https://wandbox.org/permlink/z7cyGh7pWaAiXpPL)||
|nonstandard extension used : cast on l-value|[/W4 C4213][]|error|[error](https://wandbox.org/permlink/p6R5UAsDKSePzOAD)|-|-|-|
|nonstandard extension used : bit field types other than int|[/W4 C4214][] [C-Only][]|-|-|
|nonstandard extension used : long float|[/W1 C4215][]|error|[error](https://wandbox.org/permlink/sotvrOqu0uuaTu2Z)|'long float' is invalid|
|nonstandard extension used : float long|[/W1 C4216][]|error|[error](https://wandbox.org/permlink/IEe3Pa1KCnHmhH3y)|'long float' is invalid|
|nonstandard extension used : must specify at least a storage class or a type|[/W1 C4218][] [C-Only][]|||
|varargs matches remaining parameters|[/W4 C4220][] [C-Only][]||
|nonstandard extension used : 'identifier' : cannot be initialized using address of automatic variable|[/W4 C4221][] [C-Only][]||
|nonstandard extension used : non-lvalue array converted to pointer|[/W1,4 C4223][]||
|nonstandard extension used : formal parameter 'identifier' was previously defined as a type|[/W1 C4224][]|NOWARN|NOWARN|
|nonstandard extension used : 'keyword' is an obsolete keyword|[/W1 C4226][]|-|-|
|anachronism used : qualifiers on reference are ignored|[/W1 C4227][]|error|[error](https://wandbox.org/permlink/igzUxWBoC98bspvH)|
|nonstandard extension used : qualifiers after comma in declarator list are ignored|[/W1 C4228][]|error|[error](https://wandbox.org/permlink/5O81IRVL7fGaajRl)|anachronism used : modifiers on data are ignored|[/W1 C4229][]|-|-|
|anachronism used : modifiers/qualifiers interspersed; qualifier ignored|[/W1 C4230][]|-|-|
|nonstandard extension used : 'identifier' : address of dllimport 'dllimport' is not static, identity not guaranteed|[/W4 C4232][]|-|-|
|nonstandard extension used : 'keyword' keyword only supported in C++, not C|[/W4 C4233][]|||
|nonstandard extension used: 'keyword' keyword reserved for future use|[/W4 C4234][]|||
|nonstandard extension used : 'keyword' keyword not supported on this architecture|[/W4 C4235][]||
|'keyword' keyword is not yet supported, but reserved for future use|~[/W1 C4237][]~ [error C2059][]|error|error|
|nonstandard extension used : class rvalue used as lvalue|[/W4 C4238][]|[error -fpermissive](https://wandbox.org/permlink/OmD0clYLQrnLxWd3)|[error -Waddress-of-temporary](https://wandbox.org/permlink/QLQqE1Fd2AlwTuJ3)|taking the address of a temporary object of type 'C'|
|nonstandard extension used : 'token' : conversion from 'type' to 'type'|[/W4 C4239][]|error|[error](https://wandbox.org/permlink/89Zms5xoydv0Wwzq)|
|nonstandard extension used : access to 'classname' now defined to be 'access specifier', previously it was defined to be 'access specifier'|[/W3 C4240][]|error|[error](https://wandbox.org/permlink/eObVkJU2mG4yNlj0)|'_NAME_' redeclared with 'public' access|
|'identifier' : conversion from 'type1' to 'type2', possible loss of data|[/W4 C4242][]|[-Wconversion](https://wandbox.org/permlink/AZLe3ZNt84ruJkBr)|[-Wimplicit-int-conversion](https://wandbox.org/permlink/jw7P7K3ei05sCgmM)|implicit conversion loses integer precision: '_TYPE_' to '_TYPE_'|:ballot_box_with_check:|
|'conversion type' conversion exists from 'type1' to 'type2', but is inaccessible|[/W3 C4243][]|NOWARN|[NOWARN](https://wandbox.org/permlink/O04xqJxAG5Z7mDAx)|
|'argument' : conversion from 'type1' to 'type2', possible loss of data|[/W2 C4244][]|-Wfloat-conversion|[-Wfloat-conversion](https://wandbox.org/permlink/DKO2n3JIUqlIbgrv)|prog.cc:8:14: warning: implicit conversion turns floating-point number into integer: '_TYPE_' to '_TYPE_'|:ballot_box_with_check:|
|'conversion' conversion from 'type1' to 'type2', possible loss of data|[/W3,4 C4244][]|-Wconversion|[-Wconversion](https://wandbox.org/permlink/pl2CyQXzdcUzrkBy)||:ballot_box_with_check:|
|'conversion' : conversion from 'type1' to 'type2', signed/unsigned mismatch|[/W4 C4245][]|-Wsign-conversion|[-Wsign-conversion](https://wandbox.org/permlink/nar9aUENFpL8ZlCq)|implicit conversion changes signedness: '_TYPE_' to '_TYPE_'|:ballot_box_with_check:|
|'class1' : inherits 'class2::member' via dominance|[/W2 C4250][]|NOWARN|[NOWARN](https://wandbox.org/permlink/YLmsCIKuU6Mnja3H)||
|'type' : class 'type1' needs to have dll-interface to be used by clients of class 'type2'|[/W1 C4251][]|-|-|
|'operator' : conversion from 'type1' to 'type2', possible loss of data|[/W4 C4254][]|NOWARN|[NOWARN](https://wandbox.org/permlink/dq3wa2lDRIEtNse1)|
|'function' : no function prototype given: converting '()' to '(void)'|[/W4 C4255][] [C-Only][]|-|-|
|'function' : constructor for class with virtual bases has '...'; calls may not be compatible with older versions of Visual C++|[/W4 C4256][]|-|-|
|'variable' : definition from the for loop is ignored; the definition from the enclosing scope is used"|[/W1 C4258][]|NOWARN|[NOWARN](https://wandbox.org/permlink/CVJG7o9bwBBi2OWc)|
|'function' : member function does not override any base class virtual member function|[/W4 C4263][]|-Woverloaded-virtual|[-Woverloaded-virtual](https://wandbox.org/permlink/ZAV9lUH5hRDbZZgv)|'_FUNCTION_' hides overloaded virtual function|:ballot_box_with_check:|
|'virtual_function' : no override available for virtual member function from base 'class'; function is hidden|[/W1 C4264][]|
|class' : class has virtual functions, but destructor is not virtual|[/W3 C4265][]|-Wnon-virtual-dtor|[-Wnon-virtual-dtor](https://wandbox.org/permlink/KeW1Px6KLH9WB9bz)|'_CLASS__' has virtual functions but non-virtual destructor|:ballot_box_with_check:|
|'function' : no override available for virtual member function from base 'type'; function is hidden|[/W4 C4266][]||
|'var' : conversion from 'size_t' to 'type', possible loss of data|[/W3 C4267][]|[-Wconversion](https://wandbox.org/permlink/F5FGAbBCYF7Zxhjt)|[-Wshorten-64-to-32](https://wandbox.org/permlink/PV73kTvl4LkSOcQG)|implicit conversion loses integer precision: '_TYPE_' (aka '_TYPE_') to '_TYPE_'|:ballot_box_with_check:|
|'identifier' : 'const' static/global data initialized with compiler generated default constructor fills the object with zeros|[/W4 C4268][]|error -fpermissive|[error](https://wandbox.org/permlink/Q5Y4aWwMQO6H0FqY)||
|'identifier' : 'const' automatic data initialized with compiler generated default constructor produces unreliable results|[/W1 C4269][]|error -fpermissive|[error](https://wandbox.org/permlink/eagem7Whc89FoaIo)|
|'function' : is marked __declspec(dllimport); must specify native calling convention when importing a function.|[/W1 C4272][]|-|-|
|'function' : inconsistent DLL linkage|[/W1 C4273][]|-|-|
|#ident ignored; see documentation for #pragma comment(exestr, 'string')|[/W1 C4274][]|-|-|
|non - DLL-interface class 'class_1' used as base for DLL-interface class 'class_2'|[/W2 C4275][]|-|-|
|'function' : no prototype provided; assumed no parameters|[/W1 C4276][]|||
|'identifier': identifier in type library 'tlb' is already a macro; use the 'rename' qualifier|[/W3 C4278][]|-|-|
|'operator ->' was self recursive through type 'type'|[/W3 C4280][]|error|[error](https://wandbox.org/permlink/1xoU2BuzlPH2FQbF)|
|'operator ->' recursion occurred through type 'type'|[/W3 C4281][]|error|[error](https://wandbox.org/permlink/OWYvNoTeOVpE9Opy)|
|then through type 'type'|[/W3 C4282][]||
|and through type 'type'|[/W3 C4283][]||
|return type for 'identifier::operator ->' is recursive if applied using infix notation|[/W2 C4285][]|NOWARN|[NOWARN](https://wandbox.org/permlink/8yvjslZOUUEqQ6xh)|
|'type1' : is caught by base class ('type2') on line number|[/W1 C4286][]|warning|[-Wexceptions](https://wandbox.org/permlink/hPSJuIMRT0tMXdhj)|exception of type 'D' will be caught by earlier handler|:ballot_box_with_check:|
|'operator' : unsigned/negative constant mismatch|[/W3 C4287][]|-Wsign-compare|[-Wsign-compare](https://wandbox.org/permlink/Zd5FV0kPAFA9kvtH)|comparison of integers of different signs: '_TYPE_' and '_TYPE_'|:ballot_box_with_check:|
|nonstandard extension used : 'var' : loop control variable declared in the for-loop is used outside the for-loop scope; it conflicts with the declaration in the outer scope|[/W1 C4288][]|-Wunreachable-code|[-Wunreachable-code](https://wandbox.org/permlink/5J5Y8jKarl4qsaZG)||:ballot_box_with_check:|
|nonstandard extension used : 'var' : loop control variable declared in the for-loop is used outside the for-loop scope|[/W4 C4289][]|-|-|
|C++ exception specification ignored except to indicate a function is not __declspec(nothrow)|[/W3 C4290][]|-|-|
|'declaration' : no matching operator delete found; memory will not be freed if initialization throws an exception|[/W1 C4291][]|NOWARN|[NOWARN](https://wandbox.org/permlink/3laZMo4FColChxmk)|
|'operator' : shift count negative or too big, undefined behavior|[/W1 C4293][]|-Wshift-count-overflow|[-Wshift-count-overflow](https://wandbox.org/permlink/0c0V7KDrG6bzAelS)|shift count >= width of type|:ballot_box_with_check:|
|'array' : array is too small to include a terminating null character|[/W4 C4295][] [C-Only][]|-|-|
|'operator' : expression is always false|[/W4 C4296][]|[-Wtype-limits](https://wandbox.org/permlink/8naEWNJet3GNbWpV)|[-Wtautological-unsigned-zero-compare](https://wandbox.org/permlink/oMzIhOyrkFxlUsi0)|result of comparison of unsigned expression < 0 is always false|:ballot_box_with_check:|
|'function' : function assumed not to throw an exception but does|[/W1 C4297][]|-|-|
|'conversion' : truncation from 'type 1' to 'type 2'|[/W2 C4302][]|error -fpermissive|[error](https://wandbox.org/permlink/xePlkT1O3t91WIf3)|
|'context' : truncation from 'type1' to 'type2'|[/W1 C4305][]|[-Wfloat-conversion](https://wandbox.org/permlink/nhZ1VE6O7RDdal7n)|[-Wimplicit-float-conversion](https://wandbox.org/permlink/mlDb0iY7nmCfWsLa)|implicit conversion loses floating-point precision: 'double' to 'float'|:ballot_box_with_check:|
|'identifier' : conversion from 'type1' to 'type2' of greater size|[/W3 C4306][]|||
|'operator' : integral constant overflow|[/W2 C4307][]|[-Woverflow](https://wandbox.org/permlink/jXOSXzTg16ZeVG8T)|[-Winteger-overflow](https://wandbox.org/permlink/5CFSu1o33qOFG8Hr)|overflow in expression; result is - _XXX_ with type '_TYPE_'|
|negative integral constant converted to unsigned type|[/W2 C4308][]|-Wsign-conversion|[-Wsign-conversion](https://wandbox.org/permlink/Q1Jcl8eWDuJyby3u)|implicit conversion changes signedness: '_TYPE_' to '_TYPE_'|:ballot_box_with_check:|
|'conversion' : truncation of constant value|[/W2 C4309][]|[-Wconversion](https://wandbox.org/permlink/P2qaeGuuwRqEuzHl)|[-Wconstant-conversion](https://wandbox.org/permlink/YCDxr5fAZmoTYlDP)|implicit conversion from '_TYPE_' to '_TYPE_' changes value from _VALUE_ to - _VALUE_|:ballot_box_with_check:|
|cast truncates constant value|[/W3 C4310][]|NOWARN|[NOWARN](https://wandbox.org/permlink/PKvR3VGRVBM1eId6)|
|'variable' : pointer truncation from 'type' to 'type'|[/W1 C4311][]|error -fpermissive|[error](https://wandbox.org/permlink/jU9vh97gzagUshyE)|
|'operation' : conversion from 'type1' to 'type2' of greater size|[/W1 C4312][]|-Wint-to-pointer-cast|[-Wint-to-void-pointer-cast](https://wandbox.org/permlink/ENteC23V5rCJNKBu)|cast to 'void *' from smaller integer type 'int'|:ballot_box_with_check:|
|'function' : 'format specifier' in format string conflicts with argument number of type 'type'|[/W1 C4313][]|-Wformat|[-Wformat](https://wandbox.org/permlink/UEnKVbHljnoDpEkZ)|format specifies type '_TYPE_' but the argument has type '_TYPE_'|:ballot_box_with_check:|
|Object allocated on the heap may not be aligned for this type.|[/W3 C4316][]|-|-|
|'~' : zero extending 'type1' to 'type2' of greater size|[/W1 C4319][]|NOWARN|[NOWARN](https://wandbox.org/permlink/E0DM84c9RDOi2RW7|
|'struct_name' : structure was padded due to __declspec(align())|[/W4 C4324][]|-|-|
|attributes for standard section 'section' ignored|[/W1 C4325][]|-|-|
|return type of 'function' should be 'type1' instead of 'type2'|[/W1 C4326][]|error|[error](https://wandbox.org/permlink/KrMhbbdffWKeMJjk)|
|__declspec(align()) is ignored on enum|[/W1 C4329][]|-|-|
|'operator' : right shift by too large amount, data loss|[/W1 C4333][]|NOWARN|[NOWARN](https://wandbox.org/permlink/U6d8ek3xTcyH68oM)|
|'operator' : result of 32-bit shift implicitly converted to 64 bits (was 64-bit shift intended?)|[/W3 C4334][]|NOWARN|[NOWARN](https://wandbox.org/permlink/E1aDHV0EqRkUJhsK)|
|Mac file format detected: please convert the source file to either DOS or UNIX format|[C4335][]|
|import cross-referenced type library 'type_lib1' before importing 'type_lib2'|[/W4 C4336][]|-|-|
|cross-referenced type library 'typelib1' in 'typelib2' is being automatically imported|[/W4 C4337][]|-|-|
|'type' : use of undefined type detected in WinRT or CLR meta-data - use of this type may lead to a runtime exception|[/W4 C4339][] clr|-|-|
|'value' : value wrapped from positive to negative value|[/W1 C4340][]||
|behavior change: 'function' called, but a member operator was called in previous versions|[/W1 C4342][]|NOWARN|[NOWARN](https://wandbox.org/permlink/0T1KGQZchw5nt8YN)|
|#pragma optimize("g",off) overrides /Og option|[/W4 C4343][]|-|-|
|behavior change: use of explicit template arguments results in call to 'function'|||
|'name' : dependent name is not a type|[/W1 C4346][]|error|[error](https://wandbox.org/permlink/SEoj7xfyEkdAiYB8)|
|'type' : redefinition of default parameter : parameter number|[/W1 C4348][]|error|[error](https://wandbox.org/permlink/kPgtOhurPDzSwN3G)|
|behavior change: 'member1' called instead of 'member2'|[/W1 C4350][]|NOWARN|[NOWARN](https://wandbox.org/permlink/CRCrnpLQ9PQRfglL)|
|nonstandard extension used: constant 0 as function expression. Use '__noop' function intrinsic instead|[/W1 C4353][]|NOWARN|[NOWARN](https://wandbox.org/permlink/ZeshMJHKP2USNsKd)|
|'this' : used in base member initializer list|[C4355][]|NOWARN|[NOWARN](https://wandbox.org/permlink/DYu3Yv7sJEirV21l)|
|'member' : static data member cannot be initialized via derived class|[/W2 C4356][]|error -fpermissive|[error](https://wandbox.org/permlink/yzoaexoqUvWbxoy5)||
|param array argument in formal argument list for delegate 'del' ignored when generating 'function'|[/W3 C4357][]|-|-|
|'operator': return type of combined delegates is not 'void'; returned value is undefined|[/W1 C4358][]|-|-|
|'type': actual alignment (8) is greater than the value specified in __declspec(align())|[/W3 C4359][]|-|-|
|#using for assembly 'file' previously seen at location(line_number) without as_friend attribute; as_friend not applied|[/W1 C4364][]|-|-|
|'action' : conversion from 'type_1' to 'type_2', signed/unsigned mismatch|[/W4 C4365][]|-Wsign-conversion|[-Wsign-conversion](https://wandbox.org/permlink/MuC4LoioXhTnihfo)| implicit conversion changes signedness: '_TYPE_' to '_TYPE_'|:ballot_box_with_check:|


## VS C4400-C4599

|Summary|Visual Studio|GCC|Clang|Clang message|is Same|
|:---|:--:|:--:|:--:|:--|:--|
|'type' : const/volatile qualifiers on this type are not supported|[/W4 C4400][]|||
|'bitfield' : member is bit field|[/W1 C4401][]|||
|must use PTR operator|[/W1 C4402][]||||

## VS C4600-C4799

|Summary|Visual Studio|GCC|Clang|Clang message|is Same|
|:---|:--:|:--:|:--:|:--|:--|
|#pragma 'macro name' : expected a valid non-empty string|[/W1 C4600][]|NOWARN|[NOWARN](https://wandbox.org/permlink/SRW40qjGweai7rqm)||
|#pragma pop_macro : 'macro name' no previous #pragma push_macro for this identifier|[/W1 C4602][]|[NOWARN](https://wandbox.org/permlink/gC77rsnxWZtRIlfv)|[-Wignored-pragmas](https://wandbox.org/permlink/nRpbm8fZSYJU1QqP)| pragma pop_macro could not pop '_x_', no matching push_macro|
|'identifier' : macro is not defined or definition is different after precompiled header use|[/W1 C4603][]||||
|#pragma warning : 'warning_number' ignored; Code Analysis warnings are not associated with warning levels|[/W1 C4604][]|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/heYKtzAVVury2uG5)|unknown pragma ignored|
|'union_member' has already been initialized by another union member in the initializer list, 'union_member'|[/W3 C4608][]|error|[error](https://wandbox.org/permlink/9obu7gH744zT7909)|initializing multiple members of union|
|object 'class' can never be instantiated - user-defined constructor required|[/W4 4610][]|error|[error](https://wandbox.org/permlink/MLWyAdkYiRb0HW02)|extra qualification on member 'operator='|
|interaction between 'function' and C++ object destruction is non-portable|[/W4 C4611][]||
|This warning occurs with #pragma include_alias when a filename is incorrect or missing|[/W1 C4612][]|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/gek3vezcBnv9odDt)||
|'segment' : class of segment cannot be changed|[/W1 C4613][]|||
|#pragma warning : unknown user warning type|[/W1 C4615][]|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/OEJ8i9lfC2n6fczq)||
||||
|#pragma warning : warning number 'number' not a valid compiler warning|[/W1 C4616][]|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/1Bc05bFexobk1XYf)||
|pragma parameters included an empty string; pragma ignored|[/W1 C4618][]|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/iXptC3K3HUL3ajDE)||
|#pragma warning : there is no warning number 'number'|[/W3 C4619][]|-Wunknown-pragmas|[-Wunknown-pragmas](https://wandbox.org/permlink/4PIcyBCyiNOpK2o3)||
|no postfix form of 'operator ++' found for type 'type', using prefix form|~[/W1 C4620][]~ [error C2676][]|error|[error](https://wandbox.org/permlink/aNs6WNcXqS5ds9jh)||
|no postfix form of 'operator --' found for type 'type', using prefix form|~[/W1 C4621][]~ [error C2676][]]|error|[error](https://wandbox.org/permlink/6aB2sUf0ku6mWyPD)||
|Overwriting debug information formed during creation of the precompiled header in object file: 'file'|[/W3 C4622][]|-|-||
|'derived class' : default constructor was implicitly defined as deleted because a base class default constructor is inaccessible or deleted|[/W4 C4623][]|NOWARN|[NOWARN](https://wandbox.org/permlink/lOmTdC1IjPDxUf0R)||
|'derived class' : destructor was implicitly defined as deleted because a base class destructor is inaccessible or deleted|[/W1 C4624][]|NOWARN|[NOWARN](https://wandbox.org/permlink/SyZyzDs7G5s78xvF)||
|'derived class' : copy constructor was implicitly defined as deleted because a base class copy constructor is inaccessible or deleted|[/W4 C4625][]|NOWARN|[NOWARN](https://wandbox.org/permlink/Z7d3OpCYDBRacU3k)|
|'derived class' : assignment operator was implicitly defined as deleted because a base class assignment operator is inaccessible or deleted|[/W4 C4626][]|NOWARN|[NOWARN](https://wandbox.org/permlink/gSDUOyspDkIraTy0)||
|'header_file': skipped when loNOWARNing for precompiled header use|[/W1 C4627][]|-|-||
|digraphs not supported with -Ze. Character sequence 'digraph' not interpreted as alternate tNOWARNen for 'char'|[/W1 C4628][]|NOWARN|[NOWARN](https://wandbox.org/permlink/vgFgoG1ZO2HJlgQV)||
|digraph used, character sequence 'digraph' interpreted as tNOWARNen 'char' (insert a space between the two characters if this is not what you intended)|[/W4 C2629][]|NOWARN|[NOWARN](https://wandbox.org/permlink/vgFgoG1ZO2HJlgQV)||
|'symbol' : 'extern' storage class specifier illegal on member definition|[/W1 C4630][]|NOWARN|[NOWARN](https://wandbox.org/permlink/u8eTU1EKS84iRpuX)||
|MSXML or XPath unavailable, XML document comments will not be processed. reason|[/W1 C4631][]||||
|XML document comment: file - access denied: reason|[/W1 C4632][]|-|-|
|XML document comment target: error: reason|[/W3 C4633][]|-|-|
|XML document comment: cannot be applied: reason|[/W4 C4634][]|-|-|
|XML document comment target: badly-formed XML: reason|[/W3 C4635][]|-|-|
|XML document comment applied to 'construct': tag requires non-empty '' attribute.|[/W3 C4636][]|-|-|
|XML document comment target: <include> tag discarded. reason|[/W3 C4637][]|-|-|
|XML document comment target: reference to unknown symbol 'symbol'|[/W3 C4638][]|-|-|
|MSXML error, XML document comments will not be processed. reason|[/W4 C4639][]|-|-|
|'instance' : construction of local static object is not thread-safe|[/W3 C4640][]|||
|XML document comment has an ambiguous cross reference|[/W3 C4641][]|-|-|
|function declared with __declspec(noreturn) has a return statement|[/W3 C4645][]|-|-|
|function declared with __declspec(noreturn) has non-void return type|[/W3 C4647][]|-|-|
|debugging information not in precompiled header; only global symbols from the header will be available|[/W1 C4650][]|||
|'definition' specified for precompiled header but not for current compile|[/W1 C4651][]|||
|compiler option 'option' inconsistent with precompiled header; current command-line option will override that defined in the precompiled header|[/W1 C4652][]|-|-|
|compiler option 'option' inconsistent with precompiled header; current command-line option ignored|[/W2 C4653][]|-|-|
|'symbol' : variable type is new since the last build, or is defined differently elsewhere|[/W1 C4655][]|-|-|
|'symbol' : data type is new or has changed since the last build, or is defined differently elsewhere|[/W1 C4656][]|-|-|
|expression involves a data type that is new since the last build|[/W1 C4657][]|-|-|
|#pragma 'pragma' : use of reserved segment 'segment' has undefined behavior, use #pragma comment(linker, ...)|[/W1 C4659][]|-Wunknown-pragmas|-Wunknown-pragmas|
|'identifier' : no suitable definition provided for explicit template instantiation request|[/W1 C4661][]|error|[error](https://wandbox.org/permlink/jykUefT9A4KJP6KX)|declaration does not declare anything|
|explicit instantiation; template-class 'identifier1' has no definition from which to specialize 'identifier2'|[/W1 C4662][]|error|[error](https://wandbox.org/permlink/QNUfW5HY2CiBhDVB)|declaration does not declare anything|
|'function' : no function template defined that matches forced instantiation|[/W1 C4667][]|error|[error](https://wandbox.org/permlink/ADhMmGLMzznQ6tE9)|explicit instantiation of 'max' does not refer to a function template, variable template, member function, member class, or static data member|
|'symbol' is not defined as a preprocessor macro, replacing with '0' for 'directives'|[/W4 C4668][]|-Wundef|[-Wundef](https://wandbox.org/permlink/jGR75x8PNLTi3dfB)|'_SYMBOL_' is not defined, evaluates to 0|:ballot_box_with_check:|
|'cast' : unsafe conversion: 'class' is a managed or WinRT type object|[/W1 C4669][]|-|-|
|'identifier' : this base class is inaccessible|[/W4 C4670][]|NOWARN|[NOWARN](https://wandbox.org/permlink/2mv6iDt1dazHeLbY)|
|'identifier1' : ambiguous. First seen as 'identifier2'|[/W4 C4672][]|||
|throwing 'identifier' the following types will not be considered at the catch site|[/W4 C4673][]|NOWARN|[NOWARN](https://wandbox.org/permlink/CAvsDUutz2weriyy)||
|'method' should be declared 'static' and have exactly one parameter|[/W C4674][]|-|-|
|'function': signature of non-private member contains assembly private type 'private_type'|[/W1 C4677][]|-|-|
|base class 'base_type' is less accessible than 'derived_type'|[/W1 C4678][]|-|-|
|'member' : could not import member|[/W1 C4679][]|||
|'class' : coclass does not specify a default interface|[/W4 C4680][]|-|-|
|'class' : coclass does not specify a default interface that is an event source|[/W4 C4681][]|-|-|
|'parameter' : no directional parameter attribute specified, defaulting to [in]|[/W4 C4682][]|-|-|
|'function': event source has an 'out'-parameter; exercise caution when hoNOWARNing multiple event handlers|[/W1 C4683][]|-|-|
|'attribute' : WARNING!! attribute may cause invalid code generation: use with caution|[/W1 C4884][]|-|-|
|expecting '> >' found '>>' when parsing template parameters|[/W1 C4685][]|||
|'user-defined type' : possible change in behavior, change in UDT return calling convention|[/W3 C4686][]|||
|'class': a sealed abstract class cannot implement an interface 'interface'|[C4687][]|-|-|
|'constraint': constraint list contains assembly private type 'type'|[/W1 C4688][]|-|-|
|[ emitidl( pop ) ] : more pops than pushes|[/W4 C4690][]|-|-|
|'type' : type referenced was expected in unreferenced assembly 'file', type defined in current translation unit used instead|[/W1 C4691][]|-|-|
|'function': signature of non-private member contains assembly private native type 'native_type'|[/W1 C4692][]|-|-|
|'class': a sealed abstract class cannot have any instance members 'Test'|[C4693][]|-|-|
|'class': a sealed abstract class cannot have a base-class 'base_class'|[C4694][]|-|-|
|uninitialized local variable 'name' used|[/W1,4 C4700][]|-Wuninitialized|[-Wuninitialized](https://wandbox.org/permlink/hy2fINy0pbOrCjJR)|variable '_NAME_' is uninitialized when used here|:ballot_box_with_check:|
|Potentially uninitialized local variable 'name' used|[/W4 C4701][]|[NOWARN](https://wandbox.org/permlink/ejMqCxRYfnXUPFNN)|[-Wsometimes-uninitialized](https://wandbox.org/permlink/zu5wQuK7XdEpvTQ0)|variable '_NAME_' is used uninitialized whenever 'if' condition is false|:ballot_box_with_check:|
|unreachable code|[/W4 C4702][]|[-Wunreachable-code](https://wandbox.org/permlink/V1QwKj7XMKH1dUgY) ?|[-Wunreachable-code](https://wandbox.org/permlink/9Tr3vBQAxzTEvuN2)|code will never be executed|:ballot_box_with_check:|
|Potentially uninitialized local pointer variable 'name' used|[/W4 C4703][]|[NOWARN](https://wandbox.org/permlink/yegteB9ImJWUJiw1)|[-Wsometimes-uninitialized](https://wandbox.org/permlink/OKj3yYplXtXeG1uB)|variable '_NAME_' is used uninitialized whenever 'if' condition is false|:ballot_box_with_check:|
|assignment within conditional expression|[/W4 C4706][]|-Wparentheses|[-Wparentheses](https://wandbox.org/permlink/0aY8EHsyCWoz93fa)|using the result of an assignment as a condition without parentheses|:ballot_box_with_check:|
|comma operator within array index expression|[/W4 C4709][]|[-Wcomma-subscript](https://wandbox.org/permlink/aOaBTW9UwVfb9hfP)|[-Wdeprecated-comma-subscript](https://wandbox.org/permlink/mmD72OEmb9GsIEU1)|top-level comma expression in array subscript is deprecated|:ballot_box_with_check:|
|'function' : function not inlined|[/W4 C4710][]|||
|function 'function' selected for inline expansion|[/W1 C4711][]||
|function 'function' marked as __forceinline not inlined|[/W4 C4714][]|-|-|
|'function' : not all control paths return a value|[/W1 C4715][]|-Wreturn-type|[-Wreturn-type](https://wandbox.org/permlink/l8AKsXFnsPgQtD5o)|non-void function does not return a value in all control paths|:ballot_box_with_check:|
|'function' must return a value|[/W1 C4716][]|-Wreturn-type|[-Wreturn-type](https://wandbox.org/permlink/wXgzH3kx3rwVk6lq)|non-void function does not return a value in all control paths|:ballot_box_with_check:|
|'function' : recursive on all control paths, function will cause runtime stack overflow|[/W1 C4717][]|[NOWARN](https://wandbox.org/permlink/EFNyAShbinMuUHND)|[-Winfinite-recursion](https://wandbox.org/permlink/RlZOz4cCTGLWpeFL)|all paths through this function will call itself|:ballot_box_with_check:|
|'function call' : recursive call has no side effects, deleting|[/W4 C4718][]|||
|'function' : destructor never returns, potential memory leak|[/W1 C4722][]|NOWARN|[NOWARN](https://wandbox.org/permlink/xeg78jjGUxUEUCqy)||
|potential divide by 0|[/W3 C4723][]|[-Wdiv-by-zero](https://wandbox.org/permlink/XZ52dNiIgihgQSwE)|[-Wdivision-by-zero](https://wandbox.org/permlink/0HhGfj6Vyya45bZT)|division by zero is undefined|:ballot_box_with_check:|
|potential mod by 0|[/W3 C4724][]|[-Wdiv-by-zero](https://wandbox.org/permlink/6g3Ra2rrZS3HpUcv)|[-Wdivision-by-zero](https://wandbox.org/permlink/dwFP798TPltiXyS8)|division by zero is undefined|:ballot_box_with_check:|
|instruction may be inaccurate on some Pentiums|[/W4 C4725][]|-|-|
|"PCH named pch_file with same timestamp found in obj_file_1 and obj_file_2. Using first PCH.|[/W1 C4727][]|-|-|
|function too big for flow graph based warnings|[/W1 C4729][]|-|-|
|'main' : mixing _m64 and floating point expressions may result in incorrect code|[/W1 C4730][]|-|-|
|'pointer' : frame pointer register 'register' modified by inline assembly code|[/W1 C4731][]|-|-|
|Inline asm assigning to 'FS:0' : handler not registered as safe handler|[/W1 C4733][]|-|-|
|storing 32-bit float result in memory, possible loss of performance|[/W3 C4738][]|||
|reference to variable 'var' exceeds its storage space|[/W1 C4739][]|NOWARN|[-Wcast-align](https://wandbox.org/permlink/89DcTrPTtwLv3XKb)||
|flow in or out of inline asm code suppresses global optimization|[/W4 C4740][]|-|-|
|'variable' has different alignment in 'file1' and 'file2': number1 and number2|[/W1 C4742][]|NOWARN|[NOWARN](https://wandbox.org/permlink/NxZ5cBxPDESGLMCA)|
|'type' has different size in 'file1' and 'file2': number and number bytes|[/W1 C4743][]|||
|'var' has different type in 'file1' and 'file2': 'type1' and 'type2'|[/W1 C4744][]|NOWARN|[NOWARN](https://wandbox.org/permlink/VTGaxBT9KdsTWV7x)|
|volatile access of '<expression>' is subject to /volatile:[iso\|ms] setting; consider using __iso_volatile_load/store intrinsic functions.|[C4746][]|||
|Calling managed 'entrypoint': Managed code may not be run under loader lock, including the DLL entrypoint and calls reached from the DLL entrypoint|[/W1 C4747][]||-|-|
|'identifier': function with _alloca() inlined into a loop|[/W1 C4750][]|-|-|
|Conversion rules for arithmetic operations in a comparison mean that one branch cannot be executed.|[/W4 C4754][]|NOWARN|[NOWARN](https://wandbox.org/permlink/ldFsxiff0do4CUmZ)|
|overflow in constant arithmetic|[/W2 C4756][]|||
|Cannot align catch objects to greater than 16 bytes|[/W1 C4764][]|NOWARN|[-Wunderaligned-exception-object](https://wandbox.org/permlink/nueakfJmemeVmshl)|underaligned exception object thrown|
|#import referenced a type from a missing type library; 'missing-type' used as a placeholder|[/W1 C4772][]|-|-|
|'identifier' : identifier was truncated to 'number' characters|[/W1 C4788][]|-|-|
|buffer 'identifier' of size N bytes will be overrun; M bytes will be written starting at offset L|[/W1 C4789][]|NOWARN|[-Wfortify-source](https://wandbox.org/permlink/8kVPyQRJP9LiEJV4)|'_NAME_' will always overflow; destination buffer has size _SIZE_, but size argument is _SIZE_|:ballot_box_with_check:|
|function 'function' declared using sysimport and referenced from native code; import library required to link|[/W3 C4792][]|-|-|
|'function' : function is compiled as native code: 'reason'|[/W1,3 C4793][]|-|-|
|segment of thread local storage variable 'variable' changed from 'section name' to '.tls$'|[/W1 C4794][]|-|-|
|No EMMS at end of function 'function'|[/W1 C4799][]|-|-|

## VS C4800-C5999

|Summary|Visual Studio|GCC|Clang|Clang message|is Same|
|:---|:--:|:--:|:--:|:--|:--|
|Implicit conversion from 'type' to bool. Possible information loss|[/W4 C4800][]|[-Wdeprecated](https://wandbox.org/permlink/7WPm3AtsK9MNJQzM)|[-Wdeprecated-increment-bool](https://wandbox.org/permlink/nN08ecy8eyAaR7IN)|incrementing expression of type bool is deprecated and incompatible with C++17|:ballot_box_with_check:|
|'method' : the raise method has a different storage class from that of the event, 'event'|[/W1 C4803][]|-|-|


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

[error C2059]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-errors-1/compiler-error-c2059?view=vs-2019
[error C2334]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-errors-1/compiler-error-c2334?view=vs-2019
[error C2440]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-errors-1/compiler-error-c2440?view=vs-2019
[error C2660]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-errors-2/compiler-error-c2660?view=vs-2019
[error C2676]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-errors-2/compiler-error-c2676?view=vs-2019

[C4000]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[/W1 C4002]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4002?view=vs-2019
[/W1 C4003]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4003?view=vs-2019
[/W1 C4005]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4005?view=vs-2019
[/W1 C4006]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4006?view=vs-2019
[/W2 C4007]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4007?view=vs-2019
[/W2,3 C4008]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-levels-2-and-3-c4008?view=vs-2019
[/W1 C4010]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4010?view=vs-2019
[/W3 C4013]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4013?view=vs-2019
[/W1 C4015]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4015?view=vs-2019
[/W3 C4018]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4018?view=vs-2019
[/W4 C4019]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4019?view=vs-2019
[/W1 C4020]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4020?view=vs-2019
[/W1 C4022]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4022?view=vs-2019
[/W1 C4024]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4024?view=vs-2019
[/W1 C4025]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4025?view=vs-2019
[/W1 C4026]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4026?view=vs-2019
[/W1 C4027]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4027?view=vs-2019
[/W1 C4028]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4028?view=vs-2019
[/W1 C4029]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4029?view=vs-2019
[/W1 C4030]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4030?view=vs-2019
[/W1 C4031]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4031?view=vs-2019
[/W4 C4032]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4032?view=vs-2019
[/W1 C4033]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4033?view=vs-2019
[/W1 C4034]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4034?view=vs-2019
[/W3 C4035]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[/W1 C4036]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4036?view=vs-2019
[/W1 C4038]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4038?view=vs-2019
[/W1 C4041]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4041?view=vs-2019
[/W1 C4042]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4042?view=vs-2019
[/W1 C4045]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4045?view=vs-2019
[/W1 C4047]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4047?view=vs-2019
[/W1 C4048]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4048?view=vs-2019
[/W1 C4049]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4049?view=vs-2019
[/W2 C4051]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4051?view=vs-2019
[/W1 C4052]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4052?view=vs-2019
[/W4 C4053]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4053?view=vs-2019
[/W2 C4056]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4056?view=vs-2019
[/W4 C4057]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4057?view=vs-2019
[C4060]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[C4063]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[C4064]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[C4065]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[/W4 C4061]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4061?view=vs-2019
[/W4 C4062]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4062?view=vs-2019
[/W3 C4066]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4066?view=vs-2019
[/W1 C4067]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4067?view=vs-2019
[/W1 C4068]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4068?view=vs-2019
[C4069]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[/W3 C4073]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4073?view=vs-2019
[/W1 C4074]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4074?view=vs-2019
[/W1 C4075]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4075?view=vs-2019
[/W1 C4076]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4076?view=vs-2019
[/W1 C4077]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4077?view=vs-2019
[/W1 C4079]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4079?view=vs-2019
[/W1 C4080]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4080?view=vs-2019
[/W1 C4081]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4081?view=vs-2019
[/W1 C4083]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4083?view=vs-2019
[/W1 C4085]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4085?view=vs-2019
[/W1 C4086]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4086?view=vs-2019
[/W1 C4087]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4087?view=vs-2019
[/W1 C4088]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4088?view=vs-2019
[/W1 C4089]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4089?view=vs-2019
[/W1 C4090]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4090?view=vs-2019
[/W1 C4091]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4091?view=vs-2019
[/W4 C4092]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4092?view=vs-2019
[/W1 C4096]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4096?view=vs-2019
[/W1 C4097]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4097?view=vs-2019
[/W1 C4098]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4098?view=vs-2019
[/W2 C4099]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4099?view=vs-2019
[/W4 C4100]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4100?view=vs-2019
[/W3 C4101]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4101?view=vs-2019
[/W3 C4102]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4102?view=vs-2019
[/W1 C4103]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4103?view=vs-2019
[/W1 C4109]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4109?view=vs-2019
[/W1,4 C4112]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-levels-1-and-4-c4112?view=vs-2019
[/W1 C4113]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4113?view=vs-2019
[/W1 C4114]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4114?view=vs-2019
[/W1,4 C4115]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-levels-1-and-4-c4115?view=vs-2019
[/W1 C4116]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4116?view=vs-2019
[/W1 C4117]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4117?view=vs-2019
[/W1 C4119]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4119?view=vs-2019
[/W1 C4120]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4120?view=vs-2019
[/W4 C4121]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4121?view=vs-2019
[/W1 C4122]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4122?view=vs-2019
[C4123]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[/W1 C4124]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4124?view=vs-2019
[/W4 C4125]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4125?view=vs-2019
[/W4 C4127]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4127?view=vs-2019
[/W1 C4129]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4129?view=vs-2019
[/W4 C4130]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4130?view=vs-2019
[/W4 C4131]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4131?view=vs-2019
[/W4 C4132]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4132?view=vs-2019
[/W3 C4133]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4133?view=vs-2019
[C4137]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[/W1 C4138]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4138?view=vs-2019
[/W1 C4141]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4141?view=vs-2019
[/W1 C4142]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4142?view=vs-2019
[/W1 C4143]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4143?view=vs-2019
[/W1 C4144]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4144?view=vs-2019
[/W1 C4145]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4145?view=vs-2019
[/W2 C4146]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4146?view=vs-2019
[/W2 C4150]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4150?view=vs-2019
[/W4 C4152]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4152?view=vs-2019
[/W1 C4153]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4153?view=vs-2019
[/W1 C4154]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4154?view=vs-2019
[/W1 C4155]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4155?view=vs-2019
[/W2 C4156]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4156?view=vs-2019
[/W1 C4157]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4157?view=vs-2019
[/W1 C4158]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4158?view=vs-2019
[/W3 C4159]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4159?view=vs-2019
[/W1 C4160]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4160?view=vs-2019
[/W3 C4161]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4161?view=vs-2019
[/W1 C4162]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4162?view=vs-2019
[/W1 C4163]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4163?view=vs-2019
[/W1 C4164]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4164?view=vs-2019
[/W1 C4166]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4166?view=vs-2019
[/W1 C4167]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4167?view=vs-2019
[/W1 C4168]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4168?view=vs-2019
[/W1 C4172]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4172?view=vs-2019
[/W1 C4174]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4174?view=vs-2019
[/W1 C4175]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4175?view=vs-2019
[/W1 C4176]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4176?view=vs-2019
[/W1 C4177]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4177?view=vs-2019
[/W1 C4178]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4178?view=vs-2019
[/W1 C4179]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4179?view=vs-2019
[/W1 C4180]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4180?view=vs-2019
[C4181]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[/W1 C4182]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4182?view=vs-2019
[/W1 C4183]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4183?view=vs-2019
[/W1 C4185]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4185?view=vs-2019
[/W1 C4186]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4186?view=vs-2019
[/W1 C4187]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4187?view=vs-2019
[C4188]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[/W4 C4189]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4189?view=vs-2019
[/W1 C4190]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4190?view=vs-2019
[/W3 C4191]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4191?view=vs-2019
[/W3 C4192]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4192?view=vs-2019
[C4193]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[C4194]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[C4195]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[C4196]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warnings-c4000-through-c4199?view=vs-2019
[/W3 C4197]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4197?view=vs-2019
[/W2,4 C4200]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-levels-2-and-4-c4200?view=vs-2019
[/W4 C4201]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4201?view=vs-2019
[/W4 C4202]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4202?view=vs-2019
[/W4 C4203]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4204?view=vs-2019
[/W4 C4205]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4205?view=vs-2019
[/W4 C4206]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4206?view=vs-2019
[/W4 C4207]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4207?view=vs-2019
[/W4 C4208]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4208?view=vs-2019
[/W4 C4210]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4210?view=vs-2019
[/W4 C4211]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4211?view=vs-2019
[/W4 C4212]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4212?view=vs-2019
[/W4 C4213]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4213?view=vs-2019
[/W4 C4214]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4214?view=vs-2019
[/W1 C4215]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4215?view=vs-2019
[/W1 C4216]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4216?view=vs-2019
[/W1 C4218]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4218?view=vs-2019
[/W4 C4220]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4220?view=vs-2019
[/W4 C4221]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4221?view=vs-2019
[/W1,4 C4223]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-levels-1-and-4-c4223?view=vs-2019
[/W1 C4224]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4224?view=vs-2019
[/W1 C4226]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4226?view=vs-2019
[/W1 C4227]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4227?view=vs-2019
[/W1 C4228]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4228?view=vs-2019
[/W1 C4229]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4229?view=vs-2019
[/W1 C4230]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4230?view=vs-2019
[/W4 C4232]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4232?view=vs-2019
[/W4 C4233]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4233?view=vs-2019
[/W4 C4234]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4234?view=vs-2019
[/W4 C4235]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4235?view=vs-2019
[/W1 C4237]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4237?view=vs-2019
[/W4 C4238]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4238?view=vs-2019
[/W4 C4239]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4239?view=vs-2019
[/W3 C4240]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4240?view=vs-2019
[/W4 C4242]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4242?view=vs-2019
[/W3 C4243]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4243?view=vs-2019
[/W2 C4244]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4244?view=vs-2019
[/W3,4 C4244]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-levels-3-and-4-c4244?view=vs-2019
[/W4 C4245]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4245?view=vs-2019
[/W2 C4250]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4250?view=vs-2019
[/W1 C4251]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4251?view=vs-2019
[/W4 C4254]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4254?view=vs-2019
[/W4 C4255]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4255?view=vs-2019
[/W4 C4256]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4256?view=vs-2019
[/W1 C4258]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4258?view=vs-2019
[/W4 C4263]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4263?view=vs-2019
[/W1 C4264]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4264?view=vs-2019
[/W3 C4265]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4265?view=vs-2019
[/W4 C4266]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4266?view=vs-2019
[/W3 C4267]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4267?view=vs-2019
[/W4 C4268]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4268?view=vs-2019
[/W1 C4269]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4269?view=vs-2019
[/W1 C4272]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4272?view=vs-2019
[/W1 C4273]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4273?view=vs-2019
[/W1 C4274]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4274?view=vs-2019
[/W2 C4275]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4275?view=vs-2019
[/W1 C4276]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4276?view=vs-2019
[/W3 C4278]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4278?view=vs-2019
[/W3 C4280]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4280?view=vs-2019
[/W3 C4281]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4281?view=vs-2019
[/W3 C4282]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4282?view=vs-2019
[/W3 C4283]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4283?view=vs-2019
[/W2 C4285]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4285?view=vs-2019
[/W1 C4286]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4286?view=vs-2019
[/W3 C4287]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4287?view=vs-2019
[/W1 C4288]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4288?view=vs-2019
[/W4 C4289]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4289?view=vs-2019
[/W3 C4290]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4290?view=vs-2019
[/W1 C4291]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4291?view=vs-2019
[/W1 C4293]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4293?view=vs-2019
[/W4 C4295]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4295?view=vs-2019
[/W4 C4296]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4296?view=vs-2019
[/W1 C4297]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4297?view=vs-2019

[/W2 C4302]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4302?view=vs-2019
[/W1 C4305]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4305?view=vs-2019
[/W3 C4306]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4306?view=vs-2019
[/W2 C4307]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4307?view=vs-2019
[/W2 C4308]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4308?view=vs-2019
[/W2 C4309]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4309?view=vs-2019
[/W3 C4310]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4310?view=vs-2019
[/W1 C4311]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4311?view=vs-2019
[/W1 C4312]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4312?view=vs-2019
[/W1 C4313]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4313?view=vs-2019
[/W3 C4316]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4316?view=vs-2019
[/W1 C4319]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4319?view=vs-2019
[/W4 C4324]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4324?view=vs-2019
[/W1 C4325]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4325?view=vs-2019
[/W1 C4326]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4326?view=vs-2019
[/W1 C4329]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4329?view=vs-2019
[/W1 C4333]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4333?view=vs-2019
[/W3 C4334]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4334?view=vs-2019
[C4335]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-c4335?view=vs-2019
[/W4 C4336]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4336?view=vs-2019
[/W4 C4337]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4337?view=vs-2019
[/W4 C4339]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4339?view=vs-2019
[/W1 C4340]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4340?view=vs-2019
[/W1 C4342]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4342?view=vs-2019
[/W4 C4343]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4343?view=vs-2019
[/W1 C4344]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4344?view=vs-2019
[/W1 C4346]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4346?view=vs-2019
[/W1 C4348]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4348?view=vs-2019
[/W1 C4350]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4350?view=vs-2019
[/W1 C4353]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4353?view=vs-2019
[C4355]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-c4355?view=vs-2019
[/W2 C4356]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4356?view=vs-2019
[/W3 C4357]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4357?view=vs-2019
[/W1 C4358]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4358?view=vs-2019
[/W3 C4359]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4359?view=vs-2019
[/W1 C4364]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4364?view=vs-2019
[/W4 C4365]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4365?view=vs-2019

[/W4 C4400]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4400?view=vs-2019
[/W1 C4401]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4401?view=vs-2019
[/W1 C4402]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4402?view=vs-2019
[/W1 C4600]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4600?view=vs-2019
[/W1 C4602]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4602?view=vs-2019
[/W1 C4603]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4603?view=vs-2019
[/W1 C4604]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4606?view=vs-2019
[/W3 C4608]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4608?view=vs-2019
[/W4 C4611]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4611?view=vs-2019
[/W1 C4612]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4612?view=vs-2019
[/W1 C4613]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4613?view=vs-2019
[/W1 C4615]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4615?view=vs-2019
[/W1 C4616]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4616?view=vs-2019
[/W1 C4618]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4618?view=vs-2019
[/W3 C4619]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4619?view=vs-2019
[/W1 C4620]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4620?view=vs-2019
[/W1 C4621]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4621?view=vs-2019
[/W3 C4622]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4622?view=vs-2019
[/W4 C4623]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4623?view=vs-2019
[/W1 C4624]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4624?view=vs-2019
[/W4 C4625]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4625?view=vs-2019
[/W4 C4626]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4626?view=vs-2019
[/W1 C4627]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4627?view=vs-2019
[/W1 C4628]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4628?view=vs-2019
[/W4 C2629]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4629?view=vs-2019
[/W1 C4630]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4630?view=vs-2019
[/W1 C4631]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4631?view=vs-2019
[/W1 C4632]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4632?view=vs-2019
[/W3 C4633]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4633?view=vs-2019
[/W4 C4634]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4634?view=vs-2019
[/W3 C4635]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4635?view=vs-2019
[/W3 C4636]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4636?view=vs-2019
[/W3 C4637]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4637?view=vs-2019
[/W3 C4638]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4638?view=vs-2019
[/W4 C4639]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4639?view=vs-2019
[/W3 C4640]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4640?view=vs-2019
[/W3 C4641]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4641?view=vs-2019
[/W3 C4645]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4645?view=vs-2019
[/W3 C4647]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4646?view=vs-2019
[/W1 C4650]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4650?view=vs-2019
[/W1 C4651]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4651?view=vs-2019
[/W1 C4652]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4652?view=vs-2019
[/W2 C4653]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4653?view=vs-2019
[/W1 C4655]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4655?view=vs-2019
[/W1 C4656]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4656?view=vs-2019
[/W1 C4657]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4657?view=vs-2019
[/W1 C4659]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4659?view=vs-2019
[/W1 C4661]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4661?view=vs-2019
[/W1 C4662]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4662?view=vs-2019
[/W1 C4667]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4667?view=vs-2019
[/W4 C4668]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4668?view=vs-2019
[/W1 C4669]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4669?view=vs-2019
[/W4 C4670]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4670?view=vs-2019
[/W4 C4672]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4672?view=vs-2019
[/W4 C4673]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4673?view=vs-2019
[/W1 C4677]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4677?view=vs-2019
[/W1 C4678]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4678?view=vs-2019
[/W1 C4679]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4679?view=vs-2019
[/W4 C4680]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4680?view=vs-2019
[/W4 C4681]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4681?view=vs-2019
[/W4 C4682]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4682?view=vs-2019
[/W1 C4683]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4683?view=vs-2019
[/W1 C4884]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4684?view=vs-2019
[/W1 C4685]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4685?view=vs-2019
[/W3 C4686]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4686?view=vs-2019
[C4687]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-c4687?view=vs-2019
[/W1 C4688]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4688?view=vs-2019
[/W4 C4690]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4690?view=vs-2019
[/W1 C4691]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4691?view=vs-2019
[/W1 C4692]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4692?view=vs-2019
[C4693]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-c4693?view=vs-2019
[C4694]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-c4694?view=vs-2019
[/W1,4 C4700]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700?view=vs-2019
[/W4 C4701]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4701?view=vs-2019
[/W4 C4702]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4702?view=vs-2019
[/W4 C4703]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4703?view=vs-2019
[/W4 C4706]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4706?view=vs-2019
[/W4 C4709]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4709?view=vs-2019
[/W4 C4710]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4710?view=vs-2019
[/W1 C4711]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4711?view=vs-2019
[/W4 C4714]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4714?view=vs-2019
[/W1 C4715]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4715?view=vs-2019
[/W1 C4716]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4716?view=vs-2019
[/W1 C4717]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4717?view=vs-2019
[/W4 C4718]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4718?view=vs-2019
[/W1 C4722]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4722?view=vs-2019
[/W3 C4723]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4723?view=vs-2019
[/W3 C4724]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4724?view=vs-2019
[/W4 C4725]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4725?view=vs-2019
[/W1 C4727]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4727?view=vs-2019
[/W1 C4729]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4729?view=vs-2019
[/W1 C4730]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4730?view=vs-2019
[/W1 C4731]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4731?view=vs-2019
[/W1 C4733]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4733?view=vs-2019
[/W3 C4738]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4738?view=vs-2019
[/W1 C4739]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4739?view=vs-2019
[/W4 C4740]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4740?view=vs-2019
[/W1 C4742]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4742?view=vs-2019
[/W1 C4743]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4743?view=vs-2019
[/W1 C4744]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4744?view=vs-2019
[C4746]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-c4746?view=vs-2019
[/W1 C4747]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4747?view=vs-2019
[/W1 C4750]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4750?view=vs-2019
[/W4 C4754]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4754?view=vs-2019
[/W2 C4756]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-2-c4756?view=vs-2019
[/W1 C4764]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-4-c4764?view=vs-2019
[/W1 C4772]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4772?view=vs-2019
[/W1 C4788]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4788?view=vs-2019
[/W1 C4789]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4789?view=vs-2019
[/W3 C4792]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4792?view=vs-2019
[/W1,3 C4793]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-and-3-c4793?view=vs-2019
[/W1 C4794]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4794?view=vs-2019
[/W1 C4799]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4799?view=vs-2019
[/W4 C4800]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-3-c4800?view=vs-2019
[/W1 C4803]:https://docs.microsoft.com/ja-jp/cpp/error-messages/compiler-warnings/compiler-warning-level-1-c4803?view=vs-2019
