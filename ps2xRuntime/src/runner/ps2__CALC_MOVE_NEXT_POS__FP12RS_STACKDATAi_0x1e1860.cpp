#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CALC_MOVE_NEXT_POS__FP12RS_STACKDATAi
// Address: 0x1e1860 - 0x1e1938
void ps2__CALC_MOVE_NEXT_POS__FP12RS_STACKDATAi_0x1e1860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CALC_MOVE_NEXT_POS__FP12RS_STACKDATAi_0x1e1860");
#endif

    switch (ctx->pc) {
        case 0x1e1874u: goto label_1e1874;
        case 0x1e1884u: goto label_1e1884;
        case 0x1e1894u: goto label_1e1894;
        case 0x1e18a4u: goto label_1e18a4;
        case 0x1e18b4u: goto label_1e18b4;
        case 0x1e18c4u: goto label_1e18c4;
        case 0x1e18d4u: goto label_1e18d4;
        case 0x1e18e8u: goto label_1e18e8;
        case 0x1e18f8u: goto label_1e18f8;
        case 0x1e1908u: goto label_1e1908;
        case 0x1e1918u: goto label_1e1918;
        case 0x1e1924u: goto label_1e1924;
        default: break;
    }

    ctx->pc = 0x1e1860u;

    // 0x1e1860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e1860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e1864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e186c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E186Cu;
    SET_GPR_U32(ctx, 31, 0x1E1874u);
    ctx->pc = 0x1E1870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E186Cu;
            // 0x1e1870: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1874u; }
        if (ctx->pc != 0x1E1874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1874u; }
        if (ctx->pc != 0x1E1874u) { return; }
    }
    ctx->pc = 0x1E1874u;
label_1e1874:
    // 0x1e1874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1878: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e1878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e187c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E187Cu;
    SET_GPR_U32(ctx, 31, 0x1E1884u);
    ctx->pc = 0x1E1880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E187Cu;
            // 0x1e1880: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1884u; }
        if (ctx->pc != 0x1E1884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1884u; }
        if (ctx->pc != 0x1E1884u) { return; }
    }
    ctx->pc = 0x1E1884u;
label_1e1884:
    // 0x1e1884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1888: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1e1888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e188c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E188Cu;
    SET_GPR_U32(ctx, 31, 0x1E1894u);
    ctx->pc = 0x1E1890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E188Cu;
            // 0x1e1890: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1894u; }
        if (ctx->pc != 0x1E1894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1894u; }
        if (ctx->pc != 0x1E1894u) { return; }
    }
    ctx->pc = 0x1E1894u;
label_1e1894:
    // 0x1e1894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1898: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1e1898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e189c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E189Cu;
    SET_GPR_U32(ctx, 31, 0x1E18A4u);
    ctx->pc = 0x1E18A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E189Cu;
            // 0x1e18a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18A4u; }
        if (ctx->pc != 0x1E18A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18A4u; }
        if (ctx->pc != 0x1E18A4u) { return; }
    }
    ctx->pc = 0x1E18A4u;
label_1e18a4:
    // 0x1e18a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e18a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18a8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1e18a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e18ac: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E18ACu;
    SET_GPR_U32(ctx, 31, 0x1E18B4u);
    ctx->pc = 0x1E18B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18ACu;
            // 0x1e18b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18B4u; }
        if (ctx->pc != 0x1E18B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18B4u; }
        if (ctx->pc != 0x1E18B4u) { return; }
    }
    ctx->pc = 0x1E18B4u;
label_1e18b4:
    // 0x1e18b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e18b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18b8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1e18b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e18bc: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E18BCu;
    SET_GPR_U32(ctx, 31, 0x1E18C4u);
    ctx->pc = 0x1E18C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18BCu;
            // 0x1e18c0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18C4u; }
        if (ctx->pc != 0x1E18C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18C4u; }
        if (ctx->pc != 0x1E18C4u) { return; }
    }
    ctx->pc = 0x1E18C4u;
label_1e18c4:
    // 0x1e18c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e18c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18c8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1e18c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e18cc: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E18CCu;
    SET_GPR_U32(ctx, 31, 0x1E18D4u);
    ctx->pc = 0x1E18D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18CCu;
            // 0x1e18d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18D4u; }
        if (ctx->pc != 0x1E18D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18D4u; }
        if (ctx->pc != 0x1E18D4u) { return; }
    }
    ctx->pc = 0x1E18D4u;
label_1e18d4:
    // 0x1e18d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e18d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e18d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e18d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e18dc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1e18dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e18e0: 0xc056fe0  jal         func_15BF80
    ctx->pc = 0x1E18E0u;
    SET_GPR_U32(ctx, 31, 0x1E18E8u);
    ctx->pc = 0x1E18E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18E0u;
            // 0x1e18e4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BF80u;
    if (runtime->hasFunction(0x15BF80u)) {
        auto targetFn = runtime->lookupFunction(0x15BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18E8u; }
        if (ctx->pc != 0x1E18E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMoveNextPos__FPfPffPf_0x15bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18E8u; }
        if (ctx->pc != 0x1E18E8u) { return; }
    }
    ctx->pc = 0x1E18E8u;
label_1e18e8:
    // 0x1e18e8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1e18e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e18ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e18ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e18f0: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E18F0u;
    SET_GPR_U32(ctx, 31, 0x1E18F8u);
    ctx->pc = 0x1E18F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18F0u;
            // 0x1e18f4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18F8u; }
        if (ctx->pc != 0x1E18F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18F8u; }
        if (ctx->pc != 0x1E18F8u) { return; }
    }
    ctx->pc = 0x1E18F8u;
label_1e18f8:
    // 0x1e18f8: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1e18f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e18fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e18fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1900: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1900u;
    SET_GPR_U32(ctx, 31, 0x1E1908u);
    ctx->pc = 0x1E1904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1900u;
            // 0x1e1904: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1908u; }
        if (ctx->pc != 0x1E1908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1908u; }
        if (ctx->pc != 0x1E1908u) { return; }
    }
    ctx->pc = 0x1E1908u;
label_1e1908:
    // 0x1e1908: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x1e1908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e190c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e190cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1910: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1910u;
    SET_GPR_U32(ctx, 31, 0x1E1918u);
    ctx->pc = 0x1E1914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1910u;
            // 0x1e1914: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1918u; }
        if (ctx->pc != 0x1E1918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1918u; }
        if (ctx->pc != 0x1E1918u) { return; }
    }
    ctx->pc = 0x1E1918u;
label_1e1918:
    // 0x1e1918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e191c: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E191Cu;
    SET_GPR_U32(ctx, 31, 0x1E1924u);
    ctx->pc = 0x1E1920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E191Cu;
            // 0x1e1920: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1924u; }
        if (ctx->pc != 0x1E1924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1924u; }
        if (ctx->pc != 0x1E1924u) { return; }
    }
    ctx->pc = 0x1E1924u;
label_1e1924:
    // 0x1e1924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e192c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e192cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1930: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1930u;
            // 0x1e1934: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1938u;
}
