// Syntax highlighting helpers for language extensions.

#include "extensions.h"

#include <stddef.h>

char *C_HL_extensions[] = {".c",  ".h",  ".cpp", ".hpp", ".cc", NULL};

char *C_HL_keywords[] = {"switch", "if",        "#include", "while",   "for",
                         "break",  "continue",  "return",   "else",    "struct",
                         "union",  "typedef",   "static",   "enum",    "class",
                         "case",   "int|",      "long|",    "double|", "float|",
                         "char|",  "unsigned|", "signed|",  "void|",   NULL};

char *Py_HL_keywords[] = {"print",       "if",     "elif",   "else", "for",
                          "while",       "def",    "class",  "in",   "range",
                          "self",        "float|", "str|",   "int|", "list|",
                          "dictionary|", "set|",   "return", "do",   NULL};

char *Py_HL_extensions[] = {".py", NULL};

char *Rust_HL_keywords[] = {"as",        "async",   "await",  "break",    "const",
                            "continue",  "crate",  "else",   "enum",     "extern",
                            "false",     "fn",     "for",    "if",       "impl",
                            "in",        "let",    "loop",   "match",    "mod",
                            "move",      "mut",    "pub",    "ref",      "return",
                            "self",      "Self",   "static", "struct",   "super",
                            "trait",     "true",   "type",   "unsafe",   "use",
                            "where",     "while",  "dyn",    "macro_rules",
                            "bool|",     "char|",  "str|",   "u8|",      "u16|",
                            "u32|",      "u64|",   "u128|",  "usize|",   "i8|",
                            "i16|",      "i32|",   "i64|",   "i128|",    "isize|",
                            "f32|",      "f64|",   NULL};

char *Rust_HL_extensions[] = {".rs", NULL};

char *Lua_HL_keywords[] = {"and",     "break",  "do",      "else",   "elseif",
                           "end",     "for",    "function", "goto",   "if",
                           "in",      "local",  "not",     "or",     "repeat",
                           "return",  "then",   "until",   "while",  "nil|",
                           "true|",   "false|", NULL};

char *Lua_HL_extensions[] = {".lua", NULL};

char *TS_HL_keywords[] = {"import",   "from",     "class",    "interface",
                          "extends",  "implements", "function", "const",
                          "let",      "var",      "return",   "async",
                          "await",    "new",      "private",  "public",
                          "protected", "enum",     "type",     "readonly",
                          "number|",  "string|",  "boolean|", "any|",
                          "unknown|", "never|",   NULL};

char *TS_HL_extensions[] = {".ts", NULL};
char *TSX_HL_extensions[] = {".tsx", NULL};

char *Zig_HL_keywords[] = {"const",   "var",    "pub",     "fn",      "return",
                           "if",      "else",   "for",     "while",   "switch",
                           "struct",  "enum",   "union",   "defer",    "async",
                           "await",   "try",    "catch",   "errdefer", "comptime",
                           "usingnamespace",      "inline",  "break",   "continue",
                           "true|",   "false|", NULL};

char *Zig_HL_extensions[] = {".zig", NULL};

char *TOML_HL_keywords[] = {"true|", "false|", "inf|", "nan|", NULL};

char *TOML_HL_extensions[] = {".toml", NULL};

char *Nix_HL_keywords[] = {"import",  "with",   "builtins", "inherit",
                           "assert",  "let",    "in",       "rec",
                           "if",      "else",   "then",     "true|",
                           "false|",  "null|",   NULL};

char *Nix_HL_extensions[] = {".nix", NULL};

char *CMake_HL_keywords[] = {"cmake_minimum_required", "project", "if",
                             "elseif",                 "else",    "endif",
                             "function",               "endfunction",
                             "macro",                  "endmacro",
                             "foreach",                "endforeach",
                             "while",                  "endwhile",
                             "include",                "find_package",
                             "add_executable",         "add_library",
                             "target_link_libraries",  "target_include_directories",
                             "set",                    "unset",
                             "list",                   "message",
                             "option",                 "install",
                             "configure_file",         NULL};

char *CMake_HL_extensions[] = {".cmake", "CMakeLists.txt", NULL};

