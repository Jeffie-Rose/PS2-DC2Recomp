#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_MM_LINE_POS__FP12RS_STACKDATAi
// Address: 0x275bb0 - 0x275c18
void ps2__SPHIDA_SET_MM_LINE_POS__FP12RS_STACKDATAi_0x275bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_MM_LINE_POS__FP12RS_STACKDATAi_0x275bb0");
#endif

    switch (ctx->pc) {
        case 0x275bc4u: goto label_275bc4;
        case 0x275bd4u: goto label_275bd4;
        case 0x275c04u: goto label_275c04;
        default: break;
    }

    ctx->pc = 0x275bb0u;

    // 0x275bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275bbc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275BBCu;
    SET_GPR_U32(ctx, 31, 0x275BC4u);
    ctx->pc = 0x275BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275BBCu;
            // 0x275bc0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275BC4u; }
        if (ctx->pc != 0x275BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275BC4u; }
        if (ctx->pc != 0x275BC4u) { return; }
    }
    ctx->pc = 0x275BC4u;
label_275bc4:
    // 0x275bc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x275bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275bc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275bcc: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x275BCCu;
    SET_GPR_U32(ctx, 31, 0x275BD4u);
    ctx->pc = 0x275BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275BCCu;
            // 0x275bd0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275BD4u; }
        if (ctx->pc != 0x275BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275BD4u; }
        if (ctx->pc != 0x275BD4u) { return; }
    }
    ctx->pc = 0x275BD4u;
label_275bd4:
    // 0x275bd4: 0x8f839ed4  lw          $v1, -0x612C($gp)
    ctx->pc = 0x275bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x275bd8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275BD8u;
    {
        const bool branch_taken_0x275bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275BD8u;
            // 0x275bdc: 0x28e10005  slti        $at, $a3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275bd8) {
            ctx->pc = 0x275BE8u;
            goto label_275be8;
        }
    }
    ctx->pc = 0x275BE0u;
    // 0x275be0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x275BE0u;
    {
        const bool branch_taken_0x275be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275BE0u;
            // 0x275be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275be0) {
            ctx->pc = 0x275C08u;
            goto label_275c08;
        }
    }
    ctx->pc = 0x275BE8u;
label_275be8:
    // 0x275be8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x275BE8u;
    {
        const bool branch_taken_0x275be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x275BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275BE8u;
            // 0x275bec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275be8) {
            ctx->pc = 0x275C08u;
            goto label_275c08;
        }
    }
    ctx->pc = 0x275BF0u;
    // 0x275bf0: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x275bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x275bf4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x275bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275bf8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x275bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275bfc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x275BFCu;
    SET_GPR_U32(ctx, 31, 0x275C04u);
    ctx->pc = 0x275C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275BFCu;
            // 0x275c00: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C04u; }
        if (ctx->pc != 0x275C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275C04u; }
        if (ctx->pc != 0x275C04u) { return; }
    }
    ctx->pc = 0x275C04u;
label_275c04:
    // 0x275c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275c08:
    // 0x275c08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x275c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275c0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275c10: 0x3e00008  jr          $ra
    ctx->pc = 0x275C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275C10u;
            // 0x275c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275C18u;
}
