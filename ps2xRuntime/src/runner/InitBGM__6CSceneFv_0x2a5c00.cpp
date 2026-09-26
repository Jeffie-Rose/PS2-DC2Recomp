#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitBGM__6CSceneFv
// Address: 0x2a5c00 - 0x2a5c44
void InitBGM__6CSceneFv_0x2a5c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitBGM__6CSceneFv_0x2a5c00");
#endif

    switch (ctx->pc) {
        case 0x2a5c10u: goto label_2a5c10;
        case 0x2a5c1cu: goto label_2a5c1c;
        case 0x2a5c2cu: goto label_2a5c2c;
        case 0x2a5c34u: goto label_2a5c34;
        default: break;
    }

    ctx->pc = 0x2a5c00u;

    // 0x2a5c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5c08: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A5C08u;
    SET_GPR_U32(ctx, 31, 0x2A5C10u);
    ctx->pc = 0x2A5C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C08u;
            // 0x2a5c0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C10u; }
        if (ctx->pc != 0x2A5C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C10u; }
        if (ctx->pc != 0x2A5C10u) { return; }
    }
    ctx->pc = 0x2A5C10u;
label_2a5c10:
    // 0x2a5c10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a5c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c14: 0xc0a96c0  jal         func_2A5B00
    ctx->pc = 0x2A5C14u;
    SET_GPR_U32(ctx, 31, 0x2A5C1Cu);
    ctx->pc = 0x2A5C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C14u;
            // 0x2a5c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B00u;
    if (runtime->hasFunction(0x2A5B00u)) {
        auto targetFn = runtime->lookupFunction(0x2A5B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C1Cu; }
        if (ctx->pc != 0x2A5C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__Q26CScene8BGM_INFOFv_0x2a5b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C1Cu; }
        if (ctx->pc != 0x2A5C1Cu) { return; }
    }
    ctx->pc = 0x2A5C1Cu;
label_2a5c1c:
    // 0x2a5c1c: 0x26040430  addiu       $a0, $s0, 0x430
    ctx->pc = 0x2a5c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
    // 0x2a5c20: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2a5c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a5c24: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2A5C24u;
    SET_GPR_U32(ctx, 31, 0x2A5C2Cu);
    ctx->pc = 0x2A5C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C24u;
            // 0x2a5c28: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C2Cu; }
        if (ctx->pc != 0x2A5C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C2Cu; }
        if (ctx->pc != 0x2A5C2Cu) { return; }
    }
    ctx->pc = 0x2A5C2Cu;
label_2a5c2c:
    // 0x2a5c2c: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x2A5C2Cu;
    SET_GPR_U32(ctx, 31, 0x2A5C34u);
    ctx->pc = 0x2A5C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C2Cu;
            // 0x2a5c30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C34u; }
        if (ctx->pc != 0x2A5C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5C34u; }
        if (ctx->pc != 0x2A5C34u) { return; }
    }
    ctx->pc = 0x2A5C34u;
label_2a5c34:
    // 0x2a5c34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5c38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5C3Cu;
            // 0x2a5c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5C44u;
}
