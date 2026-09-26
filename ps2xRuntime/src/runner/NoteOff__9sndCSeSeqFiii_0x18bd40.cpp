#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NoteOff__9sndCSeSeqFiii
// Address: 0x18bd40 - 0x18bdcc
void NoteOff__9sndCSeSeqFiii_0x18bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NoteOff__9sndCSeSeqFiii_0x18bd40");
#endif

    switch (ctx->pc) {
        case 0x18bd6cu: goto label_18bd6c;
        case 0x18bd8cu: goto label_18bd8c;
        case 0x18bdb0u: goto label_18bdb0;
        default: break;
    }

    ctx->pc = 0x18bd40u;

    // 0x18bd40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18bd44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18bd48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18bd4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bd50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18bd50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18bd58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18bd58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18bd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18bd60: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x18bd60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd64: 0xc062efc  jal         func_18BBF0
    ctx->pc = 0x18BD64u;
    SET_GPR_U32(ctx, 31, 0x18BD6Cu);
    ctx->pc = 0x18BD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD64u;
            // 0x18bd68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BBF0u;
    if (runtime->hasFunction(0x18BBF0u)) {
        auto targetFn = runtime->lookupFunction(0x18BBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD6Cu; }
        if (ctx->pc != 0x18BD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_trk__9sndCSeSeqFi_0x18bbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD6Cu; }
        if (ctx->pc != 0x18BD6Cu) { return; }
    }
    ctx->pc = 0x18BD6Cu;
label_18bd6c:
    // 0x18bd6c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18BD6Cu;
    {
        const bool branch_taken_0x18bd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd6c) {
            ctx->pc = 0x18BDB0u;
            goto label_18bdb0;
        }
    }
    ctx->pc = 0x18BD74u;
    // 0x18bd74: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x18bd74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x18bd78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18bd78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd7c: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x18bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x18bd80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18bd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd84: 0xc0630f0  jal         func_18C3C0
    ctx->pc = 0x18BD84u;
    SET_GPR_U32(ctx, 31, 0x18BD8Cu);
    ctx->pc = 0x18BD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD84u;
            // 0x18bd88: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C3C0u;
    if (runtime->hasFunction(0x18C3C0u)) {
        auto targetFn = runtime->lookupFunction(0x18C3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD8Cu; }
        if (ctx->pc != 0x18BD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NoteOff__8sndTrackFii_0x18c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD8Cu; }
        if (ctx->pc != 0x18BD8Cu) { return; }
    }
    ctx->pc = 0x18BD8Cu;
label_18bd8c:
    // 0x18bd8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18BD8Cu;
    {
        const bool branch_taken_0x18bd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bd8c) {
            ctx->pc = 0x18BDB0u;
            goto label_18bdb0;
        }
    }
    ctx->pc = 0x18BD94u;
    // 0x18bd94: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x18bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x18bd98: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18bd9c: 0x80460032  lb          $a2, 0x32($v0)
    ctx->pc = 0x18bd9cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x18bda0: 0x80480036  lb          $t0, 0x36($v0)
    ctx->pc = 0x18bda0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x18bda4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x18bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18bda8: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18BDA8u;
    SET_GPR_U32(ctx, 31, 0x18BDB0u);
    ctx->pc = 0x18BDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDA8u;
            // 0x18bdac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDB0u; }
        if (ctx->pc != 0x18BDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStopPBPrKr__Fiiiii_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDB0u; }
        if (ctx->pc != 0x18BDB0u) { return; }
    }
    ctx->pc = 0x18BDB0u;
label_18bdb0:
    // 0x18bdb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18bdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bdb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18bdb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bdb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bdb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bdbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18bdbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bdc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18bdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x18BDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDC4u;
            // 0x18bdc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BDCCu;
}
