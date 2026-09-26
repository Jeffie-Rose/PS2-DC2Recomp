#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAnalyzePercent__9CEditDataFi
// Address: 0x2aa100 - 0x2aa1ac
void GetAnalyzePercent__9CEditDataFi_0x2aa100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAnalyzePercent__9CEditDataFi_0x2aa100");
#endif

    switch (ctx->pc) {
        case 0x2aa130u: goto label_2aa130;
        case 0x2aa138u: goto label_2aa138;
        case 0x2aa164u: goto label_2aa164;
        default: break;
    }

    ctx->pc = 0x2aa100u;

    // 0x2aa100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2aa100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2aa104: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2aa104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2aa108: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2aa108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2aa10c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2aa10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2aa110: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aa110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2aa114: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2aa114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aa11c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2aa11cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa124: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa128: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2aa128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aa130:
    // 0x2aa130: 0xc0aa238  jal         func_2A88E0
    ctx->pc = 0x2AA130u;
    SET_GPR_U32(ctx, 31, 0x2AA138u);
    ctx->pc = 0x2AA134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA130u;
            // 0x2aa134: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A88E0u;
    if (runtime->hasFunction(0x2A88E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A88E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA138u; }
        if (ctx->pc != 0x2AA138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeDataSrc__Fii_0x2a88e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA138u; }
        if (ctx->pc != 0x2AA138u) { return; }
    }
    ctx->pc = 0x2AA138u;
label_2aa138:
    // 0x2aa138: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2aa138u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa13c: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA13Cu;
    {
        const bool branch_taken_0x2aa13c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA13Cu;
            // 0x2aa140: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa13c) {
            ctx->pc = 0x2AA14Cu;
            goto label_2aa14c;
        }
    }
    ctx->pc = 0x2AA144u;
    // 0x2aa144: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2AA144u;
    {
        const bool branch_taken_0x2aa144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA144u;
            // 0x2aa148: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa144) {
            ctx->pc = 0x2AA190u;
            goto label_2aa190;
        }
    }
    ctx->pc = 0x2AA14Cu;
label_2aa14c:
    // 0x2aa14c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2aa14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2aa150: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA150u;
    {
        const bool branch_taken_0x2aa150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA150u;
            // 0x2aa154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa150) {
            ctx->pc = 0x2AA174u;
            goto label_2aa174;
        }
    }
    ctx->pc = 0x2AA158u;
    // 0x2aa158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aa158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa15c: 0xc0aa894  jal         func_2AA250
    ctx->pc = 0x2AA15Cu;
    SET_GPR_U32(ctx, 31, 0x2AA164u);
    ctx->pc = 0x2AA160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA15Cu;
            // 0x2aa160: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA164u; }
        if (ctx->pc != 0x2AA164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA164u; }
        if (ctx->pc != 0x2AA164u) { return; }
    }
    ctx->pc = 0x2AA164u;
label_2aa164:
    // 0x2aa164: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA164u;
    {
        const bool branch_taken_0x2aa164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa164) {
            ctx->pc = 0x2AA174u;
            goto label_2aa174;
        }
    }
    ctx->pc = 0x2AA16Cu;
    // 0x2aa16c: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x2aa16cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2aa170: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2aa170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2aa174:
    // 0x2aa174: 0x0  nop
    ctx->pc = 0x2aa174u;
    // NOP
    // 0x2aa178: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2aa178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2aa17c: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x2aa17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2aa180: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2AA180u;
    {
        const bool branch_taken_0x2aa180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA180u;
            // 0x2aa184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa180) {
            ctx->pc = 0x2AA130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa130;
        }
    }
    ctx->pc = 0x2AA188u;
    // 0x2aa188: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2aa188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa18c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2aa18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2aa190:
    // 0x2aa190: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2aa190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa194: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2aa194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aa198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa19c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa19cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa1a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA1A4u;
            // 0x2aa1a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA1ACu;
}
