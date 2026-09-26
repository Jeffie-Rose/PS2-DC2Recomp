#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_NEXT_ROT__FP12RS_STACKDATAi
// Address: 0x1e40e0 - 0x1e4128
void ps2__SET_NEXT_ROT__FP12RS_STACKDATAi_0x1e40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_NEXT_ROT__FP12RS_STACKDATAi_0x1e40e0");
#endif

    switch (ctx->pc) {
        case 0x1e4100u: goto label_1e4100;
        case 0x1e4110u: goto label_1e4110;
        default: break;
    }

    ctx->pc = 0x1e40e0u;

    // 0x1e40e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e40e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e40e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e40e8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E40E8u;
    {
        const bool branch_taken_0x1e40e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E40ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40E8u;
            // 0x1e40ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40e8) {
            ctx->pc = 0x1E40F8u;
            goto label_1e40f8;
        }
    }
    ctx->pc = 0x1E40F0u;
    // 0x1e40f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E40F0u;
    {
        const bool branch_taken_0x1e40f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40F0u;
            // 0x1e40f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40f0) {
            ctx->pc = 0x1E411Cu;
            goto label_1e411c;
        }
    }
    ctx->pc = 0x1E40F8u;
label_1e40f8:
    // 0x1e40f8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E40F8u;
    SET_GPR_U32(ctx, 31, 0x1E4100u);
    ctx->pc = 0x1E40FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40F8u;
            // 0x1e40fc: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4100u; }
        if (ctx->pc != 0x1E4100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4100u; }
        if (ctx->pc != 0x1E4100u) { return; }
    }
    ctx->pc = 0x1E4100u;
label_1e4100:
    // 0x1e4100: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e4100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e4104: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e4104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4108: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E4108u;
    SET_GPR_U32(ctx, 31, 0x1E4110u);
    ctx->pc = 0x1E410Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4108u;
            // 0x1e410c: 0xe4401490  swc1        $f0, 0x1490($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5264), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4110u; }
        if (ctx->pc != 0x1E4110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4110u; }
        if (ctx->pc != 0x1E4110u) { return; }
    }
    ctx->pc = 0x1E4110u;
label_1e4110:
    // 0x1e4110: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e4110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e4114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4118: 0xe4601494  swc1        $f0, 0x1494($v1)
    ctx->pc = 0x1e4118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5268), bits); }
label_1e411c:
    // 0x1e411c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e411cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4120: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4120u;
            // 0x1e4124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4128u;
}
