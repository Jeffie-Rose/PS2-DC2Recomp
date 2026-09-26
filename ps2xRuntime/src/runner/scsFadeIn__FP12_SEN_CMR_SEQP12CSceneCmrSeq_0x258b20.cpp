#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsFadeIn__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x258b20 - 0x258ba0
void scsFadeIn__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsFadeIn__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258b20");
#endif

    switch (ctx->pc) {
        case 0x258b54u: goto label_258b54;
        case 0x258b68u: goto label_258b68;
        case 0x258b74u: goto label_258b74;
        case 0x258b80u: goto label_258b80;
        default: break;
    }

    ctx->pc = 0x258b20u;

    // 0x258b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x258b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x258b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x258b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x258b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258b2c: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x258b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x258b30: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x258B30u;
    {
        const bool branch_taken_0x258b30 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x258B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258B30u;
            // 0x258b34: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b30) {
            ctx->pc = 0x258B5Cu;
            goto label_258b5c;
        }
    }
    ctx->pc = 0x258B38u;
    // 0x258b38: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x258b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x258b3c: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x258b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x258b40: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x258b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x258b44: 0xc48d0014  lwc1        $f13, 0x14($a0)
    ctx->pc = 0x258b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x258b48: 0xc48e0018  lwc1        $f14, 0x18($a0)
    ctx->pc = 0x258b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x258b4c: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x258B4Cu;
    SET_GPR_U32(ctx, 31, 0x258B54u);
    ctx->pc = 0x258B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258B4Cu;
            // 0x258b50: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D790u;
    if (runtime->hasFunction(0x17D790u)) {
        auto targetFn = runtime->lookupFunction(0x17D790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B54u; }
        if (ctx->pc != 0x258B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFifff_0x17d790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B54u; }
        if (ctx->pc != 0x258B54u) { return; }
    }
    ctx->pc = 0x258B54u;
label_258b54:
    // 0x258b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258b58: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x258b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_258b5c:
    // 0x258b5c: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x258b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x258b60: 0xc05f664  jal         func_17D990
    ctx->pc = 0x258B60u;
    SET_GPR_U32(ctx, 31, 0x258B68u);
    ctx->pc = 0x258B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258B60u;
            // 0x258b64: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D990u;
    if (runtime->hasFunction(0x17D990u)) {
        auto targetFn = runtime->lookupFunction(0x17D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B68u; }
        if (ctx->pc != 0x258B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeStep__10CFadeInOutFv_0x17d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B68u; }
        if (ctx->pc != 0x258B68u) { return; }
    }
    ctx->pc = 0x258B68u;
label_258b68:
    // 0x258b68: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x258b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x258b6c: 0xc05f7b4  jal         func_17DED0
    ctx->pc = 0x258B6Cu;
    SET_GPR_U32(ctx, 31, 0x258B74u);
    ctx->pc = 0x258B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258B6Cu;
            // 0x258b70: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DED0u;
    if (runtime->hasFunction(0x17DED0u)) {
        auto targetFn = runtime->lookupFunction(0x17DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B74u; }
        if (ctx->pc != 0x258B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__10CFadeInOutFv_0x17ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B74u; }
        if (ctx->pc != 0x258B74u) { return; }
    }
    ctx->pc = 0x258B74u;
label_258b74:
    // 0x258b74: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x258b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x258b78: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x258B78u;
    SET_GPR_U32(ctx, 31, 0x258B80u);
    ctx->pc = 0x258B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258B78u;
            // 0x258b7c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B80u; }
        if (ctx->pc != 0x258B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258B80u; }
        if (ctx->pc != 0x258B80u) { return; }
    }
    ctx->pc = 0x258B80u;
label_258b80:
    // 0x258b80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258B80u;
    {
        const bool branch_taken_0x258b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258B80u;
            // 0x258b84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b80) {
            ctx->pc = 0x258B90u;
            goto label_258b90;
        }
    }
    ctx->pc = 0x258B88u;
    // 0x258b88: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x258b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x258b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x258b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_258b90:
    // 0x258b90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x258b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258b98: 0x3e00008  jr          $ra
    ctx->pc = 0x258B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258B98u;
            // 0x258b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258BA0u;
}
