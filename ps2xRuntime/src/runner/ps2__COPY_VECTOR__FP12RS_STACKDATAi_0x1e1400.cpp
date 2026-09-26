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
// Address: 0x1e1400 - 0x1e1474
void ps2__COPY_VECTOR__FP12RS_STACKDATAi_0x1e1400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COPY_VECTOR__FP12RS_STACKDATAi_0x1e1400");
#endif

    switch (ctx->pc) {
        case 0x1e1420u: goto label_1e1420;
        case 0x1e1430u: goto label_1e1430;
        case 0x1e143cu: goto label_1e143c;
        case 0x1e1448u: goto label_1e1448;
        case 0x1e1458u: goto label_1e1458;
        case 0x1e1464u: goto label_1e1464;
        default: break;
    }

    ctx->pc = 0x1e1400u;

    // 0x1e1400: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e1400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1404: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1408: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1e1408u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e140c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1410: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1e1410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1e1414: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e1414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1418: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1418u;
    SET_GPR_U32(ctx, 31, 0x1E1420u);
    ctx->pc = 0x1E141Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1418u;
            // 0x1e141c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1420u; }
        if (ctx->pc != 0x1E1420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1420u; }
        if (ctx->pc != 0x1E1420u) { return; }
    }
    ctx->pc = 0x1E1420u;
label_1e1420:
    // 0x1e1420: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e1420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1424: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e1424u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e1428: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1428u;
    SET_GPR_U32(ctx, 31, 0x1E1430u);
    ctx->pc = 0x1E142Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1428u;
            // 0x1e142c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1430u; }
        if (ctx->pc != 0x1E1430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1430u; }
        if (ctx->pc != 0x1E1430u) { return; }
    }
    ctx->pc = 0x1E1430u;
label_1e1430:
    // 0x1e1430: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e1430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1434: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1434u;
    SET_GPR_U32(ctx, 31, 0x1E143Cu);
    ctx->pc = 0x1E1438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1434u;
            // 0x1e1438: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E143Cu; }
        if (ctx->pc != 0x1E143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E143Cu; }
        if (ctx->pc != 0x1E143Cu) { return; }
    }
    ctx->pc = 0x1E143Cu;
label_1e143c:
    // 0x1e143c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e143cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1440: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1440u;
    SET_GPR_U32(ctx, 31, 0x1E1448u);
    ctx->pc = 0x1E1444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1440u;
            // 0x1e1444: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1448u; }
        if (ctx->pc != 0x1E1448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1448u; }
        if (ctx->pc != 0x1E1448u) { return; }
    }
    ctx->pc = 0x1E1448u;
label_1e1448:
    // 0x1e1448: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e1448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e144c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1e144cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1e1450: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1450u;
    SET_GPR_U32(ctx, 31, 0x1E1458u);
    ctx->pc = 0x1E1454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1450u;
            // 0x1e1454: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1458u; }
        if (ctx->pc != 0x1E1458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1458u; }
        if (ctx->pc != 0x1E1458u) { return; }
    }
    ctx->pc = 0x1E1458u;
label_1e1458:
    // 0x1e1458: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e1458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e145c: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E145Cu;
    SET_GPR_U32(ctx, 31, 0x1E1464u);
    ctx->pc = 0x1E1460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E145Cu;
            // 0x1e1460: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1464u; }
        if (ctx->pc != 0x1E1464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1464u; }
        if (ctx->pc != 0x1E1464u) { return; }
    }
    ctx->pc = 0x1E1464u;
label_1e1464:
    // 0x1e1464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e146c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E146Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E146Cu;
            // 0x1e1470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1474u;
}