char *RiscV_HL_keywords[] = {
    "lui",         "auipc",       "jal",          "jalr",
    "beq",         "bne",         "blt",          "bge",
    "bltu",        "bgeu",        "lb",           "lh",
    "lw",          "lbu",         "lhu",          "sb",
    "sh",          "sw",          "addi",         "slti",
    "sltiu",       "xori",        "ori",          "andi",
    "slli",        "srli",        "srai",         "add",
    "sub",         "sll",         "slt",          "sltu",
    "xor",         "srl",         "sra",          "or",
    "and",         "lwu",         "ld",           "sd",
    "addiW",       "slliw",       "srliw",        "sraiw",
    "addw",        "subw",        "sllw",         "srlw",
    "sraw",        "fence",       "fence.i",      "fence.tso",
    "pause",       "ecall",       "ebreak",       "csrrw",
    "csrrs",       "csrrc",       "csrrwi",       "csrrsi",
    "csrrci",      "mul",         "mulh",         "mulhsu",
    "mulhu",       "div",         "divu",         "rem",
    "remu",        "mulw",        "divw",         "divuw",
    "remw",        "remuw",       "lr.w",         "sc.w",
    "amoswap.w",   "amoadd.w",    "amoxor.w",     "amoand.w",
    "amoor.w",     "amomin.w",    "amomax.w",     "amominu.w",
    "amomaxu.w",   "lr.d",        "sc.d",         "amoswap.d",
    "amoadd.d",    "amoxor.d",    "amoand.d",     "amoor.d",
    "amomin.d",    "amomax.d",    "amominu.d",    "amomaxu.d",
    "flw",         "fsw",         "fmadd.s",      "fmsub.s",
    "fnmsub.s",    "fnmadd.s",    "fadd.s",       "fsub.s",
    "fmul.s",      "fdiv.s",      "fsqrt.s",      "fsgnj.s",
    "fsgnjn.s",    "fsgnjx.s",    "fmin.s",       "fmax.s",
    "fcvt.w.s",    "fcvt.wu.s",   "fmv.x.w",      "feq.s",
    "flt.s",       "fle.s",       "fclass.s",     "fcvt.s.w",
    "fcvt.s.wu",   "fmv.w.x",     "fcvt.l.s",     "fcvt.lu.s",
    "fcvt.s.l",    "fcvt.s.lu",   "fld",          "fsd",
    "fmadd.d",     "fmsub.d",     "fnmsub.d",     "fnmadd.d",
    "fadd.d",      "fsub.d",      "fmul.d",       "fdiv.d",
    "fsqrt.d",     "fsgnj.d",     "fsgnjn.d",     "fsgnjx.d",
    "fmin.d",      "fmax.d",      "fcvt.s.d",     "fcvt.d.s",
    "feq.d",       "flt.d",       "fle.d",        "fclass.d",
    "fcvt.w.d",    "fcvt.wu.d",   "fcvt.d.w",     "fcvt.d.wu",
    "fcvt.l.d",    "fcvt.lu.d",   "fmv.x.d",      "fcvt.d.l",
    "fcvt.d.lu",   "fmv.d.x",     "flq",          "fsq",
    "fmadd.q",     "fmsub.q",     "fnmsub.q",     "fnmadd.q",
    "fadd.q",      "fsub.q",      "fmul.q",       "fdiv.q",
    "fsqrt.q",     "fsgnj.q",     "fsgnjn.q",     "fsgnjx.q",
    "fmin.q",      "fmax.q",      "fcvt.s.q",     "fcvt.q.s",
    "fcvt.d.q",    "fcvt.q.d",    "feq.q",        "flt.q",
    "fle.q",       "fclass.q",    "fcvt.w.q",     "fcvt.wu.q",
    "fcvt.q.w",    "fcvt.q.wu",   "fcvt.l.q",     "fcvt.lu.q",
    "fcvt.q.l",    "fcvt.q.lu",   "flh",          "fsh",
    "fmadd.h",     "fmsub.h",     "fnmsub.h",     "fnmadd.h",
    "fadd.h",      "fsub.h",      "fmul.h",       "fdiv.h",
    "fsqrt.h",     "fsgnj.h",     "fsgnjn.h",     "fsgnjx.h",
    "fmin.h",      "fmax.h",      "fcvt.s.h",     "fcvt.h.s",
    "fcvt.d.h",    "fcvt.h.d",    "fcvt.q.h",     "fcvt.h.q",
    "feq.h",       "flt.h",       "fle.h",        "fclass.h",
    "fcvt.w.h",    "fcvt.wu.h",   "fmv.x.h",      "fcvt.h.w",
    "fcvt.h.wu",   "fmv.h.x",     "fcvt.l.h",     "fcvt.lu.h",
    "fcvt.h.l",    "fcvt.h.lu",   "nop",          "li",
    "mv",          "not",         "neg",          "negw",
    "sext.w",      "seqz",        "snez",         "sltz",
    "sgtz",        "fmv.s",       "fabs.s",       "fneg.s",
    "fmv.d",       "fabs.d",      "fneg.d",       "beqz",
    "bnez",        "blez",        "bgez",         "bltz",
    "bgtz",        "bgt",         "ble",          "bgtu",
    "bleu",        "j",           "jr",           "ret",
    "call",        "tail",        ".2byte|",      ".4byte|",
    ".8byte|",     ".half|",      ".word|",       ".dword|",
    ".byte|",      ".zero|",      ".text|",       ".data|",
    ".rodata|",    ".bss|",       ".section|",    ".globl|",
    ".local|",     ".equ|",       ".type|",       ".size|",
    NULL};

