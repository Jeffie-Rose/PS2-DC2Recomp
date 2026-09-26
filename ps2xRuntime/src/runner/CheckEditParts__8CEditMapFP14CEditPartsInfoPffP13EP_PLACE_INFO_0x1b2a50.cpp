#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEditParts__8CEditMapFP14CEditPartsInfoPffP13EP_PLACE_INFO
// Address: 0x1b2a50 - 0x1b2ad8
void CheckEditParts__8CEditMapFP14CEditPartsInfoPffP13EP_PLACE_INFO_0x1b2a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEditParts__8CEditMapFP14CEditPartsInfoPffP13EP_PLACE_INFO_0x1b2a50");
#endif

    switch (ctx->pc) {
        case 0x1b2a98u: goto label_1b2a98;
        case 0x1b2ab8u: goto label_1b2ab8;
        default: break;
    }

    ctx->pc = 0x1b2a50u;

    // 0x1b2a50: 0x27bdf7a0  addiu       $sp, $sp, -0x860
    ctx->pc = 0x1b2a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965152));
    // 0x1b2a54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b2a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b2a58: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b2a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b2a5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b2a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b2a60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b2a60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b2a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b2a68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b2a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b2a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b2a70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b2a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a74: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b2a74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b2a78: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1b2a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a7c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2A7Cu;
    {
        const bool branch_taken_0x1b2a7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A7Cu;
            // 0x1b2a80: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a7c) {
            ctx->pc = 0x1B2A8Cu;
            goto label_1b2a8c;
        }
    }
    ctx->pc = 0x1B2A84u;
    // 0x1b2a84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B2A84u;
    {
        const bool branch_taken_0x1b2a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A84u;
            // 0x1b2a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a84) {
            ctx->pc = 0x1B2AB8u;
            goto label_1b2ab8;
        }
    }
    ctx->pc = 0x1B2A8Cu;
label_1b2a8c:
    // 0x1b2a8c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1b2a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b2a90: 0xc06c8c8  jal         func_1B2320
    ctx->pc = 0x1B2A90u;
    SET_GPR_U32(ctx, 31, 0x1B2A98u);
    ctx->pc = 0x1B2A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A90u;
            // 0x1b2a94: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2320u;
    if (runtime->hasFunction(0x1B2320u)) {
        auto targetFn = runtime->lookupFunction(0x1B2320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A98u; }
        if (ctx->pc != 0x1B2A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNearParts__8CEditMapFP14CEditPartsInfoPffPP10CEditPartsi_0x1b2320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A98u; }
        if (ctx->pc != 0x1B2A98u) { return; }
    }
    ctx->pc = 0x1B2A98u;
label_1b2a98:
    // 0x1b2a98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b2a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b2a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b2aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aa4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b2aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aa8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b2aa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b2aac: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x1b2aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b2ab0: 0xc0bb664  jal         func_2ED990
    ctx->pc = 0x1B2AB0u;
    SET_GPR_U32(ctx, 31, 0x1B2AB8u);
    ctx->pc = 0x1B2AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AB0u;
            // 0x1b2ab4: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED990u;
    if (runtime->hasFunction(0x2ED990u)) {
        auto targetFn = runtime->lookupFunction(0x2ED990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AB8u; }
        if (ctx->pc != 0x1B2AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEditParts__8CEditMapFP14CEditPartsInfoPffP13EP_PLACE_INFOPP10CEditPartsi_0x2ed990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2AB8u; }
        if (ctx->pc != 0x1B2AB8u) { return; }
    }
    ctx->pc = 0x1B2AB8u;
label_1b2ab8:
    // 0x1b2ab8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b2ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2abc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b2abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2ac0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b2ac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2ac4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b2ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2ac8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b2ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2acc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b2accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AD0u;
            // 0x1b2ad4: 0x27bd0860  addiu       $sp, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2AD8u;
}
