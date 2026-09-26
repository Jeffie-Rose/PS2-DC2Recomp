#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsFadeOut__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x258ba0 - 0x258c20
void scsFadeOut__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsFadeOut__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258ba0");
#endif

    switch (ctx->pc) {
        case 0x258bd4u: goto label_258bd4;
        case 0x258be8u: goto label_258be8;
        case 0x258bf4u: goto label_258bf4;
        case 0x258c00u: goto label_258c00;
        default: break;
    }

    ctx->pc = 0x258ba0u;

    // 0x258ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x258ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x258ba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x258ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x258ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258bac: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x258bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x258bb0: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x258BB0u;
    {
        const bool branch_taken_0x258bb0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x258BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258BB0u;
            // 0x258bb4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bb0) {
            ctx->pc = 0x258BDCu;
            goto label_258bdc;
        }
    }
    ctx->pc = 0x258BB8u;
    // 0x258bb8: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x258bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x258bbc: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x258bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x258bc0: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x258bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x258bc4: 0xc48d0014  lwc1        $f13, 0x14($a0)
    ctx->pc = 0x258bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x258bc8: 0xc48e0018  lwc1        $f14, 0x18($a0)
    ctx->pc = 0x258bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x258bcc: 0xc05f610  jal         func_17D840
    ctx->pc = 0x258BCCu;
    SET_GPR_U32(ctx, 31, 0x258BD4u);
    ctx->pc = 0x258BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258BCCu;
            // 0x258bd0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258BD4u; }
        if (ctx->pc != 0x258BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258BD4u; }
        if (ctx->pc != 0x258BD4u) { return; }
    }
    ctx->pc = 0x258BD4u;
label_258bd4:
    // 0x258bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258bd8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x258bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_258bdc:
    // 0x258bdc: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x258bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x258be0: 0xc05f664  jal         func_17D990
    ctx->pc = 0x258BE0u;
    SET_GPR_U32(ctx, 31, 0x258BE8u);
    ctx->pc = 0x258BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258BE0u;
            // 0x258be4: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D990u;
    if (runtime->hasFunction(0x17D990u)) {
        auto targetFn = runtime->lookupFunction(0x17D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258BE8u; }
        if (ctx->pc != 0x258BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeStep__10CFadeInOutFv_0x17d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258BE8u; }
        if (ctx->pc != 0x258BE8u) { return; }
    }
    ctx->pc = 0x258BE8u;
label_258be8:
    // 0x258be8: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x258be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x258bec: 0xc05f7b4  jal         func_17DED0
    ctx->pc = 0x258BECu;
    SET_GPR_U32(ctx, 31, 0x258BF4u);
    ctx->pc = 0x258BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258BECu;
            // 0x258bf0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DED0u;
    if (runtime->hasFunction(0x17DED0u)) {
        auto targetFn = runtime->lookupFunction(0x17DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258BF4u; }
        if (ctx->pc != 0x258BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__10CFadeInOutFv_0x17ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258BF4u; }
        if (ctx->pc != 0x258BF4u) { return; }
    }
    ctx->pc = 0x258BF4u;
label_258bf4:
    // 0x258bf4: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x258bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x258bf8: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x258BF8u;
    SET_GPR_U32(ctx, 31, 0x258C00u);
    ctx->pc = 0x258BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258BF8u;
            // 0x258bfc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258C00u; }
        if (ctx->pc != 0x258C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258C00u; }
        if (ctx->pc != 0x258C00u) { return; }
    }
    ctx->pc = 0x258C00u;
label_258c00:
    // 0x258c00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258C00u;
    {
        const bool branch_taken_0x258c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258C00u;
            // 0x258c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c00) {
            ctx->pc = 0x258C10u;
            goto label_258c10;
        }
    }
    ctx->pc = 0x258C08u;
    // 0x258c08: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x258c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x258c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x258c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_258c10:
    // 0x258c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x258c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258c18: 0x3e00008  jr          $ra
    ctx->pc = 0x258C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258C18u;
            // 0x258c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258C20u;
}
