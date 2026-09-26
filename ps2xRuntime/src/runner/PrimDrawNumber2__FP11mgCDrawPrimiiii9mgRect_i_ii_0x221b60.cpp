#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrimDrawNumber2__FP11mgCDrawPrimiiii9mgRect<i>ii
// Address: 0x221b60 - 0x221c04
void PrimDrawNumber2__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrimDrawNumber2__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221b60");
#endif

    switch (ctx->pc) {
        case 0x221ba4u: goto label_221ba4;
        case 0x221bc0u: goto label_221bc0;
        case 0x221be4u: goto label_221be4;
        default: break;
    }

    ctx->pc = 0x221b60u;

    // 0x221b60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x221b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x221b64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x221b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x221b68: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x221b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x221b6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x221b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x221b70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x221b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x221b74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x221b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x221b78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x221b78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x221b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x221b80: 0x6263c  dsll32      $a0, $a2, 24
    ctx->pc = 0x221b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 24));
    // 0x221b84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x221b88: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x221b88u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x221b8c: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x221b8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x221b90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x221b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b94: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x221b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b98: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x221b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b9c: 0xc088620  jal         func_221880
    ctx->pc = 0x221B9Cu;
    SET_GPR_U32(ctx, 31, 0x221BA4u);
    ctx->pc = 0x221BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221B9Cu;
            // 0x221ba0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221880u;
    if (runtime->hasFunction(0x221880u)) {
        auto targetFn = runtime->lookupFunction(0x221880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BA4u; }
        if (ctx->pc != 0x221BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuDrawNumberKeta__Fc_0x221880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BA4u; }
        if (ctx->pc != 0x221BA4u) { return; }
    }
    ctx->pc = 0x221BA4u;
label_221ba4:
    // 0x221ba4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x221ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ba8: 0x27b40068  addiu       $s4, $sp, 0x68
    ctx->pc = 0x221ba8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x221bac: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x221bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bb0: 0x8fa8006c  lw          $t0, 0x6C($sp)
    ctx->pc = 0x221bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x221bb4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x221bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x221bb8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x221BB8u;
    SET_GPR_U32(ctx, 31, 0x221BC0u);
    ctx->pc = 0x221BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221BB8u;
            // 0x221bbc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BC0u; }
        if (ctx->pc != 0x221BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BC0u; }
        if (ctx->pc != 0x221BC0u) { return; }
    }
    ctx->pc = 0x221BC0u;
label_221bc0:
    // 0x221bc0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x221bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x221bc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x221bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x221bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bcc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x221bccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bd4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x221bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x221bd8: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x221bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x221bdc: 0xc088624  jal         func_221890
    ctx->pc = 0x221BDCu;
    SET_GPR_U32(ctx, 31, 0x221BE4u);
    ctx->pc = 0x221BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221BDCu;
            // 0x221be0: 0x514821  addu        $t1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221890u;
    if (runtime->hasFunction(0x221890u)) {
        auto targetFn = runtime->lookupFunction(0x221890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BE4u; }
        if (ctx->pc != 0x221BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuNumber__FP11mgCDrawPrimii9mgRect_i_9mgRect_i_ii_0x221890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BE4u; }
        if (ctx->pc != 0x221BE4u) { return; }
    }
    ctx->pc = 0x221BE4u;
label_221be4:
    // 0x221be4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x221be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221be8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x221be8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221bec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x221becu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221bf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x221bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221bf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x221bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x221BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221BFCu;
            // 0x221c00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221C04u;
}
