#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateLoadThread__FP9mgCMemory
// Address: 0x2fcfa0 - 0x2fd040
void CreateLoadThread__FP9mgCMemory_0x2fcfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateLoadThread__FP9mgCMemory_0x2fcfa0");
#endif

    switch (ctx->pc) {
        case 0x2fcfb8u: goto label_2fcfb8;
        case 0x2fd018u: goto label_2fd018;
        case 0x2fd030u: goto label_2fd030;
        default: break;
    }

    ctx->pc = 0x2fcfa0u;

    // 0x2fcfa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fcfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fcfa4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2fcfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2fcfa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fcfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fcfac: 0x24054001  addiu       $a1, $zero, 0x4001
    ctx->pc = 0x2fcfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16385));
    // 0x2fcfb0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2FCFB0u;
    SET_GPR_U32(ctx, 31, 0x2FCFB8u);
    ctx->pc = 0x2FCFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCFB0u;
            // 0x2fcfb4: 0xaf82a074  sw          $v0, -0x5F8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCFB8u; }
        if (ctx->pc != 0x2FCFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCFB8u; }
        if (ctx->pc != 0x2FCFB8u) { return; }
    }
    ctx->pc = 0x2FCFB8u;
label_2fcfb8:
    // 0x2fcfb8: 0xaf82a078  sw          $v0, -0x5F88($gp)
    ctx->pc = 0x2fcfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942840), GPR_U32(ctx, 2));
    // 0x2fcfbc: 0x8f83a078  lw          $v1, -0x5F88($gp)
    ctx->pc = 0x2fcfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942840)));
    // 0x2fcfc0: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x2fcfc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2fcfc4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCFC4u;
    {
        const bool branch_taken_0x2fcfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcfc4) {
            ctx->pc = 0x2FCFDCu;
            goto label_2fcfdc;
        }
    }
    ctx->pc = 0x2FCFCCu;
    // 0x2fcfcc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2fcfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2fcfd0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2fcfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fcfd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2fcfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fcfd8: 0xaf82a078  sw          $v0, -0x5F88($gp)
    ctx->pc = 0x2fcfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942840), GPR_U32(ctx, 2));
label_2fcfdc:
    // 0x2fcfdc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2fcfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x2fcfe0: 0x8f83a078  lw          $v1, -0x5F88($gp)
    ctx->pc = 0x2fcfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942840)));
    // 0x2fcfe4: 0x2442d0e0  addiu       $v0, $v0, -0x2F20
    ctx->pc = 0x2fcfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955232));
    // 0x2fcfe8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2fcfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fcfec: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2fcfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2fcff0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fcff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fcff4: 0xaf80a084  sw          $zero, -0x5F7C($gp)
    ctx->pc = 0x2fcff4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 0));
    // 0x2fcff8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2fcff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2fcffc: 0x27820000  addiu       $v0, $gp, 0x0
    ctx->pc = 0x2fcffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x2fd000: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2fd000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2fd004: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2fd004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2fd008: 0x8f82a074  lw          $v0, -0x5F8C($gp)
    ctx->pc = 0x2fd008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942836)));
    // 0x2fd00c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2fd00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2fd010: 0xc043fb8  jal         func_10FEE0
    ctx->pc = 0x2FD010u;
    SET_GPR_U32(ctx, 31, 0x2FD018u);
    ctx->pc = 0x2FD014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD010u;
            // 0x2fd014: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEE0u;
    if (runtime->hasFunction(0x10FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD018u; }
        if (ctx->pc != 0x2FD018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x10fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD018u; }
        if (ctx->pc != 0x2FD018u) { return; }
    }
    ctx->pc = 0x2FD018u;
label_2fd018:
    // 0x2fd018: 0xaf82a07c  sw          $v0, -0x5F84($gp)
    ctx->pc = 0x2fd018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942844), GPR_U32(ctx, 2));
    // 0x2fd01c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fd01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd020: 0x8f84a07c  lw          $a0, -0x5F84($gp)
    ctx->pc = 0x2fd020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942844)));
    // 0x2fd024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd028: 0xc043fc0  jal         func_10FF00
    ctx->pc = 0x2FD028u;
    SET_GPR_U32(ctx, 31, 0x2FD030u);
    ctx->pc = 0x2FD02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD028u;
            // 0x2fd02c: 0xaf82a080  sw          $v0, -0x5F80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF00u;
    if (runtime->hasFunction(0x10FF00u)) {
        auto targetFn = runtime->lookupFunction(0x10FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD030u; }
        if (ctx->pc != 0x2FD030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x10ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD030u; }
        if (ctx->pc != 0x2FD030u) { return; }
    }
    ctx->pc = 0x2FD030u;
label_2fd030:
    // 0x2fd030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fd030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd038: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD038u;
            // 0x2fd03c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FD040u;
}
