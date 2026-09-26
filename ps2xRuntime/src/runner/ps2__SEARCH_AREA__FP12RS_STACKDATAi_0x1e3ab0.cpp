#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SEARCH_AREA__FP12RS_STACKDATAi
// Address: 0x1e3ab0 - 0x1e3bec
void ps2__SEARCH_AREA__FP12RS_STACKDATAi_0x1e3ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SEARCH_AREA__FP12RS_STACKDATAi_0x1e3ab0");
#endif

    switch (ctx->pc) {
        case 0x1e3ab0u: goto label_1e3ab0;
        case 0x1e3ab4u: goto label_1e3ab4;
        case 0x1e3ab8u: goto label_1e3ab8;
        case 0x1e3abcu: goto label_1e3abc;
        case 0x1e3ac0u: goto label_1e3ac0;
        case 0x1e3ac4u: goto label_1e3ac4;
        case 0x1e3ac8u: goto label_1e3ac8;
        case 0x1e3accu: goto label_1e3acc;
        case 0x1e3ad0u: goto label_1e3ad0;
        case 0x1e3ad4u: goto label_1e3ad4;
        case 0x1e3ad8u: goto label_1e3ad8;
        case 0x1e3adcu: goto label_1e3adc;
        case 0x1e3ae0u: goto label_1e3ae0;
        case 0x1e3ae4u: goto label_1e3ae4;
        case 0x1e3ae8u: goto label_1e3ae8;
        case 0x1e3aecu: goto label_1e3aec;
        case 0x1e3af0u: goto label_1e3af0;
        case 0x1e3af4u: goto label_1e3af4;
        case 0x1e3af8u: goto label_1e3af8;
        case 0x1e3afcu: goto label_1e3afc;
        case 0x1e3b00u: goto label_1e3b00;
        case 0x1e3b04u: goto label_1e3b04;
        case 0x1e3b08u: goto label_1e3b08;
        case 0x1e3b0cu: goto label_1e3b0c;
        case 0x1e3b10u: goto label_1e3b10;
        case 0x1e3b14u: goto label_1e3b14;
        case 0x1e3b18u: goto label_1e3b18;
        case 0x1e3b1cu: goto label_1e3b1c;
        case 0x1e3b20u: goto label_1e3b20;
        case 0x1e3b24u: goto label_1e3b24;
        case 0x1e3b28u: goto label_1e3b28;
        case 0x1e3b2cu: goto label_1e3b2c;
        case 0x1e3b30u: goto label_1e3b30;
        case 0x1e3b34u: goto label_1e3b34;
        case 0x1e3b38u: goto label_1e3b38;
        case 0x1e3b3cu: goto label_1e3b3c;
        case 0x1e3b40u: goto label_1e3b40;
        case 0x1e3b44u: goto label_1e3b44;
        case 0x1e3b48u: goto label_1e3b48;
        case 0x1e3b4cu: goto label_1e3b4c;
        case 0x1e3b50u: goto label_1e3b50;
        case 0x1e3b54u: goto label_1e3b54;
        case 0x1e3b58u: goto label_1e3b58;
        case 0x1e3b5cu: goto label_1e3b5c;
        case 0x1e3b60u: goto label_1e3b60;
        case 0x1e3b64u: goto label_1e3b64;
        case 0x1e3b68u: goto label_1e3b68;
        case 0x1e3b6cu: goto label_1e3b6c;
        case 0x1e3b70u: goto label_1e3b70;
        case 0x1e3b74u: goto label_1e3b74;
        case 0x1e3b78u: goto label_1e3b78;
        case 0x1e3b7cu: goto label_1e3b7c;
        case 0x1e3b80u: goto label_1e3b80;
        case 0x1e3b84u: goto label_1e3b84;
        case 0x1e3b88u: goto label_1e3b88;
        case 0x1e3b8cu: goto label_1e3b8c;
        case 0x1e3b90u: goto label_1e3b90;
        case 0x1e3b94u: goto label_1e3b94;
        case 0x1e3b98u: goto label_1e3b98;
        case 0x1e3b9cu: goto label_1e3b9c;
        case 0x1e3ba0u: goto label_1e3ba0;
        case 0x1e3ba4u: goto label_1e3ba4;
        case 0x1e3ba8u: goto label_1e3ba8;
        case 0x1e3bacu: goto label_1e3bac;
        case 0x1e3bb0u: goto label_1e3bb0;
        case 0x1e3bb4u: goto label_1e3bb4;
        case 0x1e3bb8u: goto label_1e3bb8;
        case 0x1e3bbcu: goto label_1e3bbc;
        case 0x1e3bc0u: goto label_1e3bc0;
        case 0x1e3bc4u: goto label_1e3bc4;
        case 0x1e3bc8u: goto label_1e3bc8;
        case 0x1e3bccu: goto label_1e3bcc;
        case 0x1e3bd0u: goto label_1e3bd0;
        case 0x1e3bd4u: goto label_1e3bd4;
        case 0x1e3bd8u: goto label_1e3bd8;
        case 0x1e3bdcu: goto label_1e3bdc;
        case 0x1e3be0u: goto label_1e3be0;
        case 0x1e3be4u: goto label_1e3be4;
        case 0x1e3be8u: goto label_1e3be8;
        default: break;
    }

    ctx->pc = 0x1e3ab0u;

