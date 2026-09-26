#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_FORM_PARTSONOFF_GRP__FP9SPI_STACKi
// Address: 0x254420 - 0x2544ec
void ps2__MENU_EXE_FORM_PARTSONOFF_GRP__FP9SPI_STACKi_0x254420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_FORM_PARTSONOFF_GRP__FP9SPI_STACKi_0x254420");
#endif

    switch (ctx->pc) {
        case 0x254458u: goto label_254458;
        case 0x254464u: goto label_254464;
        case 0x254480u: goto label_254480;
        case 0x254498u: goto label_254498;
        case 0x2544a0u: goto label_2544a0;
        case 0x2544acu: goto label_2544ac;
        default: break;
    }

    ctx->pc = 0x254420u;

    // 0x254420: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x254420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x254424: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x254424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x254428: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x254428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25442c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25442cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x254430: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x254430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x254434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25443c: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x25443cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254440: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254440u;
    {
        const bool branch_taken_0x254440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254440u;
            // 0x254444: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254440) {
            ctx->pc = 0x254450u;
            goto label_254450;
        }
    }
    ctx->pc = 0x254448u;
    // 0x254448: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x254448u;
    {
        const bool branch_taken_0x254448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25444Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254448u;
            // 0x25444c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254448) {
            ctx->pc = 0x2544CCu;
            goto label_2544cc;
        }
    }
    ctx->pc = 0x254450u;
label_254450:
    // 0x254450: 0xc05191c  jal         func_146470
    ctx->pc = 0x254450u;
    SET_GPR_U32(ctx, 31, 0x254458u);
    ctx->pc = 0x254454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254450u;
            // 0x254454: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254458u; }
        if (ctx->pc != 0x254458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254458u; }
        if (ctx->pc != 0x254458u) { return; }
    }
    ctx->pc = 0x254458u;
label_254458:
    // 0x254458: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x254458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x25445c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x25445Cu;
    SET_GPR_U32(ctx, 31, 0x254464u);
    ctx->pc = 0x254460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25445Cu;
            // 0x254460: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254464u; }
        if (ctx->pc != 0x254464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254464u; }
        if (ctx->pc != 0x254464u) { return; }
    }
    ctx->pc = 0x254464u;
label_254464:
    // 0x254464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x254464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254468: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x254468u;
    {
        const bool branch_taken_0x254468 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254468u;
            // 0x25446c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254468) {
            ctx->pc = 0x254478u;
            goto label_254478;
        }
    }
    ctx->pc = 0x254470u;
    // 0x254470: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x254470u;
    {
        const bool branch_taken_0x254470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254470u;
            // 0x254474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254470) {
            ctx->pc = 0x2544CCu;
            goto label_2544cc;
        }
    }
    ctx->pc = 0x254478u;
label_254478:
    // 0x254478: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254478u;
    SET_GPR_U32(ctx, 31, 0x254480u);
    ctx->pc = 0x25447Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254478u;
            // 0x25447c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254480u; }
        if (ctx->pc != 0x254480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254480u; }
        if (ctx->pc != 0x254480u) { return; }
    }
    ctx->pc = 0x254480u;
label_254480:
    // 0x254480: 0x2673fffe  addiu       $s3, $s3, -0x2
    ctx->pc = 0x254480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x254484: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x254484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254488: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x254488u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x25448c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x25448Cu;
    {
        const bool branch_taken_0x25448c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x254490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25448Cu;
            // 0x254490: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25448c) {
            ctx->pc = 0x2544C8u;
            goto label_2544c8;
        }
    }
    ctx->pc = 0x254494u;
    // 0x254494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_254498:
    // 0x254498: 0xc05191c  jal         func_146470
    ctx->pc = 0x254498u;
    SET_GPR_U32(ctx, 31, 0x2544A0u);
    ctx->pc = 0x25449Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254498u;
            // 0x25449c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2544A0u; }
        if (ctx->pc != 0x2544A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2544A0u; }
        if (ctx->pc != 0x2544A0u) { return; }
    }
    ctx->pc = 0x2544A0u;
label_2544a0:
    // 0x2544a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2544a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2544a4: 0xc089664  jal         func_225990
    ctx->pc = 0x2544A4u;
    SET_GPR_U32(ctx, 31, 0x2544ACu);
    ctx->pc = 0x2544A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2544A4u;
            // 0x2544a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2544ACu; }
        if (ctx->pc != 0x2544ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2544ACu; }
        if (ctx->pc != 0x2544ACu) { return; }
    }
    ctx->pc = 0x2544ACu;
label_2544ac:
    // 0x2544ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2544ACu;
    {
        const bool branch_taken_0x2544ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2544B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2544ACu;
            // 0x2544b0: 0x12182b  sltu        $v1, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544ac) {
            ctx->pc = 0x2544B8u;
            goto label_2544b8;
        }
    }
    ctx->pc = 0x2544B4u;
    // 0x2544b4: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x2544b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 3));
label_2544b8:
    // 0x2544b8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2544b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2544bc: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x2544bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2544c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2544C0u;
    {
        const bool branch_taken_0x2544c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2544C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2544C0u;
            // 0x2544c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544c0) {
            ctx->pc = 0x254498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_254498;
        }
    }
    ctx->pc = 0x2544C8u;
label_2544c8:
    // 0x2544c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2544c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2544cc:
    // 0x2544cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2544ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2544d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2544d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2544d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2544d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2544d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2544d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2544dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2544dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2544e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2544e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2544e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2544E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2544E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2544E4u;
            // 0x2544e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2544ECu;
}
