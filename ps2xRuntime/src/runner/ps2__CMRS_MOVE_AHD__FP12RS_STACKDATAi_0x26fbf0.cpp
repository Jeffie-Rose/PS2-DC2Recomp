#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_MOVE_AHD__FP12RS_STACKDATAi
// Address: 0x26fbf0 - 0x26fd6c
void ps2__CMRS_MOVE_AHD__FP12RS_STACKDATAi_0x26fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_MOVE_AHD__FP12RS_STACKDATAi_0x26fbf0");
#endif

    switch (ctx->pc) {
        case 0x26fc2cu: goto label_26fc2c;
        case 0x26fc50u: goto label_26fc50;
        case 0x26fcb8u: goto label_26fcb8;
        case 0x26fcc8u: goto label_26fcc8;
        case 0x26fcd8u: goto label_26fcd8;
        case 0x26fce4u: goto label_26fce4;
        case 0x26fcf4u: goto label_26fcf4;
        case 0x26fd04u: goto label_26fd04;
        case 0x26fd14u: goto label_26fd14;
        case 0x26fd20u: goto label_26fd20;
        case 0x26fd4cu: goto label_26fd4c;
        default: break;
    }

    ctx->pc = 0x26fbf0u;

    // 0x26fbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26fbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26fbf4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26fbf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26fbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26fbfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26fbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26fc00: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x26fc00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26fc04: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x26fc04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26fc08: 0x10a20038  beq         $a1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x26FC08u;
    {
        const bool branch_taken_0x26fc08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26FC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC08u;
            // 0x26fc0c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc08) {
            ctx->pc = 0x26FCECu;
            goto label_26fcec;
        }
    }
    ctx->pc = 0x26FC10u;
    // 0x26fc10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fc14: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FC14u;
    {
        const bool branch_taken_0x26fc14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x26fc14) {
            ctx->pc = 0x26FC24u;
            goto label_26fc24;
        }
    }
    ctx->pc = 0x26FC1Cu;
    // 0x26fc1c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x26FC1Cu;
    {
        const bool branch_taken_0x26fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC1Cu;
            // 0x26fc20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc1c) {
            ctx->pc = 0x26FD28u;
            goto label_26fd28;
        }
    }
    ctx->pc = 0x26FC24u;
label_26fc24:
    // 0x26fc24: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26FC24u;
    SET_GPR_U32(ctx, 31, 0x26FC2Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FC2Cu; }
        if (ctx->pc != 0x26FC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FC2Cu; }
        if (ctx->pc != 0x26FC2Cu) { return; }
    }
    ctx->pc = 0x26FC2Cu;
label_26fc2c:
    // 0x26fc2c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26fc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26fc30: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26fc30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x26fc34: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FC34u;
    {
        const bool branch_taken_0x26fc34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC34u;
            // 0x26fc38: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc34) {
            ctx->pc = 0x26FC44u;
            goto label_26fc44;
        }
    }
    ctx->pc = 0x26FC3Cu;
    // 0x26fc3c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26FC3Cu;
    {
        const bool branch_taken_0x26fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC3Cu;
            // 0x26fc40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc3c) {
            ctx->pc = 0x26FCA0u;
            goto label_26fca0;
        }
    }
    ctx->pc = 0x26FC44u;
label_26fc44:
    // 0x26fc44: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26fc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x26fc48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26FC48u;
    {
        const bool branch_taken_0x26fc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC48u;
            // 0x26fc4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc48) {
            ctx->pc = 0x26FC78u;
            goto label_26fc78;
        }
    }
    ctx->pc = 0x26FC50u;
label_26fc50:
    // 0x26fc50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26fc54: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26FC54u;
    {
        const bool branch_taken_0x26fc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26fc54) {
            ctx->pc = 0x26FC84u;
            goto label_26fc84;
        }
    }
    ctx->pc = 0x26FC5Cu;
    // 0x26fc5c: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26fc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26fc60: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FC60u;
    {
        const bool branch_taken_0x26fc60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc60) {
            ctx->pc = 0x26FC70u;
            goto label_26fc70;
        }
    }
    ctx->pc = 0x26FC68u;
    // 0x26fc68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FC68u;
    {
        const bool branch_taken_0x26fc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC68u;
            // 0x26fc6c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc68) {
            ctx->pc = 0x26FC78u;
            goto label_26fc78;
        }
    }
    ctx->pc = 0x26FC70u;
