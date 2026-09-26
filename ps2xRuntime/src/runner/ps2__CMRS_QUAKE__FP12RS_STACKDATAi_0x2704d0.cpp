#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_QUAKE__FP12RS_STACKDATAi
// Address: 0x2704d0 - 0x270534
void ps2__CMRS_QUAKE__FP12RS_STACKDATAi_0x2704d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_QUAKE__FP12RS_STACKDATAi_0x2704d0");
#endif

    switch (ctx->pc) {
        case 0x2704e0u: goto label_2704e0;
        case 0x2704f0u: goto label_2704f0;
        case 0x270500u: goto label_270500;
        case 0x270510u: goto label_270510;
        case 0x270524u: goto label_270524;
        default: break;
    }

    ctx->pc = 0x2704d0u;

    // 0x2704d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2704d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2704d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2704d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2704d8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2704D8u;
    SET_GPR_U32(ctx, 31, 0x2704E0u);
    ctx->pc = 0x2704DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2704D8u;
            // 0x2704dc: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2704E0u; }
        if (ctx->pc != 0x2704E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2704E0u; }
        if (ctx->pc != 0x2704E0u) { return; }
    }
    ctx->pc = 0x2704E0u;
label_2704e0:
    // 0x2704e0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2704e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2704e4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2704e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2704e8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2704E8u;
    SET_GPR_U32(ctx, 31, 0x2704F0u);
    ctx->pc = 0x2704ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2704E8u;
            // 0x2704ec: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2704F0u; }
        if (ctx->pc != 0x2704F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2704F0u; }
        if (ctx->pc != 0x2704F0u) { return; }
    }
    ctx->pc = 0x2704F0u;
label_2704f0:
    // 0x2704f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2704f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2704f4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2704f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2704f8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2704F8u;
    SET_GPR_U32(ctx, 31, 0x270500u);
    ctx->pc = 0x2704FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2704F8u;
            // 0x2704fc: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270500u; }
        if (ctx->pc != 0x270500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270500u; }
        if (ctx->pc != 0x270500u) { return; }
    }
    ctx->pc = 0x270500u;
label_270500:
    // 0x270500: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x270500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x270504: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x270504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270508: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270508u;
    SET_GPR_U32(ctx, 31, 0x270510u);
    ctx->pc = 0x27050Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270508u;
            // 0x27050c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270510u; }
        if (ctx->pc != 0x270510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270510u; }
        if (ctx->pc != 0x270510u) { return; }
    }
    ctx->pc = 0x270510u;
label_270510:
    // 0x270510: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x270510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x270514: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x270514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270518: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x270518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x27051c: 0xc0969a0  jal         func_25A680
    ctx->pc = 0x27051Cu;
    SET_GPR_U32(ctx, 31, 0x270524u);
    ctx->pc = 0x270520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27051Cu;
            // 0x270520: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A680u;
    if (runtime->hasFunction(0x25A680u)) {
        auto targetFn = runtime->lookupFunction(0x25A680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270524u; }
        if (ctx->pc != 0x270524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Quake__12CSceneCmrSeqFPfi_0x25a680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270524u; }
        if (ctx->pc != 0x270524u) { return; }
    }
    ctx->pc = 0x270524u;
label_270524:
    // 0x270524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27052c: 0x3e00008  jr          $ra
    ctx->pc = 0x27052Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27052Cu;
            // 0x270530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x270534u;
}
