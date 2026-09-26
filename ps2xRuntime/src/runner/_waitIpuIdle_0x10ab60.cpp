#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _waitIpuIdle
// Address: 0x10ab60 - 0x10ac04
void _waitIpuIdle_0x10ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_waitIpuIdle_0x10ab60");
#endif

    switch (ctx->pc) {
        case 0x10abc0u: goto label_10abc0;
        case 0x10abd4u: goto label_10abd4;
        default: break;
    }

    ctx->pc = 0x10ab60u;

    // 0x10ab60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10ab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10ab64: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ab68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ab6c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10ab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10ab70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10ab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10ab74: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10ab78: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10ab7c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x10ab7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x10ab80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ab84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10ab84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ab8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10ab8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ab94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10ab98: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10ab98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10ab9c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10AB9Cu;
    {
        const bool branch_taken_0x10ab9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10ABA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB9Cu;
            // 0x10aba0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab9c) {
            ctx->pc = 0x10ABECu;
            goto label_10abec;
        }
    }
    ctx->pc = 0x10ABA4u;
    // 0x10aba4: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x10aba4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x10aba8: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x10aba8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x10abac: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x10abacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x10abb0: 0x36104000  ori         $s0, $s0, 0x4000
    ctx->pc = 0x10abb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16384);
    // 0x10abb4: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x10abb4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x10abb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10abb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abbc: 0x0  nop
    ctx->pc = 0x10abbcu;
    // NOP
label_10abc0:
    // 0x10abc0: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x10abc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x10abc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10ABC4u;
    {
        const bool branch_taken_0x10abc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABC4u;
            // 0x10abc8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abc4) {
            ctx->pc = 0x10ABD8u;
            goto label_10abd8;
        }
    }
    ctx->pc = 0x10ABCCu;
    // 0x10abcc: 0xc04395e  jal         func_10E578
    ctx->pc = 0x10ABCCu;
    SET_GPR_U32(ctx, 31, 0x10ABD4u);
    ctx->pc = 0x10ABD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABCCu;
            // 0x10abd0: 0x8e440858  lw          $a0, 0x858($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E578u;
    if (runtime->hasFunction(0x10E578u)) {
        auto targetFn = runtime->lookupFunction(0x10E578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABD4u; }
        if (ctx->pc != 0x10ABD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x10e578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ABD4u; }
        if (ctx->pc != 0x10ABD4u) { return; }
    }
    ctx->pc = 0x10ABD4u;
label_10abd4:
    // 0x10abd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10abd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10abd8:
    // 0x10abd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10abdc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x10abdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x10abe0: 0x1053fff7  beq         $v0, $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10ABE0u;
    {
        const bool branch_taken_0x10abe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x10ABE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABE0u;
            // 0x10abe4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abe0) {
            ctx->pc = 0x10ABC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10abc0;
        }
    }
    ctx->pc = 0x10ABE8u;
    // 0x10abe8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10abe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10abec:
    // 0x10abec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10abecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10abf0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10abf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10abf4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10abf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10abf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10abf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10abfc: 0x3e00008  jr          $ra
    ctx->pc = 0x10ABFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ABFCu;
            // 0x10ac00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AC04u;
}
