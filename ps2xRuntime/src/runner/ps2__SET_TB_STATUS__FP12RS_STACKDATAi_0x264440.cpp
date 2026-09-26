#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_TB_STATUS__FP12RS_STACKDATAi
// Address: 0x264440 - 0x2644c0
void ps2__SET_TB_STATUS__FP12RS_STACKDATAi_0x264440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_TB_STATUS__FP12RS_STACKDATAi_0x264440");
#endif

    switch (ctx->pc) {
        case 0x2644a8u: goto label_2644a8;
        default: break;
    }

    ctx->pc = 0x264440u;

    // 0x264440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x264444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x264444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x264448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x264448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26444c: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x26444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x264450: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x264450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x264454: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264454u;
    {
        const bool branch_taken_0x264454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264454) {
            ctx->pc = 0x264464u;
            goto label_264464;
        }
    }
    ctx->pc = 0x26445Cu;
    // 0x26445c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26445Cu;
    {
        const bool branch_taken_0x26445c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26445Cu;
            // 0x264460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26445c) {
            ctx->pc = 0x2644B0u;
            goto label_2644b0;
        }
    }
    ctx->pc = 0x264464u;
label_264464:
    // 0x264464: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x264464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x264468: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264468u;
    {
        const bool branch_taken_0x264468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264468u;
            // 0x26446c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264468) {
            ctx->pc = 0x264478u;
            goto label_264478;
        }
    }
    ctx->pc = 0x264470u;
    // 0x264470: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x264470u;
    {
        const bool branch_taken_0x264470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264470u;
            // 0x264474: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264470) {
            ctx->pc = 0x2644B4u;
            goto label_2644b4;
        }
    }
    ctx->pc = 0x264478u;
label_264478:
    // 0x264478: 0x8c650a9c  lw          $a1, 0xA9C($v1)
    ctx->pc = 0x264478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2716)));
    // 0x26447c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x26447cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x264480: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x264480u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x264484: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x264484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x264488: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x264488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26448c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x26448cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x264490: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264490u;
    {
        const bool branch_taken_0x264490 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x264494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264490u;
            // 0x264494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264490) {
            ctx->pc = 0x2644A0u;
            goto label_2644a0;
        }
    }
    ctx->pc = 0x264498u;
    // 0x264498: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x264498u;
    {
        const bool branch_taken_0x264498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264498) {
            ctx->pc = 0x2644B0u;
            goto label_2644b0;
        }
    }
    ctx->pc = 0x2644A0u;
label_2644a0:
    // 0x2644a0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2644A0u;
    SET_GPR_U32(ctx, 31, 0x2644A8u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2644A8u; }
        if (ctx->pc != 0x2644A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2644A8u; }
        if (ctx->pc != 0x2644A8u) { return; }
    }
    ctx->pc = 0x2644A8u;
label_2644a8:
    // 0x2644a8: 0xa2020054  sb          $v0, 0x54($s0)
    ctx->pc = 0x2644a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x2644ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2644acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2644b0:
    // 0x2644b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2644b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2644b4:
    // 0x2644b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2644b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2644b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2644B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2644BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2644B8u;
            // 0x2644bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2644C0u;
}
