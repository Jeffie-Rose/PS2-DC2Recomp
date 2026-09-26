#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MES_SET_BUFF__FP12RS_STACKDATAi
// Address: 0x26d220 - 0x26d2c0
void ps2__MES_SET_BUFF__FP12RS_STACKDATAi_0x26d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MES_SET_BUFF__FP12RS_STACKDATAi_0x26d220");
#endif

    switch (ctx->pc) {
        case 0x26d23cu: goto label_26d23c;
        case 0x26d244u: goto label_26d244;
        case 0x26d260u: goto label_26d260;
        case 0x26d26cu: goto label_26d26c;
        case 0x26d27cu: goto label_26d27c;
        case 0x26d288u: goto label_26d288;
        case 0x26d298u: goto label_26d298;
        case 0x26d2a4u: goto label_26d2a4;
        default: break;
    }

    ctx->pc = 0x26d220u;

    // 0x26d220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26d220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26d224: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26d224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26d228: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26d228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26d22c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d230: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x26d230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26d234: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D234u;
    SET_GPR_U32(ctx, 31, 0x26D23Cu);
    ctx->pc = 0x26D238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D234u;
            // 0x26d238: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D23Cu; }
        if (ctx->pc != 0x26D23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D23Cu; }
        if (ctx->pc != 0x26D23Cu) { return; }
    }
    ctx->pc = 0x26D23Cu;
label_26d23c:
    // 0x26d23c: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26D23Cu;
    SET_GPR_U32(ctx, 31, 0x26D244u);
    ctx->pc = 0x26D240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D23Cu;
            // 0x26d240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D244u; }
        if (ctx->pc != 0x26D244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D244u; }
        if (ctx->pc != 0x26D244u) { return; }
    }
    ctx->pc = 0x26D244u;
label_26d244:
    // 0x26d244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d248: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D248u;
    {
        const bool branch_taken_0x26d248 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D248u;
            // 0x26d24c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d248) {
            ctx->pc = 0x26D258u;
            goto label_26d258;
        }
    }
    ctx->pc = 0x26D250u;
    // 0x26d250: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x26D250u;
    {
        const bool branch_taken_0x26d250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D250u;
            // 0x26d254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d250) {
            ctx->pc = 0x26D2A8u;
            goto label_26d2a8;
        }
    }
    ctx->pc = 0x26D258u;
label_26d258:
    // 0x26d258: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D258u;
    SET_GPR_U32(ctx, 31, 0x26D260u);
    ctx->pc = 0x26D25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D258u;
            // 0x26d25c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D260u; }
        if (ctx->pc != 0x26D260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D260u; }
        if (ctx->pc != 0x26D260u) { return; }
    }
    ctx->pc = 0x26D260u;
label_26d260:
    // 0x26d260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26d260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d264: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D264u;
    SET_GPR_U32(ctx, 31, 0x26D26Cu);
    ctx->pc = 0x26D268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D264u;
            // 0x26d268: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D26Cu; }
        if (ctx->pc != 0x26D26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D26Cu; }
        if (ctx->pc != 0x26D26Cu) { return; }
    }
    ctx->pc = 0x26D26Cu;
label_26d26c:
    // 0x26d26c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26D26Cu;
    {
        const bool branch_taken_0x26d26c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d26c) {
            ctx->pc = 0x26D290u;
            goto label_26d290;
        }
    }
    ctx->pc = 0x26D274u;
    // 0x26d274: 0xc065a1c  jal         func_196870
    ctx->pc = 0x26D274u;
    SET_GPR_U32(ctx, 31, 0x26D27Cu);
    ctx->pc = 0x196870u;
    if (runtime->hasFunction(0x196870u)) {
        auto targetFn = runtime->lookupFunction(0x196870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D27Cu; }
        if (ctx->pc != 0x26D27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSysMesBuffer__Fv_0x196870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D27Cu; }
        if (ctx->pc != 0x26D27Cu) { return; }
    }
    ctx->pc = 0x26D27Cu;
label_26d27c:
    // 0x26d27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d280: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x26D280u;
    SET_GPR_U32(ctx, 31, 0x26D288u);
    ctx->pc = 0x26D284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D280u;
            // 0x26d284: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D288u; }
        if (ctx->pc != 0x26D288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D288u; }
        if (ctx->pc != 0x26D288u) { return; }
    }
    ctx->pc = 0x26D288u;
label_26d288:
    // 0x26d288: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26D288u;
    {
        const bool branch_taken_0x26d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D288u;
            // 0x26d28c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d288) {
            ctx->pc = 0x26D2A8u;
            goto label_26d2a8;
        }
    }
    ctx->pc = 0x26D290u;
label_26d290:
    // 0x26d290: 0xc065a18  jal         func_196860
    ctx->pc = 0x26D290u;
    SET_GPR_U32(ctx, 31, 0x26D298u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D298u; }
        if (ctx->pc != 0x26D298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D298u; }
        if (ctx->pc != 0x26D298u) { return; }
    }
    ctx->pc = 0x26D298u;
label_26d298:
    // 0x26d298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d29c: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x26D29Cu;
    SET_GPR_U32(ctx, 31, 0x26D2A4u);
    ctx->pc = 0x26D2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D29Cu;
            // 0x26d2a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2A4u; }
        if (ctx->pc != 0x26D2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D2A4u; }
        if (ctx->pc != 0x26D2A4u) { return; }
    }
    ctx->pc = 0x26D2A4u;
label_26d2a4:
    // 0x26d2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d2a8:
    // 0x26d2a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26d2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d2ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26d2acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d2b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d2b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d2b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x26D2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D2B8u;
            // 0x26d2bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D2C0u;
}
