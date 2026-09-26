#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_INVENTION_ID__FP12RS_STACKDATAi
// Address: 0x2691a0 - 0x269228
void ps2__GET_INVENTION_ID__FP12RS_STACKDATAi_0x2691a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_INVENTION_ID__FP12RS_STACKDATAi_0x2691a0");
#endif

    switch (ctx->pc) {
        case 0x2691b8u: goto label_2691b8;
        case 0x2691f8u: goto label_2691f8;
        case 0x269204u: goto label_269204;
        case 0x269210u: goto label_269210;
        default: break;
    }

    ctx->pc = 0x2691a0u;

    // 0x2691a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2691a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2691a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2691a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2691a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2691a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2691ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2691acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2691b0: 0xc064220  jal         func_190880
    ctx->pc = 0x2691B0u;
    SET_GPR_U32(ctx, 31, 0x2691B8u);
    ctx->pc = 0x2691B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2691B0u;
            // 0x2691b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2691B8u; }
        if (ctx->pc != 0x2691B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2691B8u; }
        if (ctx->pc != 0x2691B8u) { return; }
    }
    ctx->pc = 0x2691B8u;
label_2691b8:
    // 0x2691b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2691B8u;
    {
        const bool branch_taken_0x2691b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2691BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2691B8u;
            // 0x2691bc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691b8) {
            ctx->pc = 0x2691C8u;
            goto label_2691c8;
        }
    }
    ctx->pc = 0x2691C0u;
    // 0x2691c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2691C0u;
    {
        const bool branch_taken_0x2691c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2691C0u;
            // 0x2691c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691c0) {
            ctx->pc = 0x269214u;
            goto label_269214;
        }
    }
    ctx->pc = 0x2691C8u;
label_2691c8:
    // 0x2691c8: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2691c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x2691cc: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x2691ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2691d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2691D0u;
    {
        const bool branch_taken_0x2691d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2691D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2691D0u;
            // 0x2691d4: 0x24507f30  addiu       $s0, $v0, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691d0) {
            ctx->pc = 0x2691E0u;
            goto label_2691e0;
        }
    }
    ctx->pc = 0x2691D8u;
    // 0x2691d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2691D8u;
    {
        const bool branch_taken_0x2691d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2691D8u;
            // 0x2691dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691d8) {
            ctx->pc = 0x269214u;
            goto label_269214;
        }
    }
    ctx->pc = 0x2691E0u;
label_2691e0:
    // 0x2691e0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2691E0u;
    {
        const bool branch_taken_0x2691e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2691E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2691E0u;
            // 0x2691e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691e0) {
            ctx->pc = 0x2691F0u;
            goto label_2691f0;
        }
    }
    ctx->pc = 0x2691E8u;
    // 0x2691e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2691E8u;
    {
        const bool branch_taken_0x2691e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2691E8u;
            // 0x2691ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691e8) {
            ctx->pc = 0x269214u;
            goto label_269214;
        }
    }
    ctx->pc = 0x2691F0u;
label_2691f0:
    // 0x2691f0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2691F0u;
    SET_GPR_U32(ctx, 31, 0x2691F8u);
    ctx->pc = 0x2691F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2691F0u;
            // 0x2691f4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2691F8u; }
        if (ctx->pc != 0x2691F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2691F8u; }
        if (ctx->pc != 0x2691F8u) { return; }
    }
    ctx->pc = 0x2691F8u;
label_2691f8:
    // 0x2691f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2691f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2691fc: 0xc07fc48  jal         func_1FF120
    ctx->pc = 0x2691FCu;
    SET_GPR_U32(ctx, 31, 0x269204u);
    ctx->pc = 0x269200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2691FCu;
            // 0x269200: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF120u;
    if (runtime->hasFunction(0x1FF120u)) {
        auto targetFn = runtime->lookupFunction(0x1FF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269204u; }
        if (ctx->pc != 0x269204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAlreadyCreatedItem__15CInventUserDataFi_0x1ff120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269204u; }
        if (ctx->pc != 0x269204u) { return; }
    }
    ctx->pc = 0x269204u;
label_269204:
    // 0x269204: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x269204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269208: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x269208u;
    SET_GPR_U32(ctx, 31, 0x269210u);
    ctx->pc = 0x26920Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269208u;
            // 0x26920c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269210u; }
        if (ctx->pc != 0x269210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269210u; }
        if (ctx->pc != 0x269210u) { return; }
    }
    ctx->pc = 0x269210u;
label_269210:
    // 0x269210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269214:
    // 0x269214: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x269214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x269218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26921c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26921cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269220: 0x3e00008  jr          $ra
    ctx->pc = 0x269220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269220u;
            // 0x269224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269228u;
}
