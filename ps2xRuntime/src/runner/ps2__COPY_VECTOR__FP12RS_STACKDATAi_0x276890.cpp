#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _COPY_VECTOR__FP12RS_STACKDATAi
// Address: 0x276890 - 0x2768e4
void ps2__COPY_VECTOR__FP12RS_STACKDATAi_0x276890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COPY_VECTOR__FP12RS_STACKDATAi_0x276890");
#endif

    switch (ctx->pc) {
        case 0x2768a8u: goto label_2768a8;
        case 0x2768b8u: goto label_2768b8;
        case 0x2768c8u: goto label_2768c8;
        case 0x2768d4u: goto label_2768d4;
        default: break;
    }

    ctx->pc = 0x276890u;

    // 0x276890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276894: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x276894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27689c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27689cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2768a0: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x2768A0u;
    SET_GPR_U32(ctx, 31, 0x2768A8u);
    ctx->pc = 0x2768A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2768A0u;
            // 0x2768a4: 0x24e50018  addiu       $a1, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768A8u; }
        if (ctx->pc != 0x2768A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768A8u; }
        if (ctx->pc != 0x2768A8u) { return; }
    }
    ctx->pc = 0x2768A8u;
label_2768a8:
    // 0x2768a8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x2768a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2768ac: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2768acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768b0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2768B0u;
    SET_GPR_U32(ctx, 31, 0x2768B8u);
    ctx->pc = 0x2768B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2768B0u;
            // 0x2768b4: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768B8u; }
        if (ctx->pc != 0x2768B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768B8u; }
        if (ctx->pc != 0x2768B8u) { return; }
    }
    ctx->pc = 0x2768B8u;
label_2768b8:
    // 0x2768b8: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x2768b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2768bc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2768bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768c0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2768C0u;
    SET_GPR_U32(ctx, 31, 0x2768C8u);
    ctx->pc = 0x2768C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2768C0u;
            // 0x2768c4: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768C8u; }
        if (ctx->pc != 0x2768C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768C8u; }
        if (ctx->pc != 0x2768C8u) { return; }
    }
    ctx->pc = 0x2768C8u;
label_2768c8:
    // 0x2768c8: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x2768c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2768cc: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2768CCu;
    SET_GPR_U32(ctx, 31, 0x2768D4u);
    ctx->pc = 0x2768D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2768CCu;
            // 0x2768d0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768D4u; }
        if (ctx->pc != 0x2768D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2768D4u; }
        if (ctx->pc != 0x2768D4u) { return; }
    }
    ctx->pc = 0x2768D4u;
label_2768d4:
    // 0x2768d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2768d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2768d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2768d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2768dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2768DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2768E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2768DCu;
            // 0x2768e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2768E4u;
}
