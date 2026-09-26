#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_title.cpp
// Address: 0x374810 - 0x374898
void ps2___sinit_title_cpp_0x374810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_title_cpp_0x374810");
#endif

    switch (ctx->pc) {
        case 0x374824u: goto label_374824;
        case 0x374830u: goto label_374830;
        case 0x37483cu: goto label_37483c;
        case 0x374848u: goto label_374848;
        case 0x374854u: goto label_374854;
        case 0x374874u: goto label_374874;
        default: break;
    }

    ctx->pc = 0x374810u;

    // 0x374810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374814: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x374814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x374818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37481c: 0xc04e640  jal         func_139900
    ctx->pc = 0x37481Cu;
    SET_GPR_U32(ctx, 31, 0x374824u);
    ctx->pc = 0x374820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37481Cu;
            // 0x374820: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374824u; }
        if (ctx->pc != 0x374824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374824u; }
        if (ctx->pc != 0x374824u) { return; }
    }
    ctx->pc = 0x374824u;
label_374824:
    // 0x374824: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x374824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x374828: 0xc04e640  jal         func_139900
    ctx->pc = 0x374828u;
    SET_GPR_U32(ctx, 31, 0x374830u);
    ctx->pc = 0x37482Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374828u;
            // 0x37482c: 0x248460a0  addiu       $a0, $a0, 0x60A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374830u; }
        if (ctx->pc != 0x374830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374830u; }
        if (ctx->pc != 0x374830u) { return; }
    }
    ctx->pc = 0x374830u;
label_374830:
    // 0x374830: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x374830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x374834: 0xc04e640  jal         func_139900
    ctx->pc = 0x374834u;
    SET_GPR_U32(ctx, 31, 0x37483Cu);
    ctx->pc = 0x374838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374834u;
            // 0x374838: 0x248460d0  addiu       $a0, $a0, 0x60D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37483Cu; }
        if (ctx->pc != 0x37483Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37483Cu; }
        if (ctx->pc != 0x37483Cu) { return; }
    }
    ctx->pc = 0x37483Cu;
label_37483c:
    // 0x37483c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x37483cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x374840: 0xc04e640  jal         func_139900
    ctx->pc = 0x374840u;
    SET_GPR_U32(ctx, 31, 0x374848u);
    ctx->pc = 0x374844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374840u;
            // 0x374844: 0x24846100  addiu       $a0, $a0, 0x6100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374848u; }
        if (ctx->pc != 0x374848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374848u; }
        if (ctx->pc != 0x374848u) { return; }
    }
    ctx->pc = 0x374848u;
label_374848:
    // 0x374848: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x374848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x37484c: 0xc04e640  jal         func_139900
    ctx->pc = 0x37484Cu;
    SET_GPR_U32(ctx, 31, 0x374854u);
    ctx->pc = 0x374850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37484Cu;
            // 0x374850: 0x24846130  addiu       $a0, $a0, 0x6130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374854u; }
        if (ctx->pc != 0x374854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374854u; }
        if (ctx->pc != 0x374854u) { return; }
    }
    ctx->pc = 0x374854u;
label_374854:
    // 0x374854: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x374854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x374858: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x374858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x37485c: 0x24846160  addiu       $a0, $a0, 0x6160
    ctx->pc = 0x37485cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24928));
    // 0x374860: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x374860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
    // 0x374864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374868: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x374868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37486c: 0xc040070  jal         func_1001C0
    ctx->pc = 0x37486Cu;
    SET_GPR_U32(ctx, 31, 0x374874u);
    ctx->pc = 0x374870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37486Cu;
            // 0x374870: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374874u; }
        if (ctx->pc != 0x374874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374874u; }
        if (ctx->pc != 0x374874u) { return; }
    }
    ctx->pc = 0x374874u;
label_374874:
    // 0x374874: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x374874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x374878: 0xac2062d0  sw          $zero, 0x62D0($at)
    ctx->pc = 0x374878u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25296), GPR_U32(ctx, 0));
    // 0x37487c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x37487cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x374880: 0xac2062d8  sw          $zero, 0x62D8($at)
    ctx->pc = 0x374880u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25304), GPR_U32(ctx, 0));
    // 0x374884: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x374884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x374888: 0xac2062dc  sw          $zero, 0x62DC($at)
    ctx->pc = 0x374888u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25308), GPR_U32(ctx, 0));
    // 0x37488c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37488cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374890: 0x3e00008  jr          $ra
    ctx->pc = 0x374890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374890u;
            // 0x374894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374898u;
}
