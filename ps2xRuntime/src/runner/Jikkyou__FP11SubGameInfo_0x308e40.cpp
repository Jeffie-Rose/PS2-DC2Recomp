#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Jikkyou__FP11SubGameInfo
// Address: 0x308e40 - 0x309468
void Jikkyou__FP11SubGameInfo_0x308e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Jikkyou__FP11SubGameInfo_0x308e40");
#endif

    switch (ctx->pc) {
        case 0x308e58u: goto label_308e58;
        case 0x308e60u: goto label_308e60;
        case 0x308e6cu: goto label_308e6c;
        case 0x308e78u: goto label_308e78;
        case 0x308e88u: goto label_308e88;
        case 0x308e94u: goto label_308e94;
        case 0x308ea0u: goto label_308ea0;
        case 0x308ef8u: goto label_308ef8;
        case 0x308f3cu: goto label_308f3c;
        case 0x308fa0u: goto label_308fa0;
        case 0x308fc4u: goto label_308fc4;
        case 0x308ffcu: goto label_308ffc;
        case 0x309018u: goto label_309018;
        case 0x3090acu: goto label_3090ac;
        case 0x3090c4u: goto label_3090c4;
        case 0x309114u: goto label_309114;
        case 0x309120u: goto label_309120;
        case 0x30913cu: goto label_30913c;
        case 0x3091bcu: goto label_3091bc;
        case 0x3091e4u: goto label_3091e4;
        case 0x309278u: goto label_309278;
        case 0x309294u: goto label_309294;
        case 0x3092b4u: goto label_3092b4;
        case 0x3092d8u: goto label_3092d8;
        case 0x3093a4u: goto label_3093a4;
        case 0x3093b4u: goto label_3093b4;
        case 0x30941cu: goto label_30941c;
        case 0x309428u: goto label_309428;
        case 0x309440u: goto label_309440;
        case 0x309450u: goto label_309450;
        default: break;
    }

    ctx->pc = 0x308e40u;

    // 0x308e40: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x308e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x308e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x308e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x308e48: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x308e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x308e4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x308e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x308e50: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x308E50u;
    SET_GPR_U32(ctx, 31, 0x308E58u);
    ctx->pc = 0x308E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308E50u;
            // 0x308e54: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E58u; }
        if (ctx->pc != 0x308E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E58u; }
        if (ctx->pc != 0x308E58u) { return; }
    }
    ctx->pc = 0x308E58u;
label_308e58:
    // 0x308e58: 0xc0b5750  jal         func_2D5D40
    ctx->pc = 0x308E58u;
    SET_GPR_U32(ctx, 31, 0x308E60u);
    ctx->pc = 0x308E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308E58u;
            // 0x308e5c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E60u; }
        if (ctx->pc != 0x308E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E60u; }
        if (ctx->pc != 0x308E60u) { return; }
    }
    ctx->pc = 0x308E60u;
label_308e60:
    // 0x308e60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x308e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x308e64: 0xc0b5720  jal         func_2D5C80
    ctx->pc = 0x308E64u;
    SET_GPR_U32(ctx, 31, 0x308E6Cu);
    ctx->pc = 0x308E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308E64u;
            // 0x308e68: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5C80u;
    if (runtime->hasFunction(0x2D5C80u)) {
        auto targetFn = runtime->lookupFunction(0x2D5C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E6Cu; }
        if (ctx->pc != 0x308E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__5CFontFi_0x2d5c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E6Cu; }
        if (ctx->pc != 0x308E6Cu) { return; }
    }
    ctx->pc = 0x308E6Cu;
label_308e6c:
    // 0x308e6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x308e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x308e70: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x308E70u;
    SET_GPR_U32(ctx, 31, 0x308E78u);
    ctx->pc = 0x308E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308E70u;
            // 0x308e74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E78u; }
        if (ctx->pc != 0x308E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E78u; }
        if (ctx->pc != 0x308E78u) { return; }
    }
    ctx->pc = 0x308E78u;
label_308e78:
    // 0x308e78: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x308e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x308e7c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x308e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x308e80: 0xc0b5128  jal         func_2D44A0
    ctx->pc = 0x308E80u;
    SET_GPR_U32(ctx, 31, 0x308E88u);
    ctx->pc = 0x308E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308E80u;
            // 0x308e84: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44A0u;
    if (runtime->hasFunction(0x2D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E88u; }
        if (ctx->pc != 0x308E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDrawSize__5CFontFii_0x2d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E88u; }
        if (ctx->pc != 0x308E88u) { return; }
    }
    ctx->pc = 0x308E88u;
label_308e88:
    // 0x308e88: 0xc794a114  lwc1        $f20, -0x5EEC($gp)
    ctx->pc = 0x308e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x308e8c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x308E8Cu;
    SET_GPR_U32(ctx, 31, 0x308E94u);
    ctx->pc = 0x308E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308E8Cu;
            // 0x308e90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E94u; }
        if (ctx->pc != 0x308E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308E94u; }
        if (ctx->pc != 0x308E94u) { return; }
    }
    ctx->pc = 0x308E94u;