char *RiscV_HL_extensions[] = {".asm", ".s", ".S", NULL};

char *CS_HL_keywords[] = {
    "abstract",  "as",        "await",    "base",     "break",
    "case",      "catch",     "checked",  "class",    "const",
    "continue",  "default",   "delegate", "do",       "else",
    "enum",      "event",     "explicit", "extern",   "finally",
    "fixed",     "for",       "foreach", "goto",     "if",
    "implicit",  "in",        "interface", "internal", "is",
    "lock",      "namespace", "new",      "operator", "out",
    "override",  "params",    "private",  "protected", "public",
    "readonly",  "ref",       "return",   "sealed",   "sizeof",
    "stackalloc", "static",   "struct",   "switch",   "this",
    "throw",     "try",       "typeof",   "unchecked", "unsafe",
    "using",     "virtual",   "volatile", "while",    "yield",
    "add",       "remove",    "set",      "get",      "value",
    "global",    "record",    "when",     NULL,
    "bool|",     "byte|",     "char|",    "decimal|", "double|",
    "float|",    "int|",      "long|",    "object|",  "sbyte|",
    "short|",    "string|",   "uint|",    "ulong|",   "ushort|",
    "void|",     "dynamic|",  "true|",    "false|",   "null|",
};

char *CS_HL_extensions[] = {".cs", NULL};

char *Make_HL_keywords[] = {"if",     "else",   "endif",  "ifdef",
                            "ifndef", "define", "endef",  "include",
                            "export", "unexport", "override", NULL};

char *Make_HL_extensions[] = {"Makefile", "makefile", "GNUmakefile", ".mk",
                              NULL};

char *V_HL_keywords[] = {"as",      "asm",     "assert",  "atomic",
                         "break",   "const",   "continue", "defer",
                         "else",    "enum",    "fn",      "for",
                         "go",      "goto",    "if",      "import",
                         "in",      "interface", "is",     "isreftype",
                         "lock",    "match",   "module",  "mut",
                         "or",      "pub",     "return",  "rlock",
                         "select",  "shared",  "sizeof",  "static",
                         "struct",  "type",    "typeof",  "union",
                         "unsafe",  "__offsetof", NULL,
                         "bool|",   "i8|",     "i16|",    "int|",
                         "i64|",    "i128|",   "u8|",     "u16|",
                         "u32|",    "u64|",    "u128|",   "f32|",
                         "f64|",    "byte|",   "char|",   "rune|",
                         "chan|",   "string|", "map|",    "voidptr|",
                         "thread|", "true|",   "false|",  "none|",
};

char *V_HL_extensions[] = {".v", ".vsh", NULL};
