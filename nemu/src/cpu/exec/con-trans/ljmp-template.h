#include "cpu/exec/template-start.h"

#define instr ljmp


static void do_execute() {
	cpu.cs = op_dest->imm;
	cpu.eip = op_src->imm - 6;
	printf ("%x\n",cpu.eip);
	print_asm("ljmp $%x,$%x",op_dest->imm,op_src->imm);
}
make_instr_helper(ii)

#include "cpu/exec/template-end.h"
