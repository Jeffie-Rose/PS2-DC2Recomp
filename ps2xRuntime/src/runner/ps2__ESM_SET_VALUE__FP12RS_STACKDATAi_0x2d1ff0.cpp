#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_SET_VALUE__FP12RS_STACKDATAi
// Address: 0x2d1ff0 - 0x2d20c8
void ps2__ESM_SET_VALUE__FP12RS_STACKDATAi_0x2d1ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_SET_VALUE__FP12RS_STACKDATAi_0x2d1ff0");
#endif

    switch (ctx->pc) {
        case 0x2d201cu: goto label_2d201c;
        case 0x2d202cu: goto label_2d202c;
        case 0x2d2058u: goto label_2d2058;
        case 0x2d2078u: goto label_2d2078;
        case 0x2d2088u: goto label_2d2088;
        case 0x2d20a8u: goto label_2d20a8;
        default: break;
    }

    ctx->pc = 0x2d1ff0u;

    // 0x2d1ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d1ff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1ff8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d1ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d1ffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d1ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d2000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2004: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2004u;
    {
        const bool branch_taken_0x2d2004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D2008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2004u;
            // 0x2d2008: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2004) {
            ctx->pc = 0x2D2014u;
            goto label_2d2014;
        }
    }
    ctx->pc = 0x2D200Cu;
    // 0x2d200c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2D200Cu;
    {
        const bool branch_taken_0x2d200c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D200Cu;
            // 0x2d2010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d200c) {
            ctx->pc = 0x2D20B0u;
            goto label_2d20b0;
        }
    }
    ctx->pc = 0x2D2014u;
label_2d2014:
    // 0x2d2014: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2D2014u;
    SET_GPR_U32(ctx, 31, 0x2D201Cu);
    ctx->pc = 0x2D2018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2014u;
            // 0x2d2018: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D201Cu; }
        if (ctx->pc != 0x2D201Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D201Cu; }
        if (ctx->pc != 0x2D201Cu) { return; }
    }
    ctx->pc = 0x2D201Cu;
label_2d201c:
    // 0x2d201c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d201cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2024: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2D2024u;
    SET_GPR_U32(ctx, 31, 0x2D202Cu);
    ctx->pc = 0x2D2028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2024u;
            // 0x2d2028: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D202Cu; }
        if (ctx->pc != 0x2D202Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D202Cu; }
        if (ctx->pc != 0x2D202Cu) { return; }
    }
    ctx->pc = 0x2D202Cu;
label_2d202c:
    // 0x2d202c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d202cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d2030: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d2030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2038: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D2038u;
    {
        const bool branch_taken_0x2d2038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2038u;
            // 0x2d203c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2038) {
            ctx->pc = 0x2D2080u;
            goto label_2d2080;
        }
    }
    ctx->pc = 0x2D2040u;
    // 0x2d2040: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2040u;
    {
        const bool branch_taken_0x2d2040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2040u;
            // 0x2d2044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2040) {
            ctx->pc = 0x2D2050u;
            goto label_2d2050;
        }
    }
    ctx->pc = 0x2D2048u;
    // 0x2d2048: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D2048u;
    {
        const bool branch_taken_0x2d2048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D204Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2048u;
            // 0x2d204c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2048) {
            ctx->pc = 0x2D20B0u;
            goto label_2d20b0;
        }
    }
    ctx->pc = 0x2D2050u;
label_2d2050:
    // 0x2d2050: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2D2050u;
    SET_GPR_U32(ctx, 31, 0x2D2058u);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2058u; }
        if (ctx->pc != 0x2D2058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2058u; }
        if (ctx->pc != 0x2D2058u) { return; }
    }
    ctx->pc = 0x2D2058u;
label_2d2058:
    // 0x2d2058: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d2058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d205c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d205cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2060: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d2060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d2064: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2d2064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2068: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d2068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d206c: 0x8c6407dc  lw          $a0, 0x7DC($v1)
    ctx->pc = 0x2d206cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2012)));
    // 0x2d2070: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x2D2070u;
    SET_GPR_U32(ctx, 31, 0x2D2078u);
    ctx->pc = 0x2D2074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2070u;
            // 0x2d2074: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2078u; }
        if (ctx->pc != 0x2D2078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2078u; }
        if (ctx->pc != 0x2D2078u) { return; }
    }
    ctx->pc = 0x2D2078u;
label_2d2078:
    // 0x2d2078: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D2078u;
    {
        const bool branch_taken_0x2d2078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2078) {
            ctx->pc = 0x2D20B0u;
            goto label_2d20b0;
        }
    }
    ctx->pc = 0x2D2080u;
label_2d2080:
    // 0x2d2080: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2D2080u;
    SET_GPR_U32(ctx, 31, 0x2D2088u);
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2088u; }
        if (ctx->pc != 0x2D2088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2088u; }
        if (ctx->pc != 0x2D2088u) { return; }
    }
    ctx->pc = 0x2D2088u;
label_2d2088:
    // 0x2d2088: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d2088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d208c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d208cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2090: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d2090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d2094: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2d2094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2d2098: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d2098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d209c: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d209cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d20a0: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x2D20A0u;
    SET_GPR_U32(ctx, 31, 0x2D20A8u);
    ctx->pc = 0x2D20A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D20A0u;
            // 0x2d20a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D20A8u; }
        if (ctx->pc != 0x2D20A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D20A8u; }
        if (ctx->pc != 0x2D20A8u) { return; }
    }
    ctx->pc = 0x2D20A8u;
label_2d20a8:
    // 0x2d20a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D20A8u;
    {
        const bool branch_taken_0x2d20a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d20a8) {
            ctx->pc = 0x2D20B0u;
            goto label_2d20b0;
        }
    }
    ctx->pc = 0x2D20B0u;
label_2d20b0:
    // 0x2d20b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d20b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d20b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d20b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d20b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d20b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d20bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d20bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d20c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D20C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D20C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D20C0u;
            // 0x2d20c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D20C8u;
}
