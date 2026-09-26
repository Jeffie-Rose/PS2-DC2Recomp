#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_SPIN_MARK_POS__FP12RS_STACKDATAi
// Address: 0x276260 - 0x2762a8
void ps2__SPHIDA_SET_SPIN_MARK_POS__FP12RS_STACKDATAi_0x276260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_SPIN_MARK_POS__FP12RS_STACKDATAi_0x276260");
#endif

    switch (ctx->pc) {
        case 0x276270u: goto label_276270;
        case 0x27627cu: goto label_27627c;
        default: break;
    }

    ctx->pc = 0x276260u;

    // 0x276260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276268: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x276268u;
    SET_GPR_U32(ctx, 31, 0x276270u);
    ctx->pc = 0x27626Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276268u;
            // 0x27626c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276270u; }
        if (ctx->pc != 0x276270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276270u; }
        if (ctx->pc != 0x276270u) { return; }
    }
    ctx->pc = 0x276270u;
label_276270:
    // 0x276270: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x276270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276274: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x276274u;
    SET_GPR_U32(ctx, 31, 0x27627Cu);
    ctx->pc = 0x276278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x276274u;
            // 0x276278: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27627Cu; }
        if (ctx->pc != 0x27627Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27627Cu; }
        if (ctx->pc != 0x27627Cu) { return; }
    }
    ctx->pc = 0x27627Cu;
label_27627c:
    // 0x27627c: 0x8f839ed4  lw          $v1, -0x612C($gp)
    ctx->pc = 0x27627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x276280: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x276280u;
    {
        const bool branch_taken_0x276280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276280u;
            // 0x276284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276280) {
            ctx->pc = 0x276290u;
            goto label_276290;
        }
    }
    ctx->pc = 0x276288u;
    // 0x276288: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x276288u;
    {
        const bool branch_taken_0x276288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27628Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276288u;
            // 0x27628c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276288) {
            ctx->pc = 0x2762A0u;
            goto label_2762a0;
        }
    }
    ctx->pc = 0x276290u;
label_276290:
    // 0x276290: 0xe46101f4  swc1        $f1, 0x1F4($v1)
    ctx->pc = 0x276290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 500), bits); }
    // 0x276294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276298: 0xe46001f8  swc1        $f0, 0x1F8($v1)
    ctx->pc = 0x276298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 504), bits); }
    // 0x27629c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27629cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2762a0:
    // 0x2762a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2762A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2762A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762A0u;
            // 0x2762a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2762A8u;
}