label_308e94:
    // 0x308e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e98: 0xc040044  jal         func_100110
    ctx->pc = 0x308E98u;
    SET_GPR_U32(ctx, 31, 0x308EA0u);
    ctx->pc = 0x308E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308E98u;
            // 0x308e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100110u;
    if (runtime->hasFunction(0x100110u)) {
        auto targetFn = runtime->lookupFunction(0x100110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308EA0u; }
        if (ctx->pc != 0x308EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308EA0u; }
        if (ctx->pc != 0x308EA0u) { return; }
    }
    ctx->pc = 0x308EA0u;
label_308ea0:
    // 0x308ea0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308EA0u;
    {
        const bool branch_taken_0x308ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308EA0u;
            // 0x308ea4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ea0) {
            ctx->pc = 0x308EB0u;
            goto label_308eb0;
        }
    }
    ctx->pc = 0x308EA8u;
    // 0x308ea8: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x308EA8u;
    {
        const bool branch_taken_0x308ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308EA8u;
            // 0x308eac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ea8) {
            ctx->pc = 0x309458u;
            goto label_309458;
        }
    }
    ctx->pc = 0x308EB0u;
label_308eb0:
    // 0x308eb0: 0x8f82a148  lw          $v0, -0x5EB8($gp)
    ctx->pc = 0x308eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943048)));
    // 0x308eb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x308eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x308eb8: 0xaf82a148  sw          $v0, -0x5EB8($gp)
    ctx->pc = 0x308eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943048), GPR_U32(ctx, 2));
    // 0x308ebc: 0x8f82a148  lw          $v0, -0x5EB8($gp)
    ctx->pc = 0x308ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943048)));
    // 0x308ec0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x308EC0u;
    {
        const bool branch_taken_0x308ec0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x308ec0) {
            ctx->pc = 0x308ECCu;
            goto label_308ecc;
        }
    }
    ctx->pc = 0x308EC8u;
    // 0x308ec8: 0xaf80a148  sw          $zero, -0x5EB8($gp)
    ctx->pc = 0x308ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943048), GPR_U32(ctx, 0));
label_308ecc:
    // 0x308ecc: 0x8f82a148  lw          $v0, -0x5EB8($gp)
    ctx->pc = 0x308eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943048)));
    // 0x308ed0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308ED0u;
    {
        const bool branch_taken_0x308ed0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x308ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308ED0u;
            // 0x308ed4: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ed0) {
            ctx->pc = 0x308EE0u;
            goto label_308ee0;
        }
    }
    ctx->pc = 0x308ED8u;
    // 0x308ed8: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x308ED8u;
    {
        const bool branch_taken_0x308ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308ED8u;
            // 0x308edc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ed8) {
            ctx->pc = 0x309454u;
            goto label_309454;
        }
    }
    ctx->pc = 0x308EE0u;
label_308ee0:
    // 0x308ee0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x308ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x308ee4: 0x8c25a1b0  lw          $a1, -0x5E50($at)
    ctx->pc = 0x308ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943152)));
    // 0x308ee8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x308ee8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x308eec: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x308eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
    // 0x308ef0: 0xc0c768c  jal         func_31DA30
    ctx->pc = 0x308EF0u;
    SET_GPR_U32(ctx, 31, 0x308EF8u);
    ctx->pc = 0x308EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308EF0u;
            // 0x308ef4: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308EF8u; }
        if (ctx->pc != 0x308EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308EF8u; }
        if (ctx->pc != 0x308EF8u) { return; }
    }
    ctx->pc = 0x308EF8u;
label_308ef8:
    // 0x308ef8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x308ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x308efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x308efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308f00: 0x0  nop
    ctx->pc = 0x308f00u;
    // NOP
    // 0x308f04: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x308f04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308f08: 0x0  nop
    ctx->pc = 0x308f08u;
    // NOP
    // 0x308f0c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x308F0Cu;
    {
        const bool branch_taken_0x308f0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x308F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308F0Cu;
            // 0x308f10: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f0c) {
            ctx->pc = 0x308F50u;
            goto label_308f50;
        }
    }
    ctx->pc = 0x308F14u;
    // 0x308f14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x308f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x308f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308f1c: 0x0  nop
    ctx->pc = 0x308f1cu;
    // NOP
    // 0x308f20: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x308f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308f24: 0x0  nop
    ctx->pc = 0x308f24u;
    // NOP
    // 0x308f28: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x308F28u;
    {
        const bool branch_taken_0x308f28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x308f28) {
            ctx->pc = 0x308F4Cu;
            goto label_308f4c;
        }
    }
    ctx->pc = 0x308F30u;
    // 0x308f30: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x308f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x308f34: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x308F34u;
    SET_GPR_U32(ctx, 31, 0x308F3Cu);
    ctx->pc = 0x308F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308F34u;
            // 0x308f38: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308F3Cu; }
        if (ctx->pc != 0x308F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308F3Cu; }
        if (ctx->pc != 0x308F3Cu) { return; }
    }
    ctx->pc = 0x308F3Cu;
label_308f3c:
    // 0x308f3c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x308f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x308f40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x308f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308f44: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x308F44u;
    {
        const bool branch_taken_0x308f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308F44u;
            // 0x308f48: 0xaf83a148  sw          $v1, -0x5EB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f44) {
            ctx->pc = 0x309454u;
            goto label_309454;
        }
    }
    ctx->pc = 0x308F4Cu;
