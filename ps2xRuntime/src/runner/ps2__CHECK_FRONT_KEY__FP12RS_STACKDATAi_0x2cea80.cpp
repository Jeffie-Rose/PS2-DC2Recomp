#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_FRONT_KEY__FP12RS_STACKDATAi
// Address: 0x2cea80 - 0x2ceb98
void ps2__CHECK_FRONT_KEY__FP12RS_STACKDATAi_0x2cea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_FRONT_KEY__FP12RS_STACKDATAi_0x2cea80");
#endif

    switch (ctx->pc) {
        case 0x2ceabcu: goto label_2ceabc;
        case 0x2cead4u: goto label_2cead4;
        case 0x2ceae0u: goto label_2ceae0;
        case 0x2ceaf0u: goto label_2ceaf0;
        case 0x2ceafcu: goto label_2ceafc;
        case 0x2ceb08u: goto label_2ceb08;
        case 0x2ceb1cu: goto label_2ceb1c;
        case 0x2ceb2cu: goto label_2ceb2c;
        case 0x2ceb50u: goto label_2ceb50;
        case 0x2ceb5cu: goto label_2ceb5c;
        case 0x2ceb68u: goto label_2ceb68;
        case 0x2ceb74u: goto label_2ceb74;
        default: break;
    }

    ctx->pc = 0x2cea80u;

    // 0x2cea80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cea80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cea84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cea88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cea88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cea8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cea8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cea90: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2cea90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2cea94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cea94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea98: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2cea98u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2cea9c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2cea9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ceaa0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CEAA0u;
    {
        const bool branch_taken_0x2ceaa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CEAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAA0u;
            // 0x2ceaa4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceaa0) {
            ctx->pc = 0x2CEAB0u;
            goto label_2ceab0;
        }
    }
    ctx->pc = 0x2CEAA8u;
    // 0x2ceaa8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2CEAA8u;
    {
        const bool branch_taken_0x2ceaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAA8u;
            // 0x2ceaac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceaa8) {
            ctx->pc = 0x2CEB78u;
            goto label_2ceb78;
        }
    }
    ctx->pc = 0x2CEAB0u;
label_2ceab0:
    // 0x2ceab0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ceab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ceab4: 0xc04c678  jal         func_1319E0
    ctx->pc = 0x2CEAB4u;
    SET_GPR_U32(ctx, 31, 0x2CEABCu);
    ctx->pc = 0x2CEAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAB4u;
            // 0x2ceab8: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEABCu; }
        if (ctx->pc != 0x2CEABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEABCu; }
        if (ctx->pc != 0x2CEABCu) { return; }
    }
    ctx->pc = 0x2CEABCu;
label_2ceabc:
    // 0x2ceabc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ceabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ceac0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ceac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ceac4: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2ceac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ceac8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2ceac8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2ceacc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2CEACCu;
    SET_GPR_U32(ctx, 31, 0x2CEAD4u);
    ctx->pc = 0x2CEAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEACCu;
            // 0x2cead0: 0x24450690  addiu       $a1, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAD4u; }
        if (ctx->pc != 0x2CEAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAD4u; }
        if (ctx->pc != 0x2CEAD4u) { return; }
    }
    ctx->pc = 0x2CEAD4u;
label_2cead4:
    // 0x2cead4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2cead4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2cead8: 0xc052cc0  jal         func_14B300
    ctx->pc = 0x2CEAD8u;
    SET_GPR_U32(ctx, 31, 0x2CEAE0u);
    ctx->pc = 0x2CEADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAD8u;
            // 0x2ceadc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAE0u; }
        if (ctx->pc != 0x2CEAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAE0u; }
        if (ctx->pc != 0x2CEAE0u) { return; }
    }
    ctx->pc = 0x2CEAE0u;
label_2ceae0:
    // 0x2ceae0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x2ceae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x2ceae4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2ceae4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2ceae8: 0xc052cd0  jal         func_14B340
    ctx->pc = 0x2CEAE8u;
    SET_GPR_U32(ctx, 31, 0x2CEAF0u);
    ctx->pc = 0x2CEAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAE8u;
            // 0x2ceaec: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAF0u; }
        if (ctx->pc != 0x2CEAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAF0u; }
        if (ctx->pc != 0x2CEAF0u) { return; }
    }
    ctx->pc = 0x2CEAF0u;
