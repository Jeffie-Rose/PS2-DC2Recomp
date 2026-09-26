#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CtrlChg__9sndCSeSeqFiii
// Address: 0x18bec0 - 0x18bf64
void CtrlChg__9sndCSeSeqFiii_0x18bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CtrlChg__9sndCSeSeqFiii_0x18bec0");
#endif

    switch (ctx->pc) {
        case 0x18beecu: goto label_18beec;
        case 0x18bf0cu: goto label_18bf0c;
        case 0x18bf28u: goto label_18bf28;
        case 0x18bf48u: goto label_18bf48;
        default: break;
    }

    ctx->pc = 0x18bec0u;

    // 0x18bec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18bec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18bec4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18bec8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18bec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18becc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18beccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bed0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x18bed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bed4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18bed8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18bed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bedc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18bedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18bee0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18bee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bee4: 0xc062efc  jal         func_18BBF0
    ctx->pc = 0x18BEE4u;
    SET_GPR_U32(ctx, 31, 0x18BEECu);
    ctx->pc = 0x18BEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BEE4u;
            // 0x18bee8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BBF0u;
    if (runtime->hasFunction(0x18BBF0u)) {
        auto targetFn = runtime->lookupFunction(0x18BBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEECu; }
        if (ctx->pc != 0x18BEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_trk__9sndCSeSeqFi_0x18bbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEECu; }
        if (ctx->pc != 0x18BEECu) { return; }
    }
    ctx->pc = 0x18BEECu;
label_18beec:
    // 0x18beec: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x18BEECu;
    {
        const bool branch_taken_0x18beec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18beec) {
            ctx->pc = 0x18BF48u;
            goto label_18bf48;
        }
    }
    ctx->pc = 0x18BEF4u;
    // 0x18bef4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x18bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x18bef8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x18bef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18befc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x18befcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18bf00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bf00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf04: 0xc063100  jal         func_18C400
    ctx->pc = 0x18BF04u;
    SET_GPR_U32(ctx, 31, 0x18BF0Cu);
    ctx->pc = 0x18BF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF04u;
            // 0x18bf08: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C400u;
    if (runtime->hasFunction(0x18C400u)) {
        auto targetFn = runtime->lookupFunction(0x18C400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF0Cu; }
        if (ctx->pc != 0x18BF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CtrlChg__8sndTrackFii_0x18c400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF0Cu; }
        if (ctx->pc != 0x18BF0Cu) { return; }
    }
    ctx->pc = 0x18BF0Cu;
label_18bf0c:
    // 0x18bf0c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18BF0Cu;
    {
        const bool branch_taken_0x18bf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF0Cu;
            // 0x18bf10: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf0c) {
            ctx->pc = 0x18BF48u;
            goto label_18bf48;
        }
    }
    ctx->pc = 0x18BF14u;
    // 0x18bf14: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BF14u;
    {
        const bool branch_taken_0x18bf14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x18BF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF14u;
            // 0x18bf18: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf14) {
            ctx->pc = 0x18BF2Cu;
            goto label_18bf2c;
        }
    }
    ctx->pc = 0x18BF1Cu;
    // 0x18bf1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18bf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf20: 0xc063050  jal         func_18C140
    ctx->pc = 0x18BF20u;
    SET_GPR_U32(ctx, 31, 0x18BF28u);
    ctx->pc = 0x18BF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF20u;
            // 0x18bf24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C140u;
    if (runtime->hasFunction(0x18C140u)) {
        auto targetFn = runtime->lookupFunction(0x18C140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF28u; }
        if (ctx->pc != 0x18BF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendPan__9sndCSeSeqFi_0x18c140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF28u; }
        if (ctx->pc != 0x18BF28u) { return; }
    }
    ctx->pc = 0x18BF28u;
label_18bf28:
    // 0x18bf28: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x18bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_18bf2c:
    // 0x18bf2c: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BF2Cu;
    {
        const bool branch_taken_0x18bf2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x18BF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF2Cu;
            // 0x18bf30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf2c) {
            ctx->pc = 0x18BF40u;
            goto label_18bf40;
        }
    }
    ctx->pc = 0x18BF34u;
    // 0x18bf34: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18bf38: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BF38u;
    {
        const bool branch_taken_0x18bf38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x18bf38) {
            ctx->pc = 0x18BF48u;
            goto label_18bf48;
        }
    }
    ctx->pc = 0x18BF40u;
label_18bf40:
    // 0x18bf40: 0xc063014  jal         func_18C050
    ctx->pc = 0x18BF40u;
    SET_GPR_U32(ctx, 31, 0x18BF48u);
    ctx->pc = 0x18BF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF40u;
            // 0x18bf44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C050u;
    if (runtime->hasFunction(0x18C050u)) {
        auto targetFn = runtime->lookupFunction(0x18C050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF48u; }
        if (ctx->pc != 0x18BF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendVol__9sndCSeSeqFi_0x18c050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BF48u; }
        if (ctx->pc != 0x18BF48u) { return; }
    }
    ctx->pc = 0x18BF48u;
label_18bf48:
    // 0x18bf48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18bf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bf4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18bf4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bf50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bf50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bf54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18bf54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bf58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18bf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x18BF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF5Cu;
            // 0x18bf60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BF64u;
}
