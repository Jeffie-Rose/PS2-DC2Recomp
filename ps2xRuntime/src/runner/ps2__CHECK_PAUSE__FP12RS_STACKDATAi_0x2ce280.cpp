#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_PAUSE__FP12RS_STACKDATAi
// Address: 0x2ce280 - 0x2ce2e8
void ps2__CHECK_PAUSE__FP12RS_STACKDATAi_0x2ce280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_PAUSE__FP12RS_STACKDATAi_0x2ce280");
#endif

    switch (ctx->pc) {
        case 0x2ce2c0u: goto label_2ce2c0;
        case 0x2ce2d0u: goto label_2ce2d0;
        default: break;
    }

    ctx->pc = 0x2ce280u;

    // 0x2ce280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce284: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ce284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce288: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ce288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ce28c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce290: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE290u;
    {
        const bool branch_taken_0x2ce290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE290u;
            // 0x2ce294: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce290) {
            ctx->pc = 0x2CE2A0u;
            goto label_2ce2a0;
        }
    }
    ctx->pc = 0x2CE298u;
    // 0x2ce298: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2CE298u;
    {
        const bool branch_taken_0x2ce298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE298u;
            // 0x2ce29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce298) {
            ctx->pc = 0x2CE2D4u;
            goto label_2ce2d4;
        }
    }
    ctx->pc = 0x2CE2A0u;
label_2ce2a0:
    // 0x2ce2a0: 0x8f829da4  lw          $v0, -0x625C($gp)
    ctx->pc = 0x2ce2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
    // 0x2ce2a4: 0x24502f90  addiu       $s0, $v0, 0x2F90
    ctx->pc = 0x2ce2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x2ce2a8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE2A8u;
    {
        const bool branch_taken_0x2ce2a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE2A8u;
            // 0x2ce2ac: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2a8) {
            ctx->pc = 0x2CE2B8u;
            goto label_2ce2b8;
        }
    }
    ctx->pc = 0x2CE2B0u;
    // 0x2ce2b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE2B0u;
    {
        const bool branch_taken_0x2ce2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE2B0u;
            // 0x2ce2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce2b0) {
            ctx->pc = 0x2CE2D4u;
            goto label_2ce2d4;
        }
    }
    ctx->pc = 0x2CE2B8u;
label_2ce2b8:
    // 0x2ce2b8: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE2B8u;
    SET_GPR_U32(ctx, 31, 0x2CE2C0u);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2C0u; }
        if (ctx->pc != 0x2CE2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2C0u; }
        if (ctx->pc != 0x2CE2C0u) { return; }
    }
    ctx->pc = 0x2CE2C0u;
label_2ce2c0:
    // 0x2ce2c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2ce2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ce2c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ce2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce2c8: 0xc0b37ac  jal         func_2CDEB0
    ctx->pc = 0x2CE2C8u;
    SET_GPR_U32(ctx, 31, 0x2CE2D0u);
    ctx->pc = 0x2CE2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE2C8u;
            // 0x2ce2cc: 0x622824  and         $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB0u;
    if (runtime->hasFunction(0x2CDEB0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2D0u; }
        if (ctx->pc != 0x2CE2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2cdeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE2D0u; }
        if (ctx->pc != 0x2CE2D0u) { return; }
    }
    ctx->pc = 0x2CE2D0u;
label_2ce2d0:
    // 0x2ce2d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce2d4:
    // 0x2ce2d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ce2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce2d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce2d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce2dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE2E0u;
            // 0x2ce2e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE2E8u;
}
