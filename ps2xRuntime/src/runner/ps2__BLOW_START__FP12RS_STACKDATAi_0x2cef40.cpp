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
// Address: 0x2cef40 - 0x2cefc0
void ps2__BLOW_START__FP12RS_STACKDATAi_0x2cef40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__BLOW_START__FP12RS_STACKDATAi_0x2cef40");
#endif

    switch (ctx->pc) {
        case 0x2cef60u: goto label_2cef60;
        case 0x2cef90u: goto label_2cef90;
        case 0x2cefa4u: goto label_2cefa4;
        default: break;
    }

    ctx->pc = 0x2cef40u;

    // 0x2cef40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cef44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2cef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cef48: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CEF48u;
    {
        const bool branch_taken_0x2cef48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CEF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF48u;
            // 0x2cef4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef48) {
            ctx->pc = 0x2CEF58u;
            goto label_2cef58;
        }
    }
    ctx->pc = 0x2CEF50u;
    // 0x2cef50: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2CEF50u;
    {
        const bool branch_taken_0x2cef50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF50u;
            // 0x2cef54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cef50) {
            ctx->pc = 0x2CEFB4u;
            goto label_2cefb4;
        }
    }
    ctx->pc = 0x2CEF58u;
label_2cef58:
    // 0x2cef58: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CEF58u;
    SET_GPR_U32(ctx, 31, 0x2CEF60u);
    ctx->pc = 0x2CEF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF58u;
            // 0x2cef5c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF60u; }
        if (ctx->pc != 0x2CEF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF60u; }
        if (ctx->pc != 0x2CEF60u) { return; }
    }
    ctx->pc = 0x2CEF60u;
label_2cef60:
    // 0x2cef60: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cef60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cef64: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2cef64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef68: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cef68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cef6c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x2cef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2cef70: 0xe4400f54  swc1        $f0, 0xF54($v0)
    ctx->pc = 0x2cef70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3924), bits); }
    // 0x2cef74: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cef74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cef78: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cef7c: 0xc4410f54  lwc1        $f1, 0xF54($v0)
    ctx->pc = 0x2cef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cef80: 0xc4400f50  lwc1        $f0, 0xF50($v0)
    ctx->pc = 0x2cef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cef84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cef84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cef88: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CEF88u;
    SET_GPR_U32(ctx, 31, 0x2CEF90u);
    ctx->pc = 0x2CEF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF88u;
            // 0x2cef8c: 0xe4400f54  swc1        $f0, 0xF54($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3924), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF90u; }
        if (ctx->pc != 0x2CEF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF90u; }
        if (ctx->pc != 0x2CEF90u) { return; }
    }
    ctx->pc = 0x2CEF90u;
label_2cef90:
    // 0x2cef90: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cef90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cef94: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2cef94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef98: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cef98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cef9c: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CEF9Cu;
    SET_GPR_U32(ctx, 31, 0x2CEFA4u);
    ctx->pc = 0x2CEFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF9Cu;
            // 0x2cefa0: 0xe4400f58  swc1        $f0, 0xF58($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3928), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEFA4u; }
        if (ctx->pc != 0x2CEFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEFA4u; }
        if (ctx->pc != 0x2CEFA4u) { return; }
    }
    ctx->pc = 0x2CEFA4u;
label_2cefa4:
    // 0x2cefa4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cefa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cefa8: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cefa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cefac: 0xac620f5c  sw          $v0, 0xF5C($v1)
    ctx->pc = 0x2cefacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3932), GPR_U32(ctx, 2));
    // 0x2cefb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cefb4:
    // 0x2cefb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cefb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cefb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFB8u;
            // 0x2cefbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CEFC0u;
}
