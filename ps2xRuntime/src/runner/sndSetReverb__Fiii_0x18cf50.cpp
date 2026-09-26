#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetReverb__Fiii
// Address: 0x18cf50 - 0x18cfdc
void sndSetReverb__Fiii_0x18cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetReverb__Fiii_0x18cf50");
#endif

    switch (ctx->pc) {
        case 0x18cf90u: goto label_18cf90;
        case 0x18cfa4u: goto label_18cfa4;
        case 0x18cfc4u: goto label_18cfc4;
        default: break;
    }

    ctx->pc = 0x18cf50u;

    // 0x18cf50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18cf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18cf54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18cf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18cf58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18cf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18cf5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18cf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18cf60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18cf60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18cf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18cf68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18cf68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf6c: 0x6400015  bltz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x18CF6Cu;
    {
        const bool branch_taken_0x18cf6c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x18CF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF6Cu;
            // 0x18cf70: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf6c) {
            ctx->pc = 0x18CFC4u;
            goto label_18cfc4;
        }
    }
    ctx->pc = 0x18CF74u;
    // 0x18cf74: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x18cf74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18cf78: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CF78u;
    {
        const bool branch_taken_0x18cf78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cf78) {
            ctx->pc = 0x18CF88u;
            goto label_18cf88;
        }
    }
    ctx->pc = 0x18CF80u;
    // 0x18cf80: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18CF80u;
    {
        const bool branch_taken_0x18cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF80u;
            // 0x18cf84: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf80) {
            ctx->pc = 0x18CFC8u;
            goto label_18cfc8;
        }
    }
    ctx->pc = 0x18CF88u;
label_18cf88:
    // 0x18cf88: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18CF88u;
    SET_GPR_U32(ctx, 31, 0x18CF90u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF90u; }
        if (ctx->pc != 0x18CF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF90u; }
        if (ctx->pc != 0x18CF90u) { return; }
    }
    ctx->pc = 0x18CF90u;
label_18cf90:
    // 0x18cf90: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x18cf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x18cf94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18cf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18cf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf9c: 0xc062250  jal         func_188940
    ctx->pc = 0x18CF9Cu;
    SET_GPR_U32(ctx, 31, 0x18CFA4u);
    ctx->pc = 0x18CFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF9Cu;
            // 0x18cfa0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188940u;
    if (runtime->hasFunction(0x188940u)) {
        auto targetFn = runtime->lookupFunction(0x188940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFA4u; }
        if (ctx->pc != 0x18CFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReverb__6CSoundFiii_0x188940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFA4u; }
        if (ctx->pc != 0x18CFA4u) { return; }
    }
    ctx->pc = 0x18CFA4u;
label_18cfa4:
    // 0x18cfa4: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x18cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18cfa8: 0x27828a90  addiu       $v0, $gp, -0x7570
    ctx->pc = 0x18cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937232));
    // 0x18cfac: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x18cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18cfb0: 0x27828a98  addiu       $v0, $gp, -0x7568
    ctx->pc = 0x18cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937240));
    // 0x18cfb4: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x18cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x18cfb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18cfbc: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18CFBCu;
    SET_GPR_U32(ctx, 31, 0x18CFC4u);
    ctx->pc = 0x18CFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFBCu;
            // 0x18cfc0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFC4u; }
        if (ctx->pc != 0x18CFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFC4u; }
        if (ctx->pc != 0x18CFC4u) { return; }
    }
    ctx->pc = 0x18CFC4u;
label_18cfc4:
    // 0x18cfc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18cfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18cfc8:
    // 0x18cfc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18cfc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cfcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18cfccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cfd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18cfd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x18CFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFD4u;
            // 0x18cfd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CFDCu;
}
