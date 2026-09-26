#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcBIT_FLAG_ON__FP9SPI_STACKi
// Address: 0x1938f0 - 0x193978
void gcBIT_FLAG_ON__FP9SPI_STACKi_0x1938f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcBIT_FLAG_ON__FP9SPI_STACKi_0x1938f0");
#endif

    switch (ctx->pc) {
        case 0x19391cu: goto label_19391c;
        case 0x193924u: goto label_193924;
        case 0x193934u: goto label_193934;
        case 0x193944u: goto label_193944;
        default: break;
    }

    ctx->pc = 0x1938f0u;

    // 0x1938f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1938f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1938f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1938f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1938f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1938f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1938fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1938fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193900: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x193900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193904: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x193904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19390c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x19390cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x193910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193914: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x193914u;
    {
        const bool branch_taken_0x193914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193914u;
            // 0x193918: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193914) {
            ctx->pc = 0x193954u;
            goto label_193954;
        }
    }
    ctx->pc = 0x19391Cu;
label_19391c:
    // 0x19391c: 0xc064220  jal         func_190880
    ctx->pc = 0x19391Cu;
    SET_GPR_U32(ctx, 31, 0x193924u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193924u; }
        if (ctx->pc != 0x193924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193924u; }
        if (ctx->pc != 0x193924u) { return; }
    }
    ctx->pc = 0x193924u;
label_193924:
    // 0x193924: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19392c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x19392Cu;
    SET_GPR_U32(ctx, 31, 0x193934u);
    ctx->pc = 0x193930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19392Cu;
            // 0x193930: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193934u; }
        if (ctx->pc != 0x193934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193934u; }
        if (ctx->pc != 0x193934u) { return; }
    }
    ctx->pc = 0x193934u;
label_193934:
    // 0x193934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193938: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x193938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19393c: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x19393Cu;
    SET_GPR_U32(ctx, 31, 0x193944u);
    ctx->pc = 0x193940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19393Cu;
            // 0x193940: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193944u; }
        if (ctx->pc != 0x193944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193944u; }
        if (ctx->pc != 0x193944u) { return; }
    }
    ctx->pc = 0x193944u;
label_193944:
    // 0x193944: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x193944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x193948: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x193948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x19394c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x19394Cu;
    {
        const bool branch_taken_0x19394c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19394c) {
            ctx->pc = 0x19391Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19391c;
        }
    }
    ctx->pc = 0x193954u;
label_193954:
    // 0x193954: 0x0  nop
    ctx->pc = 0x193954u;
    // NOP
    // 0x193958: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x193958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19395c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19395cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193960: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x193960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19396c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19396cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193970: 0x3e00008  jr          $ra
    ctx->pc = 0x193970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193970u;
            // 0x193974: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193978u;
}
