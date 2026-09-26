#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc
// Address: 0x252350 - 0x2523d0
void menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc_0x252350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc_0x252350");
#endif

    switch (ctx->pc) {
        case 0x252378u: goto label_252378;
        case 0x252390u: goto label_252390;
        default: break;
    }

    ctx->pc = 0x252350u;

    // 0x252350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x252350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x252354: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x252354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x252358: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x252358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25235c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25235cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x252360: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x252360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252368: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x252368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25236c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252370: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x252370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252374: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x252374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_252378:
    // 0x252378: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x252378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x25237c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25237cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252380: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x252380u;
    {
        const bool branch_taken_0x252380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252380u;
            // 0x252384: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252380) {
            ctx->pc = 0x2523B0u;
            goto label_2523b0;
        }
    }
    ctx->pc = 0x252388u;
    // 0x252388: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x252388u;
    SET_GPR_U32(ctx, 31, 0x252390u);
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252390u; }
        if (ctx->pc != 0x252390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252390u; }
        if (ctx->pc != 0x252390u) { return; }
    }
    ctx->pc = 0x252390u;
label_252390:
    // 0x252390: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x252390u;
    {
        const bool branch_taken_0x252390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252390u;
            // 0x252394: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252390) {
            ctx->pc = 0x2523A4u;
            goto label_2523a4;
        }
    }
    ctx->pc = 0x252398u;
    // 0x252398: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x252398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x25239c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25239Cu;
    {
        const bool branch_taken_0x25239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25239Cu;
            // 0x2523a0: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25239c) {
            ctx->pc = 0x2523B4u;
            goto label_2523b4;
        }
    }
    ctx->pc = 0x2523A4u;
label_2523a4:
    // 0x2523a4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2523a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2523a8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x2523A8u;
    {
        const bool branch_taken_0x2523a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2523A8u;
            // 0x2523ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523a8) {
            ctx->pc = 0x252378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_252378;
        }
    }
    ctx->pc = 0x2523B0u;
label_2523b0:
    // 0x2523b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2523b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2523b4:
    // 0x2523b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2523b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2523b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2523b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2523bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2523bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2523c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2523c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2523c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2523c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2523c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2523C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2523CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2523C8u;
            // 0x2523cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2523D0u;
}
