#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ADD_VECTOR__FP12RS_STACKDATAi
// Address: 0x1e1480 - 0x1e1508
void ps2__ADD_VECTOR__FP12RS_STACKDATAi_0x1e1480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ADD_VECTOR__FP12RS_STACKDATAi_0x1e1480");
#endif

    switch (ctx->pc) {
        case 0x1e14a0u: goto label_1e14a0;
        case 0x1e14b0u: goto label_1e14b0;
        case 0x1e14bcu: goto label_1e14bc;
        case 0x1e14d0u: goto label_1e14d0;
        case 0x1e14e4u: goto label_1e14e4;
        case 0x1e14f8u: goto label_1e14f8;
        default: break;
    }

    ctx->pc = 0x1e1480u;

    // 0x1e1480: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e1480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1484: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e1488: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1e1488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e148c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e148cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1490: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1e1490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1e1494: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e1494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1498: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1498u;
    SET_GPR_U32(ctx, 31, 0x1E14A0u);
    ctx->pc = 0x1E149Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1498u;
            // 0x1e149c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14A0u; }
        if (ctx->pc != 0x1E14A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14A0u; }
        if (ctx->pc != 0x1E14A0u) { return; }
    }
    ctx->pc = 0x1E14A0u;
label_1e14a0:
    // 0x1e14a0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e14a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e14a4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1e14a4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1e14a8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E14A8u;
    SET_GPR_U32(ctx, 31, 0x1E14B0u);
    ctx->pc = 0x1E14ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14A8u;
            // 0x1e14ac: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14B0u; }
        if (ctx->pc != 0x1E14B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14B0u; }
        if (ctx->pc != 0x1E14B0u) { return; }
    }
    ctx->pc = 0x1E14B0u;
label_1e14b0:
    // 0x1e14b0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e14b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e14b4: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E14B4u;
    SET_GPR_U32(ctx, 31, 0x1E14BCu);
    ctx->pc = 0x1E14B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14B4u;
            // 0x1e14b8: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14BCu; }
        if (ctx->pc != 0x1E14BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14BCu; }
        if (ctx->pc != 0x1E14BCu) { return; }
    }
    ctx->pc = 0x1E14BCu;
label_1e14bc:
    // 0x1e14bc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1e14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e14c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e14c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e14c4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e14c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e14c8: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E14C8u;
    SET_GPR_U32(ctx, 31, 0x1E14D0u);
    ctx->pc = 0x1E14CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14C8u;
            // 0x1e14cc: 0x46020b00  add.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14D0u; }
        if (ctx->pc != 0x1E14D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14D0u; }
        if (ctx->pc != 0x1E14D0u) { return; }
    }
    ctx->pc = 0x1E14D0u;
label_1e14d0:
    // 0x1e14d0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1e14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1e14d4: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x1e14d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1e14d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e14d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e14dc: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E14DCu;
    SET_GPR_U32(ctx, 31, 0x1E14E4u);
    ctx->pc = 0x1E14E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14DCu;
            // 0x1e14e0: 0x46030b00  add.s       $f12, $f1, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14E4u; }
        if (ctx->pc != 0x1E14E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14E4u; }
        if (ctx->pc != 0x1E14E4u) { return; }
    }
    ctx->pc = 0x1E14E4u;
label_1e14e4:
    // 0x1e14e4: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1e14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1e14e8: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x1e14e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1e14ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e14ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e14f0: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E14F0u;
    SET_GPR_U32(ctx, 31, 0x1E14F8u);
    ctx->pc = 0x1E14F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14F0u;
            // 0x1e14f4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14F8u; }
        if (ctx->pc != 0x1E14F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14F8u; }
        if (ctx->pc != 0x1E14F8u) { return; }
    }
    ctx->pc = 0x1E14F8u;
label_1e14f8:
    // 0x1e14f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e14f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e14fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e14fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1500: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1500u;
            // 0x1e1504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1508u;
}
