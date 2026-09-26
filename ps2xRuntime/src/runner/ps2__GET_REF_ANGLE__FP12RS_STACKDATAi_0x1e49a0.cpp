#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_REF_ANGLE__FP12RS_STACKDATAi
// Address: 0x1e49a0 - 0x1e4a4c
void ps2__GET_REF_ANGLE__FP12RS_STACKDATAi_0x1e49a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_REF_ANGLE__FP12RS_STACKDATAi_0x1e49a0");
#endif

    switch (ctx->pc) {
        case 0x1e49a0u: goto label_1e49a0;
        case 0x1e49a4u: goto label_1e49a4;
        case 0x1e49a8u: goto label_1e49a8;
        case 0x1e49acu: goto label_1e49ac;
        case 0x1e49b0u: goto label_1e49b0;
        case 0x1e49b4u: goto label_1e49b4;
        case 0x1e49b8u: goto label_1e49b8;
        case 0x1e49bcu: goto label_1e49bc;
        case 0x1e49c0u: goto label_1e49c0;
        case 0x1e49c4u: goto label_1e49c4;
        case 0x1e49c8u: goto label_1e49c8;
        case 0x1e49ccu: goto label_1e49cc;
        case 0x1e49d0u: goto label_1e49d0;
        case 0x1e49d4u: goto label_1e49d4;
        case 0x1e49d8u: goto label_1e49d8;
        case 0x1e49dcu: goto label_1e49dc;
        case 0x1e49e0u: goto label_1e49e0;
        case 0x1e49e4u: goto label_1e49e4;
        case 0x1e49e8u: goto label_1e49e8;
        case 0x1e49ecu: goto label_1e49ec;
        case 0x1e49f0u: goto label_1e49f0;
        case 0x1e49f4u: goto label_1e49f4;
        case 0x1e49f8u: goto label_1e49f8;
        case 0x1e49fcu: goto label_1e49fc;
        case 0x1e4a00u: goto label_1e4a00;
        case 0x1e4a04u: goto label_1e4a04;
        case 0x1e4a08u: goto label_1e4a08;
        case 0x1e4a0cu: goto label_1e4a0c;
        case 0x1e4a10u: goto label_1e4a10;
        case 0x1e4a14u: goto label_1e4a14;
        case 0x1e4a18u: goto label_1e4a18;
        case 0x1e4a1cu: goto label_1e4a1c;
        case 0x1e4a20u: goto label_1e4a20;
        case 0x1e4a24u: goto label_1e4a24;
        case 0x1e4a28u: goto label_1e4a28;
        case 0x1e4a2cu: goto label_1e4a2c;
        case 0x1e4a30u: goto label_1e4a30;
        case 0x1e4a34u: goto label_1e4a34;
        case 0x1e4a38u: goto label_1e4a38;
        case 0x1e4a3cu: goto label_1e4a3c;
        case 0x1e4a40u: goto label_1e4a40;
        case 0x1e4a44u: goto label_1e4a44;
        case 0x1e4a48u: goto label_1e4a48;
        default: break;
    }

    ctx->pc = 0x1e49a0u;

label_1e49a0:
    // 0x1e49a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e49a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e49a4:
    // 0x1e49a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e49a8:
    // 0x1e49a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e49a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e49ac:
    // 0x1e49ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e49acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e49b0:
    // 0x1e49b0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e49b4:
    if (ctx->pc == 0x1E49B4u) {
        ctx->pc = 0x1E49B4u;
            // 0x1e49b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E49B8u;
        goto label_1e49b8;
    }
    ctx->pc = 0x1E49B0u;
    {
        const bool branch_taken_0x1e49b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E49B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49B0u;
            // 0x1e49b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49b0) {
            ctx->pc = 0x1E49C0u;
            goto label_1e49c0;
        }
    }
    ctx->pc = 0x1E49B8u;
label_1e49b8:
    // 0x1e49b8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e49bc:
    if (ctx->pc == 0x1E49BCu) {
        ctx->pc = 0x1E49BCu;
            // 0x1e49bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E49C0u;
        goto label_1e49c0;
    }
    ctx->pc = 0x1E49B8u;
    {
        const bool branch_taken_0x1e49b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E49BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49B8u;
            // 0x1e49bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e49b8) {
            ctx->pc = 0x1E4A38u;
            goto label_1e4a38;
        }
    }
    ctx->pc = 0x1E49C0u;
label_1e49c0:
    // 0x1e49c0: 0xc0781ac  jal         func_1E06B0
label_1e49c4:
    if (ctx->pc == 0x1E49C4u) {
        ctx->pc = 0x1E49C4u;
            // 0x1e49c4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E49C8u;
        goto label_1e49c8;
    }
    ctx->pc = 0x1E49C0u;
    SET_GPR_U32(ctx, 31, 0x1E49C8u);
    ctx->pc = 0x1E49C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49C0u;
            // 0x1e49c4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49C8u; }
        if (ctx->pc != 0x1E49C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49C8u; }
        if (ctx->pc != 0x1E49C8u) { return; }
    }
    ctx->pc = 0x1E49C8u;
label_1e49c8:
    // 0x1e49c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e49c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e49cc:
    // 0x1e49cc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1e49ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1e49d0:
    // 0x1e49d0: 0xc0781ac  jal         func_1E06B0
