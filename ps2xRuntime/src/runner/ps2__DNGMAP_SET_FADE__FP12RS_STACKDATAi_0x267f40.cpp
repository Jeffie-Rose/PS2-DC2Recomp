#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNGMAP_SET_FADE__FP12RS_STACKDATAi
// Address: 0x267f40 - 0x267fac
void ps2__DNGMAP_SET_FADE__FP12RS_STACKDATAi_0x267f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNGMAP_SET_FADE__FP12RS_STACKDATAi_0x267f40");
#endif

    switch (ctx->pc) {
        case 0x267f54u: goto label_267f54;
        case 0x267f60u: goto label_267f60;
        case 0x267f80u: goto label_267f80;
        case 0x267f98u: goto label_267f98;
        default: break;
    }

    ctx->pc = 0x267f40u;

    // 0x267f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x267f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x267f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x267f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267f4c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267F4Cu;
    SET_GPR_U32(ctx, 31, 0x267F54u);
    ctx->pc = 0x267F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267F4Cu;
            // 0x267f50: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F54u; }
        if (ctx->pc != 0x267F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F54u; }
        if (ctx->pc != 0x267F54u) { return; }
    }
    ctx->pc = 0x267F54u;
label_267f54:
    // 0x267f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f58: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267F58u;
    SET_GPR_U32(ctx, 31, 0x267F60u);
    ctx->pc = 0x267F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267F58u;
            // 0x267f5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F60u; }
        if (ctx->pc != 0x267F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F60u; }
        if (ctx->pc != 0x267F60u) { return; }
    }
    ctx->pc = 0x267F60u;
label_267f60:
    // 0x267f60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x267f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267f64: 0x3c0101ef  lui         $at, 0x1EF
    ctx->pc = 0x267f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)495 << 16));
    // 0x267f68: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267F68u;
    {
        const bool branch_taken_0x267f68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x267F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267F68u;
            // 0x267f6c: 0xa0239818  sb          $v1, -0x67E8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294940696), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f68) {
            ctx->pc = 0x267F88u;
            goto label_267f88;
        }
    }
    ctx->pc = 0x267F70u;
    // 0x267f70: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x267f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x267f74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x267f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f78: 0xc07b9e4  jal         func_1EE790
    ctx->pc = 0x267F78u;
    SET_GPR_U32(ctx, 31, 0x267F80u);
    ctx->pc = 0x267F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267F78u;
            // 0x267f7c: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE790u;
    if (runtime->hasFunction(0x1EE790u)) {
        auto targetFn = runtime->lookupFunction(0x1EE790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F80u; }
        if (ctx->pc != 0x267F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__11CDngFreeMapFi_0x1ee790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F80u; }
        if (ctx->pc != 0x267F80u) { return; }
    }
    ctx->pc = 0x267F80u;
label_267f80:
    // 0x267f80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x267F80u;
    {
        const bool branch_taken_0x267f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267F80u;
            // 0x267f84: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f80) {
            ctx->pc = 0x267F9Cu;
            goto label_267f9c;
        }
    }
    ctx->pc = 0x267F88u;
label_267f88:
    // 0x267f88: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x267f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x267f8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x267f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267f90: 0xc07b9f4  jal         func_1EE7D0
    ctx->pc = 0x267F90u;
    SET_GPR_U32(ctx, 31, 0x267F98u);
    ctx->pc = 0x267F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267F90u;
            // 0x267f94: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE7D0u;
    if (runtime->hasFunction(0x1EE7D0u)) {
        auto targetFn = runtime->lookupFunction(0x1EE7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F98u; }
        if (ctx->pc != 0x267F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__11CDngFreeMapFi_0x1ee7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F98u; }
        if (ctx->pc != 0x267F98u) { return; }
    }
    ctx->pc = 0x267F98u;
label_267f98:
    // 0x267f98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x267f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_267f9c:
    // 0x267f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267fa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x267FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267FA4u;
            // 0x267fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267FACu;
}
