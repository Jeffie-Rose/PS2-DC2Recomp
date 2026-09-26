#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: vpiMOVE_TO__FP9SPI_STACKi
// Address: 0x31a0a0 - 0x31a11c
void vpiMOVE_TO__FP9SPI_STACKi_0x31a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vpiMOVE_TO__FP9SPI_STACKi_0x31a0a0");
#endif

    switch (ctx->pc) {
        case 0x31a0d0u: goto label_31a0d0;
        case 0x31a0f4u: goto label_31a0f4;
        case 0x31a100u: goto label_31a100;
        default: break;
    }

    ctx->pc = 0x31a0a0u;

    // 0x31a0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31a0a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31a0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31a0a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31a0ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a0b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31a0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a0b4: 0x8f84a374  lw          $a0, -0x5C8C($gp)
    ctx->pc = 0x31a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a0b8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A0B8u;
    {
        const bool branch_taken_0x31a0b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A0B8u;
            // 0x31a0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a0b8) {
            ctx->pc = 0x31A0C8u;
            goto label_31a0c8;
        }
    }
    ctx->pc = 0x31A0C0u;
    // 0x31a0c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x31A0C0u;
    {
        const bool branch_taken_0x31a0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A0C0u;
            // 0x31a0c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a0c0) {
            ctx->pc = 0x31A10Cu;
            goto label_31a10c;
        }
    }
    ctx->pc = 0x31A0C8u;
label_31a0c8:
    // 0x31a0c8: 0xc0b3464  jal         func_2CD190
    ctx->pc = 0x31A0C8u;
    SET_GPR_U32(ctx, 31, 0x31A0D0u);
    ctx->pc = 0x31A0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A0C8u;
            // 0x31a0cc: 0x8f85a370  lw          $a1, -0x5C90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943600)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD190u;
    if (runtime->hasFunction(0x2CD190u)) {
        auto targetFn = runtime->lookupFunction(0x2CD190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A0D0u; }
        if (ctx->pc != 0x31A0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Add__18CVillagerPlaceInfoFP9mgCMemory_0x2cd190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A0D0u; }
        if (ctx->pc != 0x31A0D0u) { return; }
    }
    ctx->pc = 0x31A0D0u;
label_31a0d0:
    // 0x31a0d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a0d4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A0D4u;
    {
        const bool branch_taken_0x31a0d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A0D4u;
            // 0x31a0d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a0d4) {
            ctx->pc = 0x31A0E4u;
            goto label_31a0e4;
        }
    }
    ctx->pc = 0x31A0DCu;
    // 0x31a0dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31A0DCu;
    {
        const bool branch_taken_0x31a0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A0DCu;
            // 0x31a0e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a0dc) {
            ctx->pc = 0x31A108u;
            goto label_31a108;
        }
    }
    ctx->pc = 0x31A0E4u;
label_31a0e4:
    // 0x31a0e4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x31a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x31a0e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x31a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x31a0ec: 0xc051928  jal         func_1464A0
    ctx->pc = 0x31A0ECu;
    SET_GPR_U32(ctx, 31, 0x31A0F4u);
    ctx->pc = 0x31A0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A0ECu;
            // 0x31a0f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A0F4u; }
        if (ctx->pc != 0x31A0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A0F4u; }
        if (ctx->pc != 0x31A0F4u) { return; }
    }
    ctx->pc = 0x31A0F4u;
label_31a0f4:
    // 0x31a0f4: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x31a0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x31a0f8: 0xc05190c  jal         func_146430
    ctx->pc = 0x31A0F8u;
    SET_GPR_U32(ctx, 31, 0x31A100u);
    ctx->pc = 0x31A0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A0F8u;
            // 0x31a0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A100u; }
        if (ctx->pc != 0x31A100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A100u; }
        if (ctx->pc != 0x31A100u) { return; }
    }
    ctx->pc = 0x31A100u;
label_31a100:
    // 0x31a100: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x31a100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x31a104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a108:
    // 0x31a108: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31a108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31a10c:
    // 0x31a10c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31a10cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a114: 0x3e00008  jr          $ra
    ctx->pc = 0x31A114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A114u;
            // 0x31a118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A11Cu;
}
