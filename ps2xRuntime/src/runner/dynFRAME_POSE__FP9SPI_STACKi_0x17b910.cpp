#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynFRAME_POSE__FP9SPI_STACKi
// Address: 0x17b910 - 0x17b970
void dynFRAME_POSE__FP9SPI_STACKi_0x17b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynFRAME_POSE__FP9SPI_STACKi_0x17b910");
#endif

    switch (ctx->pc) {
        case 0x17b924u: goto label_17b924;
        case 0x17b930u: goto label_17b930;
        case 0x17b93cu: goto label_17b93c;
        case 0x17b95cu: goto label_17b95c;
        default: break;
    }

    ctx->pc = 0x17b910u;

    // 0x17b910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17b918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17b918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17b91c: 0xc05edbc  jal         func_17B6F0
    ctx->pc = 0x17B91Cu;
    SET_GPR_U32(ctx, 31, 0x17B924u);
    ctx->pc = 0x17B920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B91Cu;
            // 0x17b920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B6F0u;
    if (runtime->hasFunction(0x17B6F0u)) {
        auto targetFn = runtime->lookupFunction(0x17B6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B924u; }
        if (ctx->pc != 0x17B924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FRAME_POSE_Sub__FP9SPI_STACKi_0x17b6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B924u; }
        if (ctx->pc != 0x17B924u) { return; }
    }
    ctx->pc = 0x17B924u;
label_17b924:
    // 0x17b924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b928: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17B928u;
    SET_GPR_U32(ctx, 31, 0x17B930u);
    ctx->pc = 0x17B92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B928u;
            // 0x17b92c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B930u; }
        if (ctx->pc != 0x17B930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B930u; }
        if (ctx->pc != 0x17B930u) { return; }
    }
    ctx->pc = 0x17B930u;
label_17b930:
    // 0x17b930: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b934: 0xc05ea3c  jal         func_17A8F0
    ctx->pc = 0x17B934u;
    SET_GPR_U32(ctx, 31, 0x17B93Cu);
    ctx->pc = 0x17B938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B934u;
            // 0x17b938: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8F0u;
    if (runtime->hasFunction(0x17A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B93Cu; }
        if (ctx->pc != 0x17B93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__13CDynamicAnimeFi_0x17a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B93Cu; }
        if (ctx->pc != 0x17B93Cu) { return; }
    }
    ctx->pc = 0x17B93Cu;
label_17b93c:
    // 0x17b93c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B93Cu;
    {
        const bool branch_taken_0x17b93c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b93c) {
            ctx->pc = 0x17B94Cu;
            goto label_17b94c;
        }
    }
    ctx->pc = 0x17B944u;
    // 0x17b944: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B944u;
    {
        const bool branch_taken_0x17b944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B944u;
            // 0x17b948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b944) {
            ctx->pc = 0x17B954u;
            goto label_17b954;
        }
    }
    ctx->pc = 0x17B94Cu;
label_17b94c:
    // 0x17b94c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B94Cu;
    {
        const bool branch_taken_0x17b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B94Cu;
            // 0x17b950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b94c) {
            ctx->pc = 0x17B960u;
            goto label_17b960;
        }
    }
    ctx->pc = 0x17B954u;
label_17b954:
    // 0x17b954: 0xc04daf0  jal         func_136BC0
    ctx->pc = 0x17B954u;
    SET_GPR_U32(ctx, 31, 0x17B95Cu);
    ctx->pc = 0x17B958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B954u;
            // 0x17b958: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BC0u;
    if (runtime->hasFunction(0x136BC0u)) {
        auto targetFn = runtime->lookupFunction(0x136BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B95Cu; }
        if (ctx->pc != 0x17B95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteParent__8mgCFrameFv_0x136bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B95Cu; }
        if (ctx->pc != 0x17B95Cu) { return; }
    }
    ctx->pc = 0x17B95Cu;
label_17b95c:
    // 0x17b95c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b960:
    // 0x17b960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17b960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b968: 0x3e00008  jr          $ra
    ctx->pc = 0x17B968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B968u;
            // 0x17b96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B970u;
}
