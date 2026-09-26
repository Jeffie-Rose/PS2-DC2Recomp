#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowAbs__16CBattleCharaInfoFiPi
// Address: 0x19ffe0 - 0x1a0030
void GetNowAbs__16CBattleCharaInfoFiPi_0x19ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowAbs__16CBattleCharaInfoFiPi_0x19ffe0");
#endif

    switch (ctx->pc) {
        case 0x19fff8u: goto label_19fff8;
        case 0x1a000cu: goto label_1a000c;
        case 0x1a0018u: goto label_1a0018;
        default: break;
    }

    ctx->pc = 0x19ffe0u;

    // 0x19ffe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ffe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19ffe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ffe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ffe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ffec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19ffecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fff0: 0xc067e44  jal         func_19F910
    ctx->pc = 0x19FFF0u;
    SET_GPR_U32(ctx, 31, 0x19FFF8u);
    ctx->pc = 0x19FFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FFF0u;
            // 0x19fff4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F910u;
    if (runtime->hasFunction(0x19F910u)) {
        auto targetFn = runtime->lookupFunction(0x19F910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFF8u; }
        if (ctx->pc != 0x19FFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAccessAbs__16CBattleCharaInfoFi_0x19f910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FFF8u; }
        if (ctx->pc != 0x19FFF8u) { return; }
    }
    ctx->pc = 0x19FFF8u;
label_19fff8:
    // 0x19fff8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19fff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fffc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19FFFCu;
    {
        const bool branch_taken_0x19fffc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fffc) {
            ctx->pc = 0x1A001Cu;
            goto label_1a001c;
        }
    }
    ctx->pc = 0x1A0004u;
    // 0x1a0004: 0xc0945c8  jal         func_251720
    ctx->pc = 0x1A0004u;
    SET_GPR_U32(ctx, 31, 0x1A000Cu);
    ctx->pc = 0x1A0008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0004u;
            // 0x1a0008: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A000Cu; }
        if (ctx->pc != 0x1A000Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A000Cu; }
        if (ctx->pc != 0x1A000Cu) { return; }
    }
    ctx->pc = 0x1A000Cu;
label_1a000c:
    // 0x1a000c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a000cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a0010: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1A0010u;
    SET_GPR_U32(ctx, 31, 0x1A0018u);
    ctx->pc = 0x1A0014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0010u;
            // 0x1a0014: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0018u; }
        if (ctx->pc != 0x1A0018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0018u; }
        if (ctx->pc != 0x1A0018u) { return; }
    }
    ctx->pc = 0x1A0018u;
label_1a0018:
    // 0x1a0018: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a0018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1a001c:
    // 0x1a001c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a001cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0028: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A002Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0028u;
            // 0x1a002c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0030u;
}
