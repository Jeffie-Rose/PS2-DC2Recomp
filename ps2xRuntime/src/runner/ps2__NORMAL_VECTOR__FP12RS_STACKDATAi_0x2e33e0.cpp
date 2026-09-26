#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _NORMAL_VECTOR__FP12RS_STACKDATAi
// Address: 0x2e33e0 - 0x2e3490
void ps2__NORMAL_VECTOR__FP12RS_STACKDATAi_0x2e33e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__NORMAL_VECTOR__FP12RS_STACKDATAi_0x2e33e0");
#endif

    switch (ctx->pc) {
        case 0x2e3448u: goto label_2e3448;
        case 0x2e3458u: goto label_2e3458;
        case 0x2e3468u: goto label_2e3468;
        case 0x2e3474u: goto label_2e3474;
        default: break;
    }

    ctx->pc = 0x2e33e0u;

    // 0x2e33e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e33e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e33e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e33e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e33e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e33e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e33ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e33ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e33f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e33f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e33f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e33f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e33f8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E33F8u;
    {
        const bool branch_taken_0x2e33f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E33FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E33F8u;
            // 0x2e33fc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e33f8) {
            ctx->pc = 0x2E3408u;
            goto label_2e3408;
        }
    }
    ctx->pc = 0x2E3400u;
    // 0x2e3400: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2E3400u;
    {
        const bool branch_taken_0x2e3400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3400u;
            // 0x2e3404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3400) {
            ctx->pc = 0x2E3478u;
            goto label_2e3478;
        }
    }
    ctx->pc = 0x2E3408u;
label_2e3408:
    // 0x2e3408: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2e3408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2e340c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e340cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e3410: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x2e3410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2e3414: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x2e3414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2e3418: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e3418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e341c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e341cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3420: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2e3420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3424: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2e3424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e3428: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2e3428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2e342c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2e342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3430: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2e3430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2e3434: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2e3434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2e3438: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2e3438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e343c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2e343cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2e3440: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2E3440u;
    SET_GPR_U32(ctx, 31, 0x2E3448u);
    ctx->pc = 0x2E3444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3440u;
            // 0x2e3444: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3448u; }
        if (ctx->pc != 0x2E3448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3448u; }
        if (ctx->pc != 0x2E3448u) { return; }
    }
    ctx->pc = 0x2E3448u;
label_2e3448:
    // 0x2e3448: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x2e3448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e344c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e344cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3450: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3450u;
    SET_GPR_U32(ctx, 31, 0x2E3458u);
    ctx->pc = 0x2E3454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3450u;
            // 0x2e3454: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3458u; }
        if (ctx->pc != 0x2E3458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3458u; }
        if (ctx->pc != 0x2E3458u) { return; }
    }
    ctx->pc = 0x2E3458u;
label_2e3458:
    // 0x2e3458: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2e3458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e345c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e345cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3460: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3460u;
    SET_GPR_U32(ctx, 31, 0x2E3468u);
    ctx->pc = 0x2E3464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3460u;
            // 0x2e3464: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3468u; }
        if (ctx->pc != 0x2E3468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3468u; }
        if (ctx->pc != 0x2E3468u) { return; }
    }
    ctx->pc = 0x2E3468u;
label_2e3468:
    // 0x2e3468: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2e3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e346c: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E346Cu;
    SET_GPR_U32(ctx, 31, 0x2E3474u);
    ctx->pc = 0x2E3470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E346Cu;
            // 0x2e3470: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3474u; }
        if (ctx->pc != 0x2E3474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3474u; }
        if (ctx->pc != 0x2E3474u) { return; }
    }
    ctx->pc = 0x2E3474u;
label_2e3474:
    // 0x2e3474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3478:
    // 0x2e3478: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e3478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e347c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e347cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3488: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E348Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3488u;
            // 0x2e348c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3490u;
}
