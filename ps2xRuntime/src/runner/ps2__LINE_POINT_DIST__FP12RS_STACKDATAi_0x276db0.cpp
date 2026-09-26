#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LINE_POINT_DIST__FP12RS_STACKDATAi
// Address: 0x276db0 - 0x276ebc
void ps2__LINE_POINT_DIST__FP12RS_STACKDATAi_0x276db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LINE_POINT_DIST__FP12RS_STACKDATAi_0x276db0");
#endif

    switch (ctx->pc) {
        case 0x276dd0u: goto label_276dd0;
        case 0x276ddcu: goto label_276ddc;
        case 0x276de8u: goto label_276de8;
        case 0x276df8u: goto label_276df8;
        case 0x276e0cu: goto label_276e0c;
        case 0x276e1cu: goto label_276e1c;
        case 0x276e28u: goto label_276e28;
        case 0x276e34u: goto label_276e34;
        case 0x276e68u: goto label_276e68;
        case 0x276e7cu: goto label_276e7c;
        case 0x276e8cu: goto label_276e8c;
        case 0x276e98u: goto label_276e98;
        case 0x276ea4u: goto label_276ea4;
        default: break;
    }

    ctx->pc = 0x276db0u;

    // 0x276db0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x276db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x276db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x276db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x276db8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x276db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x276dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276dc0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x276dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276dc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x276dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276dc8: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x276DC8u;
    SET_GPR_U32(ctx, 31, 0x276DD0u);
    ctx->pc = 0x276DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276DC8u;
            // 0x276dcc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276DD0u; }
        if (ctx->pc != 0x276DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276DD0u; }
        if (ctx->pc != 0x276DD0u) { return; }
    }
    ctx->pc = 0x276DD0u;
label_276dd0:
    // 0x276dd0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x276dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276dd4: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x276DD4u;
    SET_GPR_U32(ctx, 31, 0x276DDCu);
    ctx->pc = 0x276DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276DD4u;
            // 0x276dd8: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276DDCu; }
        if (ctx->pc != 0x276DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276DDCu; }
        if (ctx->pc != 0x276DDCu) { return; }
    }
    ctx->pc = 0x276DDCu;
label_276ddc:
    // 0x276ddc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x276ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x276de0: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x276DE0u;
    SET_GPR_U32(ctx, 31, 0x276DE8u);
    ctx->pc = 0x276DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276DE0u;
            // 0x276de4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276DE8u; }
        if (ctx->pc != 0x276DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276DE8u; }
        if (ctx->pc != 0x276DE8u) { return; }
    }
    ctx->pc = 0x276DE8u;
label_276de8:
    // 0x276de8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x276de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276dec: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x276decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276df0: 0xc04c018  jal         func_130060
    ctx->pc = 0x276DF0u;
    SET_GPR_U32(ctx, 31, 0x276DF8u);
    ctx->pc = 0x276DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276DF0u;
            // 0x276df4: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276DF8u; }
        if (ctx->pc != 0x276DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276DF8u; }
        if (ctx->pc != 0x276DF8u) { return; }
    }
    ctx->pc = 0x276DF8u;
label_276df8:
    // 0x276df8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x276df8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x276dfc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x276dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x276e00: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x276e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x276e04: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x276E04u;
    SET_GPR_U32(ctx, 31, 0x276E0Cu);
    ctx->pc = 0x276E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E04u;
            // 0x276e08: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E0Cu; }
        if (ctx->pc != 0x276E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E0Cu; }
        if (ctx->pc != 0x276E0Cu) { return; }
    }
    ctx->pc = 0x276E0Cu;
label_276e0c:
    // 0x276e0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x276e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x276e10: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x276e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276e14: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x276E14u;
    SET_GPR_U32(ctx, 31, 0x276E1Cu);
    ctx->pc = 0x276E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E14u;
            // 0x276e18: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E1Cu; }
        if (ctx->pc != 0x276E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E1Cu; }
        if (ctx->pc != 0x276E1Cu) { return; }
    }
    ctx->pc = 0x276E1Cu;
label_276e1c:
    // 0x276e1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x276e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x276e20: 0xc041be0  jal         func_106F80
    ctx->pc = 0x276E20u;
    SET_GPR_U32(ctx, 31, 0x276E28u);
    ctx->pc = 0x276E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E20u;
            // 0x276e24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E28u; }
        if (ctx->pc != 0x276E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E28u; }
        if (ctx->pc != 0x276E28u) { return; }
    }
    ctx->pc = 0x276E28u;