label_308f4c:
    // 0x308f4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x308f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_308f50:
    // 0x308f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308f54: 0x0  nop
    ctx->pc = 0x308f54u;
    // NOP
    // 0x308f58: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x308f58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308f5c: 0x0  nop
    ctx->pc = 0x308f5cu;
    // NOP
    // 0x308f60: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x308F60u;
    {
        const bool branch_taken_0x308f60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x308F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308F60u;
            // 0x308f64: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f60) {
            ctx->pc = 0x30902Cu;
            goto label_30902c;
        }
    }
    ctx->pc = 0x308F68u;
    // 0x308f68: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x308f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x308f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308f70: 0x0  nop
    ctx->pc = 0x308f70u;
    // NOP
    // 0x308f74: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x308f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308f78: 0x0  nop
    ctx->pc = 0x308f78u;
    // NOP
    // 0x308f7c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x308F7Cu;
    {
        const bool branch_taken_0x308f7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x308F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308F7Cu;
            // 0x308f80: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f7c) {
            ctx->pc = 0x309028u;
            goto label_309028;
        }
    }
    ctx->pc = 0x308F84u;
    // 0x308f84: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x308f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x308f88: 0x8c25a1b0  lw          $a1, -0x5E50($at)
    ctx->pc = 0x308f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943152)));
    // 0x308f8c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x308f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x308f90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x308f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x308f94: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x308f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
    // 0x308f98: 0xc0c768c  jal         func_31DA30
    ctx->pc = 0x308F98u;
    SET_GPR_U32(ctx, 31, 0x308FA0u);
    ctx->pc = 0x308F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308F98u;
            // 0x308f9c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308FA0u; }
        if (ctx->pc != 0x308FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308FA0u; }
        if (ctx->pc != 0x308FA0u) { return; }
    }
    ctx->pc = 0x308FA0u;
label_308fa0:
    // 0x308fa0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x308fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x308fa4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x308fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x308fa8: 0x8c25a1c4  lw          $a1, -0x5E3C($at)
    ctx->pc = 0x308fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943172)));
    // 0x308fac: 0x27b00118  addiu       $s0, $sp, 0x118
    ctx->pc = 0x308facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x308fb0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x308fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x308fb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x308fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308fb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x308fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x308fbc: 0xc0c768c  jal         func_31DA30
    ctx->pc = 0x308FBCu;
    SET_GPR_U32(ctx, 31, 0x308FC4u);
    ctx->pc = 0x308FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308FBCu;
            // 0x308fc0: 0x24849f40  addiu       $a0, $a0, -0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308FC4u; }
        if (ctx->pc != 0x308FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308FC4u; }
        if (ctx->pc != 0x308FC4u) { return; }
    }
    ctx->pc = 0x308FC4u;
label_308fc4:
    // 0x308fc4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x308fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308fc8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x308fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x308fcc: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x308fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x308fd0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x308fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x308fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308fd8: 0x0  nop
    ctx->pc = 0x308fd8u;
    // NOP
    // 0x308fdc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x308fdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x308fe0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x308fe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308fe4: 0x0  nop
    ctx->pc = 0x308fe4u;
    // NOP
    // 0x308fe8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x308FE8u;
    {
        const bool branch_taken_0x308fe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x308fe8) {
            ctx->pc = 0x30900Cu;
            goto label_30900c;
        }
    }
    ctx->pc = 0x308FF0u;
    // 0x308ff0: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x308ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x308ff4: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x308FF4u;
    SET_GPR_U32(ctx, 31, 0x308FFCu);
    ctx->pc = 0x308FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x308FF4u;
            // 0x308ff8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308FFCu; }
        if (ctx->pc != 0x308FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308FFCu; }
        if (ctx->pc != 0x308FFCu) { return; }
    }
    ctx->pc = 0x308FFCu;
label_308ffc:
    // 0x308ffc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x308ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x309000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309004: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x309004u;
    {
        const bool branch_taken_0x309004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309004u;
            // 0x309008: 0xaf83a148  sw          $v1, -0x5EB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309004) {
            ctx->pc = 0x309454u;
            goto label_309454;
        }
    }
    ctx->pc = 0x30900Cu;
label_30900c:
    // 0x30900c: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x30900cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x309010: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x309010u;
    SET_GPR_U32(ctx, 31, 0x309018u);
    ctx->pc = 0x309014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309010u;
            // 0x309014: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309018u; }
        if (ctx->pc != 0x309018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309018u; }
        if (ctx->pc != 0x309018u) { return; }
    }
    ctx->pc = 0x309018u;
label_309018:
    // 0x309018: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x309018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x30901c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30901cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309020: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x309020u;
    {
        const bool branch_taken_0x309020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309020u;
            // 0x309024: 0xaf83a148  sw          $v1, -0x5EB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309020) {
            ctx->pc = 0x309454u;
            goto label_309454;
        }
    }
    ctx->pc = 0x309028u;
