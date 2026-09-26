#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_GUARD_RATE__FP12RS_STACKDATAi
// Address: 0x1e2020 - 0x1e20e8
void ps2__SET_GUARD_RATE__FP12RS_STACKDATAi_0x1e2020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_GUARD_RATE__FP12RS_STACKDATAi_0x1e2020");
#endif

    switch (ctx->pc) {
        case 0x1e2048u: goto label_1e2048;
        case 0x1e208cu: goto label_1e208c;
        case 0x1e20a8u: goto label_1e20a8;
        default: break;
    }

    ctx->pc = 0x1e2020u;

    // 0x1e2020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2024: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2028: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e202c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e202cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2030: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2030u;
    {
        const bool branch_taken_0x1e2030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2030u;
            // 0x1e2034: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2030) {
            ctx->pc = 0x1E2040u;
            goto label_1e2040;
        }
    }
    ctx->pc = 0x1E2038u;
    // 0x1e2038: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1E2038u;
    {
        const bool branch_taken_0x1e2038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2038u;
            // 0x1e203c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2038) {
            ctx->pc = 0x1E20D4u;
            goto label_1e20d4;
        }
    }
    ctx->pc = 0x1E2040u;
label_1e2040:
    // 0x1e2040: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E2040u;
    SET_GPR_U32(ctx, 31, 0x1E2048u);
    ctx->pc = 0x1E2044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2040u;
            // 0x1e2044: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2048u; }
        if (ctx->pc != 0x1E2048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2048u; }
        if (ctx->pc != 0x1E2048u) { return; }
    }
    ctx->pc = 0x1E2048u;
label_1e2048:
    // 0x1e2048: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e2048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e204c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E204Cu;
    {
        const bool branch_taken_0x1e204c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e204c) {
            ctx->pc = 0x1E2078u;
            goto label_1e2078;
        }
    }
    ctx->pc = 0x1E2054u;
    // 0x1e2054: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e2054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e2058: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1e2058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1e205c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e205cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e2064: 0x8c510484  lw          $s1, 0x484($v0)
    ctx->pc = 0x1e2064u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1e2068: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2068u;
    {
        const bool branch_taken_0x1e2068 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E206Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2068u;
            // 0x1e206c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2068) {
            ctx->pc = 0x1E2084u;
            goto label_1e2084;
        }
    }
    ctx->pc = 0x1E2070u;
    // 0x1e2070: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E2070u;
    {
        const bool branch_taken_0x1e2070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2070u;
            // 0x1e2074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2070) {
            ctx->pc = 0x1E20D4u;
            goto label_1e20d4;
        }
    }
    ctx->pc = 0x1E2078u;
label_1e2078:
    // 0x1e2078: 0x8f918e70  lw          $s1, -0x7190($gp)
    ctx->pc = 0x1e2078u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e207c: 0x0  nop
    ctx->pc = 0x1e207cu;
    // NOP
    // 0x1e2080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2084:
    // 0x1e2084: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2084u;
    SET_GPR_U32(ctx, 31, 0x1E208Cu);
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E208Cu; }
        if (ctx->pc != 0x1E208Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E208Cu; }
        if (ctx->pc != 0x1E208Cu) { return; }
    }
    ctx->pc = 0x1E208Cu;
label_1e208c:
    // 0x1e208c: 0x8e22114c  lw          $v0, 0x114C($s1)
    ctx->pc = 0x1e208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4428)));
    // 0x1e2090: 0x80420062  lb          $v0, 0x62($v0)
    ctx->pc = 0x1e2090u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x1e2094: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e2094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2098: 0x0  nop
    ctx->pc = 0x1e2098u;
    // NOP
    // 0x1e209c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e209cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e20a0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1E20A0u;
    SET_GPR_U32(ctx, 31, 0x1E20A8u);
    ctx->pc = 0x1E20A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E20A0u;
            // 0x1e20a4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E20A8u; }
        if (ctx->pc != 0x1E20A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E20A8u; }
        if (ctx->pc != 0x1E20A8u) { return; }
    }
    ctx->pc = 0x1E20A8u;
label_1e20a8:
    // 0x1e20a8: 0x8e231150  lw          $v1, 0x1150($s1)
    ctx->pc = 0x1e20a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4432)));
    // 0x1e20ac: 0xa0620062  sb          $v0, 0x62($v1)
    ctx->pc = 0x1e20acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 98), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e20b0: 0x8e221150  lw          $v0, 0x1150($s1)
    ctx->pc = 0x1e20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4432)));
    // 0x1e20b4: 0x24430062  addiu       $v1, $v0, 0x62
    ctx->pc = 0x1e20b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 98));
    // 0x1e20b8: 0x90420062  lbu         $v0, 0x62($v0)
    ctx->pc = 0x1e20b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x1e20bc: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x1e20bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x1e20c0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E20C0u;
    {
        const bool branch_taken_0x1e20c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E20C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E20C0u;
            // 0x1e20c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20c0) {
            ctx->pc = 0x1E20D4u;
            goto label_1e20d4;
        }
    }
    ctx->pc = 0x1E20C8u;
    // 0x1e20c8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1e20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e20cc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e20ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e20d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e20d4:
    // 0x1e20d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e20d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e20d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e20d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e20dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e20dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e20e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E20E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E20E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E20E0u;
            // 0x1e20e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E20E8u;
}
