#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12CFlushEffectFv
// Address: 0x1c3130 - 0x1c31ac
void Step__12CFlushEffectFv_0x1c3130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12CFlushEffectFv_0x1c3130");
#endif

    switch (ctx->pc) {
        case 0x1c3160u: goto label_1c3160;
        case 0x1c3178u: goto label_1c3178;
        default: break;
    }

    ctx->pc = 0x1c3130u;

    // 0x1c3130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c3130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c3134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c3134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c3138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c313c: 0x84830030  lh          $v1, 0x30($a0)
    ctx->pc = 0x1c313cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1c3140: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C3140u;
    {
        const bool branch_taken_0x1c3140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3140u;
            // 0x1c3144: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3140) {
            ctx->pc = 0x1C319Cu;
            goto label_1c319c;
        }
    }
    ctx->pc = 0x1C3148u;
    // 0x1c3148: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c3148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c314c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C314Cu;
    {
        const bool branch_taken_0x1c314c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c314c) {
            ctx->pc = 0x1C3160u;
            goto label_1c3160;
        }
    }
    ctx->pc = 0x1C3154u;
    // 0x1c3154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3158: 0xc04de0c  jal         func_137830
    ctx->pc = 0x1C3158u;
    SET_GPR_U32(ctx, 31, 0x1C3160u);
    ctx->pc = 0x1C315Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3158u;
            // 0x1c315c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3160u; }
        if (ctx->pc != 0x1C3160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3160u; }
        if (ctx->pc != 0x1C3160u) { return; }
    }
    ctx->pc = 0x1C3160u;
label_1c3160:
    // 0x1c3160: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c3160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3164: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1c3164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3168: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c3168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c316c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1c316cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1c3170: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C3170u;
    SET_GPR_U32(ctx, 31, 0x1C3178u);
    ctx->pc = 0x1C3174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3170u;
            // 0x1c3174: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3178u; }
        if (ctx->pc != 0x1C3178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3178u; }
        if (ctx->pc != 0x1C3178u) { return; }
    }
    ctx->pc = 0x1C3178u;
label_1c3178:
    // 0x1c3178: 0x86030024  lh          $v1, 0x24($s0)
    ctx->pc = 0x1c3178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c317c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c317cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3180: 0xa6030024  sh          $v1, 0x24($s0)
    ctx->pc = 0x1c3180u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c3184: 0x86030024  lh          $v1, 0x24($s0)
    ctx->pc = 0x1c3184u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c3188: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3188u;
    {
        const bool branch_taken_0x1c3188 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c3188) {
            ctx->pc = 0x1C319Cu;
            goto label_1c319c;
        }
    }
    ctx->pc = 0x1C3190u;
    // 0x1c3190: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x1c3190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c3194: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x1c3194u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c3198: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c3198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1c319c:
    // 0x1c319c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c319cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c31a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c31a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C31A4u;
            // 0x1c31a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C31ACu;
}