label_1e3ab0:
    // 0x1e3ab0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e3ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e3ab4:
    // 0x1e3ab4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e3ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e3ab8:
    // 0x1e3ab8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e3ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e3abc:
    // 0x1e3abc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e3abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e3ac0:
    // 0x1e3ac0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e3ac4:
    // 0x1e3ac4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e3ac4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e3ac8:
    // 0x1e3ac8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e3acc:
    if (ctx->pc == 0x1E3ACCu) {
        ctx->pc = 0x1E3ACCu;
            // 0x1e3acc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1E3AD0u;
        goto label_1e3ad0;
    }
    ctx->pc = 0x1E3AC8u;
    {
        const bool branch_taken_0x1e3ac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AC8u;
            // 0x1e3acc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ac8) {
            ctx->pc = 0x1E3AD8u;
            goto label_1e3ad8;
        }
    }
    ctx->pc = 0x1E3AD0u;
label_1e3ad0:
    // 0x1e3ad0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1e3ad4:
    if (ctx->pc == 0x1E3AD4u) {
        ctx->pc = 0x1E3AD4u;
            // 0x1e3ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3AD8u;
        goto label_1e3ad8;
    }
    ctx->pc = 0x1E3AD0u;
    {
        const bool branch_taken_0x1e3ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AD0u;
            // 0x1e3ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ad0) {
            ctx->pc = 0x1E3BD0u;
            goto label_1e3bd0;
        }
    }
    ctx->pc = 0x1E3AD8u;
label_1e3ad8:
    // 0x1e3ad8: 0xc0781ac  jal         func_1E06B0
label_1e3adc:
    if (ctx->pc == 0x1E3ADCu) {
        ctx->pc = 0x1E3ADCu;
            // 0x1e3adc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E3AE0u;
        goto label_1e3ae0;
    }
    ctx->pc = 0x1E3AD8u;
    SET_GPR_U32(ctx, 31, 0x1E3AE0u);
    ctx->pc = 0x1E3ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AD8u;
            // 0x1e3adc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AE0u; }
        if (ctx->pc != 0x1E3AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AE0u; }
        if (ctx->pc != 0x1E3AE0u) { return; }
    }
    ctx->pc = 0x1E3AE0u;
label_1e3ae0:
    // 0x1e3ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3ae4:
    // 0x1e3ae4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e3ae4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e3ae8:
    // 0x1e3ae8: 0xc0781ac  jal         func_1E06B0
label_1e3aec:
    if (ctx->pc == 0x1E3AECu) {
        ctx->pc = 0x1E3AECu;
            // 0x1e3aec: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E3AF0u;
        goto label_1e3af0;
    }
    ctx->pc = 0x1E3AE8u;
    SET_GPR_U32(ctx, 31, 0x1E3AF0u);
    ctx->pc = 0x1E3AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AE8u;
            // 0x1e3aec: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AF0u; }
        if (ctx->pc != 0x1E3AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AF0u; }
        if (ctx->pc != 0x1E3AF0u) { return; }
    }
    ctx->pc = 0x1E3AF0u;
label_1e3af0:
    // 0x1e3af0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1e3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_1e3af4:
    // 0x1e3af4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1e3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e3af8:
    // 0x1e3af8: 0x2442d320  addiu       $v0, $v0, -0x2CE0
    ctx->pc = 0x1e3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955808));
label_1e3afc:
    // 0x1e3afc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e3afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e3b00:
    // 0x1e3b00: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1e3b00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3b04:
    // 0x1e3b04: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1e3b04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1e3b08:
    // 0x1e3b08: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e3b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e3b0c:
    // 0x1e3b0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3b10:
    // 0x1e3b10: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e3b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e3b14:
    // 0x1e3b14: 0x320f809  jalr        $t9
