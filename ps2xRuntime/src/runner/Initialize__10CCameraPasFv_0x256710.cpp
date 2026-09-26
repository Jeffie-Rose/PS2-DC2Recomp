#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__10CCameraPasFv
// Address: 0x256710 - 0x256790
void Initialize__10CCameraPasFv_0x256710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__10CCameraPasFv_0x256710");
#endif

    switch (ctx->pc) {
        case 0x256734u: goto label_256734;
        case 0x256740u: goto label_256740;
        case 0x256748u: goto label_256748;
        case 0x25676cu: goto label_25676c;
        case 0x256774u: goto label_256774;
        default: break;
    }

    ctx->pc = 0x256710u;

    // 0x256710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x256710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x256714: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x256714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x256718: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x256718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25671c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x256720: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x256720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x256728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25672c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25672cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256730: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x256730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256734:
    // 0x256734: 0x2719021  addu        $s2, $s3, $s1
    ctx->pc = 0x256734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x256738: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x256738u;
    SET_GPR_U32(ctx, 31, 0x256740u);
    ctx->pc = 0x25673Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256738u;
            // 0x25673c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256740u; }
        if (ctx->pc != 0x256740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256740u; }
        if (ctx->pc != 0x256740u) { return; }
    }
    ctx->pc = 0x256740u;
label_256740:
    // 0x256740: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x256740u;
    SET_GPR_U32(ctx, 31, 0x256748u);
    ctx->pc = 0x256744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256740u;
            // 0x256744: 0x26440100  addiu       $a0, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256748u; }
        if (ctx->pc != 0x256748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256748u; }
        if (ctx->pc != 0x256748u) { return; }
    }
    ctx->pc = 0x256748u;
label_256748:
    // 0x256748: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x256748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25674c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x25674cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x256750: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x256750u;
    {
        const bool branch_taken_0x256750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256750u;
            // 0x256754: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256750) {
            ctx->pc = 0x256734u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256734;
        }
    }
    ctx->pc = 0x256758u;
    // 0x256758: 0xae600200  sw          $zero, 0x200($s3)
    ctx->pc = 0x256758u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 512), GPR_U32(ctx, 0));
    // 0x25675c: 0x26640208  addiu       $a0, $s3, 0x208
    ctx->pc = 0x25675cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 520));
    // 0x256760: 0xae600940  sw          $zero, 0x940($s3)
    ctx->pc = 0x256760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2368), GPR_U32(ctx, 0));
    // 0x256764: 0xc0956fc  jal         func_255BF0
    ctx->pc = 0x256764u;
    SET_GPR_U32(ctx, 31, 0x25676Cu);
    ctx->pc = 0x256768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256764u;
            // 0x256768: 0xae600204  sw          $zero, 0x204($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255BF0u;
    if (runtime->hasFunction(0x255BF0u)) {
        auto targetFn = runtime->lookupFunction(0x255BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25676Cu; }
        if (ctx->pc != 0x25676Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9C3DSplineFv_0x255bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25676Cu; }
        if (ctx->pc != 0x25676Cu) { return; }
    }
    ctx->pc = 0x25676Cu;
label_25676c:
    // 0x25676c: 0xc0956fc  jal         func_255BF0
    ctx->pc = 0x25676Cu;
    SET_GPR_U32(ctx, 31, 0x256774u);
    ctx->pc = 0x256770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25676Cu;
            // 0x256770: 0x266405a4  addiu       $a0, $s3, 0x5A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1444));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255BF0u;
    if (runtime->hasFunction(0x255BF0u)) {
        auto targetFn = runtime->lookupFunction(0x255BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256774u; }
        if (ctx->pc != 0x256774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9C3DSplineFv_0x255bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256774u; }
        if (ctx->pc != 0x256774u) { return; }
    }
    ctx->pc = 0x256774u;
label_256774:
    // 0x256774: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x256774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256778: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x256778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25677c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25677cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256788: 0x3e00008  jr          $ra
    ctx->pc = 0x256788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25678Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256788u;
            // 0x25678c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256790u;
}
