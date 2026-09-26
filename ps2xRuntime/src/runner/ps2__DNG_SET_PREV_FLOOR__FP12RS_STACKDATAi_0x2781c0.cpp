#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_SET_PREV_FLOOR__FP12RS_STACKDATAi
// Address: 0x2781c0 - 0x278224
void ps2__DNG_SET_PREV_FLOOR__FP12RS_STACKDATAi_0x2781c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_SET_PREV_FLOOR__FP12RS_STACKDATAi_0x2781c0");
#endif

    switch (ctx->pc) {
        case 0x2781d0u: goto label_2781d0;
        case 0x2781d8u: goto label_2781d8;
        default: break;
    }

    ctx->pc = 0x2781c0u;

    // 0x2781c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2781c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2781c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2781c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2781c8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2781C8u;
    SET_GPR_U32(ctx, 31, 0x2781D0u);
    ctx->pc = 0x2781CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2781C8u;
            // 0x2781cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2781D0u; }
        if (ctx->pc != 0x2781D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2781D0u; }
        if (ctx->pc != 0x2781D0u) { return; }
    }
    ctx->pc = 0x2781D0u;
label_2781d0:
    // 0x2781d0: 0xc064220  jal         func_190880
    ctx->pc = 0x2781D0u;
    SET_GPR_U32(ctx, 31, 0x2781D8u);
    ctx->pc = 0x2781D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2781D0u;
            // 0x2781d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2781D8u; }
        if (ctx->pc != 0x2781D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2781D8u; }
        if (ctx->pc != 0x2781D8u) { return; }
    }
    ctx->pc = 0x2781D8u;
label_2781d8:
    // 0x2781d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2781D8u;
    {
        const bool branch_taken_0x2781d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2781DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2781D8u;
            // 0x2781dc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781d8) {
            ctx->pc = 0x2781E8u;
            goto label_2781e8;
        }
    }
    ctx->pc = 0x2781E0u;
    // 0x2781e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2781E0u;
    {
        const bool branch_taken_0x2781e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2781E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2781E0u;
            // 0x2781e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781e0) {
            ctx->pc = 0x278214u;
            goto label_278214;
        }
    }
    ctx->pc = 0x2781E8u;
label_2781e8:
    // 0x2781e8: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x2781e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x2781ec: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x2781ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2781f0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2781F0u;
    {
        const bool branch_taken_0x2781f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2781F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2781F0u;
            // 0x2781f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781f0) {
            ctx->pc = 0x278200u;
            goto label_278200;
        }
    }
    ctx->pc = 0x2781F8u;
    // 0x2781f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2781F8u;
    {
        const bool branch_taken_0x2781f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2781FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2781F8u;
            // 0x2781fc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2781f8) {
            ctx->pc = 0x278218u;
            goto label_278218;
        }
    }
    ctx->pc = 0x278200u;
label_278200:
    // 0x278200: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x278200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x278204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278208: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x278208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27820c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27820cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x278210: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x278210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
label_278214:
    // 0x278214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_278218:
    // 0x278218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27821c: 0x3e00008  jr          $ra
    ctx->pc = 0x27821Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27821Cu;
            // 0x278220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278224u;
}
