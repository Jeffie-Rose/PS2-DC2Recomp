#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: videoDecMain__FP8VideoDec
// Address: 0x2992c0 - 0x299328
void videoDecMain__FP8VideoDec_0x2992c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecMain__FP8VideoDec_0x2992c0");
#endif

    switch (ctx->pc) {
        case 0x2992d8u: goto label_2992d8;
        case 0x2992e4u: goto label_2992e4;
        case 0x2992ecu: goto label_2992ec;
        case 0x299318u: goto label_299318;
        default: break;
    }

    ctx->pc = 0x2992c0u;

    // 0x2992c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2992c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2992c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2992c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2992c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2992c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2992cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2992ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992d0: 0xc0a6760  jal         func_299D80
    ctx->pc = 0x2992D0u;
    SET_GPR_U32(ctx, 31, 0x2992D8u);
    ctx->pc = 0x2992D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2992D0u;
            // 0x2992d4: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299D80u;
    if (runtime->hasFunction(0x299D80u)) {
        auto targetFn = runtime->lookupFunction(0x299D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992D8u; }
        if (ctx->pc != 0x2992D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufReset__FP5ViBuf_0x299d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992D8u; }
        if (ctx->pc != 0x2992D8u) { return; }
    }
    ctx->pc = 0x2992D8u;
label_2992d8:
    // 0x2992d8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x2992dc: 0xc0a6684  jal         func_299A10
    ctx->pc = 0x2992DCu;
    SET_GPR_U32(ctx, 31, 0x2992E4u);
    ctx->pc = 0x2992E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2992DCu;
            // 0x2992e0: 0x24845470  addiu       $a0, $a0, 0x5470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299A10u;
    if (runtime->hasFunction(0x299A10u)) {
        auto targetFn = runtime->lookupFunction(0x299A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992E4u; }
        if (ctx->pc != 0x2992E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufReset__FP5VoBuf_0x299a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992E4u; }
        if (ctx->pc != 0x2992E4u) { return; }
    }
    ctx->pc = 0x2992E4u;
label_2992e4:
    // 0x2992e4: 0xc0a6e28  jal         func_29B8A0
    ctx->pc = 0x2992E4u;
    SET_GPR_U32(ctx, 31, 0x2992ECu);
    ctx->pc = 0x2992E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2992E4u;
            // 0x2992e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B8A0u;
    if (runtime->hasFunction(0x29B8A0u)) {
        auto targetFn = runtime->lookupFunction(0x29B8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992ECu; }
        if (ctx->pc != 0x2992ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        decBs0__FP8VideoDec_0x29b8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2992ECu; }
        if (ctx->pc != 0x2992ECu) { return; }
    }
    ctx->pc = 0x2992ECu;
label_2992ec:
    // 0x2992ec: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2992ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2992f0: 0x8c225480  lw          $v0, 0x5480($at)
    ctx->pc = 0x2992f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21632)));
    // 0x2992f4: 0x0  nop
    ctx->pc = 0x2992f4u;
    // NOP
    // 0x2992f8: 0x0  nop
    ctx->pc = 0x2992f8u;
    // NOP
    // 0x2992fc: 0x0  nop
    ctx->pc = 0x2992fcu;
    // NOP
    // 0x299300: 0x0  nop
    ctx->pc = 0x299300u;
    // NOP
    // 0x299304: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299304u;
    {
        const bool branch_taken_0x299304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299304) {
            ctx->pc = 0x2992ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2992ec;
        }
    }
    ctx->pc = 0x29930Cu;
    // 0x29930c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299310: 0xc0a6e20  jal         func_29B880
    ctx->pc = 0x299310u;
    SET_GPR_U32(ctx, 31, 0x299318u);
    ctx->pc = 0x299314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299310u;
            // 0x299314: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B880u;
    if (runtime->hasFunction(0x29B880u)) {
        auto targetFn = runtime->lookupFunction(0x29B880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299318u; }
        if (ctx->pc != 0x299318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecSetState__FP8VideoDecUi_0x29b880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299318u; }
        if (ctx->pc != 0x299318u) { return; }
    }
    ctx->pc = 0x299318u;
label_299318:
    // 0x299318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29931c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29931cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299320: 0x3e00008  jr          $ra
    ctx->pc = 0x299320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299320u;
            // 0x299324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299328u;
}
