#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CPSetTexture__11mgC3DSpriteFP10mgCTexture
// Address: 0x13b2f0 - 0x13b358
void CPSetTexture__11mgC3DSpriteFP10mgCTexture_0x13b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CPSetTexture__11mgC3DSpriteFP10mgCTexture_0x13b2f0");
#endif

    switch (ctx->pc) {
        case 0x13b314u: goto label_13b314;
        case 0x13b334u: goto label_13b334;
        default: break;
    }

    ctx->pc = 0x13b2f0u;

    // 0x13b2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b2f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13b2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13b2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b300: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13b300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b304: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x13B304u;
    {
        const bool branch_taken_0x13b304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B304u;
            // 0x13b308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b304) {
            ctx->pc = 0x13B344u;
            goto label_13b344;
        }
    }
    ctx->pc = 0x13B30Cu;
    // 0x13b30c: 0xc04f94c  jal         func_13E530
    ctx->pc = 0x13B30Cu;
    SET_GPR_U32(ctx, 31, 0x13B314u);
    ctx->pc = 0x13B310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B30Cu;
            // 0x13b310: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E530u;
    if (runtime->hasFunction(0x13E530u)) {
        auto targetFn = runtime->lookupFunction(0x13E530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B314u; }
        if (ctx->pc != 0x13B314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTexFlush_TagCnt__FPUi_0x13e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B314u; }
        if (ctx->pc != 0x13B314u) { return; }
    }
    ctx->pc = 0x13B314u;
label_13b314:
    // 0x13b314: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13b314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13b318: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x13b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13b31c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b320: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x13b320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x13b324: 0xde250038  ld          $a1, 0x38($s1)
    ctx->pc = 0x13b324u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x13b328: 0xde260040  ld          $a2, 0x40($s1)
    ctx->pc = 0x13b328u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13b32c: 0xc04f928  jal         func_13E4A0
    ctx->pc = 0x13B32Cu;
    SET_GPR_U32(ctx, 31, 0x13B334u);
    ctx->pc = 0x13B330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B32Cu;
            // 0x13b330: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E4A0u;
    if (runtime->hasFunction(0x13E4A0u)) {
        auto targetFn = runtime->lookupFunction(0x13E4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B334u; }
        if (ctx->pc != 0x13B334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTEX0__FPUiUlUl_0x13e4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B334u; }
        if (ctx->pc != 0x13B334u) { return; }
    }
    ctx->pc = 0x13B334u;
label_13b334:
    // 0x13b334: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x13b334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x13b338: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x13b338u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13b33c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13b33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13b340: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x13b340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_13b344:
    // 0x13b344: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13b344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b34c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b350: 0x3e00008  jr          $ra
    ctx->pc = 0x13B350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B350u;
            // 0x13b354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13B358u;
}
