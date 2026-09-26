#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MoveCamera__FPfPf
// Address: 0x27ea20 - 0x27ebec
void MoveCamera__FPfPf_0x27ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveCamera__FPfPf_0x27ea20");
#endif

    switch (ctx->pc) {
        case 0x27ea5cu: goto label_27ea5c;
        case 0x27ea74u: goto label_27ea74;
        case 0x27ea84u: goto label_27ea84;
        case 0x27ea94u: goto label_27ea94;
        case 0x27eaa8u: goto label_27eaa8;
        case 0x27ead0u: goto label_27ead0;
        case 0x27eaf4u: goto label_27eaf4;
        case 0x27eb04u: goto label_27eb04;
        case 0x27eb10u: goto label_27eb10;
        case 0x27eb1cu: goto label_27eb1c;
        case 0x27eb34u: goto label_27eb34;
        case 0x27eb40u: goto label_27eb40;
        case 0x27eb5cu: goto label_27eb5c;
        case 0x27eb78u: goto label_27eb78;
        case 0x27eb88u: goto label_27eb88;
        case 0x27eb98u: goto label_27eb98;
        case 0x27ebacu: goto label_27ebac;
        case 0x27ebc0u: goto label_27ebc0;
        default: break;
    }

    ctx->pc = 0x27ea20u;

    // 0x27ea20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27ea24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27ea28: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x27ea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x27ea2c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x27ea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x27ea30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27ea30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27ea34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27ea34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea38: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x27ea38u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27ea3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27ea3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea40: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x27ea40u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x27ea44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27ea48: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x27ea48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27ea4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27ea4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ea50: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x27ea50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27ea54: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x27EA54u;
    SET_GPR_U32(ctx, 31, 0x27EA5Cu);
    ctx->pc = 0x27EA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA54u;
            // 0x27ea58: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA5Cu; }
        if (ctx->pc != 0x27EA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA5Cu; }
        if (ctx->pc != 0x27EA5Cu) { return; }
    }
    ctx->pc = 0x27EA5Cu;
label_27ea5c:
    // 0x27ea5c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x27ea5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ea60: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x27ea60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x27ea64: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x27ea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ea68: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x27ea68u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27ea6c: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x27EA6Cu;
    SET_GPR_U32(ctx, 31, 0x27EA74u);
    ctx->pc = 0x27EA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA6Cu;
            // 0x27ea70: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA74u; }
        if (ctx->pc != 0x27EA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA74u; }
        if (ctx->pc != 0x27EA74u) { return; }
    }
    ctx->pc = 0x27EA74u;
label_27ea74:
    // 0x27ea74: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x27ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27ea78: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x27ea78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ea7c: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x27EA7Cu;
    SET_GPR_U32(ctx, 31, 0x27EA84u);
    ctx->pc = 0x27EA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA7Cu;
            // 0x27ea80: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA84u; }
        if (ctx->pc != 0x27EA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA84u; }
        if (ctx->pc != 0x27EA84u) { return; }
    }
    ctx->pc = 0x27EA84u;
label_27ea84:
    // 0x27ea84: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27ea88: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x27ea88u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27ea8c: 0xc052cc0  jal         func_14B300
    ctx->pc = 0x27EA8Cu;
    SET_GPR_U32(ctx, 31, 0x27EA94u);
    ctx->pc = 0x27EA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EA8Cu;
            // 0x27ea90: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA94u; }
        if (ctx->pc != 0x27EA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EA94u; }
        if (ctx->pc != 0x27EA94u) { return; }
    }
    ctx->pc = 0x27EA94u;
label_27ea94:
    // 0x27ea94: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27ea98: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x27ea98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27ea9c: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x27ea9cu;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
    // 0x27eaa0: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x27EAA0u;
    SET_GPR_U32(ctx, 31, 0x27EAA8u);
    ctx->pc = 0x27EAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EAA0u;
            // 0x27eaa4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EAA8u; }
        if (ctx->pc != 0x27EAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EAA8u; }
        if (ctx->pc != 0x27EAA8u) { return; }
    }
    ctx->pc = 0x27EAA8u;