label_309028:
    // 0x309028: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x309028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_30902c:
    // 0x30902c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30902cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309030: 0x0  nop
    ctx->pc = 0x309030u;
    // NOP
    // 0x309034: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x309034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309038: 0x0  nop
    ctx->pc = 0x309038u;
    // NOP
    // 0x30903c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x30903Cu;
    {
        const bool branch_taken_0x30903c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30903Cu;
            // 0x309040: 0x3c024110  lui         $v0, 0x4110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30903c) {
            ctx->pc = 0x309064u;
            goto label_309064;
        }
    }
    ctx->pc = 0x309044u;
    // 0x309044: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x309044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x309048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30904c: 0x0  nop
    ctx->pc = 0x30904cu;
    // NOP
    // 0x309050: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x309050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309054: 0x0  nop
    ctx->pc = 0x309054u;
    // NOP
    // 0x309058: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x309058u;
    {
        const bool branch_taken_0x309058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x309058) {
            ctx->pc = 0x309098u;
            goto label_309098;
        }
    }
    ctx->pc = 0x309060u;
    // 0x309060: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x309060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_309064:
    // 0x309064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309068: 0x0  nop
    ctx->pc = 0x309068u;
    // NOP
    // 0x30906c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x30906cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309070: 0x0  nop
    ctx->pc = 0x309070u;
    // NOP
    // 0x309074: 0x450100b9  bc1t        . + 4 + (0xB9 << 2)
    ctx->pc = 0x309074u;
    {
        const bool branch_taken_0x309074 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309074u;
            // 0x309078: 0x3c024100  lui         $v0, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309074) {
            ctx->pc = 0x30935Cu;
            goto label_30935c;
        }
    }
    ctx->pc = 0x30907Cu;
    // 0x30907c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x30907cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x309080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309084: 0x0  nop
    ctx->pc = 0x309084u;
    // NOP
    // 0x309088: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x309088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30908c: 0x0  nop
    ctx->pc = 0x30908cu;
    // NOP
    // 0x309090: 0x450000b1  bc1f        . + 4 + (0xB1 << 2)
    ctx->pc = 0x309090u;
    {
        const bool branch_taken_0x309090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309090) {
            ctx->pc = 0x309358u;
            goto label_309358;
        }
    }
    ctx->pc = 0x309098u;
label_309098:
    // 0x309098: 0x8f82a14c  lw          $v0, -0x5EB4($gp)
    ctx->pc = 0x309098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943052)));
    // 0x30909c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x30909Cu;
    {
        const bool branch_taken_0x30909c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3090A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30909Cu;
            // 0x3090a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30909c) {
            ctx->pc = 0x309160u;
            goto label_309160;
        }
    }
    ctx->pc = 0x3090A4u;
    // 0x3090a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3090a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3090a8: 0xaf82a14c  sw          $v0, -0x5EB4($gp)
    ctx->pc = 0x3090a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943052), GPR_U32(ctx, 2));
label_3090ac:
    // 0x3090ac: 0xc78ca114  lwc1        $f12, -0x5EEC($gp)
    ctx->pc = 0x3090acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3090b0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3090b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3090b4: 0x24849f40  addiu       $a0, $a0, -0x60C0
    ctx->pc = 0x3090b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942528));
    // 0x3090b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3090b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3090bc: 0xc0c768c  jal         func_31DA30
    ctx->pc = 0x3090BCu;
    SET_GPR_U32(ctx, 31, 0x3090C4u);
    ctx->pc = 0x3090C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3090BCu;
            // 0x3090c0: 0x27a60190  addiu       $a2, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DA30u;
    if (runtime->hasFunction(0x31DA30u)) {
        auto targetFn = runtime->lookupFunction(0x31DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3090C4u; }
        if (ctx->pc != 0x3090C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        grGetFishProgress__FP11grRACE_INFOifP15grRACE_PROGRESS_0x31da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3090C4u; }
        if (ctx->pc != 0x3090C4u) { return; }
    }
    ctx->pc = 0x3090C4u;
label_3090c4:
    // 0x3090c4: 0x93a3019c  lbu         $v1, 0x19C($sp)
    ctx->pc = 0x3090c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3090c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3090c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3090cc: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3090CCu;
    {
        const bool branch_taken_0x3090cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3090D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3090CCu;
            // 0x3090d0: 0x3c0301f6  lui         $v1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090cc) {
            ctx->pc = 0x309144u;
            goto label_309144;
        }
    }
    ctx->pc = 0x3090D4u;
    // 0x3090d4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3090d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3090d8: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x3090d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3090dc: 0x24639f88  addiu       $v1, $v1, -0x6078
    ctx->pc = 0x3090dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942600));
    // 0x3090e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3090e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3090e4: 0x24429f40  addiu       $v0, $v0, -0x60C0
    ctx->pc = 0x3090e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942528));
    // 0x3090e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3090e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3090ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3090ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3090f0: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x3090f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x3090f4: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x3090f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3090f8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3090f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3090fc: 0xac821a44  sw          $v0, 0x1A44($a0)
    ctx->pc = 0x3090fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6724), GPR_U32(ctx, 2));
    // 0x309100: 0xac801a84  sw          $zero, 0x1A84($a0)
    ctx->pc = 0x309100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6788), GPR_U32(ctx, 0));
    // 0x309104: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x309104u;
    {
        const bool branch_taken_0x309104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x309108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309104u;
            // 0x309108: 0x8f82a170  lw          $v0, -0x5E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309104) {
            ctx->pc = 0x309114u;
            goto label_309114;
        }
    }
    ctx->pc = 0x30910Cu;
    // 0x30910c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30910Cu;
    SET_GPR_U32(ctx, 31, 0x309114u);
    ctx->pc = 0x309110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30910Cu;
            // 0x309110: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309114u; }
        if (ctx->pc != 0x309114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309114u; }
        if (ctx->pc != 0x309114u) { return; }
    }
    ctx->pc = 0x309114u;
