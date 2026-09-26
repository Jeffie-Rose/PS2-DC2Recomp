#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ATTRIB__FP12RS_STACKDATAi
// Address: 0x1e64c0 - 0x1e6534
void ps2__SET_ATTRIB__FP12RS_STACKDATAi_0x1e64c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ATTRIB__FP12RS_STACKDATAi_0x1e64c0");
#endif

    switch (ctx->pc) {
        case 0x1e64e4u: goto label_1e64e4;
        case 0x1e64f0u: goto label_1e64f0;
        default: break;
    }

    ctx->pc = 0x1e64c0u;

    // 0x1e64c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e64c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e64c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e64c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e64c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e64cc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E64CCu;
    {
        const bool branch_taken_0x1e64cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E64D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E64CCu;
            // 0x1e64d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64cc) {
            ctx->pc = 0x1E64DCu;
            goto label_1e64dc;
        }
    }
    ctx->pc = 0x1E64D4u;
    // 0x1e64d4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E64D4u;
    {
        const bool branch_taken_0x1e64d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E64D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E64D4u;
            // 0x1e64d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e64d4) {
            ctx->pc = 0x1E6524u;
            goto label_1e6524;
        }
    }
    ctx->pc = 0x1E64DCu;
label_1e64dc:
    // 0x1e64dc: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E64DCu;
    SET_GPR_U32(ctx, 31, 0x1E64E4u);
    ctx->pc = 0x1E64E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E64DCu;
            // 0x1e64e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64E4u; }
        if (ctx->pc != 0x1E64E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64E4u; }
        if (ctx->pc != 0x1E64E4u) { return; }
    }
    ctx->pc = 0x1E64E4u;
label_1e64e4:
    // 0x1e64e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e64e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e64e8: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E64E8u;
    SET_GPR_U32(ctx, 31, 0x1E64F0u);
    ctx->pc = 0x1E64ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E64E8u;
            // 0x1e64ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64F0u; }
        if (ctx->pc != 0x1E64F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E64F0u; }
        if (ctx->pc != 0x1E64F0u) { return; }
    }
    ctx->pc = 0x1E64F0u;
label_1e64f0:
    // 0x1e64f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E64F0u;
    {
        const bool branch_taken_0x1e64f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e64f0) {
            ctx->pc = 0x1E650Cu;
            goto label_1e650c;
        }
    }
    ctx->pc = 0x1E64F8u;
    // 0x1e64f8: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e64f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e64fc: 0x8c621348  lw          $v0, 0x1348($v1)
    ctx->pc = 0x1e64fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x1e6500: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x1e6500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x1e6504: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6504u;
    {
        const bool branch_taken_0x1e6504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6504u;
            // 0x1e6508: 0xac621348  sw          $v0, 0x1348($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6504) {
            ctx->pc = 0x1E6520u;
            goto label_1e6520;
        }
    }
    ctx->pc = 0x1E650Cu;
label_1e650c:
    // 0x1e650c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e650cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6510: 0x2001827  not         $v1, $s0
    ctx->pc = 0x1e6510u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
    // 0x1e6514: 0x8c821348  lw          $v0, 0x1348($a0)
    ctx->pc = 0x1e6514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
    // 0x1e6518: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e6518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e651c: 0xac821348  sw          $v0, 0x1348($a0)
    ctx->pc = 0x1e651cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4936), GPR_U32(ctx, 2));
label_1e6520:
    // 0x1e6520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6524:
    // 0x1e6524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e652c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E652Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E652Cu;
            // 0x1e6530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6534u;
}
