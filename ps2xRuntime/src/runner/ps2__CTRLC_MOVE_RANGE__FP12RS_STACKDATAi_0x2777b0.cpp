#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CTRLC_MOVE_RANGE__FP12RS_STACKDATAi
// Address: 0x2777b0 - 0x277820
void ps2__CTRLC_MOVE_RANGE__FP12RS_STACKDATAi_0x2777b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CTRLC_MOVE_RANGE__FP12RS_STACKDATAi_0x2777b0");
#endif

    switch (ctx->pc) {
        case 0x2777c4u: goto label_2777c4;
        case 0x2777ccu: goto label_2777cc;
        case 0x2777dcu: goto label_2777dc;
        case 0x2777ecu: goto label_2777ec;
        case 0x2777fcu: goto label_2777fc;
        case 0x277808u: goto label_277808;
        default: break;
    }

    ctx->pc = 0x2777b0u;

    // 0x2777b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2777b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2777b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2777b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2777b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2777b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2777bc: 0xc09b8c8  jal         func_26E320
    ctx->pc = 0x2777BCu;
    SET_GPR_U32(ctx, 31, 0x2777C4u);
    ctx->pc = 0x2777C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2777BCu;
            // 0x2777c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2777C4u; }
        if (ctx->pc != 0x2777C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2777C4u; }
        if (ctx->pc != 0x2777C4u) { return; }
    }
    ctx->pc = 0x2777C4u;
label_2777c4:
    // 0x2777c4: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x2777C4u;
    SET_GPR_U32(ctx, 31, 0x2777CCu);
    ctx->pc = 0x2777C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2777C4u;
            // 0x2777c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2777CCu; }
        if (ctx->pc != 0x2777CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2777CCu; }
        if (ctx->pc != 0x2777CCu) { return; }
    }
    ctx->pc = 0x2777CCu;
label_2777cc:
    // 0x2777cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2777ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2777d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2777d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2777d4: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2777D4u;
    SET_GPR_U32(ctx, 31, 0x2777DCu);
    ctx->pc = 0x2777D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2777D4u;
            // 0x2777d8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2777DCu; }
        if (ctx->pc != 0x2777DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2777DCu; }
        if (ctx->pc != 0x2777DCu) { return; }
    }
    ctx->pc = 0x2777DCu;
label_2777dc:
    // 0x2777dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2777dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2777e0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2777e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2777e4: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2777E4u;
    SET_GPR_U32(ctx, 31, 0x2777ECu);
    ctx->pc = 0x2777E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2777E4u;
            // 0x2777e8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2777ECu; }
        if (ctx->pc != 0x2777ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2777ECu; }
        if (ctx->pc != 0x2777ECu) { return; }
    }
    ctx->pc = 0x2777ECu;
label_2777ec:
    // 0x2777ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2777ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2777f0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2777f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2777f4: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2777F4u;
    SET_GPR_U32(ctx, 31, 0x2777FCu);
    ctx->pc = 0x2777F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2777F4u;
            // 0x2777f8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2777FCu; }
        if (ctx->pc != 0x2777FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2777FCu; }
        if (ctx->pc != 0x2777FCu) { return; }
    }
    ctx->pc = 0x2777FCu;
label_2777fc:
    // 0x2777fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2777fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277800: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x277800u;
    SET_GPR_U32(ctx, 31, 0x277808u);
    ctx->pc = 0x277804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277800u;
            // 0x277804: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277808u; }
        if (ctx->pc != 0x277808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277808u; }
        if (ctx->pc != 0x277808u) { return; }
    }
    ctx->pc = 0x277808u;
label_277808:
    // 0x277808: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x277808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x27780c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x277810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277818: 0x3e00008  jr          $ra
    ctx->pc = 0x277818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277818u;
            // 0x27781c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x277820u;
}
