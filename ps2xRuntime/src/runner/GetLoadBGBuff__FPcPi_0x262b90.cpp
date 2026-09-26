#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLoadBGBuff__FPcPi
// Address: 0x262b90 - 0x262ce0
void GetLoadBGBuff__FPcPi_0x262b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLoadBGBuff__FPcPi_0x262b90");
#endif

    switch (ctx->pc) {
        case 0x262bb4u: goto label_262bb4;
        case 0x262bd0u: goto label_262bd0;
        case 0x262c04u: goto label_262c04;
        case 0x262c14u: goto label_262c14;
        case 0x262c60u: goto label_262c60;
        case 0x262c6cu: goto label_262c6c;
        case 0x262c78u: goto label_262c78;
        case 0x262c90u: goto label_262c90;
        case 0x262ca4u: goto label_262ca4;
        default: break;
    }

    ctx->pc = 0x262b90u;

    // 0x262b90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x262b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x262b94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x262b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x262b98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x262b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x262b9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262ba0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x262ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ba4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x262ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262bac: 0xc098ac4  jal         func_262B10
    ctx->pc = 0x262BACu;
    SET_GPR_U32(ctx, 31, 0x262BB4u);
    ctx->pc = 0x262BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262BACu;
            // 0x262bb0: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B10u;
    if (runtime->hasFunction(0x262B10u)) {
        auto targetFn = runtime->lookupFunction(0x262B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262BB4u; }
        if (ctx->pc != 0x262BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadedBGFile__FPcPi_0x262b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262BB4u; }
        if (ctx->pc != 0x262BB4u) { return; }
    }
    ctx->pc = 0x262BB4u;
label_262bb4:
    // 0x262bb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bb8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x262BB8u;
    {
        const bool branch_taken_0x262bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262BB8u;
            // 0x262bbc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bb8) {
            ctx->pc = 0x262BE4u;
            goto label_262be4;
        }
    }
    ctx->pc = 0x262BC0u;
    // 0x262bc0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x262bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x262bc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x262bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bc8: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x262BC8u;
    SET_GPR_U32(ctx, 31, 0x262BD0u);
    ctx->pc = 0x262BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262BC8u;
            // 0x262bcc: 0x2484c5e0  addiu       $a0, $a0, -0x3A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262BD0u; }
        if (ctx->pc != 0x262BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262BD0u; }
        if (ctx->pc != 0x262BD0u) { return; }
    }
    ctx->pc = 0x262BD0u;
label_262bd0:
    // 0x262bd0: 0x1220003d  beqz        $s1, . + 4 + (0x3D << 2)
    ctx->pc = 0x262BD0u;
    {
        const bool branch_taken_0x262bd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262BD0u;
            // 0x262bd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bd0) {
            ctx->pc = 0x262CC8u;
            goto label_262cc8;
        }
    }
    ctx->pc = 0x262BD8u;
    // 0x262bd8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x262bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x262bdc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x262BDCu;
    {
        const bool branch_taken_0x262bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262BDCu;
            // 0x262be0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bdc) {
            ctx->pc = 0x262CC4u;
            goto label_262cc4;
        }
    }
    ctx->pc = 0x262BE4u;
label_262be4:
    // 0x262be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262be8: 0x8c23e624  lw          $v1, -0x19DC($at)
    ctx->pc = 0x262be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960676)));
    // 0x262bec: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x262BECu;
    {
        const bool branch_taken_0x262bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x262bec) {
            ctx->pc = 0x262C38u;
            goto label_262c38;
        }
    }
    ctx->pc = 0x262BF4u;
    // 0x262bf4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x262bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x262bf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x262bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bfc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x262BFCu;
    SET_GPR_U32(ctx, 31, 0x262C04u);
    ctx->pc = 0x262C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262BFCu;
            // 0x262c00: 0x2484c600  addiu       $a0, $a0, -0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C04u; }
        if (ctx->pc != 0x262C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C04u; }
        if (ctx->pc != 0x262C04u) { return; }
    }
    ctx->pc = 0x262C04u;
label_262c04:
    // 0x262c04: 0x8f848ac0  lw          $a0, -0x7540($gp)
    ctx->pc = 0x262c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x262c08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x262c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c0c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x262C0Cu;
    SET_GPR_U32(ctx, 31, 0x262C14u);
    ctx->pc = 0x262C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262C0Cu;
            // 0x262c10: 0x27a6004c  addiu       $a2, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C14u; }
        if (ctx->pc != 0x262C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C14u; }
        if (ctx->pc != 0x262C14u) { return; }
    }
    ctx->pc = 0x262C14u;
label_262c14:
    // 0x262c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x262c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c18: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x262C18u;
    {
        const bool branch_taken_0x262c18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262C18u;
            // 0x262c1c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c18) {
            ctx->pc = 0x262C34u;
            goto label_262c34;
        }
    }
    ctx->pc = 0x262C20u;
    // 0x262c20: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x262C20u;
    {
        const bool branch_taken_0x262c20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x262c20) {
            ctx->pc = 0x262C38u;
            goto label_262c38;
        }
    }
    ctx->pc = 0x262C28u;
    // 0x262c28: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x262c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x262c2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x262C2Cu;
    {
        const bool branch_taken_0x262c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262C2Cu;
            // 0x262c30: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c2c) {
            ctx->pc = 0x262C38u;
            goto label_262c38;
        }
    }
    ctx->pc = 0x262C34u;