label_309114:
    // 0x309114: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x309114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x309118: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x309118u;
    SET_GPR_U32(ctx, 31, 0x309120u);
    ctx->pc = 0x30911Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309118u;
            // 0x30911c: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309120u; }
        if (ctx->pc != 0x309120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309120u; }
        if (ctx->pc != 0x309120u) { return; }
    }
    ctx->pc = 0x309120u;
label_309120:
    // 0x309120: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x309120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
    // 0x309124: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x309124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x309128: 0xaf82a148  sw          $v0, -0x5EB8($gp)
    ctx->pc = 0x309128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943048), GPR_U32(ctx, 2));
    // 0x30912c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x30912cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x309130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309134: 0xc063818  jal         func_18E060
    ctx->pc = 0x309134u;
    SET_GPR_U32(ctx, 31, 0x30913Cu);
    ctx->pc = 0x309138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309134u;
            // 0x309138: 0xaf80a14c  sw          $zero, -0x5EB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30913Cu; }
        if (ctx->pc != 0x30913Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30913Cu; }
        if (ctx->pc != 0x30913Cu) { return; }
    }
    ctx->pc = 0x30913Cu;
label_30913c:
    // 0x30913c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30913Cu;
    {
        const bool branch_taken_0x30913c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30913c) {
            ctx->pc = 0x309154u;
            goto label_309154;
        }
    }
    ctx->pc = 0x309144u;
label_309144:
    // 0x309144: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x309144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x309148: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x309148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x30914c: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x30914Cu;
    {
        const bool branch_taken_0x30914c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30914c) {
            ctx->pc = 0x3090ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3090ac;
        }
    }
    ctx->pc = 0x309154u;
label_309154:
    // 0x309154: 0x0  nop
    ctx->pc = 0x309154u;
    // NOP
    // 0x309158: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x309158u;
    {
        const bool branch_taken_0x309158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30915Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309158u;
            // 0x30915c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309158) {
            ctx->pc = 0x309454u;
            goto label_309454;
        }
    }
    ctx->pc = 0x309160u;
label_309160:
    // 0x309160: 0x8f85a124  lw          $a1, -0x5EDC($gp)
    ctx->pc = 0x309160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943012)));
    // 0x309164: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x309164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x309168: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x309168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x30916c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30916cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x309170: 0x2484a1b0  addiu       $a0, $a0, -0x5E50
    ctx->pc = 0x309170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943152));
    // 0x309174: 0x24639f88  addiu       $v1, $v1, -0x6078
    ctx->pc = 0x309174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942600));
    // 0x309178: 0x8f86a170  lw          $a2, -0x5E90($gp)
    ctx->pc = 0x309178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x30917c: 0x24429f40  addiu       $v0, $v0, -0x60C0
    ctx->pc = 0x30917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942528));
    // 0x309180: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x309180u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x309184: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x309184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x309188: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x309188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30918c: 0x48180  sll         $s0, $a0, 6
    ctx->pc = 0x30918cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x309190: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x309190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x309194: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x309194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x309198: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x309198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30919c: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x30919cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3091a0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3091a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3091a4: 0xacc21a44  sw          $v0, 0x1A44($a2)
    ctx->pc = 0x3091a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6724), GPR_U32(ctx, 2));
    // 0x3091a8: 0xacc01a84  sw          $zero, 0x1A84($a2)
    ctx->pc = 0x3091a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6788), GPR_U32(ctx, 0));
    // 0x3091ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3091ACu;
    {
        const bool branch_taken_0x3091ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3091B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3091ACu;
            // 0x3091b0: 0x8f82a170  lw          $v0, -0x5E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091ac) {
            ctx->pc = 0x3091BCu;
            goto label_3091bc;
        }
    }
    ctx->pc = 0x3091B4u;
    // 0x3091b4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x3091B4u;
    SET_GPR_U32(ctx, 31, 0x3091BCu);
    ctx->pc = 0x3091B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3091B4u;
            // 0x3091b8: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3091BCu; }
        if (ctx->pc != 0x3091BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3091BCu; }
        if (ctx->pc != 0x3091BCu) { return; }
    }
    ctx->pc = 0x3091BCu;
label_3091bc:
    // 0x3091bc: 0x8f82a124  lw          $v0, -0x5EDC($gp)
    ctx->pc = 0x3091bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943012)));
    // 0x3091c0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3091C0u;
    {
        const bool branch_taken_0x3091c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3091C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3091C0u;
            // 0x3091c4: 0x28410005  slti        $at, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091c0) {
            ctx->pc = 0x3091ECu;
            goto label_3091ec;
        }
    }
    ctx->pc = 0x3091C8u;
    // 0x3091c8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3091c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3091cc: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x3091ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x3091d0: 0x24429f6c  addiu       $v0, $v0, -0x6094
    ctx->pc = 0x3091d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942572));
    // 0x3091d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3091d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3091d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3091d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3091dc: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x3091DCu;
    SET_GPR_U32(ctx, 31, 0x3091E4u);
    ctx->pc = 0x3091E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3091DCu;
            // 0x3091e0: 0x24450009  addiu       $a1, $v0, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3091E4u; }
        if (ctx->pc != 0x3091E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3091E4u; }
        if (ctx->pc != 0x3091E4u) { return; }
    }
    ctx->pc = 0x3091E4u;