label_2ceaf0:
    // 0x2ceaf0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2ceaf0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2ceaf4: 0xc047964  jal         func_11E590
    ctx->pc = 0x2CEAF4u;
    SET_GPR_U32(ctx, 31, 0x2CEAFCu);
    ctx->pc = 0x2CEAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEAF4u;
            // 0x2ceaf8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAFCu; }
        if (ctx->pc != 0x2CEAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEAFCu; }
        if (ctx->pc != 0x2CEAFCu) { return; }
    }
    ctx->pc = 0x2CEAFCu;
label_2ceafc:
    // 0x2ceafc: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x2ceafcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2ceb00: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2CEB00u;
    SET_GPR_U32(ctx, 31, 0x2CEB08u);
    ctx->pc = 0x2CEB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB00u;
            // 0x2ceb04: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB08u; }
        if (ctx->pc != 0x2CEB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB08u; }
        if (ctx->pc != 0x2CEB08u) { return; }
    }
    ctx->pc = 0x2CEB08u;
label_2ceb08:
    // 0x2ceb08: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2ceb08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2ceb0c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2ceb0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2ceb10: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2ceb10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2ceb14: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2CEB14u;
    SET_GPR_U32(ctx, 31, 0x2CEB1Cu);
    ctx->pc = 0x2CEB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB14u;
            // 0x2ceb18: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB1Cu; }
        if (ctx->pc != 0x2CEB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB1Cu; }
        if (ctx->pc != 0x2CEB1Cu) { return; }
    }
    ctx->pc = 0x2CEB1Cu;
label_2ceb1c:
    // 0x2ceb1c: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x2ceb1cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x2ceb20: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2ceb20u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ceb24: 0xc047964  jal         func_11E590
    ctx->pc = 0x2CEB24u;
    SET_GPR_U32(ctx, 31, 0x2CEB2Cu);
    ctx->pc = 0x2CEB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB24u;
            // 0x2ceb28: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB2Cu; }
        if (ctx->pc != 0x2CEB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB2Cu; }
        if (ctx->pc != 0x2CEB2Cu) { return; }
    }
    ctx->pc = 0x2CEB2Cu;
label_2ceb2c:
    // 0x2ceb2c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2ceb2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2ceb30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ceb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ceb34: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ceb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ceb38: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2ceb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2ceb3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ceb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb40: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2ceb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2ceb44: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2ceb44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2ceb48: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2CEB48u;
    SET_GPR_U32(ctx, 31, 0x2CEB50u);
    ctx->pc = 0x2CEB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB48u;
            // 0x2ceb4c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB50u; }
        if (ctx->pc != 0x2CEB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB50u; }
        if (ctx->pc != 0x2CEB50u) { return; }
    }
    ctx->pc = 0x2CEB50u;
label_2ceb50:
    // 0x2ceb50: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ceb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ceb54: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2CEB54u;
    SET_GPR_U32(ctx, 31, 0x2CEB5Cu);
    ctx->pc = 0x2CEB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB54u;
            // 0x2ceb58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB5Cu; }
        if (ctx->pc != 0x2CEB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB5Cu; }
        if (ctx->pc != 0x2CEB5Cu) { return; }
    }
    ctx->pc = 0x2CEB5Cu;
label_2ceb5c:
    // 0x2ceb5c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ceb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ceb60: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x2CEB60u;
    SET_GPR_U32(ctx, 31, 0x2CEB68u);
    ctx->pc = 0x2CEB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB60u;
            // 0x2ceb64: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB68u; }
        if (ctx->pc != 0x2CEB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB68u; }
        if (ctx->pc != 0x2CEB68u) { return; }
    }
    ctx->pc = 0x2CEB68u;
label_2ceb68:
    // 0x2ceb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ceb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ceb6c: 0xc0b37b4  jal         func_2CDED0
    ctx->pc = 0x2CEB6Cu;
    SET_GPR_U32(ctx, 31, 0x2CEB74u);
    ctx->pc = 0x2CEB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB6Cu;
            // 0x2ceb70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDED0u;
    if (runtime->hasFunction(0x2CDED0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB74u; }
        if (ctx->pc != 0x2CEB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2cded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEB74u; }
        if (ctx->pc != 0x2CEB74u) { return; }
    }
    ctx->pc = 0x2CEB74u;
label_2ceb74:
    // 0x2ceb74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ceb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ceb78:
    // 0x2ceb78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ceb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ceb7c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2ceb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ceb80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ceb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ceb84: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2ceb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ceb88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2ceb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ceb8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ceb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ceb90: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEB90u;
            // 0x2ceb94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CEB98u;
}
