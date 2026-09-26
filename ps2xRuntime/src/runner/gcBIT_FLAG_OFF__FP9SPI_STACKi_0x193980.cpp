#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcBIT_FLAG_OFF__FP9SPI_STACKi
// Address: 0x193980 - 0x193a08
void gcBIT_FLAG_OFF__FP9SPI_STACKi_0x193980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcBIT_FLAG_OFF__FP9SPI_STACKi_0x193980");
#endif

    switch (ctx->pc) {
        case 0x1939acu: goto label_1939ac;
        case 0x1939b4u: goto label_1939b4;
        case 0x1939c4u: goto label_1939c4;
        case 0x1939d4u: goto label_1939d4;
        default: break;
    }

    ctx->pc = 0x193980u;

    // 0x193980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x193980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x193984: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x193984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x193988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x193988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19398c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193990: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x193990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193994: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x193994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19399c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x19399cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1939a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1939a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1939a4: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1939A4u;
    {
        const bool branch_taken_0x1939a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1939A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1939A4u;
            // 0x1939a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939a4) {
            ctx->pc = 0x1939E4u;
            goto label_1939e4;
        }
    }
    ctx->pc = 0x1939ACu;
label_1939ac:
    // 0x1939ac: 0xc064220  jal         func_190880
    ctx->pc = 0x1939ACu;
    SET_GPR_U32(ctx, 31, 0x1939B4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939B4u; }
        if (ctx->pc != 0x1939B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939B4u; }
        if (ctx->pc != 0x1939B4u) { return; }
    }
    ctx->pc = 0x1939B4u;
label_1939b4:
    // 0x1939b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1939b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1939b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939bc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1939BCu;
    SET_GPR_U32(ctx, 31, 0x1939C4u);
    ctx->pc = 0x1939C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1939BCu;
            // 0x1939c0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939C4u; }
        if (ctx->pc != 0x1939C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939C4u; }
        if (ctx->pc != 0x1939C4u) { return; }
    }
    ctx->pc = 0x1939C4u;
label_1939c4:
    // 0x1939c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1939c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1939c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939cc: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x1939CCu;
    SET_GPR_U32(ctx, 31, 0x1939D4u);
    ctx->pc = 0x1939D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1939CCu;
            // 0x1939d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939D4u; }
        if (ctx->pc != 0x1939D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1939D4u; }
        if (ctx->pc != 0x1939D4u) { return; }
    }
    ctx->pc = 0x1939D4u;
label_1939d4:
    // 0x1939d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1939d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1939d8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1939d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1939dc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1939DCu;
    {
        const bool branch_taken_0x1939dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1939dc) {
            ctx->pc = 0x1939ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1939ac;
        }
    }
    ctx->pc = 0x1939E4u;
label_1939e4:
    // 0x1939e4: 0x0  nop
    ctx->pc = 0x1939e4u;
    // NOP
    // 0x1939e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1939e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1939ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1939ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1939f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1939f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1939f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1939f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1939f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1939f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1939fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1939fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193a00: 0x3e00008  jr          $ra
    ctx->pc = 0x193A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A00u;
            // 0x193a04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193A08u;
}
