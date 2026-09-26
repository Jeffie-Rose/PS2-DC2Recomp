#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_QUAKE2__FP12RS_STACKDATAi
// Address: 0x270540 - 0x2705a4
void ps2__CMRS_QUAKE2__FP12RS_STACKDATAi_0x270540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_QUAKE2__FP12RS_STACKDATAi_0x270540");
#endif

    switch (ctx->pc) {
        case 0x270550u: goto label_270550;
        case 0x270560u: goto label_270560;
        case 0x270570u: goto label_270570;
        case 0x270580u: goto label_270580;
        case 0x270594u: goto label_270594;
        default: break;
    }

    ctx->pc = 0x270540u;

    // 0x270540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270548: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270548u;
    SET_GPR_U32(ctx, 31, 0x270550u);
    ctx->pc = 0x27054Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270548u;
            // 0x27054c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270550u; }
        if (ctx->pc != 0x270550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270550u; }
        if (ctx->pc != 0x270550u) { return; }
    }
    ctx->pc = 0x270550u;
label_270550:
    // 0x270550: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x270550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270554: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x270554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x270558: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270558u;
    SET_GPR_U32(ctx, 31, 0x270560u);
    ctx->pc = 0x27055Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270558u;
            // 0x27055c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270560u; }
        if (ctx->pc != 0x270560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270560u; }
        if (ctx->pc != 0x270560u) { return; }
    }
    ctx->pc = 0x270560u;
label_270560:
    // 0x270560: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x270560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270564: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x270564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x270568: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270568u;
    SET_GPR_U32(ctx, 31, 0x270570u);
    ctx->pc = 0x27056Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270568u;
            // 0x27056c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270570u; }
        if (ctx->pc != 0x270570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270570u; }
        if (ctx->pc != 0x270570u) { return; }
    }
    ctx->pc = 0x270570u;
label_270570:
    // 0x270570: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x270570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x270574: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x270574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270578: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270578u;
    SET_GPR_U32(ctx, 31, 0x270580u);
    ctx->pc = 0x27057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270578u;
            // 0x27057c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270580u; }
        if (ctx->pc != 0x270580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270580u; }
        if (ctx->pc != 0x270580u) { return; }
    }
    ctx->pc = 0x270580u;
label_270580:
    // 0x270580: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x270580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x270584: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x270584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270588: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x270588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x27058c: 0xc0969b8  jal         func_25A6E0
    ctx->pc = 0x27058Cu;
    SET_GPR_U32(ctx, 31, 0x270594u);
    ctx->pc = 0x270590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27058Cu;
            // 0x270590: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A6E0u;
    if (runtime->hasFunction(0x25A6E0u)) {
        auto targetFn = runtime->lookupFunction(0x25A6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270594u; }
        if (ctx->pc != 0x270594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Quake2__12CSceneCmrSeqFPfi_0x25a6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270594u; }
        if (ctx->pc != 0x270594u) { return; }
    }
    ctx->pc = 0x270594u;
label_270594:
    // 0x270594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270598: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27059c: 0x3e00008  jr          $ra
    ctx->pc = 0x27059Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2705A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27059Cu;
            // 0x2705a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2705A4u;
}
