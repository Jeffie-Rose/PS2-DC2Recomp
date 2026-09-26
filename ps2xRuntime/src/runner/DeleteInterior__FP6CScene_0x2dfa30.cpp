#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteInterior__FP6CScene
// Address: 0x2dfa30 - 0x2dfa94
void DeleteInterior__FP6CScene_0x2dfa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteInterior__FP6CScene_0x2dfa30");
#endif

    switch (ctx->pc) {
        case 0x2dfa44u: goto label_2dfa44;
        case 0x2dfa54u: goto label_2dfa54;
        case 0x2dfa68u: goto label_2dfa68;
        case 0x2dfa70u: goto label_2dfa70;
        case 0x2dfa7cu: goto label_2dfa7c;
        default: break;
    }

    ctx->pc = 0x2dfa30u;

    // 0x2dfa30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dfa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dfa34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dfa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dfa38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dfa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dfa3c: 0xc0b7d7c  jal         func_2DF5F0
    ctx->pc = 0x2DFA3Cu;
    SET_GPR_U32(ctx, 31, 0x2DFA44u);
    ctx->pc = 0x2DFA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFA3Cu;
            // 0x2dfa40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5F0u;
    if (runtime->hasFunction(0x2DF5F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA44u; }
        if (ctx->pc != 0x2DFA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InInterior__Fv_0x2df5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA44u; }
        if (ctx->pc != 0x2DFA44u) { return; }
    }
    ctx->pc = 0x2DFA44u;
label_2dfa44:
    // 0x2dfa44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DFA44u;
    {
        const bool branch_taken_0x2dfa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfa44) {
            ctx->pc = 0x2DFA84u;
            goto label_2dfa84;
        }
    }
    ctx->pc = 0x2DFA4Cu;
    // 0x2dfa4c: 0xc050bd0  jal         func_142F40
    ctx->pc = 0x2DFA4Cu;
    SET_GPR_U32(ctx, 31, 0x2DFA54u);
    ctx->pc = 0x142F40u;
    if (runtime->hasFunction(0x142F40u)) {
        auto targetFn = runtime->lookupFunction(0x142F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA54u; }
        if (ctx->pc != 0x2DFA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgWaitFrame__Fv_0x142f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA54u; }
        if (ctx->pc != 0x2DFA54u) { return; }
    }
    ctx->pc = 0x2DFA54u;
label_2dfa54:
    // 0x2dfa54: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dfa54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dfa58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa5c: 0x8c258d70  lw          $a1, -0x7290($at)
    ctx->pc = 0x2dfa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937968)));
    // 0x2dfa60: 0xc0a179c  jal         func_285E70
    ctx->pc = 0x2DFA60u;
    SET_GPR_U32(ctx, 31, 0x2DFA68u);
    ctx->pc = 0x2DFA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFA60u;
            // 0x2dfa64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285E70u;
    if (runtime->hasFunction(0x285E70u)) {
        auto targetFn = runtime->lookupFunction(0x285E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA68u; }
        if (ctx->pc != 0x2DFA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteMap__6CSceneFii_0x285e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA68u; }
        if (ctx->pc != 0x2DFA68u) { return; }
    }
    ctx->pc = 0x2DFA68u;
label_2dfa68:
    // 0x2dfa68: 0xc0b2598  jal         func_2C9660
    ctx->pc = 0x2DFA68u;
    SET_GPR_U32(ctx, 31, 0x2DFA70u);
    ctx->pc = 0x2DFA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFA68u;
            // 0x2dfa6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9660u;
    if (runtime->hasFunction(0x2C9660u)) {
        auto targetFn = runtime->lookupFunction(0x2C9660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA70u; }
        if (ctx->pc != 0x2DFA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSubVillager__6CSceneFv_0x2c9660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA70u; }
        if (ctx->pc != 0x2DFA70u) { return; }
    }
    ctx->pc = 0x2DFA70u;
label_2dfa70:
    // 0x2dfa70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2dfa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dfa74: 0xc064220  jal         func_190880
    ctx->pc = 0x2DFA74u;
    SET_GPR_U32(ctx, 31, 0x2DFA7Cu);
    ctx->pc = 0x2DFA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFA74u;
            // 0x2dfa78: 0xaf829eb0  sw          $v0, -0x6150($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA7Cu; }
        if (ctx->pc != 0x2DFA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFA7Cu; }
        if (ctx->pc != 0x2DFA7Cu) { return; }
    }
    ctx->pc = 0x2DFA7Cu;
label_2dfa7c:
    // 0x2dfa7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2dfa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dfa80: 0xa4431a1a  sh          $v1, 0x1A1A($v0)
    ctx->pc = 0x2dfa80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6682), (uint16_t)GPR_U32(ctx, 3));
label_2dfa84:
    // 0x2dfa84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dfa84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfa88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dfa88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfa8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFA8Cu;
            // 0x2dfa90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFA94u;
}
