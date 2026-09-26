#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_CHARA_ATTACH__FP12RS_STACKDATAi
// Address: 0x2705e0 - 0x27064c
void ps2__CMRS_CHARA_ATTACH__FP12RS_STACKDATAi_0x2705e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_CHARA_ATTACH__FP12RS_STACKDATAi_0x2705e0");
#endif

    switch (ctx->pc) {
        case 0x2705fcu: goto label_2705fc;
        case 0x27060cu: goto label_27060c;
        case 0x270618u: goto label_270618;
        case 0x270630u: goto label_270630;
        default: break;
    }

    ctx->pc = 0x2705e0u;

    // 0x2705e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2705e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2705e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2705e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2705e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2705e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2705ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2705ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2705f0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2705f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2705f4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2705F4u;
    SET_GPR_U32(ctx, 31, 0x2705FCu);
    ctx->pc = 0x2705F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2705F4u;
            // 0x2705f8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2705FCu; }
        if (ctx->pc != 0x2705FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2705FCu; }
        if (ctx->pc != 0x2705FCu) { return; }
    }
    ctx->pc = 0x2705FCu;
label_2705fc:
    // 0x2705fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2705fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270604: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270604u;
    SET_GPR_U32(ctx, 31, 0x27060Cu);
    ctx->pc = 0x270608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270604u;
            // 0x270608: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27060Cu; }
        if (ctx->pc != 0x27060Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27060Cu; }
        if (ctx->pc != 0x27060Cu) { return; }
    }
    ctx->pc = 0x27060Cu;
label_27060c:
    // 0x27060c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27060cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x270610: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270610u;
    SET_GPR_U32(ctx, 31, 0x270618u);
    ctx->pc = 0x270614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270610u;
            // 0x270614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270618u; }
        if (ctx->pc != 0x270618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270618u; }
        if (ctx->pc != 0x270618u) { return; }
    }
    ctx->pc = 0x270618u;
label_270618:
    // 0x270618: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x270618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x27061c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27061cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270620: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x270620u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x270624: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x270624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270628: 0xc0969e8  jal         func_25A7A0
    ctx->pc = 0x270628u;
    SET_GPR_U32(ctx, 31, 0x270630u);
    ctx->pc = 0x27062Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270628u;
            // 0x27062c: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A7A0u;
    if (runtime->hasFunction(0x25A7A0u)) {
        auto targetFn = runtime->lookupFunction(0x25A7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270630u; }
        if (ctx->pc != 0x270630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CharaAttach__12CSceneCmrSeqFifi_0x25a7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270630u; }
        if (ctx->pc != 0x270630u) { return; }
    }
    ctx->pc = 0x270630u;
label_270630:
    // 0x270630: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x270630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270634: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x270634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x270638: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x270638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27063c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270640: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x270640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270644: 0x3e00008  jr          $ra
    ctx->pc = 0x270644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270644u;
            // 0x270648: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27064Cu;
}