label_262c34:
    // 0x262c34: 0xac20e624  sw          $zero, -0x19DC($at)
    ctx->pc = 0x262c34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960676), GPR_U32(ctx, 0));
label_262c38:
    // 0x262c38: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262c3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x262c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262c40: 0x8c22e624  lw          $v0, -0x19DC($at)
    ctx->pc = 0x262c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960676)));
    // 0x262c44: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x262C44u;
    {
        const bool branch_taken_0x262c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x262C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262C44u;
            // 0x262c48: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c44) {
            ctx->pc = 0x262CC4u;
            goto label_262cc4;
        }
    }
    ctx->pc = 0x262C4Cu;
    // 0x262c4c: 0x8c22e62c  lw          $v0, -0x19D4($at)
    ctx->pc = 0x262c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960684)));
    // 0x262c50: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x262C50u;
    {
        const bool branch_taken_0x262c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x262C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262C50u;
            // 0x262c54: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c50) {
            ctx->pc = 0x262C80u;
            goto label_262c80;
        }
    }
    ctx->pc = 0x262C58u;
    // 0x262c58: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x262C58u;
    SET_GPR_U32(ctx, 31, 0x262C60u);
    ctx->pc = 0x262C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262C58u;
            // 0x262c5c: 0x2484c620  addiu       $a0, $a0, -0x39E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C60u; }
        if (ctx->pc != 0x262C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C60u; }
        if (ctx->pc != 0x262C60u) { return; }
    }
    ctx->pc = 0x262C60u;
label_262c60:
    // 0x262c60: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x262c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x262c64: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x262C64u;
    SET_GPR_U32(ctx, 31, 0x262C6Cu);
    ctx->pc = 0x262C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262C64u;
            // 0x262c68: 0x2484c670  addiu       $a0, $a0, -0x3990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C6Cu; }
        if (ctx->pc != 0x262C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C6Cu; }
        if (ctx->pc != 0x262C6Cu) { return; }
    }
    ctx->pc = 0x262C6Cu;
label_262c6c:
    // 0x262c6c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x262c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x262c70: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x262C70u;
    SET_GPR_U32(ctx, 31, 0x262C78u);
    ctx->pc = 0x262C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262C70u;
            // 0x262c74: 0x2484c620  addiu       $a0, $a0, -0x39E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C78u; }
        if (ctx->pc != 0x262C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C78u; }
        if (ctx->pc != 0x262C78u) { return; }
    }
    ctx->pc = 0x262C78u;
label_262c78:
    // 0x262c78: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x262C78u;
    {
        const bool branch_taken_0x262c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262c78) {
            ctx->pc = 0x262C78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262c78;
        }
    }
    ctx->pc = 0x262C80u;
label_262c80:
    // 0x262c80: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x262c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x262c84: 0x2484c6b0  addiu       $a0, $a0, -0x3950
    ctx->pc = 0x262c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952624));
    // 0x262c88: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x262C88u;
    SET_GPR_U32(ctx, 31, 0x262C90u);
    ctx->pc = 0x262C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262C88u;
            // 0x262c8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C90u; }
        if (ctx->pc != 0x262C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C90u; }
        if (ctx->pc != 0x262C90u) { return; }
    }
    ctx->pc = 0x262C90u;
label_262c90:
    // 0x262c90: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x262c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
    // 0x262c94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x262c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c98: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x262c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x262c9c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x262C9Cu;
    SET_GPR_U32(ctx, 31, 0x262CA4u);
    ctx->pc = 0x262CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262C9Cu;
            // 0x262ca0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262CA4u; }
        if (ctx->pc != 0x262CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262CA4u; }
        if (ctx->pc != 0x262CA4u) { return; }
    }
    ctx->pc = 0x262CA4u;
label_262ca4:
    // 0x262ca4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262CA4u;
    {
        const bool branch_taken_0x262ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262CA4u;
            // 0x262ca8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ca4) {
            ctx->pc = 0x262CB4u;
            goto label_262cb4;
        }
    }
    ctx->pc = 0x262CACu;
    // 0x262cac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x262CACu;
    {
        const bool branch_taken_0x262cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262cac) {
            ctx->pc = 0x262CC4u;
            goto label_262cc4;
        }
    }
    ctx->pc = 0x262CB4u;
label_262cb4:
    // 0x262cb4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x262CB4u;
    {
        const bool branch_taken_0x262cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x262CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262CB4u;
            // 0x262cb8: 0x8f908ac0  lw          $s0, -0x7540($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262cb4) {
            ctx->pc = 0x262CC4u;
            goto label_262cc4;
        }
    }
    ctx->pc = 0x262CBCu;
    // 0x262cbc: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x262cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x262cc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x262cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_262cc4:
    // 0x262cc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x262cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_262cc8:
    // 0x262cc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x262cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262ccc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x262cccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262cd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x262CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262CD8u;
            // 0x262cdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262CE0u;
}