label_3091e4:
    // 0x3091e4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3091E4u;
    {
        const bool branch_taken_0x3091e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3091E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3091E4u;
            // 0x3091e8: 0x8f85a124  lw          $a1, -0x5EDC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091e4) {
            ctx->pc = 0x3092DCu;
            goto label_3092dc;
        }
    }
    ctx->pc = 0x3091ECu;
label_3091ec:
    // 0x3091ec: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x3091ECu;
    {
        const bool branch_taken_0x3091ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3091F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3091ECu;
            // 0x3091f0: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3091ec) {
            ctx->pc = 0x3092BCu;
            goto label_3092bc;
        }
    }
    ctx->pc = 0x3091F4u;
    // 0x3091f4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3091f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3091f8: 0x2442a1b0  addiu       $v0, $v0, -0x5E50
    ctx->pc = 0x3091f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943152));
    // 0x3091fc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3091fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x309200: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x309200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x309204: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x309204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309208: 0x2442a1cc  addiu       $v0, $v0, -0x5E34
    ctx->pc = 0x309208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943180));
    // 0x30920c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x309210: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x309210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309214: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x309214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x309218: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x309218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x30921c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x30921Cu;
    {
        const bool branch_taken_0x30921c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30921Cu;
            // 0x309220: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30921c) {
            ctx->pc = 0x30929Cu;
            goto label_30929c;
        }
    }
    ctx->pc = 0x309224u;
    // 0x309224: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x309224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x309228: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x309228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x30922c: 0x2442a1ac  addiu       $v0, $v0, -0x5E54
    ctx->pc = 0x30922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943148));
    // 0x309230: 0x24639f88  addiu       $v1, $v1, -0x6078
    ctx->pc = 0x309230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942600));
    // 0x309234: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x309234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x309238: 0x8f86a170  lw          $a2, -0x5E90($gp)
    ctx->pc = 0x309238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x30923c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x30923cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309240: 0x48180  sll         $s0, $a0, 6
    ctx->pc = 0x309240u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x309244: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x309244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x309248: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x309248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x30924c: 0x24429f40  addiu       $v0, $v0, -0x60C0
    ctx->pc = 0x30924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942528));
    // 0x309250: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x309250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309254: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x309254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x309258: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x309258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x30925c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x30925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x309260: 0xacc21a44  sw          $v0, 0x1A44($a2)
    ctx->pc = 0x309260u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6724), GPR_U32(ctx, 2));
    // 0x309264: 0xacc01a84  sw          $zero, 0x1A84($a2)
    ctx->pc = 0x309264u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6788), GPR_U32(ctx, 0));
    // 0x309268: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x309268u;
    {
        const bool branch_taken_0x309268 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30926Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309268u;
            // 0x30926c: 0x8f82a170  lw          $v0, -0x5E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309268) {
            ctx->pc = 0x309278u;
            goto label_309278;
        }
    }
    ctx->pc = 0x309270u;
    // 0x309270: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x309270u;
    SET_GPR_U32(ctx, 31, 0x309278u);
    ctx->pc = 0x309274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309270u;
            // 0x309274: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309278u; }
        if (ctx->pc != 0x309278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309278u; }
        if (ctx->pc != 0x309278u) { return; }
    }
    ctx->pc = 0x309278u;
label_309278:
    // 0x309278: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x309278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30927c: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x30927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x309280: 0x24429f6c  addiu       $v0, $v0, -0x6094
    ctx->pc = 0x309280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942572));
    // 0x309284: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x309284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x309288: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x309288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30928c: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x30928Cu;
    SET_GPR_U32(ctx, 31, 0x309294u);
    ctx->pc = 0x309290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30928Cu;
            // 0x309290: 0x2445000d  addiu       $a1, $v0, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309294u; }
        if (ctx->pc != 0x309294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309294u; }
        if (ctx->pc != 0x309294u) { return; }
    }
    ctx->pc = 0x309294u;
label_309294:
    // 0x309294: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x309294u;
    {
        const bool branch_taken_0x309294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309294) {
            ctx->pc = 0x3092D8u;
            goto label_3092d8;
        }
    }
    ctx->pc = 0x30929Cu;
label_30929c:
    // 0x30929c: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x30929cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x3092a0: 0x24429f6c  addiu       $v0, $v0, -0x6094
    ctx->pc = 0x3092a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942572));
    // 0x3092a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3092a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3092a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3092a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3092ac: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x3092ACu;
    SET_GPR_U32(ctx, 31, 0x3092B4u);
    ctx->pc = 0x3092B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3092ACu;
            // 0x3092b0: 0x24450011  addiu       $a1, $v0, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3092B4u; }
        if (ctx->pc != 0x3092B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3092B4u; }
        if (ctx->pc != 0x3092B4u) { return; }
    }
    ctx->pc = 0x3092B4u;
label_3092b4:
    // 0x3092b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3092B4u;
    {
        const bool branch_taken_0x3092b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3092b4) {
            ctx->pc = 0x3092D8u;
            goto label_3092d8;
        }
    }
    ctx->pc = 0x3092BCu;
