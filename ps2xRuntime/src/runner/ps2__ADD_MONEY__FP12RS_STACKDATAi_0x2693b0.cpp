#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ADD_MONEY__FP12RS_STACKDATAi
// Address: 0x2693b0 - 0x26941c
void ps2__ADD_MONEY__FP12RS_STACKDATAi_0x2693b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ADD_MONEY__FP12RS_STACKDATAi_0x2693b0");
#endif

    switch (ctx->pc) {
        case 0x2693c8u: goto label_2693c8;
        case 0x2693f8u: goto label_2693f8;
        case 0x269404u: goto label_269404;
        default: break;
    }

    ctx->pc = 0x2693b0u;

    // 0x2693b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2693b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2693b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2693b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2693b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2693b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2693bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2693bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2693c0: 0xc064220  jal         func_190880
    ctx->pc = 0x2693C0u;
    SET_GPR_U32(ctx, 31, 0x2693C8u);
    ctx->pc = 0x2693C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2693C0u;
            // 0x2693c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2693C8u; }
        if (ctx->pc != 0x2693C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2693C8u; }
        if (ctx->pc != 0x2693C8u) { return; }
    }
    ctx->pc = 0x2693C8u;
label_2693c8:
    // 0x2693c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2693C8u;
    {
        const bool branch_taken_0x2693c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2693CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2693C8u;
            // 0x2693cc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693c8) {
            ctx->pc = 0x2693D8u;
            goto label_2693d8;
        }
    }
    ctx->pc = 0x2693D0u;
    // 0x2693d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2693D0u;
    {
        const bool branch_taken_0x2693d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2693D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2693D0u;
            // 0x2693d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693d0) {
            ctx->pc = 0x269408u;
            goto label_269408;
        }
    }
    ctx->pc = 0x2693D8u;
label_2693d8:
    // 0x2693d8: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2693d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x2693dc: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x2693dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2693e0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2693E0u;
    {
        const bool branch_taken_0x2693e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2693E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2693E0u;
            // 0x2693e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693e0) {
            ctx->pc = 0x2693F0u;
            goto label_2693f0;
        }
    }
    ctx->pc = 0x2693E8u;
    // 0x2693e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2693E8u;
    {
        const bool branch_taken_0x2693e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2693ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2693E8u;
            // 0x2693ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693e8) {
            ctx->pc = 0x269408u;
            goto label_269408;
        }
    }
    ctx->pc = 0x2693F0u;
label_2693f0:
    // 0x2693f0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2693F0u;
    SET_GPR_U32(ctx, 31, 0x2693F8u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2693F8u; }
        if (ctx->pc != 0x2693F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2693F8u; }
        if (ctx->pc != 0x2693F8u) { return; }
    }
    ctx->pc = 0x2693F8u;
label_2693f8:
    // 0x2693f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2693f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2693fc: 0xc067abc  jal         func_19EAF0
    ctx->pc = 0x2693FCu;
    SET_GPR_U32(ctx, 31, 0x269404u);
    ctx->pc = 0x269400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2693FCu;
            // 0x269400: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EAF0u;
    if (runtime->hasFunction(0x19EAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19EAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269404u; }
        if (ctx->pc != 0x269404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMoney__16CUserDataManagerFi_0x19eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269404u; }
        if (ctx->pc != 0x269404u) { return; }
    }
    ctx->pc = 0x269404u;
label_269404:
    // 0x269404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269408:
    // 0x269408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x269408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26940c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26940cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269414: 0x3e00008  jr          $ra
    ctx->pc = 0x269414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269414u;
            // 0x269418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26941Cu;
}
