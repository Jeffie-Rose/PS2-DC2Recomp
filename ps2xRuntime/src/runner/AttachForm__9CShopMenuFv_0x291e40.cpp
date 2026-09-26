#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachForm__9CShopMenuFv
// Address: 0x291e40 - 0x291f30
void AttachForm__9CShopMenuFv_0x291e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachForm__9CShopMenuFv_0x291e40");
#endif

    switch (ctx->pc) {
        case 0x291e60u: goto label_291e60;
        case 0x291e74u: goto label_291e74;
        case 0x291e88u: goto label_291e88;
        case 0x291e9cu: goto label_291e9c;
        case 0x291eb0u: goto label_291eb0;
        case 0x291ec4u: goto label_291ec4;
        case 0x291ed8u: goto label_291ed8;
        case 0x291ef4u: goto label_291ef4;
        case 0x291f1cu: goto label_291f1c;
        default: break;
    }

    ctx->pc = 0x291e40u;

    // 0x291e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291e44: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x291e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x291e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x291e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291e50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e54: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x291e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x291e58: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x291E58u;
    SET_GPR_U32(ctx, 31, 0x291E60u);
    ctx->pc = 0x291E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E58u;
            // 0x291e5c: 0x24a5d900  addiu       $a1, $a1, -0x2700 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E60u; }
        if (ctx->pc != 0x291E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E60u; }
        if (ctx->pc != 0x291E60u) { return; }
    }
    ctx->pc = 0x291E60u;
label_291e60:
    // 0x291e60: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x291e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x291e64: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x291e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x291e68: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x291e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x291e6c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x291E6Cu;
    SET_GPR_U32(ctx, 31, 0x291E74u);
    ctx->pc = 0x291E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E6Cu;
            // 0x291e70: 0x24a5d910  addiu       $a1, $a1, -0x26F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E74u; }
        if (ctx->pc != 0x291E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E74u; }
        if (ctx->pc != 0x291E74u) { return; }
    }
    ctx->pc = 0x291E74u;
label_291e74:
    // 0x291e74: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x291e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x291e78: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x291e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x291e7c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x291e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x291e80: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x291E80u;
    SET_GPR_U32(ctx, 31, 0x291E88u);
    ctx->pc = 0x291E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E80u;
            // 0x291e84: 0x24a5d920  addiu       $a1, $a1, -0x26E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E88u; }
        if (ctx->pc != 0x291E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E88u; }
        if (ctx->pc != 0x291E88u) { return; }
    }
    ctx->pc = 0x291E88u;
label_291e88:
    // 0x291e88: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x291e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x291e8c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x291e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x291e90: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x291e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x291e94: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x291E94u;
    SET_GPR_U32(ctx, 31, 0x291E9Cu);
    ctx->pc = 0x291E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E94u;
            // 0x291e98: 0x24a5d930  addiu       $a1, $a1, -0x26D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E9Cu; }
        if (ctx->pc != 0x291E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E9Cu; }
        if (ctx->pc != 0x291E9Cu) { return; }
    }
    ctx->pc = 0x291E9Cu;
label_291e9c:
    // 0x291e9c: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x291e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    // 0x291ea0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x291ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x291ea4: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x291ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x291ea8: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x291EA8u;
    SET_GPR_U32(ctx, 31, 0x291EB0u);
    ctx->pc = 0x291EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291EA8u;
            // 0x291eac: 0x24a5d940  addiu       $a1, $a1, -0x26C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EB0u; }
        if (ctx->pc != 0x291EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EB0u; }
        if (ctx->pc != 0x291EB0u) { return; }
    }
    ctx->pc = 0x291EB0u;
label_291eb0:
    // 0x291eb0: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x291eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x291eb4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x291eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x291eb8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x291eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x291ebc: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x291EBCu;
    SET_GPR_U32(ctx, 31, 0x291EC4u);
    ctx->pc = 0x291EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291EBCu;
            // 0x291ec0: 0x24a5d950  addiu       $a1, $a1, -0x26B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EC4u; }
        if (ctx->pc != 0x291EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EC4u; }
        if (ctx->pc != 0x291EC4u) { return; }
    }
    ctx->pc = 0x291EC4u;
label_291ec4:
    // 0x291ec4: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x291ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x291ec8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x291ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x291ecc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x291eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x291ed0: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x291ED0u;
    SET_GPR_U32(ctx, 31, 0x291ED8u);
    ctx->pc = 0x291ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291ED0u;
            // 0x291ed4: 0x24a5d958  addiu       $a1, $a1, -0x26A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291ED8u; }
        if (ctx->pc != 0x291ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291ED8u; }
        if (ctx->pc != 0x291ED8u) { return; }
    }
    ctx->pc = 0x291ED8u;
label_291ed8:
    // 0x291ed8: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x291ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x291edc: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x291edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x291ee0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x291EE0u;
    {
        const bool branch_taken_0x291ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x291EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291EE0u;
            // 0x291ee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ee0) {
            ctx->pc = 0x291F0Cu;
            goto label_291f0c;
        }
    }
    ctx->pc = 0x291EE8u;
    // 0x291ee8: 0x260601d8  addiu       $a2, $s0, 0x1D8
    ctx->pc = 0x291ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 472));
    // 0x291eec: 0xc08976c  jal         func_225DB0
    ctx->pc = 0x291EECu;
    SET_GPR_U32(ctx, 31, 0x291EF4u);
    ctx->pc = 0x291EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291EECu;
            // 0x291ef0: 0x260701dc  addiu       $a3, $s0, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225DB0u;
    if (runtime->hasFunction(0x225DB0u)) {
        auto targetFn = runtime->lookupFunction(0x225DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EF4u; }
        if (ctx->pc != 0x291EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRfRf_0x225db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EF4u; }
        if (ctx->pc != 0x291EF4u) { return; }
    }
    ctx->pc = 0x291EF4u;
label_291ef4:
    // 0x291ef4: 0xc60101dc  lwc1        $f1, 0x1DC($s0)
    ctx->pc = 0x291ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291ef8: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x291ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x291efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x291efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291f00: 0x0  nop
    ctx->pc = 0x291f00u;
    // NOP
    // 0x291f04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x291f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x291f08: 0xe60001dc  swc1        $f0, 0x1DC($s0)
    ctx->pc = 0x291f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 476), bits); }
label_291f0c:
    // 0x291f0c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x291f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x291f10: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x291f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x291f14: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x291F14u;
    SET_GPR_U32(ctx, 31, 0x291F1Cu);
    ctx->pc = 0x291F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291F14u;
            // 0x291f18: 0x24a5d968  addiu       $a1, $a1, -0x2698 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F1Cu; }
        if (ctx->pc != 0x291F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F1Cu; }
        if (ctx->pc != 0x291F1Cu) { return; }
    }
    ctx->pc = 0x291F1Cu;
label_291f1c:
    // 0x291f1c: 0xaf829364  sw          $v0, -0x6C9C($gp)
    ctx->pc = 0x291f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939492), GPR_U32(ctx, 2));
    // 0x291f20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x291f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291f28: 0x3e00008  jr          $ra
    ctx->pc = 0x291F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291F28u;
            // 0x291f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291F30u;
}
