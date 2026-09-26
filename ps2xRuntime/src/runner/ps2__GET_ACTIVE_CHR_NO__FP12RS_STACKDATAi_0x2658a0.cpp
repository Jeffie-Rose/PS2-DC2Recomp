#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ACTIVE_CHR_NO__FP12RS_STACKDATAi
// Address: 0x2658a0 - 0x265904
void ps2__GET_ACTIVE_CHR_NO__FP12RS_STACKDATAi_0x2658a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ACTIVE_CHR_NO__FP12RS_STACKDATAi_0x2658a0");
#endif

    switch (ctx->pc) {
        case 0x2658bcu: goto label_2658bc;
        case 0x2658ecu: goto label_2658ec;
        default: break;
    }

    ctx->pc = 0x2658a0u;

    // 0x2658a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2658a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2658a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2658a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2658a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2658a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2658ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2658acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2658b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2658b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2658b4: 0xc064220  jal         func_190880
    ctx->pc = 0x2658B4u;
    SET_GPR_U32(ctx, 31, 0x2658BCu);
    ctx->pc = 0x2658B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2658B4u;
            // 0x2658b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2658BCu; }
        if (ctx->pc != 0x2658BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2658BCu; }
        if (ctx->pc != 0x2658BCu) { return; }
    }
    ctx->pc = 0x2658BCu;
label_2658bc:
    // 0x2658bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2658BCu;
    {
        const bool branch_taken_0x2658bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2658C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2658BCu;
            // 0x2658c0: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658bc) {
            ctx->pc = 0x2658CCu;
            goto label_2658cc;
        }
    }
    ctx->pc = 0x2658C4u;
    // 0x2658c4: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2658c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x2658c8: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x2658c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2658cc:
    // 0x2658cc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2658CCu;
    {
        const bool branch_taken_0x2658cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2658D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2658CCu;
            // 0x2658d0: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658cc) {
            ctx->pc = 0x2658DCu;
            goto label_2658dc;
        }
    }
    ctx->pc = 0x2658D4u;
    // 0x2658d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2658D4u;
    {
        const bool branch_taken_0x2658d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2658D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2658D4u;
            // 0x2658d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2658d4) {
            ctx->pc = 0x2658F0u;
            goto label_2658f0;
        }
    }
    ctx->pc = 0x2658DCu;
label_2658dc:
    // 0x2658dc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x2658dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x2658e0: 0x84254d96  lh          $a1, 0x4D96($at)
    ctx->pc = 0x2658e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x2658e4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2658E4u;
    SET_GPR_U32(ctx, 31, 0x2658ECu);
    ctx->pc = 0x2658E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2658E4u;
            // 0x2658e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2658ECu; }
        if (ctx->pc != 0x2658ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2658ECu; }
        if (ctx->pc != 0x2658ECu) { return; }
    }
    ctx->pc = 0x2658ECu;
label_2658ec:
    // 0x2658ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2658ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2658f0:
    // 0x2658f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2658f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2658f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2658f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2658f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2658f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2658fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2658FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2658FCu;
            // 0x265900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265904u;
}
