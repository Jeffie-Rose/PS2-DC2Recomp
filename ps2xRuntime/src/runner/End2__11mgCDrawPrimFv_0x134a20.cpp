#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: End2__11mgCDrawPrimFv
// Address: 0x134a20 - 0x134aa0
void End2__11mgCDrawPrimFv_0x134a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("End2__11mgCDrawPrimFv_0x134a20");
#endif

    switch (ctx->pc) {
        case 0x134a6cu: goto label_134a6c;
        case 0x134a90u: goto label_134a90;
        default: break;
    }

    ctx->pc = 0x134a20u;

    // 0x134a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134a24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134a2c: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x134a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x134a30: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x134A30u;
    {
        const bool branch_taken_0x134a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A30u;
            // 0x134a34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a30) {
            ctx->pc = 0x134A90u;
            goto label_134a90;
        }
    }
    ctx->pc = 0x134A38u;
    // 0x134a38: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x134a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x134a3c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x134A3Cu;
    {
        const bool branch_taken_0x134a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134a3c) {
            ctx->pc = 0x134A6Cu;
            goto label_134a6c;
        }
    }
    ctx->pc = 0x134A44u;
    // 0x134a44: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x134a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x134a48: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x134a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x134a4c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x134a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x134a50: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x134a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
    // 0x134a54: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x134a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x134a58: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x134a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x134a5c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x134a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x134a60: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x134a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x134a64: 0xc041ace  jal         func_106B38
    ctx->pc = 0x134A64u;
    SET_GPR_U32(ctx, 31, 0x134A6Cu);
    ctx->pc = 0x134A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134A64u;
            // 0x134a68: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B38u;
    if (runtime->hasFunction(0x106B38u)) {
        auto targetFn = runtime->lookupFunction(0x106B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134A6Cu; }
        if (ctx->pc != 0x134A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkTerminate_0x106b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134A6Cu; }
        if (ctx->pc != 0x134A6Cu) { return; }
    }
    ctx->pc = 0x134A6Cu;
label_134a6c:
    // 0x134a6c: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x134a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x134a70: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x134a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x134a74: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x134a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x134a78: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134A78u;
    {
        const bool branch_taken_0x134a78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x134A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A78u;
            // 0x134a7c: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a78) {
            ctx->pc = 0x134A88u;
            goto label_134a88;
        }
    }
    ctx->pc = 0x134A80u;
    // 0x134a80: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x134a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x134a84: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x134a84u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_134a88:
    // 0x134a88: 0xc04e748  jal         func_139D20
    ctx->pc = 0x134A88u;
    SET_GPR_U32(ctx, 31, 0x134A90u);
    ctx->pc = 0x134A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134A88u;
            // 0x134a8c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134A90u; }
        if (ctx->pc != 0x134A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134A90u; }
        if (ctx->pc != 0x134A90u) { return; }
    }
    ctx->pc = 0x134A90u;
label_134a90:
    // 0x134a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134a98: 0x3e00008  jr          $ra
    ctx->pc = 0x134A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A98u;
            // 0x134a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134AA0u;
}