label_1e3b18:
    if (ctx->pc == 0x1E3B18u) {
        ctx->pc = 0x1E3B18u;
            // 0x1e3b18: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E3B1Cu;
        goto label_1e3b1c;
    }
    ctx->pc = 0x1E3B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3B1Cu);
        ctx->pc = 0x1E3B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B14u;
            // 0x1e3b18: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E3B1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B1Cu; }
            if (ctx->pc != 0x1E3B1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E3B1Cu;
label_1e3b1c:
    // 0x1e3b1c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e3b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e3b20:
    // 0x1e3b20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3b24:
    // 0x1e3b24: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1e3b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1e3b28:
    // 0x1e3b28: 0x320f809  jalr        $t9
label_1e3b2c:
    if (ctx->pc == 0x1E3B2Cu) {
        ctx->pc = 0x1E3B2Cu;
            // 0x1e3b2c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1E3B30u;
        goto label_1e3b30;
    }
    ctx->pc = 0x1E3B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3B30u);
        ctx->pc = 0x1E3B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B28u;
            // 0x1e3b2c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E3B30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B30u; }
            if (ctx->pc != 0x1E3B30u) { return; }
        }
        }
    }
    ctx->pc = 0x1E3B30u;
label_1e3b30:
    // 0x1e3b30: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x1e3b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1e3b34:
    // 0x1e3b34: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e3b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3b38:
    // 0x1e3b38: 0xc04c374  jal         func_130DD0
label_1e3b3c:
    if (ctx->pc == 0x1E3B3Cu) {
        ctx->pc = 0x1E3B3Cu;
            // 0x1e3b3c: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x1E3B40u;
        goto label_1e3b40;
    }
    ctx->pc = 0x1E3B38u;
    SET_GPR_U32(ctx, 31, 0x1E3B40u);
    ctx->pc = 0x1E3B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B38u;
            // 0x1e3b3c: 0x46150300  add.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B40u; }
        if (ctx->pc != 0x1E3B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B40u; }
        if (ctx->pc != 0x1E3B40u) { return; }
    }
    ctx->pc = 0x1E3B40u;
label_1e3b40:
    // 0x1e3b40: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1e3b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1e3b44:
    // 0x1e3b44: 0xc041c7a  jal         func_1071E8
label_1e3b48:
    if (ctx->pc == 0x1E3B48u) {
        ctx->pc = 0x1E3B48u;
            // 0x1e3b48: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1E3B4Cu;
        goto label_1e3b4c;
    }
    ctx->pc = 0x1E3B44u;
    SET_GPR_U32(ctx, 31, 0x1E3B4Cu);
    ctx->pc = 0x1E3B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B44u;
            // 0x1e3b48: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B4Cu; }
        if (ctx->pc != 0x1E3B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B4Cu; }
        if (ctx->pc != 0x1E3B4Cu) { return; }
    }
    ctx->pc = 0x1E3B4Cu;
label_1e3b4c:
    // 0x1e3b4c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1e3b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3b50:
    // 0x1e3b50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e3b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e3b54:
    // 0x1e3b54: 0xc041cf6  jal         func_1073D8
label_1e3b58:
    if (ctx->pc == 0x1E3B58u) {
        ctx->pc = 0x1E3B58u;
            // 0x1e3b58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B5Cu;
        goto label_1e3b5c;
    }
    ctx->pc = 0x1E3B54u;
    SET_GPR_U32(ctx, 31, 0x1E3B5Cu);
    ctx->pc = 0x1E3B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B54u;
            // 0x1e3b58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B5Cu; }
        if (ctx->pc != 0x1E3B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B5Cu; }
        if (ctx->pc != 0x1E3B5Cu) { return; }
    }
    ctx->pc = 0x1E3B5Cu;
label_1e3b5c:
    // 0x1e3b5c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e3b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e3b60:
    // 0x1e3b60: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e3b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e3b64:
    // 0x1e3b64: 0xc041bb0  jal         func_106EC0
label_1e3b68:
    if (ctx->pc == 0x1E3B68u) {
        ctx->pc = 0x1E3B68u;
            // 0x1e3b68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B6Cu;
        goto label_1e3b6c;
    }
    ctx->pc = 0x1E3B64u;
    SET_GPR_U32(ctx, 31, 0x1E3B6Cu);
    ctx->pc = 0x1E3B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B64u;
            // 0x1e3b68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B6Cu; }
        if (ctx->pc != 0x1E3B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B6Cu; }
        if (ctx->pc != 0x1E3B6Cu) { return; }
    }
    ctx->pc = 0x1E3B6Cu;
label_1e3b6c:
    // 0x1e3b6c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e3b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e3b70:
    // 0x1e3b70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e3b70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e3b74:
    // 0x1e3b74: 0xc041c4a  jal         func_107128
