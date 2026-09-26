#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_SET_STAGE_ID__FP12RS_STACKDATAi
// Address: 0x268f20 - 0x268f84
void ps2__DNG_SET_STAGE_ID__FP12RS_STACKDATAi_0x268f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_SET_STAGE_ID__FP12RS_STACKDATAi_0x268f20");
#endif

    switch (ctx->pc) {
        case 0x268f38u: goto label_268f38;
        case 0x268f68u: goto label_268f68;
        default: break;
    }

    ctx->pc = 0x268f20u;

    // 0x268f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x268f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x268f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x268f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x268f2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x268f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f30: 0xc064220  jal         func_190880
    ctx->pc = 0x268F30u;
    SET_GPR_U32(ctx, 31, 0x268F38u);
    ctx->pc = 0x268F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268F30u;
            // 0x268f34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268F38u; }
        if (ctx->pc != 0x268F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268F38u; }
        if (ctx->pc != 0x268F38u) { return; }
    }
    ctx->pc = 0x268F38u;
label_268f38:
    // 0x268f38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268F38u;
    {
        const bool branch_taken_0x268f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268F38u;
            // 0x268f3c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f38) {
            ctx->pc = 0x268F48u;
            goto label_268f48;
        }
    }
    ctx->pc = 0x268F40u;
    // 0x268f40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x268F40u;
    {
        const bool branch_taken_0x268f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268F40u;
            // 0x268f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f40) {
            ctx->pc = 0x268F70u;
            goto label_268f70;
        }
    }
    ctx->pc = 0x268F48u;
label_268f48:
    // 0x268f48: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x268f48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x268f4c: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x268f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x268f50: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268F50u;
    {
        const bool branch_taken_0x268f50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x268F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268F50u;
            // 0x268f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f50) {
            ctx->pc = 0x268F60u;
            goto label_268f60;
        }
    }
    ctx->pc = 0x268F58u;
    // 0x268f58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x268F58u;
    {
        const bool branch_taken_0x268f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268F58u;
            // 0x268f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f58) {
            ctx->pc = 0x268F70u;
            goto label_268f70;
        }
    }
    ctx->pc = 0x268F60u;
label_268f60:
    // 0x268f60: 0xc097e18  jal         func_25F860
    ctx->pc = 0x268F60u;
    SET_GPR_U32(ctx, 31, 0x268F68u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268F68u; }
        if (ctx->pc != 0x268F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268F68u; }
        if (ctx->pc != 0x268F68u) { return; }
    }
    ctx->pc = 0x268F68u;
label_268f68:
    // 0x268f68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x268f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x268f6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268f70:
    // 0x268f70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x268f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268f74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x268F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268F7Cu;
            // 0x268f80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268F84u;
}
