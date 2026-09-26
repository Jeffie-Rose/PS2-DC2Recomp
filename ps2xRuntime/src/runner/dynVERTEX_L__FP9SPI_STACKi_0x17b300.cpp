#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynVERTEX_L__FP9SPI_STACKi
// Address: 0x17b300 - 0x17b388
void dynVERTEX_L__FP9SPI_STACKi_0x17b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynVERTEX_L__FP9SPI_STACKi_0x17b300");
#endif

    switch (ctx->pc) {
        case 0x17b318u: goto label_17b318;
        case 0x17b328u: goto label_17b328;
        case 0x17b334u: goto label_17b334;
        case 0x17b350u: goto label_17b350;
        case 0x17b370u: goto label_17b370;
        default: break;
    }

    ctx->pc = 0x17b300u;

    // 0x17b300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17b300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17b304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17b308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b30c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x17b30cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x17b310: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17B310u;
    SET_GPR_U32(ctx, 31, 0x17B318u);
    ctx->pc = 0x17B314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B310u;
            // 0x17b314: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B318u; }
        if (ctx->pc != 0x17B318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B318u; }
        if (ctx->pc != 0x17B318u) { return; }
    }
    ctx->pc = 0x17B318u;
label_17b318:
    // 0x17b318: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b31c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b320: 0xc051928  jal         func_1464A0
    ctx->pc = 0x17B320u;
    SET_GPR_U32(ctx, 31, 0x17B328u);
    ctx->pc = 0x17B324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B320u;
            // 0x17b324: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B328u; }
        if (ctx->pc != 0x17B328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B328u; }
        if (ctx->pc != 0x17B328u) { return; }
    }
    ctx->pc = 0x17B328u;
label_17b328:
    // 0x17b328: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b32c: 0xc05ea3c  jal         func_17A8F0
    ctx->pc = 0x17B32Cu;
    SET_GPR_U32(ctx, 31, 0x17B334u);
    ctx->pc = 0x17B330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B32Cu;
            // 0x17b330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8F0u;
    if (runtime->hasFunction(0x17A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B334u; }
        if (ctx->pc != 0x17B334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__13CDynamicAnimeFi_0x17a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B334u; }
        if (ctx->pc != 0x17B334u) { return; }
    }
    ctx->pc = 0x17B334u;
label_17b334:
    // 0x17b334: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17B334u;
    {
        const bool branch_taken_0x17b334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B334u;
            // 0x17b338: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b334) {
            ctx->pc = 0x17B370u;
            goto label_17b370;
        }
    }
    ctx->pc = 0x17B33Cu;
    // 0x17b33c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b340: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17b344: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17b344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b348: 0xc04ddf8  jal         func_1377E0
    ctx->pc = 0x17B348u;
    SET_GPR_U32(ctx, 31, 0x17B350u);
    ctx->pc = 0x17B34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B348u;
            // 0x17b34c: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1377E0u;
    if (runtime->hasFunction(0x1377E0u)) {
        auto targetFn = runtime->lookupFunction(0x1377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B350u; }
        if (ctx->pc != 0x17B350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition__8mgCFrameFPfPf_0x1377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B350u; }
        if (ctx->pc != 0x17B350u) { return; }
    }
    ctx->pc = 0x17B350u;
label_17b350:
    // 0x17b350: 0x8f858a20  lw          $a1, -0x75E0($gp)
    ctx->pc = 0x17b350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x17b354: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17b358: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x17b358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x17b35c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x17b35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b360: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b364: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x17b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17b368: 0xc05ea68  jal         func_17A9A0
    ctx->pc = 0x17B368u;
    SET_GPR_U32(ctx, 31, 0x17B370u);
    ctx->pc = 0x17B36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B368u;
            // 0x17b36c: 0xaf828a20  sw          $v0, -0x75E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A9A0u;
    if (runtime->hasFunction(0x17A9A0u)) {
        auto targetFn = runtime->lookupFunction(0x17A9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B370u; }
        if (ctx->pc != 0x17B370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInitVertex__13CDynamicAnimeFiPf_0x17a9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B370u; }
        if (ctx->pc != 0x17B370u) { return; }
    }
    ctx->pc = 0x17B370u;
label_17b370:
    // 0x17b370: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b37c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b380: 0x3e00008  jr          $ra
    ctx->pc = 0x17B380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B380u;
            // 0x17b384: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B388u;
}
