#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCRC__FPUci
// Address: 0x31cdc0 - 0x31ce80
void GetCRC__FPUci_0x31cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCRC__FPUci_0x31cdc0");
#endif

    switch (ctx->pc) {
        case 0x31cde8u: goto label_31cde8;
        case 0x31ce0cu: goto label_31ce0c;
        default: break;
    }

    ctx->pc = 0x31cdc0u;

    // 0x31cdc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31cdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31cdc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31cdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31cdc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31cdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31cdcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31cdccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31cdd0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x31cdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x31cdd4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x31cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x31cdd8: 0x3410ffff  ori         $s0, $zero, 0xFFFF
    ctx->pc = 0x31cdd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31cddc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31cddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cde0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x31CDE0u;
    {
        const bool branch_taken_0x31cde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cde0) {
            ctx->pc = 0x31CE50u;
            goto label_31ce50;
        }
    }
    ctx->pc = 0x31CDE8u;
label_31cde8:
    // 0x31cde8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x31cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31cdec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x31cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31cdf0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x31cdf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31cdf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31cdf8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x31cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x31cdfc: 0x2028026  xor         $s0, $s0, $v0
    ctx->pc = 0x31cdfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x31ce00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31ce00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ce04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31CE04u;
    {
        const bool branch_taken_0x31ce04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ce04) {
            ctx->pc = 0x31CE3Cu;
            goto label_31ce3c;
        }
    }
    ctx->pc = 0x31CE0Cu;
label_31ce0c:
    // 0x31ce0c: 0x0  nop
    ctx->pc = 0x31ce0cu;
    // NOP
    // 0x31ce10: 0x32028000  andi        $v0, $s0, 0x8000
    ctx->pc = 0x31ce10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
    // 0x31ce14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31CE14u;
    {
        const bool branch_taken_0x31ce14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ce14) {
            ctx->pc = 0x31CE2Cu;
            goto label_31ce2c;
        }
    }
    ctx->pc = 0x31CE1Cu;
    // 0x31ce1c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x31ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31ce20: 0x38501021  xori        $s0, $v0, 0x1021
    ctx->pc = 0x31ce20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4129);
    // 0x31ce24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31CE24u;
    {
        const bool branch_taken_0x31ce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ce24) {
            ctx->pc = 0x31CE34u;
            goto label_31ce34;
        }
    }
    ctx->pc = 0x31CE2Cu;
label_31ce2c:
    // 0x31ce2c: 0x0  nop
    ctx->pc = 0x31ce2cu;
    // NOP
    // 0x31ce30: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x31ce30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_31ce34:
    // 0x31ce34: 0x0  nop
    ctx->pc = 0x31ce34u;
    // NOP
    // 0x31ce38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31ce38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31ce3c:
    // 0x31ce3c: 0x0  nop
    ctx->pc = 0x31ce3cu;
    // NOP
    // 0x31ce40: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x31ce40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x31ce44: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x31CE44u;
    {
        const bool branch_taken_0x31ce44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ce44) {
            ctx->pc = 0x31CE0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ce0c;
        }
    }
    ctx->pc = 0x31CE4Cu;
    // 0x31ce4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31ce4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31ce50:
    // 0x31ce50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x31ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ce54: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x31ce54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31ce58: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x31CE58u;
    {
        const bool branch_taken_0x31ce58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ce58) {
            ctx->pc = 0x31CDE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31cde8;
        }
    }
    ctx->pc = 0x31CE60u;
    // 0x31ce60: 0x2001027  not         $v0, $s0
    ctx->pc = 0x31ce60u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x31ce64: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x31ce64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31ce68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31ce68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ce6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ce6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ce70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ce70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ce74: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x31ce74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31ce78: 0x3e00008  jr          $ra
    ctx->pc = 0x31CE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31CE80u;
}
