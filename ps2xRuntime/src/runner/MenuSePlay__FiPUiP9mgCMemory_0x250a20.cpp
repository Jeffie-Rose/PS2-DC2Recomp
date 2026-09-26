#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuSePlay__FiPUiP9mgCMemory
// Address: 0x250a20 - 0x250aa4
void MenuSePlay__FiPUiP9mgCMemory_0x250a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuSePlay__FiPUiP9mgCMemory_0x250a20");
#endif

    switch (ctx->pc) {
        case 0x250a64u: goto label_250a64;
        case 0x250a74u: goto label_250a74;
        case 0x250a84u: goto label_250a84;
        default: break;
    }

    ctx->pc = 0x250a20u;

    // 0x250a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x250a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x250a24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x250a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x250a28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x250a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x250a2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x250a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x250a30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x250a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x250a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x250a38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x250a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a3c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x250A3Cu;
    {
        const bool branch_taken_0x250a3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250A3Cu;
            // 0x250a40: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a3c) {
            ctx->pc = 0x250A8Cu;
            goto label_250a8c;
        }
    }
    ctx->pc = 0x250A44u;
    // 0x250a44: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250A44u;
    {
        const bool branch_taken_0x250a44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x250a44) {
            ctx->pc = 0x250A54u;
            goto label_250a54;
        }
    }
    ctx->pc = 0x250A4Cu;
    // 0x250a4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x250A4Cu;
    {
        const bool branch_taken_0x250a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250A4Cu;
            // 0x250a50: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a4c) {
            ctx->pc = 0x250A90u;
            goto label_250a90;
        }
    }
    ctx->pc = 0x250A54u;
label_250a54:
    // 0x250a54: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x250a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x250a58: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x250a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x250a5c: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x250A5Cu;
    SET_GPR_U32(ctx, 31, 0x250A64u);
    ctx->pc = 0x250A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250A5Cu;
            // 0x250a60: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250A64u; }
        if (ctx->pc != 0x250A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250A64u; }
        if (ctx->pc != 0x250A64u) { return; }
    }
    ctx->pc = 0x250A64u;
label_250a64:
    // 0x250a64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x250a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x250a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a6c: 0xc06368c  jal         func_18DA30
    ctx->pc = 0x250A6Cu;
    SET_GPR_U32(ctx, 31, 0x250A74u);
    ctx->pc = 0x250A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250A6Cu;
            // 0x250a70: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250A74u; }
        if (ctx->pc != 0x250A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250A74u; }
        if (ctx->pc != 0x250A74u) { return; }
    }
    ctx->pc = 0x250A74u;
label_250a74:
    // 0x250a74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x250a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x250a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250a7c: 0xc063818  jal         func_18E060
    ctx->pc = 0x250A7Cu;
    SET_GPR_U32(ctx, 31, 0x250A84u);
    ctx->pc = 0x250A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250A7Cu;
            // 0x250a80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250A84u; }
        if (ctx->pc != 0x250A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250A84u; }
        if (ctx->pc != 0x250A84u) { return; }
    }
    ctx->pc = 0x250A84u;
label_250a84:
    // 0x250a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x250a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x250a88: 0xa383978c  sb          $v1, -0x6874($gp)
    ctx->pc = 0x250a88u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940556), (uint8_t)GPR_U32(ctx, 3));
label_250a8c:
    // 0x250a8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x250a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_250a90:
    // 0x250a90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x250a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250a94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x250a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250a98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x250A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250A9Cu;
            // 0x250aa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x250AA4u;
}
