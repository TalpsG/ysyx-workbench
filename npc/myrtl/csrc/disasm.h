#ifndef F3E06E7B_41E1_4E37_8B91_5448A55BB5FF
#define F3E06E7B_41E1_4E37_8B91_5448A55BB5FF
#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "llvm/MC/MCInstPrinter.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/TargetSelect.h"

void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
#endif /* F3E06E7B_41E1_4E37_8B91_5448A55BB5FF */
