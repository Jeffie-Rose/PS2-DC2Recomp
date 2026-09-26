#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PitchBend__9sndCSeSeqFiii
// Address: 0x18bfd0 - 0x18c048
void PitchBend__9sndCSeSeqFiii_0x18bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PitchBend__9sndCSeSeqFiii_0x18bfd0");
#endif

    switch (ctx->pc) {
        case 0x18bffcu: goto label_18bffc;
        case 0x18c01cu: goto label_18c01c;
        case 0x18c02cu: goto label_18c02c;
        default: break;
    }

    ctx->pc = 0x18bfd0u;

    // 0x18bfd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18bfd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18bfd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18bfdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bfe0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18bfe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18bfe8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18bfe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bfec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18bff0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18bff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bff4: 0xc062efc  jal         func_18BBF0
    ctx->pc = 0x18BFF4u;
    SET_GPR_U32(ctx, 31, 0x18BFFCu);
    ctx->pc = 0x18BFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFF4u;
            // 0x18bff8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BBF0u;
    if (runtime->hasFunction(0x18BBF0u)) {
        auto targetFn = runtime->lookupFunction(0x18BBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFFCu; }
        if (ctx->pc != 0x18BFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_trk__9sndCSeSeqFi_0x18bbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFFCu; }
        if (ctx->pc != 0x18BFFCu) { return; }
    }
    ctx->pc = 0x18BFFCu;
label_18bffc:
    // 0x18bffc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18BFFCu;
    {
        const bool branch_taken_0x18bffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bffc) {
            ctx->pc = 0x18C02Cu;
            goto label_18c02c;
        }
    }
    ctx->pc = 0x18C004u;
    // 0x18c004: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x18c004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x18c008: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18c008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c00c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x18c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18c010: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18c010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c014: 0xc063118  jal         func_18C460
    ctx->pc = 0x18C014u;
    SET_GPR_U32(ctx, 31, 0x18C01Cu);
    ctx->pc = 0x18C018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C014u;
            // 0x18c018: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C460u;
    if (runtime->hasFunction(0x18C460u)) {
        auto targetFn = runtime->lookupFunction(0x18C460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C01Cu; }
        if (ctx->pc != 0x18C01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PitchBend__8sndTrackFii_0x18c460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C01Cu; }
        if (ctx->pc != 0x18C01Cu) { return; }
    }
    ctx->pc = 0x18C01Cu;
label_18c01c:
    // 0x18c01c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C01Cu;
    {
        const bool branch_taken_0x18c01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C01Cu;
            // 0x18c020: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c01c) {
            ctx->pc = 0x18C02Cu;
            goto label_18c02c;
        }
    }
    ctx->pc = 0x18C024u;
    // 0x18c024: 0xc063078  jal         func_18C1E0
    ctx->pc = 0x18C024u;
    SET_GPR_U32(ctx, 31, 0x18C02Cu);
    ctx->pc = 0x18C028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C024u;
            // 0x18c028: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C1E0u;
    if (runtime->hasFunction(0x18C1E0u)) {
        auto targetFn = runtime->lookupFunction(0x18C1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C02Cu; }
        if (ctx->pc != 0x18C02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SendPitch__9sndCSeSeqFi_0x18c1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C02Cu; }
        if (ctx->pc != 0x18C02Cu) { return; }
    }
    ctx->pc = 0x18C02Cu;
label_18c02c:
    // 0x18c02c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18c02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c030: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18c030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c03c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c040: 0x3e00008  jr          $ra
    ctx->pc = 0x18C040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C040u;
            // 0x18c044: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C048u;
}