label_3092bc:
    // 0x3092bc: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3092bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3092c0: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x3092c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x3092c4: 0x24429f6c  addiu       $v0, $v0, -0x6094
    ctx->pc = 0x3092c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942572));
    // 0x3092c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3092c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3092cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3092ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3092d0: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x3092D0u;
    SET_GPR_U32(ctx, 31, 0x3092D8u);
    ctx->pc = 0x3092D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3092D0u;
            // 0x3092d4: 0x24450015  addiu       $a1, $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3092D8u; }
        if (ctx->pc != 0x3092D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3092D8u; }
        if (ctx->pc != 0x3092D8u) { return; }
    }
    ctx->pc = 0x3092D8u;
label_3092d8:
    // 0x3092d8: 0x8f85a124  lw          $a1, -0x5EDC($gp)
    ctx->pc = 0x3092d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943012)));
label_3092dc:
    // 0x3092dc: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x3092dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x3092e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3092e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3092e4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3092e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3092e8: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3092e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x3092ec: 0x2484a1b0  addiu       $a0, $a0, -0x5E50
    ctx->pc = 0x3092ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943152));
    // 0x3092f0: 0x2463a1d0  addiu       $v1, $v1, -0x5E30
    ctx->pc = 0x3092f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943184));
    // 0x3092f4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3092f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3092f8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3092f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3092fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3092fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x309300: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x309300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309304: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x309304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x309308: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x309308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x30930c: 0x8f82a124  lw          $v0, -0x5EDC($gp)
    ctx->pc = 0x30930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943012)));
    // 0x309310: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x309310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x309314: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x309314u;
    {
        const bool branch_taken_0x309314 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309314u;
            // 0x309318: 0xaf82a124  sw          $v0, -0x5EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943012), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309314) {
            ctx->pc = 0x309334u;
            goto label_309334;
        }
    }
    ctx->pc = 0x30931Cu;
    // 0x30931c: 0x8f82a124  lw          $v0, -0x5EDC($gp)
    ctx->pc = 0x30931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943012)));
    // 0x309320: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x309320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x309324: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x309324u;
    {
        const bool branch_taken_0x309324 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x309328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309324u;
            // 0x309328: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309324) {
            ctx->pc = 0x30934Cu;
            goto label_30934c;
        }
    }
    ctx->pc = 0x30932Cu;
    // 0x30932c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30932Cu;
    {
        const bool branch_taken_0x30932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30932Cu;
            // 0x309330: 0xaf80a124  sw          $zero, -0x5EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943012), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30932c) {
            ctx->pc = 0x309348u;
            goto label_309348;
        }
    }
    ctx->pc = 0x309334u;
label_309334:
    // 0x309334: 0x8f82a124  lw          $v0, -0x5EDC($gp)
    ctx->pc = 0x309334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943012)));
    // 0x309338: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x309338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x30933c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30933Cu;
    {
        const bool branch_taken_0x30933c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30933c) {
            ctx->pc = 0x309348u;
            goto label_309348;
        }
    }
    ctx->pc = 0x309344u;
    // 0x309344: 0xaf80a124  sw          $zero, -0x5EDC($gp)
    ctx->pc = 0x309344u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943012), GPR_U32(ctx, 0));
label_309348:
    // 0x309348: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x309348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_30934c:
    // 0x30934c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30934cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309350: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x309350u;
    {
        const bool branch_taken_0x309350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309350u;
            // 0x309354: 0xaf83a148  sw          $v1, -0x5EB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309350) {
            ctx->pc = 0x309454u;
            goto label_309454;
        }
    }
    ctx->pc = 0x309358u;
label_309358:
    // 0x309358: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x309358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_30935c:
    // 0x30935c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30935cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309360: 0x0  nop
    ctx->pc = 0x309360u;
    // NOP
    // 0x309364: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x309364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309368: 0x0  nop
    ctx->pc = 0x309368u;
    // NOP
    // 0x30936c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x30936Cu;
    {
        const bool branch_taken_0x30936c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30936Cu;
            // 0x309370: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30936c) {
            ctx->pc = 0x3093C8u;
            goto label_3093c8;
        }
    }
    ctx->pc = 0x309374u;
    // 0x309374: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x309374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x309378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30937c: 0x0  nop
    ctx->pc = 0x30937cu;
    // NOP
    // 0x309380: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x309380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309384: 0x0  nop
    ctx->pc = 0x309384u;
    // NOP
    // 0x309388: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x309388u;
    {
        const bool branch_taken_0x309388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x309388) {
            ctx->pc = 0x3093C4u;
            goto label_3093c4;
        }
    }
    ctx->pc = 0x309390u;
    // 0x309390: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x309390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x309394: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x309394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x309398: 0xaf80a14c  sw          $zero, -0x5EB4($gp)
    ctx->pc = 0x309398u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943052), GPR_U32(ctx, 0));
    // 0x30939c: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x30939Cu;
    SET_GPR_U32(ctx, 31, 0x3093A4u);
    ctx->pc = 0x3093A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30939Cu;
            // 0x3093a0: 0xaf80a124  sw          $zero, -0x5EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943012), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3093A4u; }
        if (ctx->pc != 0x3093A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3093A4u; }
        if (ctx->pc != 0x3093A4u) { return; }
    }
    ctx->pc = 0x3093A4u;
