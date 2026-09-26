#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_BG_COLOR__FP12RS_STACKDATAi
// Address: 0x265d10 - 0x265d7c
void ps2__SET_BG_COLOR__FP12RS_STACKDATAi_0x265d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_BG_COLOR__FP12RS_STACKDATAi_0x265d10");
#endif

    switch (ctx->pc) {
        case 0x265d20u: goto label_265d20;
        case 0x265d30u: goto label_265d30;
        case 0x265d40u: goto label_265d40;
        case 0x265d54u: goto label_265d54;
        case 0x265d6cu: goto label_265d6c;
        default: break;
    }

    ctx->pc = 0x265d10u;

    // 0x265d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x265d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x265d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265d18: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x265D18u;
    SET_GPR_U32(ctx, 31, 0x265D20u);
    ctx->pc = 0x265D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D18u;
            // 0x265d1c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D20u; }
        if (ctx->pc != 0x265D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D20u; }
        if (ctx->pc != 0x265D20u) { return; }
    }
    ctx->pc = 0x265D20u;
label_265d20:
    // 0x265d20: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x265d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265d24: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x265d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x265d28: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x265D28u;
    SET_GPR_U32(ctx, 31, 0x265D30u);
    ctx->pc = 0x265D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D28u;
            // 0x265d2c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D30u; }
        if (ctx->pc != 0x265D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D30u; }
        if (ctx->pc != 0x265D30u) { return; }
    }
    ctx->pc = 0x265D30u;
label_265d30:
    // 0x265d30: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x265d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265d34: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x265d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x265d38: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x265D38u;
    SET_GPR_U32(ctx, 31, 0x265D40u);
    ctx->pc = 0x265D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D38u;
            // 0x265d3c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D40u; }
        if (ctx->pc != 0x265D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D40u; }
        if (ctx->pc != 0x265D40u) { return; }
    }
    ctx->pc = 0x265D40u;
label_265d40:
    // 0x265d40: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x265d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x265d44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265D44u;
    {
        const bool branch_taken_0x265d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265D44u;
            // 0x265d48: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d44) {
            ctx->pc = 0x265D5Cu;
            goto label_265d5c;
        }
    }
    ctx->pc = 0x265D4Cu;
    // 0x265d4c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x265D4Cu;
    SET_GPR_U32(ctx, 31, 0x265D54u);
    ctx->pc = 0x265D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D4Cu;
            // 0x265d50: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D54u; }
        if (ctx->pc != 0x265D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D54u; }
        if (ctx->pc != 0x265D54u) { return; }
    }
    ctx->pc = 0x265D54u;
label_265d54:
    // 0x265d54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x265D54u;
    {
        const bool branch_taken_0x265d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265D54u;
            // 0x265d58: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x265d54) {
            ctx->pc = 0x265D64u;
            goto label_265d64;
        }
    }
    ctx->pc = 0x265D5Cu;
label_265d5c:
    // 0x265d5c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x265d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x265d60: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x265d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_265d64:
    // 0x265d64: 0xc050d9c  jal         func_143670
    ctx->pc = 0x265D64u;
    SET_GPR_U32(ctx, 31, 0x265D6Cu);
    ctx->pc = 0x265D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265D64u;
            // 0x265d68: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143670u;
    if (runtime->hasFunction(0x143670u)) {
        auto targetFn = runtime->lookupFunction(0x143670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D6Cu; }
        if (ctx->pc != 0x265D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetBackGround__FPf_0x143670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265D6Cu; }
        if (ctx->pc != 0x265D6Cu) { return; }
    }
    ctx->pc = 0x265D6Cu;
label_265d6c:
    // 0x265d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265d74: 0x3e00008  jr          $ra
    ctx->pc = 0x265D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265D74u;
            // 0x265d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265D7Cu;
}
