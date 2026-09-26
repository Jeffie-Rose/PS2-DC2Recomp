#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBBoardMatrix__8mgCFrameFiPA4_fP13mgRENDER_INFO
// Address: 0x136e40 - 0x13702c
void GetBBoardMatrix__8mgCFrameFiPA4_fP13mgRENDER_INFO_0x136e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBBoardMatrix__8mgCFrameFiPA4_fP13mgRENDER_INFO_0x136e40");
#endif

    switch (ctx->pc) {
        case 0x136e74u: goto label_136e74;
        case 0x136e7cu: goto label_136e7c;
        case 0x136e88u: goto label_136e88;
        case 0x136e94u: goto label_136e94;
        case 0x136eb0u: goto label_136eb0;
        case 0x136eccu: goto label_136ecc;
        case 0x136ee0u: goto label_136ee0;
        case 0x136f18u: goto label_136f18;
        case 0x136f28u: goto label_136f28;
        case 0x136f34u: goto label_136f34;
        case 0x136f48u: goto label_136f48;
        case 0x136f6cu: goto label_136f6c;
        case 0x136f80u: goto label_136f80;
        case 0x136fa4u: goto label_136fa4;
        case 0x137000u: goto label_137000;
        case 0x13700cu: goto label_13700c;
        default: break;
    }

    ctx->pc = 0x136e40u;

    // 0x136e40: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x136e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x136e44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x136e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x136e48: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x136e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x136e4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x136e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x136e50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x136e50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x136e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x136e58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x136e58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x136e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x136e60: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x136e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e64: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x136e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e68: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x136e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x136e6c: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x136E6Cu;
    SET_GPR_U32(ctx, 31, 0x136E74u);
    ctx->pc = 0x136E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136E6Cu;
            // 0x136e70: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E74u; }
        if (ctx->pc != 0x136E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E74u; }
        if (ctx->pc != 0x136E74u) { return; }
    }
    ctx->pc = 0x136E74u;
label_136e74:
    // 0x136e74: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x136E74u;
    SET_GPR_U32(ctx, 31, 0x136E7Cu);
    ctx->pc = 0x136E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136E74u;
            // 0x136e78: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E7Cu; }
        if (ctx->pc != 0x136E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E7Cu; }
        if (ctx->pc != 0x136E7Cu) { return; }
    }
    ctx->pc = 0x136E7Cu;
label_136e7c:
    // 0x136e7c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x136e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x136e80: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x136E80u;
    SET_GPR_U32(ctx, 31, 0x136E88u);
    ctx->pc = 0x136E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136E80u;
            // 0x136e84: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E88u; }
        if (ctx->pc != 0x136E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E88u; }
        if (ctx->pc != 0x136E88u) { return; }
    }
    ctx->pc = 0x136E88u;
label_136e88:
    // 0x136e88: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x136e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x136e8c: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x136E8Cu;
    SET_GPR_U32(ctx, 31, 0x136E94u);
    ctx->pc = 0x136E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136E8Cu;
            // 0x136e90: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E94u; }
        if (ctx->pc != 0x136E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E94u; }
        if (ctx->pc != 0x136E94u) { return; }
    }
    ctx->pc = 0x136E94u;
label_136e94:
    // 0x136e94: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x136e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x136e98: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x136e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x136e9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x136e9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ea4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x136ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x136ea8: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x136EA8u;
    SET_GPR_U32(ctx, 31, 0x136EB0u);
    ctx->pc = 0x136EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136EA8u;
            // 0x136eac: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136EB0u; }
        if (ctx->pc != 0x136EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136EB0u; }
        if (ctx->pc != 0x136EB0u) { return; }
    }
    ctx->pc = 0x136EB0u;
