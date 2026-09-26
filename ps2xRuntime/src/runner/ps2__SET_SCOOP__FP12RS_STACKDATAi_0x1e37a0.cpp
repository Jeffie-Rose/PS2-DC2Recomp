#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_SCOOP__FP12RS_STACKDATAi
// Address: 0x1e37a0 - 0x1e387c
void ps2__SET_SCOOP__FP12RS_STACKDATAi_0x1e37a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_SCOOP__FP12RS_STACKDATAi_0x1e37a0");
#endif

    switch (ctx->pc) {
        case 0x1e37f8u: goto label_1e37f8;
        case 0x1e3824u: goto label_1e3824;
        case 0x1e3838u: goto label_1e3838;
        case 0x1e384cu: goto label_1e384c;
        case 0x1e385cu: goto label_1e385c;
        default: break;
    }

    ctx->pc = 0x1e37a0u;

    // 0x1e37a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e37a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e37a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e37a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e37a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e37ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e37acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e37b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e37b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e37b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e37b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e37b8: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E37B8u;
    {
        const bool branch_taken_0x1e37b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E37BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E37B8u;
            // 0x1e37bc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37b8) {
            ctx->pc = 0x1E37D4u;
            goto label_1e37d4;
        }
    }
    ctx->pc = 0x1E37C0u;
    // 0x1e37c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e37c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e37c4: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E37C4u;
    {
        const bool branch_taken_0x1e37c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E37C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E37C4u;
            // 0x1e37c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37c4) {
            ctx->pc = 0x1E37D8u;
            goto label_1e37d8;
        }
    }
    ctx->pc = 0x1E37CCu;
    // 0x1e37cc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1E37CCu;
    {
        const bool branch_taken_0x1e37cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E37D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E37CCu;
            // 0x1e37d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37cc) {
            ctx->pc = 0x1E3868u;
            goto label_1e3868;
        }
    }
    ctx->pc = 0x1E37D4u;
label_1e37d4:
    // 0x1e37d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e37d8:
    // 0x1e37d8: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E37D8u;
    {
        const bool branch_taken_0x1e37d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E37DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E37D8u;
            // 0x1e37dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37d8) {
            ctx->pc = 0x1E3804u;
            goto label_1e3804;
        }
    }
    ctx->pc = 0x1E37E0u;
    // 0x1e37e0: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e37e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e37e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e37e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e37e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e37ec: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1e37ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e37f0: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E37F0u;
    SET_GPR_U32(ctx, 31, 0x1E37F8u);
    ctx->pc = 0x1E37F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E37F0u;
            // 0x1e37f4: 0xac4312a8  sw          $v1, 0x12A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4776), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E37F8u; }
        if (ctx->pc != 0x1E37F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E37F8u; }
        if (ctx->pc != 0x1E37F8u) { return; }
    }
    ctx->pc = 0x1E37F8u;
label_1e37f8:
    // 0x1e37f8: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e37f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e37fc: 0xac6212b8  sw          $v0, 0x12B8($v1)
    ctx->pc = 0x1e37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4792), GPR_U32(ctx, 2));
    // 0x1e3800: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e3800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e3804:
    // 0x1e3804: 0x16020018  bne         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E3804u;
    {
        const bool branch_taken_0x1e3804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3804u;
            // 0x1e3808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3804) {
            ctx->pc = 0x1E3868u;
            goto label_1e3868;
        }
    }
    ctx->pc = 0x1E380Cu;
    // 0x1e380c: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e3810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3818: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1e3818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e381c: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E381Cu;
    SET_GPR_U32(ctx, 31, 0x1E3824u);
    ctx->pc = 0x1E3820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E381Cu;
            // 0x1e3820: 0xac4312a8  sw          $v1, 0x12A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4776), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3824u; }
        if (ctx->pc != 0x1E3824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3824u; }
        if (ctx->pc != 0x1E3824u) { return; }
    }
    ctx->pc = 0x1E3824u;
label_1e3824:
    // 0x1e3824: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e3824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e382c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1e382cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e3830: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3830u;
    SET_GPR_U32(ctx, 31, 0x1E3838u);
    ctx->pc = 0x1E3834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3830u;
            // 0x1e3834: 0xac6212ac  sw          $v0, 0x12AC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3838u; }
        if (ctx->pc != 0x1E3838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3838u; }
        if (ctx->pc != 0x1E3838u) { return; }
    }
    ctx->pc = 0x1E3838u;
label_1e3838:
    // 0x1e3838: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e3838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e383c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e383cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3840: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1e3840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e3844: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3844u;
    SET_GPR_U32(ctx, 31, 0x1E384Cu);
    ctx->pc = 0x1E3848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3844u;
            // 0x1e3848: 0xe44012b0  swc1        $f0, 0x12B0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4784), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E384Cu; }
        if (ctx->pc != 0x1E384Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E384Cu; }
        if (ctx->pc != 0x1E384Cu) { return; }
    }
    ctx->pc = 0x1E384Cu;
label_1e384c:
    // 0x1e384c: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e384cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3854: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E3854u;
    SET_GPR_U32(ctx, 31, 0x1E385Cu);
    ctx->pc = 0x1E3858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3854u;
            // 0x1e3858: 0xe44012b4  swc1        $f0, 0x12B4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4788), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E385Cu; }
        if (ctx->pc != 0x1E385Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E385Cu; }
        if (ctx->pc != 0x1E385Cu) { return; }
    }
    ctx->pc = 0x1E385Cu;
label_1e385c:
    // 0x1e385c: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3860: 0xac6212b8  sw          $v0, 0x12B8($v1)
    ctx->pc = 0x1e3860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4792), GPR_U32(ctx, 2));
    // 0x1e3864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3868:
    // 0x1e3868: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e3868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e386c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e386cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3874: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3874u;
            // 0x1e3878: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E387Cu;
}
