#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SUB_VECTOR__FP12RS_STACKDATAi
// Address: 0x1e1510 - 0x1e1598
void ps2__SUB_VECTOR__FP12RS_STACKDATAi_0x1e1510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SUB_VECTOR__FP12RS_STACKDATAi_0x1e1510");
#endif

    switch (ctx->pc) {
        case 0x1e1530u: goto label_1e1530;
        case 0x1e1540u: goto label_1e1540;
        case 0x1e154cu: goto label_1e154c;
        case 0x1e1560u: goto label_1e1560;
        case 0x1e1574u: goto label_1e1574;
        case 0x1e1588u: goto label_1e1588;
        default: break;
    }

    ctx->pc = 0x1e1510u;

    // 0x1e1510: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e1510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1514: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1518: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1e1518u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e151c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1520: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1e1520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1e1524: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e1524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1528: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1528u;
    SET_GPR_U32(ctx, 31, 0x1E1530u);
    ctx->pc = 0x1E152Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1528u;
            // 0x1e152c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1530u; }
        if (ctx->pc != 0x1E1530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1530u; }
        if (ctx->pc != 0x1E1530u) { return; }
    }
    ctx->pc = 0x1E1530u;
label_1e1530:
    // 0x1e1530: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e1530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1534: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1e1534u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1e1538: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1538u;
    SET_GPR_U32(ctx, 31, 0x1E1540u);
    ctx->pc = 0x1E153Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1538u;
            // 0x1e153c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1540u; }
        if (ctx->pc != 0x1E1540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1540u; }
        if (ctx->pc != 0x1E1540u) { return; }
    }
    ctx->pc = 0x1E1540u;
label_1e1540:
    // 0x1e1540: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e1540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1544: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1544u;
    SET_GPR_U32(ctx, 31, 0x1E154Cu);
    ctx->pc = 0x1E1548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1544u;
            // 0x1e1548: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E154Cu; }
        if (ctx->pc != 0x1E154Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E154Cu; }
        if (ctx->pc != 0x1E154Cu) { return; }
    }
    ctx->pc = 0x1E154Cu;
label_1e154c:
    // 0x1e154c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1e154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e1550: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e1550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1554: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e1554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1558: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1558u;
    SET_GPR_U32(ctx, 31, 0x1E1560u);
    ctx->pc = 0x1E155Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1558u;
            // 0x1e155c: 0x46020b01  sub.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1560u; }
        if (ctx->pc != 0x1E1560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1560u; }
        if (ctx->pc != 0x1E1560u) { return; }
    }
    ctx->pc = 0x1E1560u;
label_1e1560:
    // 0x1e1560: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1e1560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1e1564: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x1e1564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1e1568: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e1568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e156c: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E156Cu;
    SET_GPR_U32(ctx, 31, 0x1E1574u);
    ctx->pc = 0x1E1570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E156Cu;
            // 0x1e1570: 0x46030b01  sub.s       $f12, $f1, $f3 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1574u; }
        if (ctx->pc != 0x1E1574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1574u; }
        if (ctx->pc != 0x1E1574u) { return; }
    }
    ctx->pc = 0x1E1574u;
label_1e1574:
    // 0x1e1574: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1e1574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1e1578: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x1e1578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1e157c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1580: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1580u;
    SET_GPR_U32(ctx, 31, 0x1E1588u);
    ctx->pc = 0x1E1584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1580u;
            // 0x1e1584: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1588u; }
        if (ctx->pc != 0x1E1588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1588u; }
        if (ctx->pc != 0x1E1588u) { return; }
    }
    ctx->pc = 0x1E1588u;
label_1e1588:
    // 0x1e1588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e158c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1590: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1590u;
            // 0x1e1594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1598u;
}