label_276e28:
    // 0x276e28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x276e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x276e2c: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x276E2Cu;
    SET_GPR_U32(ctx, 31, 0x276E34u);
    ctx->pc = 0x276E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E2Cu;
            // 0x276e30: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E34u; }
        if (ctx->pc != 0x276E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E34u; }
        if (ctx->pc != 0x276E34u) { return; }
    }
    ctx->pc = 0x276E34u;
label_276e34:
    // 0x276e34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x276e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276e38: 0x0  nop
    ctx->pc = 0x276e38u;
    // NOP
    // 0x276e3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x276e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276e40: 0x0  nop
    ctx->pc = 0x276e40u;
    // NOP
    // 0x276e44: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x276E44u;
    {
        const bool branch_taken_0x276e44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x276E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276E44u;
            // 0x276e48: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e44) {
            ctx->pc = 0x276E5Cu;
            goto label_276e5c;
        }
    }
    ctx->pc = 0x276E4Cu;
    // 0x276e4c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x276e4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276e50: 0x0  nop
    ctx->pc = 0x276e50u;
    // NOP
    // 0x276e54: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x276E54u;
    {
        const bool branch_taken_0x276e54 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x276E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276E54u;
            // 0x276e58: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e54) {
            ctx->pc = 0x276E70u;
            goto label_276e70;
        }
    }
    ctx->pc = 0x276E5Cu;
label_276e5c:
    // 0x276e5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x276e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x276e60: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276E60u;
    SET_GPR_U32(ctx, 31, 0x276E68u);
    ctx->pc = 0x276E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E60u;
            // 0x276e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E68u; }
        if (ctx->pc != 0x276E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E68u; }
        if (ctx->pc != 0x276E68u) { return; }
    }
    ctx->pc = 0x276E68u;
label_276e68:
    // 0x276e68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x276E68u;
    {
        const bool branch_taken_0x276e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276E68u;
            // 0x276e6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e68) {
            ctx->pc = 0x276EA8u;
            goto label_276ea8;
        }
    }
    ctx->pc = 0x276E70u;
label_276e70:
    // 0x276e70: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x276e70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x276e74: 0xc041c4a  jal         func_107128
    ctx->pc = 0x276E74u;
    SET_GPR_U32(ctx, 31, 0x276E7Cu);
    ctx->pc = 0x276E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E74u;
            // 0x276e78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E7Cu; }
        if (ctx->pc != 0x276E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E7Cu; }
        if (ctx->pc != 0x276E7Cu) { return; }
    }
    ctx->pc = 0x276E7Cu;
label_276e7c:
    // 0x276e7c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x276e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x276e80: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x276e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276e84: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x276E84u;
    SET_GPR_U32(ctx, 31, 0x276E8Cu);
    ctx->pc = 0x276E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E84u;
            // 0x276e88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E8Cu; }
        if (ctx->pc != 0x276E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E8Cu; }
        if (ctx->pc != 0x276E8Cu) { return; }
    }
    ctx->pc = 0x276E8Cu;
label_276e8c:
    // 0x276e8c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x276e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x276e90: 0xc04c018  jal         func_130060
    ctx->pc = 0x276E90u;
    SET_GPR_U32(ctx, 31, 0x276E98u);
    ctx->pc = 0x276E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E90u;
            // 0x276e94: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E98u; }
        if (ctx->pc != 0x276E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276E98u; }
        if (ctx->pc != 0x276E98u) { return; }
    }
    ctx->pc = 0x276E98u;
label_276e98:
    // 0x276e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e9c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x276E9Cu;
    SET_GPR_U32(ctx, 31, 0x276EA4u);
    ctx->pc = 0x276EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276E9Cu;
            // 0x276ea0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276EA4u; }
        if (ctx->pc != 0x276EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276EA4u; }
        if (ctx->pc != 0x276EA4u) { return; }
    }
    ctx->pc = 0x276EA4u;
label_276ea4:
    // 0x276ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276ea8:
    // 0x276ea8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x276ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276eac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x276eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276eb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x276eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x276EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276EB4u;
            // 0x276eb8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276EBCu;
}