label_136eb0:
    // 0x136eb0: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x136eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x136eb4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x136EB4u;
    {
        const bool branch_taken_0x136eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136EB4u;
            // 0x136eb8: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136eb4) {
            ctx->pc = 0x136F08u;
            goto label_136f08;
        }
    }
    ctx->pc = 0x136EBCu;
    // 0x136ebc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x136ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x136ec0: 0x260503a0  addiu       $a1, $s0, 0x3A0
    ctx->pc = 0x136ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
    // 0x136ec4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x136EC4u;
    SET_GPR_U32(ctx, 31, 0x136ECCu);
    ctx->pc = 0x136EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136EC4u;
            // 0x136ec8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136ECCu; }
        if (ctx->pc != 0x136ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136ECCu; }
        if (ctx->pc != 0x136ECCu) { return; }
    }
    ctx->pc = 0x136ECCu;
label_136ecc:
    // 0x136ecc: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x136eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x136ed0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x136ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x136ed4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x136ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ed8: 0xc041be0  jal         func_106F80
    ctx->pc = 0x136ED8u;
    SET_GPR_U32(ctx, 31, 0x136EE0u);
    ctx->pc = 0x136EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136ED8u;
            // 0x136edc: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136EE0u; }
        if (ctx->pc != 0x136EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136EE0u; }
        if (ctx->pc != 0x136EE0u) { return; }
    }
    ctx->pc = 0x136EE0u;
label_136ee0:
    // 0x136ee0: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x136ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136ee4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x136ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x136ee8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x136ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136eec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x136eecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x136ef0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x136ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x136ef4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x136ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136ef8: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x136ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x136efc: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x136efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f00: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x136f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x136f04: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x136f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_136f08:
    // 0x136f08: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x136F08u;
    {
        const bool branch_taken_0x136f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136F08u;
            // 0x136f0c: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f08) {
            ctx->pc = 0x136FA8u;
            goto label_136fa8;
        }
    }
    ctx->pc = 0x136F10u;
    // 0x136f10: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x136F10u;
    SET_GPR_U32(ctx, 31, 0x136F18u);
    ctx->pc = 0x136F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136F10u;
            // 0x136f14: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F18u; }
        if (ctx->pc != 0x136F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F18u; }
        if (ctx->pc != 0x136F18u) { return; }
    }
    ctx->pc = 0x136F18u;
label_136f18:
    // 0x136f18: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x136f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x136f1c: 0x260503a0  addiu       $a1, $s0, 0x3A0
    ctx->pc = 0x136f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
    // 0x136f20: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x136F20u;
    SET_GPR_U32(ctx, 31, 0x136F28u);
    ctx->pc = 0x136F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136F20u;
            // 0x136f24: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F28u; }
        if (ctx->pc != 0x136F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F28u; }
        if (ctx->pc != 0x136F28u) { return; }
    }
    ctx->pc = 0x136F28u;
label_136f28:
    // 0x136f28: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x136f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x136f2c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x136F2Cu;
    SET_GPR_U32(ctx, 31, 0x136F34u);
    ctx->pc = 0x136F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136F2Cu;
            // 0x136f30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F34u; }
        if (ctx->pc != 0x136F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F34u; }
        if (ctx->pc != 0x136F34u) { return; }
    }
    ctx->pc = 0x136F34u;
label_136f34:
    // 0x136f34: 0xc7b40074  lwc1        $f20, 0x74($sp)
    ctx->pc = 0x136f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x136f38: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x136f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x136f3c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x136f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x136f40: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x136F40u;
    SET_GPR_U32(ctx, 31, 0x136F48u);
    ctx->pc = 0x136F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136F40u;
            // 0x136f44: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F48u; }
        if (ctx->pc != 0x136F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F48u; }
        if (ctx->pc != 0x136F48u) { return; }
    }
    ctx->pc = 0x136F48u;
label_136f48:
    // 0x136f48: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x136f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x136f4c: 0x260503a0  addiu       $a1, $s0, 0x3A0
    ctx->pc = 0x136f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 928));
    // 0x136f50: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x136f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x136f54: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x136f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x136f58: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x136f58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x136f5c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x136f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x136f60: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x136f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x136f64: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x136F64u;
    SET_GPR_U32(ctx, 31, 0x136F6Cu);
    ctx->pc = 0x136F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136F64u;
            // 0x136f68: 0xe7b400f4  swc1        $f20, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F6Cu; }
        if (ctx->pc != 0x136F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F6Cu; }
        if (ctx->pc != 0x136F6Cu) { return; }
    }
    ctx->pc = 0x136F6Cu;
