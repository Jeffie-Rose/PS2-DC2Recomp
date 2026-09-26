#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect<i>ii
// Address: 0x221ab0 - 0x221b5c
void PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrimDrawNumber__FP11mgCDrawPrimiiii9mgRect_i_ii_0x221ab0");
#endif

    switch (ctx->pc) {
        case 0x221af8u: goto label_221af8;
        case 0x221b14u: goto label_221b14;
        case 0x221b38u: goto label_221b38;
        default: break;
    }

    ctx->pc = 0x221ab0u;

    // 0x221ab0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x221ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x221ab4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x221ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x221ab8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x221ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x221abc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x221abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x221ac0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x221ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x221ac4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x221ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x221ac8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x221ac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221acc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x221accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x221ad0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x221ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221ad4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x221ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x221ad8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x221ad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x221ae0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x221ae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ae4: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x221ae4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x221ae8: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x221ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221aec: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x221aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221af0: 0xc088620  jal         func_221880
    ctx->pc = 0x221AF0u;
    SET_GPR_U32(ctx, 31, 0x221AF8u);
    ctx->pc = 0x221AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221AF0u;
            // 0x221af4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221880u;
    if (runtime->hasFunction(0x221880u)) {
        auto targetFn = runtime->lookupFunction(0x221880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221AF8u; }
        if (ctx->pc != 0x221AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuDrawNumberKeta__Fc_0x221880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221AF8u; }
        if (ctx->pc != 0x221AF8u) { return; }
    }
    ctx->pc = 0x221AF8u;
label_221af8:
    // 0x221af8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x221af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221afc: 0x27b50078  addiu       $s5, $sp, 0x78
    ctx->pc = 0x221afcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x221b00: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x221b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b04: 0x8fa8007c  lw          $t0, 0x7C($sp)
    ctx->pc = 0x221b04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x221b08: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x221b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x221b0c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x221B0Cu;
    SET_GPR_U32(ctx, 31, 0x221B14u);
    ctx->pc = 0x221B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221B0Cu;
            // 0x221b10: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221B14u; }
        if (ctx->pc != 0x221B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221B14u; }
        if (ctx->pc != 0x221B14u) { return; }
    }
    ctx->pc = 0x221B14u;
label_221b14:
    // 0x221b14: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x221b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x221b18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x221b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x221b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x221b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b24: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x221b24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b28: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x221b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x221b2c: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x221b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x221b30: 0xc088624  jal         func_221890
    ctx->pc = 0x221B30u;
    SET_GPR_U32(ctx, 31, 0x221B38u);
    ctx->pc = 0x221B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221B30u;
            // 0x221b34: 0x514821  addu        $t1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221890u;
    if (runtime->hasFunction(0x221890u)) {
        auto targetFn = runtime->lookupFunction(0x221890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221B38u; }
        if (ctx->pc != 0x221B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuNumber__FP11mgCDrawPrimii9mgRect_i_9mgRect_i_ii_0x221890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221B38u; }
        if (ctx->pc != 0x221B38u) { return; }
    }
    ctx->pc = 0x221B38u;
label_221b38:
    // 0x221b38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x221b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x221b3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x221b3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221b40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x221b40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221b44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x221b44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221b48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x221b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x221b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221b54: 0x3e00008  jr          $ra
    ctx->pc = 0x221B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221B54u;
            // 0x221b58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221B5Cu;
}
