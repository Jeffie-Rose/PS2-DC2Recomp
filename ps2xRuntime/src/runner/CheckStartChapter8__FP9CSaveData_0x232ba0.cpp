#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckStartChapter8__FP9CSaveData
// Address: 0x232ba0 - 0x232c04
void CheckStartChapter8__FP9CSaveData_0x232ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckStartChapter8__FP9CSaveData_0x232ba0");
#endif

    switch (ctx->pc) {
        case 0x232bc8u: goto label_232bc8;
        case 0x232be0u: goto label_232be0;
        default: break;
    }

    ctx->pc = 0x232ba0u;

    // 0x232ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x232bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232bb0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232BB0u;
    {
        const bool branch_taken_0x232bb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x232BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232BB0u;
            // 0x232bb4: 0x240502e0  addiu       $a1, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bb0) {
            ctx->pc = 0x232BC0u;
            goto label_232bc0;
        }
    }
    ctx->pc = 0x232BB8u;
    // 0x232bb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x232BB8u;
    {
        const bool branch_taken_0x232bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232BB8u;
            // 0x232bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bb8) {
            ctx->pc = 0x232BF4u;
            goto label_232bf4;
        }
    }
    ctx->pc = 0x232BC0u;
label_232bc0:
    // 0x232bc0: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x232BC0u;
    SET_GPR_U32(ctx, 31, 0x232BC8u);
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232BC8u; }
        if (ctx->pc != 0x232BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232BC8u; }
        if (ctx->pc != 0x232BC8u) { return; }
    }
    ctx->pc = 0x232BC8u;
label_232bc8:
    // 0x232bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x232bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232bcc: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x232BCCu;
    {
        const bool branch_taken_0x232bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x232BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232BCCu;
            // 0x232bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232bcc) {
            ctx->pc = 0x232BF4u;
            goto label_232bf4;
        }
    }
    ctx->pc = 0x232BD4u;
    // 0x232bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232bd8: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x232BD8u;
    SET_GPR_U32(ctx, 31, 0x232BE0u);
    ctx->pc = 0x232BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232BD8u;
            // 0x232bdc: 0x24050320  addiu       $a1, $zero, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232BE0u; }
        if (ctx->pc != 0x232BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232BE0u; }
        if (ctx->pc != 0x232BE0u) { return; }
    }
    ctx->pc = 0x232BE0u;
label_232be0:
    // 0x232be0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232BE0u;
    {
        const bool branch_taken_0x232be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232BE0u;
            // 0x232be4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232be0) {
            ctx->pc = 0x232BF0u;
            goto label_232bf0;
        }
    }
    ctx->pc = 0x232BE8u;
    // 0x232be8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x232BE8u;
    {
        const bool branch_taken_0x232be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232BE8u;
            // 0x232bec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232be8) {
            ctx->pc = 0x232BF8u;
            goto label_232bf8;
        }
    }
    ctx->pc = 0x232BF0u;
label_232bf0:
    // 0x232bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232bf4:
    // 0x232bf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232bf8:
    // 0x232bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x232bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x232BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232BFCu;
            // 0x232c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232C04u;
}