label_136f6c:
    // 0x136f6c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x136f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x136f70: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x136f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x136f74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x136f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f78: 0xc041be0  jal         func_106F80
    ctx->pc = 0x136F78u;
    SET_GPR_U32(ctx, 31, 0x136F80u);
    ctx->pc = 0x136F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136F78u;
            // 0x136f7c: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F80u; }
        if (ctx->pc != 0x136F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F80u; }
        if (ctx->pc != 0x136F80u) { return; }
    }
    ctx->pc = 0x136F80u;
label_136f80:
    // 0x136f80: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x136f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x136f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f8c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x136f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x136f90: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x136f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x136f94: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x136f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f98: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x136f98u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x136f9c: 0xc04c094  jal         func_130250
    ctx->pc = 0x136F9Cu;
    SET_GPR_U32(ctx, 31, 0x136FA4u);
    ctx->pc = 0x136FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136F9Cu;
            // 0x136fa0: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FA4u; }
        if (ctx->pc != 0x136FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FA4u; }
        if (ctx->pc != 0x136FA4u) { return; }
    }
    ctx->pc = 0x136FA4u;
label_136fa4:
    // 0x136fa4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x136fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_136fa8:
    // 0x136fa8: 0xd84a0000  lqc2        $vf10, 0x0($v0)
    ctx->pc = 0x136fa8u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136fac: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x136facu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x136fb0: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x136fb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x136fb4: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x136fb4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x136fb8: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x136fb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x136fbc: 0x4bea086a  vmul.xyzw   $vf1, $vf1, $vf10
    ctx->pc = 0x136fbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[10]); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x136fc0: 0x4bea10aa  vmul.xyzw   $vf2, $vf2, $vf10
    ctx->pc = 0x136fc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[10]); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x136fc4: 0x4bea18ea  vmul.xyzw   $vf3, $vf3, $vf10
    ctx->pc = 0x136fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[10]); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x136fc8: 0x4be0211b  vmulw.xyzw  $vf4, $vf4, $vf0w
    ctx->pc = 0x136fc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x136fcc: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x136fccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136fd0: 0xfa220010  sqc2        $vf2, 0x10($s1)
    ctx->pc = 0x136fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136fd4: 0xfa230020  sqc2        $vf3, 0x20($s1)
    ctx->pc = 0x136fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136fd8: 0xfa240030  sqc2        $vf4, 0x30($s1)
    ctx->pc = 0x136fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136fdc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x136fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136fe0: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x136fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x136fe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x136fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fe8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x136fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x136fec: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x136fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136ff0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x136ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x136ff4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x136ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136ff8: 0xc041c60  jal         func_107180
    ctx->pc = 0x136FF8u;
    SET_GPR_U32(ctx, 31, 0x137000u);
    ctx->pc = 0x136FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136FF8u;
            // 0x136ffc: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137000u; }
        if (ctx->pc != 0x137000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137000u; }
        if (ctx->pc != 0x137000u) { return; }
    }
    ctx->pc = 0x137000u;
label_137000:
    // 0x137000: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x137000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137004: 0xc04db20  jal         func_136C80
    ctx->pc = 0x137004u;
    SET_GPR_U32(ctx, 31, 0x13700Cu);
    ctx->pc = 0x137008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137004u;
            // 0x137008: 0xae600040  sw          $zero, 0x40($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C80u;
    if (runtime->hasFunction(0x136C80u)) {
        auto targetFn = runtime->lookupFunction(0x136C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13700Cu; }
        if (ctx->pc != 0x13700Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearChildFlag__8mgCFrameFv_0x136c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13700Cu; }
        if (ctx->pc != 0x13700Cu) { return; }
    }
    ctx->pc = 0x13700Cu;
label_13700c:
    // 0x13700c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13700cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137010: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x137010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137014: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x137014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137018: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x137018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13701c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13701cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137020: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137024: 0x3e00008  jr          $ra
    ctx->pc = 0x137024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137024u;
            // 0x137028: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13702Cu;
}
