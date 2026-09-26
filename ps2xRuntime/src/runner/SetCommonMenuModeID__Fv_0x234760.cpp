#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCommonMenuModeID__Fv
// Address: 0x234760 - 0x234820
void SetCommonMenuModeID__Fv_0x234760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCommonMenuModeID__Fv_0x234760");
#endif

    switch (ctx->pc) {
        case 0x234778u: goto label_234778;
        case 0x234780u: goto label_234780;
        case 0x2347d4u: goto label_2347d4;
        default: break;
    }

    ctx->pc = 0x234760u;

    // 0x234760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x234768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23476c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x23476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x234770: 0xc064220  jal         func_190880
    ctx->pc = 0x234770u;
    SET_GPR_U32(ctx, 31, 0x234778u);
    ctx->pc = 0x234774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234770u;
            // 0x234774: 0x84500050  lh          $s0, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234778u; }
        if (ctx->pc != 0x234778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234778u; }
        if (ctx->pc != 0x234778u) { return; }
    }
    ctx->pc = 0x234778u;
label_234778:
    // 0x234778: 0xc0bda00  jal         func_2F6800
    ctx->pc = 0x234778u;
    SET_GPR_U32(ctx, 31, 0x234780u);
    ctx->pc = 0x23477Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234778u;
            // 0x23477c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6800u;
    if (runtime->hasFunction(0x2F6800u)) {
        auto targetFn = runtime->lookupFunction(0x2F6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234780u; }
        if (ctx->pc != 0x234780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitCtrl__9CSaveDataFv_0x2f6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234780u; }
        if (ctx->pc != 0x234780u) { return; }
    }
    ctx->pc = 0x234780u;
label_234780:
    // 0x234780: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x234780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x234784: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x234784u;
    {
        const bool branch_taken_0x234784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x234788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234784u;
            // 0x234788: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234784) {
            ctx->pc = 0x234790u;
            goto label_234790;
        }
    }
    ctx->pc = 0x23478Cu;
    // 0x23478c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23478cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234790:
    // 0x234790: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x234790u;
    {
        const bool branch_taken_0x234790 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x234794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234790u;
            // 0x234794: 0x2e010002  sltiu       $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234790) {
            ctx->pc = 0x2347A0u;
            goto label_2347a0;
        }
    }
    ctx->pc = 0x234798u;
    // 0x234798: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x234798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23479c: 0x2e010002  sltiu       $at, $s0, 0x2
    ctx->pc = 0x23479cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2347a0:
    // 0x2347a0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x2347A0u;
    {
        const bool branch_taken_0x2347a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2347A0u;
            // 0x2347a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347a0) {
            ctx->pc = 0x234810u;
            goto label_234810;
        }
    }
    ctx->pc = 0x2347A8u;
    // 0x2347a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2347a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2347ac: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2347acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2347b0: 0x3c0801ed  lui         $t0, 0x1ED
    ctx->pc = 0x2347b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)493 << 16));
    // 0x2347b4: 0x103940  sll         $a3, $s0, 5
    ctx->pc = 0x2347b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2347b8: 0x24630a20  addiu       $v1, $v1, 0xA20
    ctx->pc = 0x2347b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2592));
    // 0x2347bc: 0x674821  addu        $t1, $v1, $a3
    ctx->pc = 0x2347bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2347c0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2347c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2347c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2347c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2347c8: 0x30460010  andi        $a2, $v0, 0x10
    ctx->pc = 0x2347c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2347cc: 0x2508d710  addiu       $t0, $t0, -0x28F0
    ctx->pc = 0x2347ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956816));
    // 0x2347d0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2347d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2347d4:
    // 0x2347d4: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x2347d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2347d8: 0x10b6021  addu        $t4, $t0, $t3
    ctx->pc = 0x2347d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x2347dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2347dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2347e0: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x2347e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x2347e4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2347e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2347e8: 0x14670005  bne         $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2347E8u;
    {
        const bool branch_taken_0x2347e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x2347e8) {
            ctx->pc = 0x234800u;
            goto label_234800;
        }
    }
    ctx->pc = 0x2347F0u;
    // 0x2347f0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2347F0u;
    {
        const bool branch_taken_0x2347f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2347f0) {
            ctx->pc = 0x234800u;
            goto label_234800;
        }
    }
    ctx->pc = 0x2347F8u;
    // 0x2347f8: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x2347f8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x2347fc: 0xa3848f1c  sb          $a0, -0x70E4($gp)
    ctx->pc = 0x2347fcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938396), (uint8_t)GPR_U32(ctx, 4));
label_234800:
    // 0x234800: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x234800u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x234804: 0x29430008  slti        $v1, $t2, 0x8
    ctx->pc = 0x234804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x234808: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x234808u;
    {
        const bool branch_taken_0x234808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23480Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234808u;
            // 0x23480c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234808) {
            ctx->pc = 0x2347D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2347d4;
        }
    }
    ctx->pc = 0x234810u;
label_234810:
    // 0x234810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234818: 0x3e00008  jr          $ra
    ctx->pc = 0x234818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234818u;
            // 0x23481c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234820u;
}