label_1e3b78:
    if (ctx->pc == 0x1E3B78u) {
        ctx->pc = 0x1E3B78u;
            // 0x1e3b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B7Cu;
        goto label_1e3b7c;
    }
    ctx->pc = 0x1E3B74u;
    SET_GPR_U32(ctx, 31, 0x1E3B7Cu);
    ctx->pc = 0x1E3B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B74u;
            // 0x1e3b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B7Cu; }
        if (ctx->pc != 0x1E3B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B7Cu; }
        if (ctx->pc != 0x1E3B7Cu) { return; }
    }
    ctx->pc = 0x1E3B7Cu;
label_1e3b7c:
    // 0x1e3b7c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e3b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e3b80:
    // 0x1e3b80: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1e3b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e3b84:
    // 0x1e3b84: 0xc041c38  jal         func_1070E0
label_1e3b88:
    if (ctx->pc == 0x1E3B88u) {
        ctx->pc = 0x1E3B88u;
            // 0x1e3b88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B8Cu;
        goto label_1e3b8c;
    }
    ctx->pc = 0x1E3B84u;
    SET_GPR_U32(ctx, 31, 0x1E3B8Cu);
    ctx->pc = 0x1E3B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B84u;
            // 0x1e3b88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B8Cu; }
        if (ctx->pc != 0x1E3B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B8Cu; }
        if (ctx->pc != 0x1E3B8Cu) { return; }
    }
    ctx->pc = 0x1E3B8Cu;
label_1e3b8c:
    // 0x1e3b8c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1e3b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3b90:
    // 0x1e3b90: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1e3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1e3b94:
    // 0x1e3b94: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1e3b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3b98:
    // 0x1e3b98: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e3b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
label_1e3b9c:
    // 0x1e3b9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e3b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e3ba0:
    // 0x1e3ba0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e3ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e3ba4:
    // 0x1e3ba4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e3ba4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e3ba8:
    // 0x1e3ba8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1e3ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e3bac:
    // 0x1e3bac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e3bacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e3bb0:
    // 0x1e3bb0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e3bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1e3bb4:
    // 0x1e3bb4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1e3bb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1e3bb8:
    // 0x1e3bb8: 0xc07763c  jal         func_1DD8F0
label_1e3bbc:
    if (ctx->pc == 0x1E3BBCu) {
        ctx->pc = 0x1E3BBCu;
            // 0x1e3bbc: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->pc = 0x1E3BC0u;
        goto label_1e3bc0;
    }
    ctx->pc = 0x1E3BB8u;
    SET_GPR_U32(ctx, 31, 0x1E3BC0u);
    ctx->pc = 0x1E3BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3BB8u;
            // 0x1e3bbc: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8F0u;
    if (runtime->hasFunction(0x1DD8F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3BC0u; }
        if (ctx->pc != 0x1E3BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchArea__FP6CScenePfPff_0x1dd8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3BC0u; }
        if (ctx->pc != 0x1E3BC0u) { return; }
    }
    ctx->pc = 0x1E3BC0u;
label_1e3bc0:
    // 0x1e3bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3bc4:
    // 0x1e3bc4: 0xc0781c4  jal         func_1E0710
label_1e3bc8:
    if (ctx->pc == 0x1E3BC8u) {
        ctx->pc = 0x1E3BC8u;
            // 0x1e3bc8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E3BCCu;
        goto label_1e3bcc;
    }
    ctx->pc = 0x1E3BC4u;
    SET_GPR_U32(ctx, 31, 0x1E3BCCu);
    ctx->pc = 0x1E3BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3BC4u;
            // 0x1e3bc8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3BCCu; }
        if (ctx->pc != 0x1E3BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3BCCu; }
        if (ctx->pc != 0x1E3BCCu) { return; }
    }
    ctx->pc = 0x1E3BCCu;
label_1e3bcc:
    // 0x1e3bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3bd0:
    // 0x1e3bd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e3bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3bd4:
    // 0x1e3bd4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e3bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e3bd8:
    // 0x1e3bd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e3bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3bdc:
    // 0x1e3bdc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e3bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e3be0:
    // 0x1e3be0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3be4:
    // 0x1e3be4: 0x3e00008  jr          $ra
label_1e3be8:
    if (ctx->pc == 0x1E3BE8u) {
        ctx->pc = 0x1E3BE8u;
            // 0x1e3be8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1E3BECu;
        goto label_fallthrough_0x1e3be4;
    }
    ctx->pc = 0x1E3BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3BE4u;
            // 0x1e3be8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e3be4:
    ctx->pc = 0x1E3BECu;
}
