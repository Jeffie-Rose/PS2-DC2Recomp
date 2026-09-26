#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TuriTourCount__Fv
// Address: 0x21a270 - 0x21a310
void TuriTourCount__Fv_0x21a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TuriTourCount__Fv_0x21a270");
#endif

    switch (ctx->pc) {
        case 0x21a288u: goto label_21a288;
        case 0x21a29cu: goto label_21a29c;
        case 0x21a2b8u: goto label_21a2b8;
        case 0x21a2e4u: goto label_21a2e4;
        case 0x21a2f8u: goto label_21a2f8;
        default: break;
    }

    ctx->pc = 0x21a270u;

    // 0x21a270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21a274: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21a278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21a278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21a27c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21a27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a280: 0xc064220  jal         func_190880
    ctx->pc = 0x21A280u;
    SET_GPR_U32(ctx, 31, 0x21A288u);
    ctx->pc = 0x21A284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A280u;
            // 0x21a284: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A288u; }
        if (ctx->pc != 0x21A288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A288u; }
        if (ctx->pc != 0x21A288u) { return; }
    }
    ctx->pc = 0x21A288u;
label_21a288:
    // 0x21a288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a28c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x21A28Cu;
    {
        const bool branch_taken_0x21a28c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A28Cu;
            // 0x21a290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a28c) {
            ctx->pc = 0x21A2F8u;
            goto label_21a2f8;
        }
    }
    ctx->pc = 0x21A294u;
    // 0x21a294: 0xc0bd950  jal         func_2F6540
    ctx->pc = 0x21A294u;
    SET_GPR_U32(ctx, 31, 0x21A29Cu);
    ctx->pc = 0x21A298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A294u;
            // 0x21a298: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6540u;
    if (runtime->hasFunction(0x2F6540u)) {
        auto targetFn = runtime->lookupFunction(0x2F6540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A29Cu; }
        if (ctx->pc != 0x21A29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShortFlag__9CSaveDataFi_0x2f6540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A29Cu; }
        if (ctx->pc != 0x21A29Cu) { return; }
    }
    ctx->pc = 0x21A29Cu;
label_21a29c:
    // 0x21a29c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x21a29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x21a2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a2a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21a2a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21a2a8: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x21a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x21a2ac: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x21a2acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a2b0: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x21A2B0u;
    SET_GPR_U32(ctx, 31, 0x21A2B8u);
    ctx->pc = 0x21A2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A2B0u;
            // 0x21a2b4: 0x24120009  addiu       $s2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A2B8u; }
        if (ctx->pc != 0x21A2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A2B8u; }
        if (ctx->pc != 0x21A2B8u) { return; }
    }
    ctx->pc = 0x21A2B8u;
label_21a2b8:
    // 0x21a2b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A2B8u;
    {
        const bool branch_taken_0x21a2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A2B8u;
            // 0x21a2bc: 0x251082a  slt         $at, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2b8) {
            ctx->pc = 0x21A2C8u;
            goto label_21a2c8;
        }
    }
    ctx->pc = 0x21A2C0u;
    // 0x21a2c0: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x21a2c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21a2c4: 0x251082a  slt         $at, $s2, $s1
    ctx->pc = 0x21a2c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_21a2c8:
    // 0x21a2c8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x21A2C8u;
    {
        const bool branch_taken_0x21a2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A2C8u;
            // 0x21a2cc: 0x11343c  dsll32      $a2, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a2c8) {
            ctx->pc = 0x21A2E8u;
            goto label_21a2e8;
        }
    }
    ctx->pc = 0x21A2D0u;
    // 0x21a2d0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x21a2d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a2d8: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x21a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x21a2dc: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x21A2DCu;
    SET_GPR_U32(ctx, 31, 0x21A2E4u);
    ctx->pc = 0x21A2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A2DCu;
            // 0x21a2e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A2E4u; }
        if (ctx->pc != 0x21A2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A2E4u; }
        if (ctx->pc != 0x21A2E4u) { return; }
    }
    ctx->pc = 0x21A2E4u;
label_21a2e4:
    // 0x21a2e4: 0x11343c  dsll32      $a2, $s1, 16
    ctx->pc = 0x21a2e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 16));
label_21a2e8:
    // 0x21a2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a2ec: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x21a2ecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x21a2f0: 0xc0bd940  jal         func_2F6500
    ctx->pc = 0x21A2F0u;
    SET_GPR_U32(ctx, 31, 0x21A2F8u);
    ctx->pc = 0x21A2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A2F0u;
            // 0x21a2f4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6500u;
    if (runtime->hasFunction(0x2F6500u)) {
        auto targetFn = runtime->lookupFunction(0x2F6500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A2F8u; }
        if (ctx->pc != 0x21A2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetShortFlag__9CSaveDataFis_0x2f6500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A2F8u; }
        if (ctx->pc != 0x21A2F8u) { return; }
    }
    ctx->pc = 0x21A2F8u;
label_21a2f8:
    // 0x21a2f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21a2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a2fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21a2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21a300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a308: 0x3e00008  jr          $ra
    ctx->pc = 0x21A308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A308u;
            // 0x21a30c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A310u;
}
