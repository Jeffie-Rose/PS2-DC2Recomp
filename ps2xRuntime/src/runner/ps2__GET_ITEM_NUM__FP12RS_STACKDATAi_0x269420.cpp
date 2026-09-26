#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ITEM_NUM__FP12RS_STACKDATAi
// Address: 0x269420 - 0x269498
void ps2__GET_ITEM_NUM__FP12RS_STACKDATAi_0x269420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ITEM_NUM__FP12RS_STACKDATAi_0x269420");
#endif

    switch (ctx->pc) {
        case 0x269438u: goto label_269438;
        case 0x269468u: goto label_269468;
        case 0x269474u: goto label_269474;
        case 0x269480u: goto label_269480;
        default: break;
    }

    ctx->pc = 0x269420u;

    // 0x269420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x269420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x269424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x269424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x269428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x269428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26942c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26942cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269430: 0xc064220  jal         func_190880
    ctx->pc = 0x269430u;
    SET_GPR_U32(ctx, 31, 0x269438u);
    ctx->pc = 0x269434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269430u;
            // 0x269434: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269438u; }
        if (ctx->pc != 0x269438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269438u; }
        if (ctx->pc != 0x269438u) { return; }
    }
    ctx->pc = 0x269438u;
label_269438:
    // 0x269438: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269438u;
    {
        const bool branch_taken_0x269438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26943Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269438u;
            // 0x26943c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269438) {
            ctx->pc = 0x269448u;
            goto label_269448;
        }
    }
    ctx->pc = 0x269440u;
    // 0x269440: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x269440u;
    {
        const bool branch_taken_0x269440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269440u;
            // 0x269444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269440) {
            ctx->pc = 0x269484u;
            goto label_269484;
        }
    }
    ctx->pc = 0x269448u;
label_269448:
    // 0x269448: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x269448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x26944c: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x26944cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x269450: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269450u;
    {
        const bool branch_taken_0x269450 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x269454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269450u;
            // 0x269454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269450) {
            ctx->pc = 0x269460u;
            goto label_269460;
        }
    }
    ctx->pc = 0x269458u;
    // 0x269458: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x269458u;
    {
        const bool branch_taken_0x269458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26945Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269458u;
            // 0x26945c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269458) {
            ctx->pc = 0x269484u;
            goto label_269484;
        }
    }
    ctx->pc = 0x269460u;
label_269460:
    // 0x269460: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269460u;
    SET_GPR_U32(ctx, 31, 0x269468u);
    ctx->pc = 0x269464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269460u;
            // 0x269464: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269468u; }
        if (ctx->pc != 0x269468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269468u; }
        if (ctx->pc != 0x269468u) { return; }
    }
    ctx->pc = 0x269468u;
label_269468:
    // 0x269468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26946c: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x26946Cu;
    SET_GPR_U32(ctx, 31, 0x269474u);
    ctx->pc = 0x269470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26946Cu;
            // 0x269470: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269474u; }
        if (ctx->pc != 0x269474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269474u; }
        if (ctx->pc != 0x269474u) { return; }
    }
    ctx->pc = 0x269474u;
label_269474:
    // 0x269474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x269474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269478: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x269478u;
    SET_GPR_U32(ctx, 31, 0x269480u);
    ctx->pc = 0x26947Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269478u;
            // 0x26947c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269480u; }
        if (ctx->pc != 0x269480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269480u; }
        if (ctx->pc != 0x269480u) { return; }
    }
    ctx->pc = 0x269480u;
label_269480:
    // 0x269480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269484:
    // 0x269484: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x269484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x269488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26948c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26948cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269490: 0x3e00008  jr          $ra
    ctx->pc = 0x269490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269490u;
            // 0x269494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269498u;
}
