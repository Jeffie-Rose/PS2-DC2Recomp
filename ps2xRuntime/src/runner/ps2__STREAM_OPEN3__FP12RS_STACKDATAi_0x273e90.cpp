#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _STREAM_OPEN3__FP12RS_STACKDATAi
// Address: 0x273e90 - 0x273ef8
void ps2__STREAM_OPEN3__FP12RS_STACKDATAi_0x273e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__STREAM_OPEN3__FP12RS_STACKDATAi_0x273e90");
#endif

    switch (ctx->pc) {
        case 0x273ea4u: goto label_273ea4;
        case 0x273eb8u: goto label_273eb8;
        case 0x273eccu: goto label_273ecc;
        case 0x273edcu: goto label_273edc;
        default: break;
    }

    ctx->pc = 0x273e90u;

    // 0x273e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x273e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x273e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x273e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x273e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x273e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x273e9c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273E9Cu;
    SET_GPR_U32(ctx, 31, 0x273EA4u);
    ctx->pc = 0x273EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273E9Cu;
            // 0x273ea0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273EA4u; }
        if (ctx->pc != 0x273EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273EA4u; }
        if (ctx->pc != 0x273EA4u) { return; }
    }
    ctx->pc = 0x273EA4u;
label_273ea4:
    // 0x273ea4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x273ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273ea8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x273ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x273eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273eb0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273EB0u;
    SET_GPR_U32(ctx, 31, 0x273EB8u);
    ctx->pc = 0x273EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273EB0u;
            // 0x273eb4: 0xac22e568  sw          $v0, -0x1A98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273EB8u; }
        if (ctx->pc != 0x273EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273EB8u; }
        if (ctx->pc != 0x273EB8u) { return; }
    }
    ctx->pc = 0x273EB8u;
label_273eb8:
    // 0x273eb8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x273eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x273ebc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x273ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ec0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x273ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x273ec4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x273EC4u;
    SET_GPR_U32(ctx, 31, 0x273ECCu);
    ctx->pc = 0x273EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273EC4u;
            // 0x273ec8: 0x24a5cae8  addiu       $a1, $a1, -0x3518 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273ECCu; }
        if (ctx->pc != 0x273ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273ECCu; }
        if (ctx->pc != 0x273ECCu) { return; }
    }
    ctx->pc = 0x273ECCu;
label_273ecc:
    // 0x273ecc: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x273eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x273ed0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x273ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273ed4: 0xc062bbc  jal         func_18AEF0
    ctx->pc = 0x273ED4u;
    SET_GPR_U32(ctx, 31, 0x273EDCu);
    ctx->pc = 0x273ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273ED4u;
            // 0x273ed8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEF0u;
    if (runtime->hasFunction(0x18AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273EDCu; }
        if (ctx->pc != 0x273EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenFast__6CSoundFiPc_0x18aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273EDCu; }
        if (ctx->pc != 0x273EDCu) { return; }
    }
    ctx->pc = 0x273EDCu;
label_273edc:
    // 0x273edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273ee0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x273ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x273ee4: 0xac22e62c  sw          $v0, -0x19D4($at)
    ctx->pc = 0x273ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960684), GPR_U32(ctx, 2));
    // 0x273ee8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x273ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x273EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273EF0u;
            // 0x273ef4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273EF8u;
}
