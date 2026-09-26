#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuBGReadInfo2Malloc__FP9mgCMemoryPi
// Address: 0x2afc90 - 0x2afd2c
void MenuBGReadInfo2Malloc__FP9mgCMemoryPi_0x2afc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuBGReadInfo2Malloc__FP9mgCMemoryPi_0x2afc90");
#endif

    switch (ctx->pc) {
        case 0x2afcb8u: goto label_2afcb8;
        case 0x2afcd0u: goto label_2afcd0;
        case 0x2afce8u: goto label_2afce8;
        default: break;
    }

    ctx->pc = 0x2afc90u;

    // 0x2afc90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2afc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2afc94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2afc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2afc98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2afc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2afc9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2afc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2afca0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2afca0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afca4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2afca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2afca8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2afca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afcac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2afcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2afcb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2afcb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afcb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2afcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2afcb8:
    // 0x2afcb8: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x2afcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2afcbc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2afcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2afcc0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2AFCC0u;
    {
        const bool branch_taken_0x2afcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFCC0u;
            // 0x2afcc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afcc0) {
            ctx->pc = 0x2AFCF0u;
            goto label_2afcf0;
        }
    }
    ctx->pc = 0x2AFCC8u;
    // 0x2afcc8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2AFCC8u;
    SET_GPR_U32(ctx, 31, 0x2AFCD0u);
    ctx->pc = 0x2AFCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFCC8u;
            // 0x2afccc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFCD0u; }
        if (ctx->pc != 0x2AFCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFCD0u; }
        if (ctx->pc != 0x2AFCD0u) { return; }
    }
    ctx->pc = 0x2AFCD0u;
label_2afcd0:
    // 0x2afcd0: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2afcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2afcd4: 0x2463ca80  addiu       $v1, $v1, -0x3580
    ctx->pc = 0x2afcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953600));
    // 0x2afcd8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2afcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2afcdc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2afcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2afce0: 0xc0abf08  jal         func_2AFC20
    ctx->pc = 0x2AFCE0u;
    SET_GPR_U32(ctx, 31, 0x2AFCE8u);
    ctx->pc = 0x2AFCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFCE0u;
            // 0x2afce4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC20u;
    if (runtime->hasFunction(0x2AFC20u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFCE8u; }
        if (ctx->pc != 0x2AFCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuBGReadInfo2__FP17MENU_BGREAD_INFO2_0x2afc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AFCE8u; }
        if (ctx->pc != 0x2AFCE8u) { return; }
    }
    ctx->pc = 0x2AFCE8u;
label_2afce8:
    // 0x2afce8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFCE8u;
    {
        const bool branch_taken_0x2afce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afce8) {
            ctx->pc = 0x2AFD00u;
            goto label_2afd00;
        }
    }
    ctx->pc = 0x2AFCF0u;
label_2afcf0:
    // 0x2afcf0: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2afcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2afcf4: 0x2463ca80  addiu       $v1, $v1, -0x3580
    ctx->pc = 0x2afcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953600));
    // 0x2afcf8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2afcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2afcfc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2afcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2afd00:
    // 0x2afd00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2afd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2afd04: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x2afd04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2afd08: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2AFD08u;
    {
        const bool branch_taken_0x2afd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFD08u;
            // 0x2afd0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd08) {
            ctx->pc = 0x2AFCB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2afcb8;
        }
    }
    ctx->pc = 0x2AFD10u;
    // 0x2afd10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2afd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afd14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2afd14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afd18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2afd18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afd1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2afd1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afd20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2afd20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afd24: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFD24u;
            // 0x2afd28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AFD2Cu;
}
