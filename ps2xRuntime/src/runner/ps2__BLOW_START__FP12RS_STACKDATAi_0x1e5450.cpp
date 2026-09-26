#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _BLOW_START__FP12RS_STACKDATAi
// Address: 0x1e5450 - 0x1e54c0
void ps2__BLOW_START__FP12RS_STACKDATAi_0x1e5450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__BLOW_START__FP12RS_STACKDATAi_0x1e5450");
#endif

    switch (ctx->pc) {
        case 0x1e5470u: goto label_1e5470;
        case 0x1e5498u: goto label_1e5498;
        case 0x1e54a8u: goto label_1e54a8;
        default: break;
    }

    ctx->pc = 0x1e5450u;

    // 0x1e5450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e5450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5454: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e5454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5458: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5458u;
    {
        const bool branch_taken_0x1e5458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E545Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5458u;
            // 0x1e545c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5458) {
            ctx->pc = 0x1E5468u;
            goto label_1e5468;
        }
    }
    ctx->pc = 0x1E5460u;
    // 0x1e5460: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E5460u;
    {
        const bool branch_taken_0x1e5460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5460u;
            // 0x1e5464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5460) {
            ctx->pc = 0x1E54B4u;
            goto label_1e54b4;
        }
    }
    ctx->pc = 0x1E5468u;
label_1e5468:
    // 0x1e5468: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E5468u;
    SET_GPR_U32(ctx, 31, 0x1E5470u);
    ctx->pc = 0x1E546Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5468u;
            // 0x1e546c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5470u; }
        if (ctx->pc != 0x1E5470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5470u; }
        if (ctx->pc != 0x1E5470u) { return; }
    }
    ctx->pc = 0x1E5470u;
label_1e5470:
    // 0x1e5470: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e5470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5474: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e5474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5478: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1e5478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e547c: 0xe4400f54  swc1        $f0, 0xF54($v0)
    ctx->pc = 0x1e547cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3924), bits); }
    // 0x1e5480: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e5480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5484: 0xc4410f54  lwc1        $f1, 0xF54($v0)
    ctx->pc = 0x1e5484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5488: 0xc4400f50  lwc1        $f0, 0xF50($v0)
    ctx->pc = 0x1e5488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e548c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e548cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e5490: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E5490u;
    SET_GPR_U32(ctx, 31, 0x1E5498u);
    ctx->pc = 0x1E5494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5490u;
            // 0x1e5494: 0xe4400f54  swc1        $f0, 0xF54($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3924), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5498u; }
        if (ctx->pc != 0x1E5498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5498u; }
        if (ctx->pc != 0x1E5498u) { return; }
    }
    ctx->pc = 0x1E5498u;
label_1e5498:
    // 0x1e5498: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e5498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e549c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e54a0: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E54A0u;
    SET_GPR_U32(ctx, 31, 0x1E54A8u);
    ctx->pc = 0x1E54A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54A0u;
            // 0x1e54a4: 0xe4400f58  swc1        $f0, 0xF58($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3928), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54A8u; }
        if (ctx->pc != 0x1E54A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54A8u; }
        if (ctx->pc != 0x1E54A8u) { return; }
    }
    ctx->pc = 0x1E54A8u;
label_1e54a8:
    // 0x1e54a8: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e54a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e54ac: 0xac620f5c  sw          $v0, 0xF5C($v1)
    ctx->pc = 0x1e54acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3932), GPR_U32(ctx, 2));
    // 0x1e54b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e54b4:
    // 0x1e54b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e54b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e54b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E54B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E54BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54B8u;
            // 0x1e54bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E54C0u;
}