label_3093a4:
    // 0x3093a4: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x3093a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
    // 0x3093a8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3093a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3093ac: 0xc063818  jal         func_18E060
    ctx->pc = 0x3093ACu;
    SET_GPR_U32(ctx, 31, 0x3093B4u);
    ctx->pc = 0x3093B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3093ACu;
            // 0x3093b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3093B4u; }
        if (ctx->pc != 0x3093B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3093B4u; }
        if (ctx->pc != 0x3093B4u) { return; }
    }
    ctx->pc = 0x3093B4u;
label_3093b4:
    // 0x3093b4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3093b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x3093b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3093b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3093bc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3093BCu;
    {
        const bool branch_taken_0x3093bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3093C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3093BCu;
            // 0x3093c0: 0xaf83a148  sw          $v1, -0x5EB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3093bc) {
            ctx->pc = 0x309454u;
            goto label_309454;
        }
    }
    ctx->pc = 0x3093C4u;
label_3093c4:
    // 0x3093c4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x3093c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_3093c8:
    // 0x3093c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3093c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3093cc: 0x0  nop
    ctx->pc = 0x3093ccu;
    // NOP
    // 0x3093d0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3093d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3093d4: 0x0  nop
    ctx->pc = 0x3093d4u;
    // NOP
    // 0x3093d8: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x3093D8u;
    {
        const bool branch_taken_0x3093d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3093DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3093D8u;
            // 0x3093dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3093d8) {
            ctx->pc = 0x309454u;
            goto label_309454;
        }
    }
    ctx->pc = 0x3093E0u;
    // 0x3093e0: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x3093e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x3093e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3093e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3093e8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3093e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3093ec: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3093ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3093f0: 0x24429f40  addiu       $v0, $v0, -0x60C0
    ctx->pc = 0x3093f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942528));
    // 0x3093f4: 0xac831a44  sw          $v1, 0x1A44($a0)
    ctx->pc = 0x3093f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6724), GPR_U32(ctx, 3));
    // 0x3093f8: 0xac801a84  sw          $zero, 0x1A84($a0)
    ctx->pc = 0x3093f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6788), GPR_U32(ctx, 0));
    // 0x3093fc: 0x8c23a1b0  lw          $v1, -0x5E50($at)
    ctx->pc = 0x3093fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943152)));
    // 0x309400: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x309400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x309404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x309404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x309408: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x309408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x30940c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30940Cu;
    {
        const bool branch_taken_0x30940c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x309410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30940Cu;
            // 0x309410: 0x8f84a170  lw          $a0, -0x5E90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30940c) {
            ctx->pc = 0x30941Cu;
            goto label_30941c;
        }
    }
    ctx->pc = 0x309414u;
    // 0x309414: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x309414u;
    SET_GPR_U32(ctx, 31, 0x30941Cu);
    ctx->pc = 0x309418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309414u;
            // 0x309418: 0x24841801  addiu       $a0, $a0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30941Cu; }
        if (ctx->pc != 0x30941Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30941Cu; }
        if (ctx->pc != 0x30941Cu) { return; }
    }
    ctx->pc = 0x30941Cu;
label_30941c:
    // 0x30941c: 0x8f84a170  lw          $a0, -0x5E90($gp)
    ctx->pc = 0x30941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943088)));
    // 0x309420: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x309420u;
    SET_GPR_U32(ctx, 31, 0x309428u);
    ctx->pc = 0x309424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309420u;
            // 0x309424: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309428u; }
        if (ctx->pc != 0x309428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309428u; }
        if (ctx->pc != 0x309428u) { return; }
    }
    ctx->pc = 0x309428u;
label_309428:
    // 0x309428: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x309428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
    // 0x30942c: 0x24021770  addiu       $v0, $zero, 0x1770
    ctx->pc = 0x30942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x309430: 0xaf82a148  sw          $v0, -0x5EB8($gp)
    ctx->pc = 0x309430u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943048), GPR_U32(ctx, 2));
    // 0x309434: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x309434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x309438: 0xc063818  jal         func_18E060
    ctx->pc = 0x309438u;
    SET_GPR_U32(ctx, 31, 0x309440u);
    ctx->pc = 0x30943Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309438u;
            // 0x30943c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309440u; }
        if (ctx->pc != 0x309440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309440u; }
        if (ctx->pc != 0x309440u) { return; }
    }
    ctx->pc = 0x309440u;
label_309440:
    // 0x309440: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x309440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
    // 0x309444: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x309444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x309448: 0xc063818  jal         func_18E060
    ctx->pc = 0x309448u;
    SET_GPR_U32(ctx, 31, 0x309450u);
    ctx->pc = 0x30944Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309448u;
            // 0x30944c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309450u; }
        if (ctx->pc != 0x309450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309450u; }
        if (ctx->pc != 0x309450u) { return; }
    }
    ctx->pc = 0x309450u;
label_309450:
    // 0x309450: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x309450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309454:
    // 0x309454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x309454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_309458:
    // 0x309458: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x309458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30945c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30945cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309460: 0x3e00008  jr          $ra
    ctx->pc = 0x309460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309460u;
            // 0x309464: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309468u;
}