label_1e49d4:
    if (ctx->pc == 0x1E49D4u) {
        ctx->pc = 0x1E49D4u;
            // 0x1e49d4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E49D8u;
        goto label_1e49d8;
    }
    ctx->pc = 0x1E49D0u;
    SET_GPR_U32(ctx, 31, 0x1E49D8u);
    ctx->pc = 0x1E49D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49D0u;
            // 0x1e49d4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49D8u; }
        if (ctx->pc != 0x1E49D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49D8u; }
        if (ctx->pc != 0x1E49D8u) { return; }
    }
    ctx->pc = 0x1E49D8u;
label_1e49d8:
    // 0x1e49d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e49d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e49dc:
    // 0x1e49dc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1e49dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1e49e0:
    // 0x1e49e0: 0xc0781ac  jal         func_1E06B0
label_1e49e4:
    if (ctx->pc == 0x1E49E4u) {
        ctx->pc = 0x1E49E4u;
            // 0x1e49e4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E49E8u;
        goto label_1e49e8;
    }
    ctx->pc = 0x1E49E0u;
    SET_GPR_U32(ctx, 31, 0x1E49E8u);
    ctx->pc = 0x1E49E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E49E0u;
            // 0x1e49e4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49E8u; }
        if (ctx->pc != 0x1E49E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49E8u; }
        if (ctx->pc != 0x1E49E8u) { return; }
    }
    ctx->pc = 0x1E49E8u;
label_1e49e8:
    // 0x1e49e8: 0x27b00048  addiu       $s0, $sp, 0x48
    ctx->pc = 0x1e49e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e49ec:
    // 0x1e49ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e49f0:
    // 0x1e49f0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1e49f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1e49f4:
    // 0x1e49f4: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e49f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e49f8:
    // 0x1e49f8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1e49f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1e49fc:
    // 0x1e49fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e49fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4a00:
    // 0x1e4a00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4a04:
    // 0x1e4a04: 0x320f809  jalr        $t9
label_1e4a08:
    if (ctx->pc == 0x1E4A08u) {
        ctx->pc = 0x1E4A08u;
            // 0x1e4a08: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4A0Cu;
        goto label_1e4a0c;
    }
    ctx->pc = 0x1E4A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4A0Cu);
        ctx->pc = 0x1E4A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A04u;
            // 0x1e4a08: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4A0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A0Cu; }
            if (ctx->pc != 0x1E4A0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E4A0Cu;
label_1e4a0c:
    // 0x1e4a0c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e4a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e4a10:
    // 0x1e4a10: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e4a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e4a14:
    // 0x1e4a14: 0xc041c3e  jal         func_1070F8
label_1e4a18:
    if (ctx->pc == 0x1E4A18u) {
        ctx->pc = 0x1E4A18u;
            // 0x1e4a18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A1Cu;
        goto label_1e4a1c;
    }
    ctx->pc = 0x1E4A14u;
    SET_GPR_U32(ctx, 31, 0x1E4A1Cu);
    ctx->pc = 0x1E4A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A14u;
            // 0x1e4a18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A1Cu; }
        if (ctx->pc != 0x1E4A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A1Cu; }
        if (ctx->pc != 0x1E4A1Cu) { return; }
    }
    ctx->pc = 0x1E4A1Cu;
label_1e4a1c:
    // 0x1e4a1c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1e4a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4a20:
    // 0x1e4a20: 0xc047c76  jal         func_11F1D8
label_1e4a24:
    if (ctx->pc == 0x1E4A24u) {
        ctx->pc = 0x1E4A24u;
            // 0x1e4a24: 0xc60d0000  lwc1        $f13, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x1E4A28u;
        goto label_1e4a28;
    }
    ctx->pc = 0x1E4A20u;
    SET_GPR_U32(ctx, 31, 0x1E4A28u);
    ctx->pc = 0x1E4A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A20u;
            // 0x1e4a24: 0xc60d0000  lwc1        $f13, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A28u; }
        if (ctx->pc != 0x1E4A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A28u; }
        if (ctx->pc != 0x1E4A28u) { return; }
    }
    ctx->pc = 0x1E4A28u;
label_1e4a28:
    // 0x1e4a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a2c:
    // 0x1e4a2c: 0xc0781c4  jal         func_1E0710
label_1e4a30:
    if (ctx->pc == 0x1E4A30u) {
        ctx->pc = 0x1E4A30u;
            // 0x1e4a30: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E4A34u;
        goto label_1e4a34;
    }
    ctx->pc = 0x1E4A2Cu;
    SET_GPR_U32(ctx, 31, 0x1E4A34u);
    ctx->pc = 0x1E4A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A2Cu;
            // 0x1e4a30: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A34u; }
        if (ctx->pc != 0x1E4A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4A34u; }
        if (ctx->pc != 0x1E4A34u) { return; }
    }
    ctx->pc = 0x1E4A34u;
label_1e4a34:
    // 0x1e4a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4a38:
    // 0x1e4a38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e4a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4a3c:
    // 0x1e4a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4a40:
    // 0x1e4a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4a44:
    // 0x1e4a44: 0x3e00008  jr          $ra
label_1e4a48:
    if (ctx->pc == 0x1E4A48u) {
        ctx->pc = 0x1E4A48u;
            // 0x1e4a48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E4A4Cu;
        goto label_fallthrough_0x1e4a44;
    }
    ctx->pc = 0x1E4A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4A44u;
            // 0x1e4a48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4a44:
    ctx->pc = 0x1E4A4Cu;
}