label_27eaa8:
    // 0x27eaa8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27EAA8u;
    {
        const bool branch_taken_0x27eaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EAA8u;
            // 0x27eaac: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eaa8) {
            ctx->pc = 0x27EAC4u;
            goto label_27eac4;
        }
    }
    ctx->pc = 0x27EAB0u;
    // 0x27eab0: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x27eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x27eab4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x27eab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x27eab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27eab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27eabc: 0x0  nop
    ctx->pc = 0x27eabcu;
    // NOP
    // 0x27eac0: 0x46140582  mul.s       $f22, $f0, $f20
    ctx->pc = 0x27eac0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_27eac4:
    // 0x27eac4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27eac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27eac8: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x27EAC8u;
    SET_GPR_U32(ctx, 31, 0x27EAD0u);
    ctx->pc = 0x27EACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EAC8u;
            // 0x27eacc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EAD0u; }
        if (ctx->pc != 0x27EAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EAD0u; }
        if (ctx->pc != 0x27EAD0u) { return; }
    }
    ctx->pc = 0x27EAD0u;
label_27ead0:
    // 0x27ead0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27EAD0u;
    {
        const bool branch_taken_0x27ead0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EAD0u;
            // 0x27ead4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ead0) {
            ctx->pc = 0x27EAECu;
            goto label_27eaec;
        }
    }
    ctx->pc = 0x27EAD8u;
    // 0x27ead8: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x27ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x27eadc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x27eadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x27eae0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27eae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27eae4: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x27eae4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x27eae8: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x27eae8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27eaec:
    // 0x27eaec: 0xc052cb0  jal         func_14B2C0
    ctx->pc = 0x27EAECu;
    SET_GPR_U32(ctx, 31, 0x27EAF4u);
    ctx->pc = 0x27EAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EAECu;
            // 0x27eaf0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EAF4u; }
        if (ctx->pc != 0x27EAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EAF4u; }
        if (ctx->pc != 0x27EAF4u) { return; }
    }
    ctx->pc = 0x27EAF4u;
label_27eaf4:
    // 0x27eaf4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27eaf8: 0x460005c7  neg.s       $f23, $f0
    ctx->pc = 0x27eaf8u;
    ctx->f[23] = FPU_NEG_S(ctx->f[0]);
    // 0x27eafc: 0xc052cd0  jal         func_14B340
    ctx->pc = 0x27EAFCu;
    SET_GPR_U32(ctx, 31, 0x27EB04u);
    ctx->pc = 0x27EB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EAFCu;
            // 0x27eb00: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB04u; }
        if (ctx->pc != 0x27EB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB04u; }
        if (ctx->pc != 0x27EB04u) { return; }
    }
    ctx->pc = 0x27EB04u;
label_27eb04:
    // 0x27eb04: 0x46000607  neg.s       $f24, $f0
    ctx->pc = 0x27eb04u;
    ctx->f[24] = FPU_NEG_S(ctx->f[0]);
    // 0x27eb08: 0xc047964  jal         func_11E590
    ctx->pc = 0x27EB08u;
    SET_GPR_U32(ctx, 31, 0x27EB10u);
    ctx->pc = 0x27EB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB08u;
            // 0x27eb0c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB10u; }
        if (ctx->pc != 0x27EB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB10u; }
        if (ctx->pc != 0x27EB10u) { return; }
    }
    ctx->pc = 0x27EB10u;
label_27eb10:
    // 0x27eb10: 0x4600b502  mul.s       $f20, $f22, $f0
    ctx->pc = 0x27eb10u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x27eb14: 0xc047a42  jal         func_11E908
    ctx->pc = 0x27EB14u;
    SET_GPR_U32(ctx, 31, 0x27EB1Cu);
    ctx->pc = 0x27EB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB14u;
            // 0x27eb18: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB1Cu; }
        if (ctx->pc != 0x27EB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB1Cu; }
        if (ctx->pc != 0x27EB1Cu) { return; }
    }
    ctx->pc = 0x27EB1Cu;
label_27eb1c:
    // 0x27eb1c: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x27eb1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x27eb20: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x27eb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x27eb24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27eb24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27eb28: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x27eb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27eb2c: 0xc047964  jal         func_11E590
    ctx->pc = 0x27EB2Cu;
    SET_GPR_U32(ctx, 31, 0x27EB34u);
    ctx->pc = 0x27EB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB2Cu;
            // 0x27eb30: 0xe7b70074  swc1        $f23, 0x74($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB34u; }
        if (ctx->pc != 0x27EB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB34u; }
        if (ctx->pc != 0x27EB34u) { return; }
    }
    ctx->pc = 0x27EB34u;
label_27eb34:
    // 0x27eb34: 0x4600c502  mul.s       $f20, $f24, $f0
    ctx->pc = 0x27eb34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x27eb38: 0xc047a42  jal         func_11E908
    ctx->pc = 0x27EB38u;
    SET_GPR_U32(ctx, 31, 0x27EB40u);
    ctx->pc = 0x27EB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB38u;
            // 0x27eb3c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB40u; }
        if (ctx->pc != 0x27EB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB40u; }
        if (ctx->pc != 0x27EB40u) { return; }
    }
    ctx->pc = 0x27EB40u;
