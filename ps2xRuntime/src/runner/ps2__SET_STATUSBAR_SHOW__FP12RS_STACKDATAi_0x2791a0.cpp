#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_STATUSBAR_SHOW__FP12RS_STACKDATAi
// Address: 0x2791a0 - 0x27928c
void ps2__SET_STATUSBAR_SHOW__FP12RS_STACKDATAi_0x2791a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_STATUSBAR_SHOW__FP12RS_STACKDATAi_0x2791a0");
#endif

    switch (ctx->pc) {
        case 0x279200u: goto label_279200;
        case 0x279218u: goto label_279218;
        default: break;
    }

    ctx->pc = 0x2791a0u;

    // 0x2791a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2791a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2791a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2791a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2791a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2791a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2791ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2791acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2791b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2791b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2791b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2791b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2791b8: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x2791b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2791bc: 0x24502f90  addiu       $s0, $v0, 0x2F90
    ctx->pc = 0x2791bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x2791c0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2791C0u;
    {
        const bool branch_taken_0x2791c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2791C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2791C0u;
            // 0x2791c4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791c0) {
            ctx->pc = 0x2791D0u;
            goto label_2791d0;
        }
    }
    ctx->pc = 0x2791C8u;
    // 0x2791c8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2791C8u;
    {
        const bool branch_taken_0x2791c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2791CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2791C8u;
            // 0x2791cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791c8) {
            ctx->pc = 0x279270u;
            goto label_279270;
        }
    }
    ctx->pc = 0x2791D0u;
label_2791d0:
    // 0x2791d0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x2791d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x2791d4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2791d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2791d8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2791d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2791dc: 0x1a200004  blez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2791DCu;
    {
        const bool branch_taken_0x2791dc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2791E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2791DCu;
            // 0x2791e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791dc) {
            ctx->pc = 0x2791F0u;
            goto label_2791f0;
        }
    }
    ctx->pc = 0x2791E4u;
    // 0x2791e4: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x2791e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2791e8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2791E8u;
    {
        const bool branch_taken_0x2791e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2791ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2791E8u;
            // 0x2791ec: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791e8) {
            ctx->pc = 0x2791F8u;
            goto label_2791f8;
        }
    }
    ctx->pc = 0x2791F0u;
label_2791f0:
    // 0x2791f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2791F0u;
    {
        const bool branch_taken_0x2791f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2791F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2791F0u;
            // 0x2791f4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791f0) {
            ctx->pc = 0x279274u;
            goto label_279274;
        }
    }
    ctx->pc = 0x2791F8u;
label_2791f8:
    // 0x2791f8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2791F8u;
    SET_GPR_U32(ctx, 31, 0x279200u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279200u; }
        if (ctx->pc != 0x279200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279200u; }
        if (ctx->pc != 0x279200u) { return; }
    }
    ctx->pc = 0x279200u;
label_279200:
    // 0x279200: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x279200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279204: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x279204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279208: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x279208u;
    {
        const bool branch_taken_0x279208 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x27920Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279208u;
            // 0x27920c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279208) {
            ctx->pc = 0x27921Cu;
            goto label_27921c;
        }
    }
    ctx->pc = 0x279210u;
    // 0x279210: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x279210u;
    SET_GPR_U32(ctx, 31, 0x279218u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279218u; }
        if (ctx->pc != 0x279218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279218u; }
        if (ctx->pc != 0x279218u) { return; }
    }
    ctx->pc = 0x279218u;
label_279218:
    // 0x279218: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x279218u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_27921c:
    // 0x27921c: 0x82020048  lb          $v0, 0x48($s0)
    ctx->pc = 0x27921cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x279220: 0xa2020049  sb          $v0, 0x49($s0)
    ctx->pc = 0x279220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 2));
    // 0x279224: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x279224u;
    {
        const bool branch_taken_0x279224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279224u;
            // 0x279228: 0xa2030048  sb          $v1, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279224) {
            ctx->pc = 0x279234u;
            goto label_279234;
        }
    }
    ctx->pc = 0x27922Cu;
    // 0x27922c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27922Cu;
    {
        const bool branch_taken_0x27922c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27922Cu;
            // 0x279230: 0xae00004c  sw          $zero, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27922c) {
            ctx->pc = 0x27923Cu;
            goto label_27923c;
        }
    }
    ctx->pc = 0x279234u;
label_279234:
    // 0x279234: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x279234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x279238: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x279238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_27923c:
    // 0x27923c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27923cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x279240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x279240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279244: 0x0  nop
    ctx->pc = 0x279244u;
    // NOP
    // 0x279248: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x279248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27924c: 0x0  nop
    ctx->pc = 0x27924cu;
    // NOP
    // 0x279250: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x279250u;
    {
        const bool branch_taken_0x279250 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x279254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279250u;
            // 0x279254: 0xe6140050  swc1        $f20, 0x50($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279250) {
            ctx->pc = 0x27926Cu;
            goto label_27926c;
        }
    }
    ctx->pc = 0x279258u;
    // 0x279258: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x279258u;
    {
        const bool branch_taken_0x279258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x279258) {
            ctx->pc = 0x279268u;
            goto label_279268;
        }
    }
    ctx->pc = 0x279260u;
    // 0x279260: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x279260u;
    {
        const bool branch_taken_0x279260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279260u;
            // 0x279264: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279260) {
            ctx->pc = 0x27926Cu;
            goto label_27926c;
        }
    }
    ctx->pc = 0x279268u;
label_279268:
    // 0x279268: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x279268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_27926c:
    // 0x27926c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279270:
    // 0x279270: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x279270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_279274:
    // 0x279274: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x279274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x279278: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x279278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27927c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27927cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x279280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279284: 0x3e00008  jr          $ra
    ctx->pc = 0x279284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279284u;
            // 0x279288: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27928Cu;
}