label_26fc70:
    // 0x26fc70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26FC70u;
    {
        const bool branch_taken_0x26fc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC70u;
            // 0x26fc74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc70) {
            ctx->pc = 0x26FCA0u;
            goto label_26fca0;
        }
    }
    ctx->pc = 0x26FC78u;
label_26fc78:
    // 0x26fc78: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26fc78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26fc7c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x26FC7Cu;
    {
        const bool branch_taken_0x26fc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26fc7c) {
            ctx->pc = 0x26FC50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26fc50;
        }
    }
    ctx->pc = 0x26FC84u;
label_26fc84:
    // 0x26fc84: 0x0  nop
    ctx->pc = 0x26fc84u;
    // NOP
    // 0x26fc88: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FC88u;
    {
        const bool branch_taken_0x26fc88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FC88u;
            // 0x26fc8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fc88) {
            ctx->pc = 0x26FC98u;
            goto label_26fc98;
        }
    }
    ctx->pc = 0x26FC90u;
    // 0x26fc90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FC90u;
    {
        const bool branch_taken_0x26fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc90) {
            ctx->pc = 0x26FCA0u;
            goto label_26fca0;
        }
    }
    ctx->pc = 0x26FC98u;
label_26fc98:
    // 0x26fc98: 0x8cd00004  lw          $s0, 0x4($a2)
    ctx->pc = 0x26fc98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26fc9c: 0x0  nop
    ctx->pc = 0x26fc9cu;
    // NOP
label_26fca0:
    // 0x26fca0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FCA0u;
    {
        const bool branch_taken_0x26fca0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCA0u;
            // 0x26fca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fca0) {
            ctx->pc = 0x26FCB0u;
            goto label_26fcb0;
        }
    }
    ctx->pc = 0x26FCA8u;
    // 0x26fca8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x26FCA8u;
    {
        const bool branch_taken_0x26fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCA8u;
            // 0x26fcac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fca8) {
            ctx->pc = 0x26FD50u;
            goto label_26fd50;
        }
    }
    ctx->pc = 0x26FCB0u;
label_26fcb0:
    // 0x26fcb0: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x26FCB0u;
    SET_GPR_U32(ctx, 31, 0x26FCB8u);
    ctx->pc = 0x26FCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCB0u;
            // 0x26fcb4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCB8u; }
        if (ctx->pc != 0x26FCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCB8u; }
        if (ctx->pc != 0x26FCB8u) { return; }
    }
    ctx->pc = 0x26FCB8u;
label_26fcb8:
    // 0x26fcb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fcbc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26fcbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26fcc0: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x26FCC0u;
    SET_GPR_U32(ctx, 31, 0x26FCC8u);
    ctx->pc = 0x26FCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCC0u;
            // 0x26fcc4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCC8u; }
        if (ctx->pc != 0x26FCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCC8u; }
        if (ctx->pc != 0x26FCC8u) { return; }
    }
    ctx->pc = 0x26FCC8u;
label_26fcc8:
    // 0x26fcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fccc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26fcccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x26fcd0: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x26FCD0u;
    SET_GPR_U32(ctx, 31, 0x26FCD8u);
    ctx->pc = 0x26FCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCD0u;
            // 0x26fcd4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCD8u; }
        if (ctx->pc != 0x26FCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCD8u; }
        if (ctx->pc != 0x26FCD8u) { return; }
    }
    ctx->pc = 0x26FCD8u;
label_26fcd8:
    // 0x26fcd8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x26fcd8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x26fcdc: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x26FCDCu;
    SET_GPR_U32(ctx, 31, 0x26FCE4u);
    ctx->pc = 0x26FCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCDCu;
            // 0x26fce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCE4u; }
        if (ctx->pc != 0x26FCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCE4u; }
        if (ctx->pc != 0x26FCE4u) { return; }
    }
    ctx->pc = 0x26FCE4u;
