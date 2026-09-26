#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeepEditAnalyze__Fv
// Address: 0x1b0150 - 0x1b01c8
void KeepEditAnalyze__Fv_0x1b0150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeepEditAnalyze__Fv_0x1b0150");
#endif

    switch (ctx->pc) {
        case 0x1b0168u: goto label_1b0168;
        case 0x1b0174u: goto label_1b0174;
        case 0x1b0180u: goto label_1b0180;
        case 0x1b0190u: goto label_1b0190;
        default: break;
    }

    ctx->pc = 0x1b0150u;

    // 0x1b0150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b0150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b0154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b0154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b0158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b0158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b015c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b0160: 0xc064220  jal         func_190880
    ctx->pc = 0x1B0160u;
    SET_GPR_U32(ctx, 31, 0x1B0168u);
    ctx->pc = 0x1B0164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0160u;
            // 0x1b0164: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0168u; }
        if (ctx->pc != 0x1B0168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0168u; }
        if (ctx->pc != 0x1B0168u) { return; }
    }
    ctx->pc = 0x1B0168u;
label_1b0168:
    // 0x1b0168: 0x8f858c58  lw          $a1, -0x73A8($gp)
    ctx->pc = 0x1b0168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
    // 0x1b016c: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x1B016Cu;
    SET_GPR_U32(ctx, 31, 0x1B0174u);
    ctx->pc = 0x1B0170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B016Cu;
            // 0x1b0170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0174u; }
        if (ctx->pc != 0x1B0174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0174u; }
        if (ctx->pc != 0x1B0174u) { return; }
    }
    ctx->pc = 0x1B0174u;
label_1b0174:
    // 0x1b0174: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b0174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0178: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b0178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b017c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b017cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0180:
    // 0x1b0180: 0x8f858c58  lw          $a1, -0x73A8($gp)
    ctx->pc = 0x1b0180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
    // 0x1b0184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0188: 0xc0aa894  jal         func_2AA250
    ctx->pc = 0x1B0188u;
    SET_GPR_U32(ctx, 31, 0x1B0190u);
    ctx->pc = 0x1B018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0188u;
            // 0x1b018c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA250u;
    if (runtime->hasFunction(0x2AA250u)) {
        auto targetFn = runtime->lookupFunction(0x2AA250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0190u; }
        if (ctx->pc != 0x1B0190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFii_0x2aa250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0190u; }
        if (ctx->pc != 0x1B0190u) { return; }
    }
    ctx->pc = 0x1B0190u;
label_1b0190:
    // 0x1b0190: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1b0190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
    // 0x1b0194: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b0194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b0198: 0x2463f0f0  addiu       $v1, $v1, -0xF10
    ctx->pc = 0x1b0198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x1b019c: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1b019cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1b01a0: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x1b01a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b01a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b01a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1b01a8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B01A8u;
    {
        const bool branch_taken_0x1b01a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B01ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B01A8u;
            // 0x1b01ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01a8) {
            ctx->pc = 0x1B0180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b0180;
        }
    }
    ctx->pc = 0x1B01B0u;
    // 0x1b01b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b01b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b01b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b01b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b01b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b01b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b01bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b01bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b01c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B01C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B01C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B01C0u;
            // 0x1b01c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B01C8u;
}