label_27eb40:
    // 0x27eb40: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x27eb40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x27eb44: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27eb48: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x27eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x27eb4c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x27eb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27eb50: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x27eb50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x27eb54: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x27EB54u;
    SET_GPR_U32(ctx, 31, 0x27EB5Cu);
    ctx->pc = 0x27EB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB54u;
            // 0x27eb58: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB5Cu; }
        if (ctx->pc != 0x27EB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB5Cu; }
        if (ctx->pc != 0x27EB5Cu) { return; }
    }
    ctx->pc = 0x27EB5Cu;
label_27eb5c:
    // 0x27eb5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27EB5Cu;
    {
        const bool branch_taken_0x27eb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB5Cu;
            // 0x27eb60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb5c) {
            ctx->pc = 0x27EB7Cu;
            goto label_27eb7c;
        }
    }
    ctx->pc = 0x27EB64u;
    // 0x27eb64: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x27eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x27eb68: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x27eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27eb6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27eb6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27eb70: 0xc041c4a  jal         func_107128
    ctx->pc = 0x27EB70u;
    SET_GPR_U32(ctx, 31, 0x27EB78u);
    ctx->pc = 0x27EB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB70u;
            // 0x27eb74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB78u; }
        if (ctx->pc != 0x27EB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB78u; }
        if (ctx->pc != 0x27EB78u) { return; }
    }
    ctx->pc = 0x27EB78u;
label_27eb78:
    // 0x27eb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27eb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27eb7c:
    // 0x27eb7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27eb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27eb80: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x27EB80u;
    SET_GPR_U32(ctx, 31, 0x27EB88u);
    ctx->pc = 0x27EB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB80u;
            // 0x27eb84: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB88u; }
        if (ctx->pc != 0x27EB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB88u; }
        if (ctx->pc != 0x27EB88u) { return; }
    }
    ctx->pc = 0x27EB88u;
label_27eb88:
    // 0x27eb88: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27eb8c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x27eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x27eb90: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x27EB90u;
    SET_GPR_U32(ctx, 31, 0x27EB98u);
    ctx->pc = 0x27EB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB90u;
            // 0x27eb94: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB98u; }
        if (ctx->pc != 0x27EB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EB98u; }
        if (ctx->pc != 0x27EB98u) { return; }
    }
    ctx->pc = 0x27EB98u;
label_27eb98:
    // 0x27eb98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27EB98u;
    {
        const bool branch_taken_0x27eb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EB98u;
            // 0x27eb9c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27eb98) {
            ctx->pc = 0x27EBC0u;
            goto label_27ebc0;
        }
    }
    ctx->pc = 0x27EBA0u;
    // 0x27eba0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x27eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27eba4: 0xc052cf0  jal         func_14B3C0
    ctx->pc = 0x27EBA4u;
    SET_GPR_U32(ctx, 31, 0x27EBACu);
    ctx->pc = 0x27EBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EBA4u;
            // 0x27eba8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EBACu; }
        if (ctx->pc != 0x27EBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EBACu; }
        if (ctx->pc != 0x27EBACu) { return; }
    }
    ctx->pc = 0x27EBACu;
label_27ebac:
    // 0x27ebac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EBACu;
    {
        const bool branch_taken_0x27ebac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EBACu;
            // 0x27ebb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ebac) {
            ctx->pc = 0x27EBC0u;
            goto label_27ebc0;
        }
    }
    ctx->pc = 0x27EBB4u;
    // 0x27ebb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ebb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ebb8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x27EBB8u;
    SET_GPR_U32(ctx, 31, 0x27EBC0u);
    ctx->pc = 0x27EBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27EBB8u;
            // 0x27ebbc: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EBC0u; }
        if (ctx->pc != 0x27EBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27EBC0u; }
        if (ctx->pc != 0x27EBC0u) { return; }
    }
    ctx->pc = 0x27EBC0u;
label_27ebc0:
    // 0x27ebc0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27ebc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27ebc4: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x27ebc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27ebc8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x27ebc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ebcc: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x27ebccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27ebd0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x27ebd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ebd4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x27ebd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27ebd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27ebd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ebdc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x27ebdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27ebe0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27ebe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ebe4: 0x3e00008  jr          $ra
    ctx->pc = 0x27EBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27EBE4u;
            // 0x27ebe8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27EBECu;
}