label_26fce4:
    // 0x26fce4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26FCE4u;
    {
        const bool branch_taken_0x26fce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fce4) {
            ctx->pc = 0x26FD30u;
            goto label_26fd30;
        }
    }
    ctx->pc = 0x26FCECu;
label_26fcec:
    // 0x26fcec: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26FCECu;
    SET_GPR_U32(ctx, 31, 0x26FCF4u);
    ctx->pc = 0x26FCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCECu;
            // 0x26fcf0: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCF4u; }
        if (ctx->pc != 0x26FCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FCF4u; }
        if (ctx->pc != 0x26FCF4u) { return; }
    }
    ctx->pc = 0x26FCF4u;
label_26fcf4:
    // 0x26fcf4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x26fcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fcf8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26fcf8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26fcfc: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26FCFCu;
    SET_GPR_U32(ctx, 31, 0x26FD04u);
    ctx->pc = 0x26FD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FCFCu;
            // 0x26fd00: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD04u; }
        if (ctx->pc != 0x26FD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD04u; }
        if (ctx->pc != 0x26FD04u) { return; }
    }
    ctx->pc = 0x26FD04u;
label_26fd04:
    // 0x26fd04: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x26fd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd08: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26fd08u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x26fd0c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26FD0Cu;
    SET_GPR_U32(ctx, 31, 0x26FD14u);
    ctx->pc = 0x26FD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD0Cu;
            // 0x26fd10: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD14u; }
        if (ctx->pc != 0x26FD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD14u; }
        if (ctx->pc != 0x26FD14u) { return; }
    }
    ctx->pc = 0x26FD14u;
label_26fd14:
    // 0x26fd14: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x26fd14u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x26fd18: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26FD18u;
    SET_GPR_U32(ctx, 31, 0x26FD20u);
    ctx->pc = 0x26FD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD18u;
            // 0x26fd1c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD20u; }
        if (ctx->pc != 0x26FD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD20u; }
        if (ctx->pc != 0x26FD20u) { return; }
    }
    ctx->pc = 0x26FD20u;
label_26fd20:
    // 0x26fd20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26FD20u;
    {
        const bool branch_taken_0x26fd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fd20) {
            ctx->pc = 0x26FD30u;
            goto label_26fd30;
        }
    }
    ctx->pc = 0x26FD28u;
label_26fd28:
    // 0x26fd28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26FD28u;
    {
        const bool branch_taken_0x26fd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD28u;
            // 0x26fd2c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd28) {
            ctx->pc = 0x26FD54u;
            goto label_26fd54;
        }
    }
    ctx->pc = 0x26FD30u;
label_26fd30:
    // 0x26fd30: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26fd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26fd34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26fd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26fd38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26fd3c: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x26fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x26fd40: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x26fd40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x26fd44: 0xc096890  jal         func_25A240
    ctx->pc = 0x26FD44u;
    SET_GPR_U32(ctx, 31, 0x26FD4Cu);
    ctx->pc = 0x26FD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD44u;
            // 0x26fd48: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A240u;
    if (runtime->hasFunction(0x25A240u)) {
        auto targetFn = runtime->lookupFunction(0x25A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD4Cu; }
        if (ctx->pc != 0x26FD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveAHD__12CSceneCmrSeqFfffi_0x25a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FD4Cu; }
        if (ctx->pc != 0x26FD4Cu) { return; }
    }
    ctx->pc = 0x26FD4Cu;
label_26fd4c:
    // 0x26fd4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26fd50:
    // 0x26fd50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26fd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26fd54:
    // 0x26fd54: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x26fd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26fd58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26fd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fd5c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x26fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26fd60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26fd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26fd64: 0x3e00008  jr          $ra
    ctx->pc = 0x26FD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FD64u;
            // 0x26fd68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FD6Cu;
}
