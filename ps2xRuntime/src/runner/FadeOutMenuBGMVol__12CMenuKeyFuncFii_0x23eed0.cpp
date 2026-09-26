#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeOutMenuBGMVol__12CMenuKeyFuncFii
// Address: 0x23eed0 - 0x23ef38
void FadeOutMenuBGMVol__12CMenuKeyFuncFii_0x23eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeOutMenuBGMVol__12CMenuKeyFuncFii_0x23eed0");
#endif

    switch (ctx->pc) {
        case 0x23ef00u: goto label_23ef00;
        default: break;
    }

    ctx->pc = 0x23eed0u;

    // 0x23eed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23eed4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23eed8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23eedc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23eedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23eee0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23eee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23eee8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23eee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eeec: 0x8483015a  lh          $v1, 0x15A($a0)
    ctx->pc = 0x23eeecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 346)));
    // 0x23eef0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23EEF0u;
    {
        const bool branch_taken_0x23eef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EEF0u;
            // 0x23eef4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eef0) {
            ctx->pc = 0x23EF04u;
            goto label_23ef04;
        }
    }
    ctx->pc = 0x23EEF8u;
    // 0x23eef8: 0xc0a98d4  jal         func_2A6350
    ctx->pc = 0x23EEF8u;
    SET_GPR_U32(ctx, 31, 0x23EF00u);
    ctx->pc = 0x23EEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EEF8u;
            // 0x23eefc: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6350u;
    if (runtime->hasFunction(0x2A6350u)) {
        auto targetFn = runtime->lookupFunction(0x2A6350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EF00u; }
        if (ctx->pc != 0x23EF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVolBGM__6CSceneFv_0x2a6350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EF00u; }
        if (ctx->pc != 0x23EF00u) { return; }
    }
    ctx->pc = 0x23EF00u;
label_23ef00:
    // 0x23ef00: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x23ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
label_23ef04:
    // 0x23ef04: 0xae510154  sw          $s1, 0x154($s2)
    ctx->pc = 0x23ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 17));
    // 0x23ef08: 0xa6500158  sh          $s0, 0x158($s2)
    ctx->pc = 0x23ef08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 344), (uint16_t)GPR_U32(ctx, 16));
    // 0x23ef0c: 0x86430158  lh          $v1, 0x158($s2)
    ctx->pc = 0x23ef0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x23ef10: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23EF10u;
    {
        const bool branch_taken_0x23ef10 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x23EF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF10u;
            // 0x23ef14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef10) {
            ctx->pc = 0x23EF1Cu;
            goto label_23ef1c;
        }
    }
    ctx->pc = 0x23EF18u;
    // 0x23ef18: 0xa6400158  sh          $zero, 0x158($s2)
    ctx->pc = 0x23ef18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 344), (uint16_t)GPR_U32(ctx, 0));
label_23ef1c:
    // 0x23ef1c: 0xa643015a  sh          $v1, 0x15A($s2)
    ctx->pc = 0x23ef1cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 346), (uint16_t)GPR_U32(ctx, 3));
    // 0x23ef20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23ef20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ef24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23ef24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ef28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23ef28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ef2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23ef2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ef30: 0x3e00008  jr          $ra
    ctx->pc = 0x23EF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EF30u;
            // 0x23ef34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EF38u;
}
