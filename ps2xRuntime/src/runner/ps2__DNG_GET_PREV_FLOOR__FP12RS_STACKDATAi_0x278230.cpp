#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_GET_PREV_FLOOR__FP12RS_STACKDATAi
// Address: 0x278230 - 0x278298
void ps2__DNG_GET_PREV_FLOOR__FP12RS_STACKDATAi_0x278230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_GET_PREV_FLOOR__FP12RS_STACKDATAi_0x278230");
#endif

    switch (ctx->pc) {
        case 0x278244u: goto label_278244;
        case 0x278284u: goto label_278284;
        default: break;
    }

    ctx->pc = 0x278230u;

    // 0x278230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x278234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x278238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27823c: 0xc064220  jal         func_190880
    ctx->pc = 0x27823Cu;
    SET_GPR_U32(ctx, 31, 0x278244u);
    ctx->pc = 0x278240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27823Cu;
            // 0x278240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278244u; }
        if (ctx->pc != 0x278244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278244u; }
        if (ctx->pc != 0x278244u) { return; }
    }
    ctx->pc = 0x278244u;
label_278244:
    // 0x278244: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278244u;
    {
        const bool branch_taken_0x278244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278244u;
            // 0x278248: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278244) {
            ctx->pc = 0x278254u;
            goto label_278254;
        }
    }
    ctx->pc = 0x27824Cu;
    // 0x27824c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27824Cu;
    {
        const bool branch_taken_0x27824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27824Cu;
            // 0x278250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27824c) {
            ctx->pc = 0x278288u;
            goto label_278288;
        }
    }
    ctx->pc = 0x278254u;
label_278254:
    // 0x278254: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x278254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x278258: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x278258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x27825c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27825Cu;
    {
        const bool branch_taken_0x27825c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x278260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27825Cu;
            // 0x278260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27825c) {
            ctx->pc = 0x27826Cu;
            goto label_27826c;
        }
    }
    ctx->pc = 0x278264u;
    // 0x278264: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x278264u;
    {
        const bool branch_taken_0x278264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278264u;
            // 0x278268: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278264) {
            ctx->pc = 0x27828Cu;
            goto label_27828c;
        }
    }
    ctx->pc = 0x27826Cu;
label_27826c:
    // 0x27826c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278270: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x278270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x278274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278278: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x278278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x27827c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27827Cu;
    SET_GPR_U32(ctx, 31, 0x278284u);
    ctx->pc = 0x278280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27827Cu;
            // 0x278280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278284u; }
        if (ctx->pc != 0x278284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278284u; }
        if (ctx->pc != 0x278284u) { return; }
    }
    ctx->pc = 0x278284u;
label_278284:
    // 0x278284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278288:
    // 0x278288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27828c:
    // 0x27828c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27828cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278290: 0x3e00008  jr          $ra
    ctx->pc = 0x278290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278290u;
            // 0x278294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278298u;
}
