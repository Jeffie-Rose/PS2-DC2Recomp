#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgBreakSubGame__Fv
// Address: 0x304350 - 0x3043cc
void sgBreakSubGame__Fv_0x304350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgBreakSubGame__Fv_0x304350");
#endif

    switch (ctx->pc) {
        case 0x304364u: goto label_304364;
        case 0x3043b0u: goto label_3043b0;
        default: break;
    }

    ctx->pc = 0x304350u;

    // 0x304350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x304358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30435c: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x30435Cu;
    SET_GPR_U32(ctx, 31, 0x304364u);
    ctx->pc = 0x304360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30435Cu;
            // 0x304360: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304364u; }
        if (ctx->pc != 0x304364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304364u; }
        if (ctx->pc != 0x304364u) { return; }
    }
    ctx->pc = 0x304364u;
label_304364:
    // 0x304364: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304364u;
    {
        const bool branch_taken_0x304364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304364u;
            // 0x304368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304364) {
            ctx->pc = 0x304374u;
            goto label_304374;
        }
    }
    ctx->pc = 0x30436Cu;
    // 0x30436c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x30436Cu;
    {
        const bool branch_taken_0x30436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30436Cu;
            // 0x304370: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30436c) {
            ctx->pc = 0x3043C0u;
            goto label_3043c0;
        }
    }
    ctx->pc = 0x304374u;
label_304374:
    // 0x304374: 0x8f83a104  lw          $v1, -0x5EFC($gp)
    ctx->pc = 0x304374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942980)));
    // 0x304378: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x304378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30437c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30437Cu;
    {
        const bool branch_taken_0x30437c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30437Cu;
            // 0x304380: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30437c) {
            ctx->pc = 0x3043B8u;
            goto label_3043b8;
        }
    }
    ctx->pc = 0x304384u;
    // 0x304384: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x304384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x304388: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x304388u;
    {
        const bool branch_taken_0x304388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304388u;
            // 0x30438c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304388) {
            ctx->pc = 0x3043B4u;
            goto label_3043b4;
        }
    }
    ctx->pc = 0x304390u;
    // 0x304390: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x304390u;
    {
        const bool branch_taken_0x304390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304390u;
            // 0x304394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304390) {
            ctx->pc = 0x3043B4u;
            goto label_3043b4;
        }
    }
    ctx->pc = 0x304398u;
    // 0x304398: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304398u;
    {
        const bool branch_taken_0x304398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x304398) {
            ctx->pc = 0x3043A8u;
            goto label_3043a8;
        }
    }
    ctx->pc = 0x3043A0u;
    // 0x3043a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3043A0u;
    {
        const bool branch_taken_0x3043a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3043a0) {
            ctx->pc = 0x3043B4u;
            goto label_3043b4;
        }
    }
    ctx->pc = 0x3043A8u;
label_3043a8:
    // 0x3043a8: 0xc0bf708  jal         func_2FDC20
    ctx->pc = 0x3043A8u;
    SET_GPR_U32(ctx, 31, 0x3043B0u);
    ctx->pc = 0x2FDC20u;
    if (runtime->hasFunction(0x2FDC20u)) {
        auto targetFn = runtime->lookupFunction(0x2FDC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3043B0u; }
        if (ctx->pc != 0x3043B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgBreakFishing__Fv_0x2fdc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3043B0u; }
        if (ctx->pc != 0x3043B0u) { return; }
    }
    ctx->pc = 0x3043B0u;
label_3043b0:
    // 0x3043b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3043b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3043b4:
    // 0x3043b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3043b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3043b8:
    // 0x3043b8: 0xaf80a104  sw          $zero, -0x5EFC($gp)
    ctx->pc = 0x3043b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942980), GPR_U32(ctx, 0));
    // 0x3043bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3043bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3043c0:
    // 0x3043c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3043c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3043c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3043C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3043C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3043C4u;
            // 0x3043c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3043CCu;
}
