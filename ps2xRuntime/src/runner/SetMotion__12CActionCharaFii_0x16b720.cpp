#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMotion__12CActionCharaFii
// Address: 0x16b720 - 0x16b780
void SetMotion__12CActionCharaFii_0x16b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotion__12CActionCharaFii_0x16b720");
#endif

    switch (ctx->pc) {
        case 0x16b744u: goto label_16b744;
        case 0x16b754u: goto label_16b754;
        default: break;
    }

    ctx->pc = 0x16b720u;

    // 0x16b720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b724: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16b728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b72c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b730: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x16b730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b734: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b738: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16b738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b73c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16B73Cu;
    {
        const bool branch_taken_0x16b73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B73Cu;
            // 0x16b740: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b73c) {
            ctx->pc = 0x16B764u;
            goto label_16b764;
        }
    }
    ctx->pc = 0x16B744u;
label_16b744:
    // 0x16b744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b748: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16b748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b74c: 0xc05ce4c  jal         func_173930
    ctx->pc = 0x16B74Cu;
    SET_GPR_U32(ctx, 31, 0x16B754u);
    ctx->pc = 0x16B750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B74Cu;
            // 0x16b750: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173930u;
    if (runtime->hasFunction(0x173930u)) {
        auto targetFn = runtime->lookupFunction(0x173930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B754u; }
        if (ctx->pc != 0x16B754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMotion__11CCharacter2Fii_0x173930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B754u; }
        if (ctx->pc != 0x16B754u) { return; }
    }
    ctx->pc = 0x16B754u;
label_16b754:
    // 0x16b754: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16b754u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16b758: 0x0  nop
    ctx->pc = 0x16b758u;
    // NOP
    // 0x16b75c: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16B75Cu;
    {
        const bool branch_taken_0x16b75c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b75c) {
            ctx->pc = 0x16B744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b744;
        }
    }
    ctx->pc = 0x16B764u;
label_16b764:
    // 0x16b764: 0x0  nop
    ctx->pc = 0x16b764u;
    // NOP
    // 0x16b768: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16b768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b76c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b76cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b778: 0x3e00008  jr          $ra
    ctx->pc = 0x16B778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B778u;
            // 0x16b77c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B780u;
}
