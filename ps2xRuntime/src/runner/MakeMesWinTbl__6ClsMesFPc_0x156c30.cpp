#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMesWinTbl__6ClsMesFPc
// Address: 0x156c30 - 0x156cb0
void MakeMesWinTbl__6ClsMesFPc_0x156c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMesWinTbl__6ClsMesFPc_0x156c30");
#endif

    switch (ctx->pc) {
        case 0x156c5cu: goto label_156c5c;
        case 0x156c64u: goto label_156c64;
        case 0x156c84u: goto label_156c84;
        case 0x156c98u: goto label_156c98;
        default: break;
    }

    ctx->pc = 0x156c30u;

    // 0x156c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x156c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x156c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x156c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x156c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156c40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x156c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c44: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x156C44u;
    {
        const bool branch_taken_0x156c44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x156C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C44u;
            // 0x156c48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c44) {
            ctx->pc = 0x156C54u;
            goto label_156c54;
        }
    }
    ctx->pc = 0x156C4Cu;
    // 0x156c4c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x156C4Cu;
    {
        const bool branch_taken_0x156c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156C4Cu;
            // 0x156c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c4c) {
            ctx->pc = 0x156C9Cu;
            goto label_156c9c;
        }
    }
    ctx->pc = 0x156C54u;
label_156c54:
    // 0x156c54: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x156C54u;
    SET_GPR_U32(ctx, 31, 0x156C5Cu);
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156C5Cu; }
        if (ctx->pc != 0x156C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156C5Cu; }
        if (ctx->pc != 0x156C5Cu) { return; }
    }
    ctx->pc = 0x156C5Cu;
label_156c5c:
    // 0x156c5c: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x156C5Cu;
    SET_GPR_U32(ctx, 31, 0x156C64u);
    ctx->pc = 0x156C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156C5Cu;
            // 0x156c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156C64u; }
        if (ctx->pc != 0x156C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156C64u; }
        if (ctx->pc != 0x156C64u) { return; }
    }
    ctx->pc = 0x156C64u;
label_156c64:
    // 0x156c64: 0xe62001b8  swc1        $f0, 0x1B8($s1)
    ctx->pc = 0x156c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 440), bits); }
    // 0x156c68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c70: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x156c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x156c74: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x156c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x156c78: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x156c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x156c7c: 0xc0552ac  jal         func_154AB0
    ctx->pc = 0x156C7Cu;
    SET_GPR_U32(ctx, 31, 0x156C84u);
    ctx->pc = 0x156C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156C7Cu;
            // 0x156c80: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154AB0u;
    if (runtime->hasFunction(0x154AB0u)) {
        auto targetFn = runtime->lookupFunction(0x154AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156C84u; }
        if (ctx->pc != 0x156C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWinTbl_str__6ClsMesFPcPiPi_0x154ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156C84u; }
        if (ctx->pc != 0x156C84u) { return; }
    }
    ctx->pc = 0x156C84u;
label_156c84:
    // 0x156c84: 0x87a60038  lh          $a2, 0x38($sp)
    ctx->pc = 0x156c84u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x156c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c8c: 0x87a7003c  lh          $a3, 0x3C($sp)
    ctx->pc = 0x156c8cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x156c90: 0xc055834  jal         func_1560D0
    ctx->pc = 0x156C90u;
    SET_GPR_U32(ctx, 31, 0x156C98u);
    ctx->pc = 0x156C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156C90u;
            // 0x156c94: 0x3405ff01  ori         $a1, $zero, 0xFF01 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156C98u; }
        if (ctx->pc != 0x156C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156C98u; }
        if (ctx->pc != 0x156C98u) { return; }
    }
    ctx->pc = 0x156C98u;
label_156c98:
    // 0x156c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x156c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156c9c:
    // 0x156c9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x156c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156ca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x156CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156CA8u;
            // 0x156cac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x156CB0u;
}
