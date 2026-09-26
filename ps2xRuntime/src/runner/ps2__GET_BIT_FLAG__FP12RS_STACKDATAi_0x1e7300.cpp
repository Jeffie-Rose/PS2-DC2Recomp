#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BIT_FLAG__FP12RS_STACKDATAi
// Address: 0x1e7300 - 0x1e7350
void ps2__GET_BIT_FLAG__FP12RS_STACKDATAi_0x1e7300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BIT_FLAG__FP12RS_STACKDATAi_0x1e7300");
#endif

    switch (ctx->pc) {
        case 0x1e7324u: goto label_1e7324;
        case 0x1e7330u: goto label_1e7330;
        case 0x1e733cu: goto label_1e733c;
        default: break;
    }

    ctx->pc = 0x1e7300u;

    // 0x1e7300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7304: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e730c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E730Cu;
    {
        const bool branch_taken_0x1e730c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E730Cu;
            // 0x1e7310: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e730c) {
            ctx->pc = 0x1E731Cu;
            goto label_1e731c;
        }
    }
    ctx->pc = 0x1E7314u;
    // 0x1e7314: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E7314u;
    {
        const bool branch_taken_0x1e7314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7314u;
            // 0x1e7318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7314) {
            ctx->pc = 0x1E7340u;
            goto label_1e7340;
        }
    }
    ctx->pc = 0x1E731Cu;
label_1e731c:
    // 0x1e731c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E731Cu;
    SET_GPR_U32(ctx, 31, 0x1E7324u);
    ctx->pc = 0x1E7320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E731Cu;
            // 0x1e7320: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7324u; }
        if (ctx->pc != 0x1E7324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7324u; }
        if (ctx->pc != 0x1E7324u) { return; }
    }
    ctx->pc = 0x1E7324u;
label_1e7324:
    // 0x1e7324: 0x8f848da4  lw          $a0, -0x725C($gp)
    ctx->pc = 0x1e7324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
    // 0x1e7328: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x1E7328u;
    SET_GPR_U32(ctx, 31, 0x1E7330u);
    ctx->pc = 0x1E732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7328u;
            // 0x1e732c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7330u; }
        if (ctx->pc != 0x1E7330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7330u; }
        if (ctx->pc != 0x1E7330u) { return; }
    }
    ctx->pc = 0x1E7330u;
label_1e7330:
    // 0x1e7330: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e7330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7334: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E7334u;
    SET_GPR_U32(ctx, 31, 0x1E733Cu);
    ctx->pc = 0x1E7338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7334u;
            // 0x1e7338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E733Cu; }
        if (ctx->pc != 0x1E733Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E733Cu; }
        if (ctx->pc != 0x1E733Cu) { return; }
    }
    ctx->pc = 0x1E733Cu;
label_1e733c:
    // 0x1e733c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7340:
    // 0x1e7340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7348: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E734Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7348u;
            // 0x1e734c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7350u;
}
