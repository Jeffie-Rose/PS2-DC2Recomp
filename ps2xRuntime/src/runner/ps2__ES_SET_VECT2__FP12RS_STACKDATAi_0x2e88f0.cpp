#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ES_SET_VECT2__FP12RS_STACKDATAi
// Address: 0x2e88f0 - 0x2e8994
void ps2__ES_SET_VECT2__FP12RS_STACKDATAi_0x2e88f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ES_SET_VECT2__FP12RS_STACKDATAi_0x2e88f0");
#endif

    switch (ctx->pc) {
        case 0x2e8924u: goto label_2e8924;
        case 0x2e893cu: goto label_2e893c;
        case 0x2e894cu: goto label_2e894c;
        case 0x2e895cu: goto label_2e895c;
        case 0x2e8970u: goto label_2e8970;
        default: break;
    }

    ctx->pc = 0x2e88f0u;

    // 0x2e88f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e88f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e88f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e88f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e88f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e88fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e88fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e8900: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E8900u;
    {
        const bool branch_taken_0x2e8900 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8900u;
            // 0x2e8904: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8900) {
            ctx->pc = 0x2E8944u;
            goto label_2e8944;
        }
    }
    ctx->pc = 0x2E8908u;
    // 0x2e8908: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e8908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e890c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E890Cu;
    {
        const bool branch_taken_0x2e890c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E890Cu;
            // 0x2e8910: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e890c) {
            ctx->pc = 0x2E891Cu;
            goto label_2e891c;
        }
    }
    ctx->pc = 0x2E8914u;
    // 0x2e8914: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E8914u;
    {
        const bool branch_taken_0x2e8914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8914u;
            // 0x2e8918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8914) {
            ctx->pc = 0x2E8978u;
            goto label_2e8978;
        }
    }
    ctx->pc = 0x2E891Cu;
label_2e891c:
    // 0x2e891c: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E891Cu;
    SET_GPR_U32(ctx, 31, 0x2E8924u);
    ctx->pc = 0x2E8920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E891Cu;
            // 0x2e8920: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8924u; }
        if (ctx->pc != 0x2E8924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8924u; }
        if (ctx->pc != 0x2E8924u) { return; }
    }
    ctx->pc = 0x2E8924u;
label_2e8924:
    // 0x2e8924: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e8924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8928: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e8928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e892c: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e892cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e8930: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x2e8930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e8934: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2E8934u;
    SET_GPR_U32(ctx, 31, 0x2E893Cu);
    ctx->pc = 0x2E8938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8934u;
            // 0x2e8938: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E893Cu; }
        if (ctx->pc != 0x2E893Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E893Cu; }
        if (ctx->pc != 0x2E893Cu) { return; }
    }
    ctx->pc = 0x2E893Cu;
label_2e893c:
    // 0x2e893c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E893Cu;
    {
        const bool branch_taken_0x2e893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E893Cu;
            // 0x2e8940: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e893c) {
            ctx->pc = 0x2E8984u;
            goto label_2e8984;
        }
    }
    ctx->pc = 0x2E8944u;
label_2e8944:
    // 0x2e8944: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E8944u;
    SET_GPR_U32(ctx, 31, 0x2E894Cu);
    ctx->pc = 0x2E8948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8944u;
            // 0x2e8948: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E894Cu; }
        if (ctx->pc != 0x2E894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E894Cu; }
        if (ctx->pc != 0x2E894Cu) { return; }
    }
    ctx->pc = 0x2E894Cu;
label_2e894c:
    // 0x2e894c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e894cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8950: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e8950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8954: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E8954u;
    SET_GPR_U32(ctx, 31, 0x2E895Cu);
    ctx->pc = 0x2E8958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8954u;
            // 0x2e8958: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E895Cu; }
        if (ctx->pc != 0x2E895Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E895Cu; }
        if (ctx->pc != 0x2E895Cu) { return; }
    }
    ctx->pc = 0x2E895Cu;
label_2e895c:
    // 0x2e895c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e8960: 0x8f849ecc  lw          $a0, -0x6134($gp)
    ctx->pc = 0x2e8960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942412)));
    // 0x2e8964: 0x8c4600a8  lw          $a2, 0xA8($v0)
    ctx->pc = 0x2e8964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2e8968: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x2E8968u;
    SET_GPR_U32(ctx, 31, 0x2E8970u);
    ctx->pc = 0x2E896Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8968u;
            // 0x2e896c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8970u; }
        if (ctx->pc != 0x2E8970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8970u; }
        if (ctx->pc != 0x2E8970u) { return; }
    }
    ctx->pc = 0x2E8970u;
label_2e8970:
    // 0x2e8970: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8970u;
    {
        const bool branch_taken_0x2e8970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8970) {
            ctx->pc = 0x2E8980u;
            goto label_2e8980;
        }
    }
    ctx->pc = 0x2E8978u;
label_2e8978:
    // 0x2e8978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8978u;
    {
        const bool branch_taken_0x2e8978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E897Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8978u;
            // 0x2e897c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8978) {
            ctx->pc = 0x2E8988u;
            goto label_2e8988;
        }
    }
    ctx->pc = 0x2E8980u;
label_2e8980:
    // 0x2e8980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8984:
    // 0x2e8984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e8984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e8988:
    // 0x2e8988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e8988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e898c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E898Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E898Cu;
            // 0x2e8990: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8994u;
}
