#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__11CDeadEffectFv
// Address: 0x1c3ae0 - 0x1c3f60
void Draw__11CDeadEffectFv_0x1c3ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__11CDeadEffectFv_0x1c3ae0");
#endif

    switch (ctx->pc) {
        case 0x1c3b2cu: goto label_1c3b2c;
        case 0x1c3b3cu: goto label_1c3b3c;
        case 0x1c3b44u: goto label_1c3b44;
        case 0x1c3b50u: goto label_1c3b50;
        case 0x1c3b5cu: goto label_1c3b5c;
        case 0x1c3b68u: goto label_1c3b68;
        case 0x1c3b74u: goto label_1c3b74;
        case 0x1c3b80u: goto label_1c3b80;
        case 0x1c3b8cu: goto label_1c3b8c;
        case 0x1c3b98u: goto label_1c3b98;
        case 0x1c3ba4u: goto label_1c3ba4;
        case 0x1c3bb0u: goto label_1c3bb0;
        case 0x1c3c20u: goto label_1c3c20;
        case 0x1c3c58u: goto label_1c3c58;
        case 0x1c3c98u: goto label_1c3c98;
        case 0x1c3d1cu: goto label_1c3d1c;
        case 0x1c3d34u: goto label_1c3d34;
        case 0x1c3d4cu: goto label_1c3d4c;
        case 0x1c3d64u: goto label_1c3d64;
        case 0x1c3d7cu: goto label_1c3d7c;
        case 0x1c3d94u: goto label_1c3d94;
        case 0x1c3dacu: goto label_1c3dac;
        case 0x1c3dc4u: goto label_1c3dc4;
        case 0x1c3ddcu: goto label_1c3ddc;
        case 0x1c3df4u: goto label_1c3df4;
        case 0x1c3e0cu: goto label_1c3e0c;
        case 0x1c3e24u: goto label_1c3e24;
        case 0x1c3e3cu: goto label_1c3e3c;
        case 0x1c3e54u: goto label_1c3e54;
        case 0x1c3e68u: goto label_1c3e68;
        case 0x1c3e74u: goto label_1c3e74;
        case 0x1c3e88u: goto label_1c3e88;
        case 0x1c3e94u: goto label_1c3e94;
        case 0x1c3ea8u: goto label_1c3ea8;
        case 0x1c3eb4u: goto label_1c3eb4;
        case 0x1c3ec4u: goto label_1c3ec4;
        case 0x1c3ed0u: goto label_1c3ed0;
        case 0x1c3ee0u: goto label_1c3ee0;
        case 0x1c3eecu: goto label_1c3eec;
        case 0x1c3efcu: goto label_1c3efc;
        case 0x1c3f08u: goto label_1c3f08;
        case 0x1c3f30u: goto label_1c3f30;
        default: break;
    }

    ctx->pc = 0x1c3ae0u;

    // 0x1c3ae0: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x1c3ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x1c3ae4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c3ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c3ae8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c3ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1c3aec: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c3aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c3af0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c3af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c3af4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c3af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c3af8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c3af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c3afc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c3afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c3b00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c3b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c3b04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c3b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c3b08: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c3b08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c3b0c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1c3b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1c3b10: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3B10u;
    {
        const bool branch_taken_0x1c3b10 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1C3B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B10u;
            // 0x1c3b14: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b10) {
            ctx->pc = 0x1C3B24u;
            goto label_1c3b24;
        }
    }
    ctx->pc = 0x1C3B18u;
    // 0x1c3b18: 0x8ee3002c  lw          $v1, 0x2C($s7)
    ctx->pc = 0x1c3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 44)));
    // 0x1c3b1c: 0x18600104  blez        $v1, . + 4 + (0x104 << 2)
    ctx->pc = 0x1C3B1Cu;
    {
        const bool branch_taken_0x1c3b1c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c3b1c) {
            ctx->pc = 0x1C3F30u;
            goto label_1c3f30;
        }
    }
    ctx->pc = 0x1C3B24u;
label_1c3b24:
    // 0x1c3b24: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C3B24u;
    SET_GPR_U32(ctx, 31, 0x1C3B2Cu);
    ctx->pc = 0x1C3B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B24u;
            // 0x1c3b28: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B2Cu; }
        if (ctx->pc != 0x1C3B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B2Cu; }
        if (ctx->pc != 0x1C3B2Cu) { return; }
    }
    ctx->pc = 0x1C3B2Cu;
label_1c3b2c:
    // 0x1c3b2c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3b34: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C3B34u;
    SET_GPR_U32(ctx, 31, 0x1C3B3Cu);
    ctx->pc = 0x1C3B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B34u;
            // 0x1c3b38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B3Cu; }
        if (ctx->pc != 0x1C3B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B3Cu; }
        if (ctx->pc != 0x1C3B3Cu) { return; }
    }
    ctx->pc = 0x1C3B3Cu;
label_1c3b3c:
    // 0x1c3b3c: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C3B3Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B44u);
    ctx->pc = 0x1C3B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B3Cu;
            // 0x1c3b40: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B44u; }
        if (ctx->pc != 0x1C3B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B44u; }
        if (ctx->pc != 0x1C3B44u) { return; }
    }
    ctx->pc = 0x1C3B44u;
label_1c3b44:
    // 0x1c3b44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3b48: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C3B48u;
    SET_GPR_U32(ctx, 31, 0x1C3B50u);
    ctx->pc = 0x1C3B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B48u;
            // 0x1c3b4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B50u; }
        if (ctx->pc != 0x1C3B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B50u; }
        if (ctx->pc != 0x1C3B50u) { return; }
    }
    ctx->pc = 0x1C3B50u;
label_1c3b50:
    // 0x1c3b50: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3b54: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x1C3B54u;
    SET_GPR_U32(ctx, 31, 0x1C3B5Cu);
    ctx->pc = 0x1C3B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B54u;
            // 0x1c3b58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B5Cu; }
        if (ctx->pc != 0x1C3B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B5Cu; }
        if (ctx->pc != 0x1C3B5Cu) { return; }
    }
    ctx->pc = 0x1C3B5Cu;
label_1c3b5c:
    // 0x1c3b5c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3b60: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C3B60u;
    SET_GPR_U32(ctx, 31, 0x1C3B68u);
    ctx->pc = 0x1C3B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B60u;
            // 0x1c3b64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B68u; }
        if (ctx->pc != 0x1C3B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B68u; }
        if (ctx->pc != 0x1C3B68u) { return; }
    }
    ctx->pc = 0x1C3B68u;
label_1c3b68:
    // 0x1c3b68: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3b6c: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C3B6Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B74u);
    ctx->pc = 0x1C3B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B6Cu;
            // 0x1c3b70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B74u; }
        if (ctx->pc != 0x1C3B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B74u; }
        if (ctx->pc != 0x1C3B74u) { return; }
    }
    ctx->pc = 0x1C3B74u;
label_1c3b74:
    // 0x1c3b74: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3b78: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C3B78u;
    SET_GPR_U32(ctx, 31, 0x1C3B80u);
    ctx->pc = 0x1C3B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B78u;
            // 0x1c3b7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B80u; }
        if (ctx->pc != 0x1C3B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B80u; }
        if (ctx->pc != 0x1C3B80u) { return; }
    }
    ctx->pc = 0x1C3B80u;
label_1c3b80:
    // 0x1c3b80: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3b84: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C3B84u;
    SET_GPR_U32(ctx, 31, 0x1C3B8Cu);
    ctx->pc = 0x1C3B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B84u;
            // 0x1c3b88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B8Cu; }
        if (ctx->pc != 0x1C3B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B8Cu; }
        if (ctx->pc != 0x1C3B8Cu) { return; }
    }
    ctx->pc = 0x1C3B8Cu;
label_1c3b8c:
    // 0x1c3b8c: 0x8f858e90  lw          $a1, -0x7170($gp)
    ctx->pc = 0x1c3b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938256)));
    // 0x1c3b90: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C3B90u;
    SET_GPR_U32(ctx, 31, 0x1C3B98u);
    ctx->pc = 0x1C3B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B90u;
            // 0x1c3b94: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B98u; }
        if (ctx->pc != 0x1C3B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3B98u; }
        if (ctx->pc != 0x1C3B98u) { return; }
    }
    ctx->pc = 0x1C3B98u;
label_1c3b98:
    // 0x1c3b98: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3b9c: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1C3B9Cu;
    SET_GPR_U32(ctx, 31, 0x1C3BA4u);
    ctx->pc = 0x1C3BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B9Cu;
            // 0x1c3ba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3BA4u; }
        if (ctx->pc != 0x1C3BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3BA4u; }
        if (ctx->pc != 0x1C3BA4u) { return; }
    }
    ctx->pc = 0x1C3BA4u;
label_1c3ba4:
    // 0x1c3ba4: 0x8ef20024  lw          $s2, 0x24($s7)
    ctx->pc = 0x1c3ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
    // 0x1c3ba8: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x1C3BA8u;
    {
        const bool branch_taken_0x1c3ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3BA8u;
            // 0x1c3bac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ba8) {
            ctx->pc = 0x1C3F14u;
            goto label_1c3f14;
        }
    }
    ctx->pc = 0x1C3BB0u;
label_1c3bb0:
    // 0x1c3bb0: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x1c3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1c3bb4: 0x1c800003  bgtz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3BB4u;
    {
        const bool branch_taken_0x1c3bb4 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1c3bb4) {
            ctx->pc = 0x1C3BC4u;
            goto label_1c3bc4;
        }
    }
    ctx->pc = 0x1C3BBCu;
    // 0x1c3bbc: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x1C3BBCu;
    {
        const bool branch_taken_0x1c3bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3BBCu;
            // 0x1c3bc0: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bbc) {
            ctx->pc = 0x1C3F0Cu;
            goto label_1c3f0c;
        }
    }
    ctx->pc = 0x1C3BC4u;
label_1c3bc4:
    // 0x1c3bc4: 0x0  nop
    ctx->pc = 0x1c3bc4u;
    // NOP
    // 0x1c3bc8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c3bcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3BCCu;
    {
        const bool branch_taken_0x1c3bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3bcc) {
            ctx->pc = 0x1C3BE0u;
            goto label_1c3be0;
        }
    }
    ctx->pc = 0x1C3BD4u;
    // 0x1c3bd4: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1c3bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c3bd8: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x1c3bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c3bdc: 0x2416001f  addiu       $s6, $zero, 0x1F
    ctx->pc = 0x1c3bdcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1c3be0:
    // 0x1c3be0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c3be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3be4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3BE4u;
    {
        const bool branch_taken_0x1c3be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C3BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3BE4u;
            // 0x1c3be8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3be4) {
            ctx->pc = 0x1C3C0Cu;
            goto label_1c3c0c;
        }
    }
    ctx->pc = 0x1C3BECu;
    // 0x1c3bec: 0x241000a0  addiu       $s0, $zero, 0xA0
    ctx->pc = 0x1c3becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1c3bf0: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1c3bf0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c3bf4: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x1c3bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c3bf8: 0x0  nop
    ctx->pc = 0x1c3bf8u;
    // NOP
    // 0x1c3bfc: 0x1010  mfhi        $v0
    ctx->pc = 0x1c3bfcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c3c00: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3C00u;
    {
        const bool branch_taken_0x1c3c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C3C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C00u;
            // 0x1c3c04: 0x2416001f  addiu       $s6, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c00) {
            ctx->pc = 0x1C3C0Cu;
            goto label_1c3c0c;
        }
    }
    ctx->pc = 0x1C3C08u;
    // 0x1c3c08: 0x24110060  addiu       $s1, $zero, 0x60
    ctx->pc = 0x1c3c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1c3c0c:
    // 0x1c3c0c: 0x0  nop
    ctx->pc = 0x1c3c0cu;
    // NOP
    // 0x1c3c10: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1c3c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1c3c14: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1c3c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c3c18: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1C3C18u;
    SET_GPR_U32(ctx, 31, 0x1C3C20u);
    ctx->pc = 0x1C3C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C18u;
            // 0x1c3c1c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C20u; }
        if (ctx->pc != 0x1C3C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C20u; }
        if (ctx->pc != 0x1C3C20u) { return; }
    }
    ctx->pc = 0x1C3C20u;
label_1c3c20:
    // 0x1c3c20: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c3c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3c24: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1c3c28: 0xafa301cc  sw          $v1, 0x1CC($sp)
    ctx->pc = 0x1c3c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
    // 0x1c3c2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c3c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c3c30: 0xc642003c  lwc1        $f2, 0x3C($s2)
    ctx->pc = 0x1c3c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3c34: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x1c3c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3c3c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c3c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c3c40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c3c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c3c44: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c3c44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c3c48: 0x0  nop
    ctx->pc = 0x1c3c48u;
    // NOP
    // 0x1c3c4c: 0x0  nop
    ctx->pc = 0x1c3c4cu;
    // NOP
    // 0x1c3c50: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1C3C50u;
    SET_GPR_U32(ctx, 31, 0x1C3C58u);
    ctx->pc = 0x1C3C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C50u;
            // 0x1c3c54: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C58u; }
        if (ctx->pc != 0x1C3C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C58u; }
        if (ctx->pc != 0x1C3C58u) { return; }
    }
    ctx->pc = 0x1C3C58u;
label_1c3c58:
    // 0x1c3c58: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1c3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1c3c5c: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1c3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1c3c60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c3c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c3c64: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1c3c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1c3c68: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x1c3c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c3c6c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1c3c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1c3c70: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c3c70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c3c74: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1c3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1c3c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3c7c: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x1c3c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1c3c80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c3c80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3c84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c88: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1c3c88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1c3c8c: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x1c3c8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1c3c90: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C3C90u;
    SET_GPR_U32(ctx, 31, 0x1C3C98u);
    ctx->pc = 0x1C3C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C90u;
            // 0x1c3c94: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C98u; }
        if (ctx->pc != 0x1C3C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3C98u; }
        if (ctx->pc != 0x1C3C98u) { return; }
    }
    ctx->pc = 0x1C3C98u;
label_1c3c98:
    // 0x1c3c98: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1C3C98u;
    {
        const bool branch_taken_0x1c3c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3C98u;
            // 0x1c3c9c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c98) {
            ctx->pc = 0x1C3F08u;
            goto label_1c3f08;
        }
    }
    ctx->pc = 0x1C3CA0u;
    // 0x1c3ca0: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1c3ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1c3ca4: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x1c3ca4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c3ca8: 0x8fa90200  lw          $t1, 0x200($sp)
    ctx->pc = 0x1c3ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1c3cac: 0x8fa801d4  lw          $t0, 0x1D4($sp)
    ctx->pc = 0x1c3cacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1c3cb0: 0x8fa701d8  lw          $a3, 0x1D8($sp)
    ctx->pc = 0x1c3cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x1c3cb4: 0x8fa601dc  lw          $a2, 0x1DC($sp)
    ctx->pc = 0x1c3cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1c3cb8: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x1c3cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x1c3cbc: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x1c3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1c3cc0: 0xafa901e0  sw          $t1, 0x1E0($sp)
    ctx->pc = 0x1c3cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 9));
    // 0x1c3cc4: 0xafa801e4  sw          $t0, 0x1E4($sp)
    ctx->pc = 0x1c3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 8));
    // 0x1c3cc8: 0xafa701e8  sw          $a3, 0x1E8($sp)
    ctx->pc = 0x1c3cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 7));
    // 0x1c3ccc: 0xafa601ec  sw          $a2, 0x1EC($sp)
    ctx->pc = 0x1c3cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
    // 0x1c3cd0: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x1c3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1c3cd4: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x1c3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    // 0x1c3cd8: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x1c3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x1c3cdc: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x1c3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
    // 0x1c3ce0: 0x1010  mfhi        $v0
    ctx->pc = 0x1c3ce0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c3ce4: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1c3ce4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c3ce8: 0x1020005a  beqz        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x1C3CE8u;
    {
        const bool branch_taken_0x1c3ce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3CE8u;
            // 0x1c3cec: 0xafa301f8  sw          $v1, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ce8) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3CF0u;
    // 0x1c3cf0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1c3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1c3cf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c3cf8: 0x24636c40  addiu       $v1, $v1, 0x6C40
    ctx->pc = 0x1c3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27712));
    // 0x1c3cfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3d00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3d04: 0x400008  jr          $v0
    ctx->pc = 0x1C3D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3D0Cu: goto label_1c3d0c;
            case 0x1C3D3Cu: goto label_1c3d3c;
            case 0x1C3D6Cu: goto label_1c3d6c;
            case 0x1C3D9Cu: goto label_1c3d9c;
            case 0x1C3DCCu: goto label_1c3dcc;
            case 0x1C3DFCu: goto label_1c3dfc;
            case 0x1C3E2Cu: goto label_1c3e2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C3D0Cu;
label_1c3d0c:
    // 0x1c3d0c: 0x0  nop
    ctx->pc = 0x1c3d0cu;
    // NOP
    // 0x1c3d10: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1c3d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3d14: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C3D14u;
    SET_GPR_U32(ctx, 31, 0x1C3D1Cu);
    ctx->pc = 0x1C3D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D14u;
            // 0x1c3d18: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D1Cu; }
        if (ctx->pc != 0x1C3D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D1Cu; }
        if (ctx->pc != 0x1C3D1Cu) { return; }
    }
    ctx->pc = 0x1C3D1Cu;
label_1c3d1c:
    // 0x1c3d1c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c3d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d20: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3d24: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c3d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c3d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d2c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C3D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C3D34u);
    ctx->pc = 0x1C3D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D2Cu;
            // 0x1c3d30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D34u; }
        if (ctx->pc != 0x1C3D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D34u; }
        if (ctx->pc != 0x1C3D34u) { return; }
    }
    ctx->pc = 0x1C3D34u;
label_1c3d34:
    // 0x1c3d34: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C3D34u;
    {
        const bool branch_taken_0x1c3d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d34) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3D3Cu;
label_1c3d3c:
    // 0x1c3d3c: 0x0  nop
    ctx->pc = 0x1c3d3cu;
    // NOP
    // 0x1c3d40: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1c3d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3d44: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C3D44u;
    SET_GPR_U32(ctx, 31, 0x1C3D4Cu);
    ctx->pc = 0x1C3D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D44u;
            // 0x1c3d48: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D4Cu; }
        if (ctx->pc != 0x1C3D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D4Cu; }
        if (ctx->pc != 0x1C3D4Cu) { return; }
    }
    ctx->pc = 0x1C3D4Cu;
label_1c3d4c:
    // 0x1c3d4c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c3d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d50: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3d54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d58: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c3d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c3d5c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C3D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C3D64u);
    ctx->pc = 0x1C3D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D5Cu;
            // 0x1c3d60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D64u; }
        if (ctx->pc != 0x1C3D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D64u; }
        if (ctx->pc != 0x1C3D64u) { return; }
    }
    ctx->pc = 0x1C3D64u;
label_1c3d64:
    // 0x1c3d64: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C3D64u;
    {
        const bool branch_taken_0x1c3d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d64) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3D6Cu;
label_1c3d6c:
    // 0x1c3d6c: 0x0  nop
    ctx->pc = 0x1c3d6cu;
    // NOP
    // 0x1c3d70: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1c3d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3d74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C3D74u;
    SET_GPR_U32(ctx, 31, 0x1C3D7Cu);
    ctx->pc = 0x1C3D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D74u;
            // 0x1c3d78: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D7Cu; }
        if (ctx->pc != 0x1C3D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D7Cu; }
        if (ctx->pc != 0x1C3D7Cu) { return; }
    }
    ctx->pc = 0x1C3D7Cu;
label_1c3d7c:
    // 0x1c3d7c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c3d7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d80: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d8c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C3D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C3D94u);
    ctx->pc = 0x1C3D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D8Cu;
            // 0x1c3d90: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D94u; }
        if (ctx->pc != 0x1C3D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D94u; }
        if (ctx->pc != 0x1C3D94u) { return; }
    }
    ctx->pc = 0x1C3D94u;
label_1c3d94:
    // 0x1c3d94: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1C3D94u;
    {
        const bool branch_taken_0x1c3d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d94) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3D9Cu;
label_1c3d9c:
    // 0x1c3d9c: 0x0  nop
    ctx->pc = 0x1c3d9cu;
    // NOP
    // 0x1c3da0: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1c3da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3da4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C3DA4u;
    SET_GPR_U32(ctx, 31, 0x1C3DACu);
    ctx->pc = 0x1C3DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DA4u;
            // 0x1c3da8: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DACu; }
        if (ctx->pc != 0x1C3DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DACu; }
        if (ctx->pc != 0x1C3DACu) { return; }
    }
    ctx->pc = 0x1C3DACu;
label_1c3dac:
    // 0x1c3dac: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c3dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c3db0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c3db0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3db4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3dbc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C3DBCu;
    SET_GPR_U32(ctx, 31, 0x1C3DC4u);
    ctx->pc = 0x1C3DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DBCu;
            // 0x1c3dc0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DC4u; }
        if (ctx->pc != 0x1C3DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DC4u; }
        if (ctx->pc != 0x1C3DC4u) { return; }
    }
    ctx->pc = 0x1C3DC4u;
label_1c3dc4:
    // 0x1c3dc4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1C3DC4u;
    {
        const bool branch_taken_0x1c3dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3dc4) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3DCCu;
label_1c3dcc:
    // 0x1c3dcc: 0x0  nop
    ctx->pc = 0x1c3dccu;
    // NOP
    // 0x1c3dd0: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1c3dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3dd4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C3DD4u;
    SET_GPR_U32(ctx, 31, 0x1C3DDCu);
    ctx->pc = 0x1C3DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DD4u;
            // 0x1c3dd8: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DDCu; }
        if (ctx->pc != 0x1C3DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DDCu; }
        if (ctx->pc != 0x1C3DDCu) { return; }
    }
    ctx->pc = 0x1C3DDCu;
label_1c3ddc:
    // 0x1c3ddc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c3ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c3de0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c3de0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3de4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3de8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3de8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3dec: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C3DECu;
    SET_GPR_U32(ctx, 31, 0x1C3DF4u);
    ctx->pc = 0x1C3DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DECu;
            // 0x1c3df0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DF4u; }
        if (ctx->pc != 0x1C3DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DF4u; }
        if (ctx->pc != 0x1C3DF4u) { return; }
    }
    ctx->pc = 0x1C3DF4u;
label_1c3df4:
    // 0x1c3df4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C3DF4u;
    {
        const bool branch_taken_0x1c3df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3df4) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3DFCu;
label_1c3dfc:
    // 0x1c3dfc: 0x0  nop
    ctx->pc = 0x1c3dfcu;
    // NOP
    // 0x1c3e00: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1c3e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3e04: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C3E04u;
    SET_GPR_U32(ctx, 31, 0x1C3E0Cu);
    ctx->pc = 0x1C3E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E04u;
            // 0x1c3e08: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E0Cu; }
        if (ctx->pc != 0x1C3E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E0Cu; }
        if (ctx->pc != 0x1C3E0Cu) { return; }
    }
    ctx->pc = 0x1C3E0Cu;
label_1c3e0c:
    // 0x1c3e0c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c3e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c3e10: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c3e10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e14: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3e18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e1c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C3E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E24u);
    ctx->pc = 0x1C3E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E1Cu;
            // 0x1c3e20: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E24u; }
        if (ctx->pc != 0x1C3E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E24u; }
        if (ctx->pc != 0x1C3E24u) { return; }
    }
    ctx->pc = 0x1C3E24u;
label_1c3e24:
    // 0x1c3e24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C3E24u;
    {
        const bool branch_taken_0x1c3e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e24) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3E2Cu;
label_1c3e2c:
    // 0x1c3e2c: 0x0  nop
    ctx->pc = 0x1c3e2cu;
    // NOP
    // 0x1c3e30: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1c3e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3e34: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C3E34u;
    SET_GPR_U32(ctx, 31, 0x1C3E3Cu);
    ctx->pc = 0x1C3E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E34u;
            // 0x1c3e38: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E3Cu; }
        if (ctx->pc != 0x1C3E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E3Cu; }
        if (ctx->pc != 0x1C3E3Cu) { return; }
    }
    ctx->pc = 0x1C3E3Cu;
label_1c3e3c:
    // 0x1c3e3c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c3e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c3e40: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c3e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3e48: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c3e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e4c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C3E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E54u);
    ctx->pc = 0x1C3E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E4Cu;
            // 0x1c3e50: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E54u; }
        if (ctx->pc != 0x1C3E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E54u; }
        if (ctx->pc != 0x1C3E54u) { return; }
    }
    ctx->pc = 0x1C3E54u;
label_1c3e54:
    // 0x1c3e54: 0x0  nop
    ctx->pc = 0x1c3e54u;
    // NOP
    // 0x1c3e58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3e5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e60: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C3E60u;
    SET_GPR_U32(ctx, 31, 0x1C3E68u);
    ctx->pc = 0x1C3E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E60u;
            // 0x1c3e64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E68u; }
        if (ctx->pc != 0x1C3E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E68u; }
        if (ctx->pc != 0x1C3E68u) { return; }
    }
    ctx->pc = 0x1C3E68u;
label_1c3e68:
    // 0x1c3e68: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3e6c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C3E6Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E74u);
    ctx->pc = 0x1C3E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E6Cu;
            // 0x1c3e70: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E74u; }
        if (ctx->pc != 0x1C3E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E74u; }
        if (ctx->pc != 0x1C3E74u) { return; }
    }
    ctx->pc = 0x1C3E74u;
label_1c3e74:
    // 0x1c3e74: 0x216a021  addu        $s4, $s0, $s6
    ctx->pc = 0x1c3e74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1c3e78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3e7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c3e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e80: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C3E80u;
    SET_GPR_U32(ctx, 31, 0x1C3E88u);
    ctx->pc = 0x1C3E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E80u;
            // 0x1c3e84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E88u; }
        if (ctx->pc != 0x1C3E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E88u; }
        if (ctx->pc != 0x1C3E88u) { return; }
    }
    ctx->pc = 0x1C3E88u;
label_1c3e88:
    // 0x1c3e88: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3e8c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C3E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E94u);
    ctx->pc = 0x1C3E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E8Cu;
            // 0x1c3e90: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E94u; }
        if (ctx->pc != 0x1C3E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E94u; }
        if (ctx->pc != 0x1C3E94u) { return; }
    }
    ctx->pc = 0x1C3E94u;
label_1c3e94:
    // 0x1c3e94: 0x236a821  addu        $s5, $s1, $s6
    ctx->pc = 0x1c3e94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x1c3e98: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3e9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ea0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C3EA0u;
    SET_GPR_U32(ctx, 31, 0x1C3EA8u);
    ctx->pc = 0x1C3EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EA0u;
            // 0x1c3ea4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EA8u; }
        if (ctx->pc != 0x1C3EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EA8u; }
        if (ctx->pc != 0x1C3EA8u) { return; }
    }
    ctx->pc = 0x1C3EA8u;
label_1c3ea8:
    // 0x1c3ea8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3eac: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C3EACu;
    SET_GPR_U32(ctx, 31, 0x1C3EB4u);
    ctx->pc = 0x1C3EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EACu;
            // 0x1c3eb0: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EB4u; }
        if (ctx->pc != 0x1C3EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EB4u; }
        if (ctx->pc != 0x1C3EB4u) { return; }
    }
    ctx->pc = 0x1C3EB4u;
label_1c3eb4:
    // 0x1c3eb4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3eb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ebc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C3EBCu;
    SET_GPR_U32(ctx, 31, 0x1C3EC4u);
    ctx->pc = 0x1C3EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EBCu;
            // 0x1c3ec0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EC4u; }
        if (ctx->pc != 0x1C3EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EC4u; }
        if (ctx->pc != 0x1C3EC4u) { return; }
    }
    ctx->pc = 0x1C3EC4u;
label_1c3ec4:
    // 0x1c3ec4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3ec8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C3EC8u;
    SET_GPR_U32(ctx, 31, 0x1C3ED0u);
    ctx->pc = 0x1C3ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EC8u;
            // 0x1c3ecc: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3ED0u; }
        if (ctx->pc != 0x1C3ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3ED0u; }
        if (ctx->pc != 0x1C3ED0u) { return; }
    }
    ctx->pc = 0x1C3ED0u;
label_1c3ed0:
    // 0x1c3ed0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3ed4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c3ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ed8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C3ED8u;
    SET_GPR_U32(ctx, 31, 0x1C3EE0u);
    ctx->pc = 0x1C3EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3ED8u;
            // 0x1c3edc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EE0u; }
        if (ctx->pc != 0x1C3EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EE0u; }
        if (ctx->pc != 0x1C3EE0u) { return; }
    }
    ctx->pc = 0x1C3EE0u;
label_1c3ee0:
    // 0x1c3ee0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3ee4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C3EE4u;
    SET_GPR_U32(ctx, 31, 0x1C3EECu);
    ctx->pc = 0x1C3EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EE4u;
            // 0x1c3ee8: 0x27a501e0  addiu       $a1, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EECu; }
        if (ctx->pc != 0x1C3EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EECu; }
        if (ctx->pc != 0x1C3EECu) { return; }
    }
    ctx->pc = 0x1C3EECu;
label_1c3eec:
    // 0x1c3eec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c3eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ef0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1c3ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ef4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C3EF4u;
    SET_GPR_U32(ctx, 31, 0x1C3EFCu);
    ctx->pc = 0x1C3EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EF4u;
            // 0x1c3ef8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EFCu; }
        if (ctx->pc != 0x1C3EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EFCu; }
        if (ctx->pc != 0x1C3EFCu) { return; }
    }
    ctx->pc = 0x1C3EFCu;
label_1c3efc:
    // 0x1c3efc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c3efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c3f00: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C3F00u;
    SET_GPR_U32(ctx, 31, 0x1C3F08u);
    ctx->pc = 0x1C3F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F00u;
            // 0x1c3f04: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F08u; }
        if (ctx->pc != 0x1C3F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F08u; }
        if (ctx->pc != 0x1C3F08u) { return; }
    }
    ctx->pc = 0x1C3F08u;
label_1c3f08:
    // 0x1c3f08: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x1c3f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1c3f0c:
    // 0x1c3f0c: 0x0  nop
    ctx->pc = 0x1c3f0cu;
    // NOP
    // 0x1c3f10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c3f10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c3f14:
    // 0x1c3f14: 0x0  nop
    ctx->pc = 0x1c3f14u;
    // NOP
    // 0x1c3f18: 0x8ee20028  lw          $v0, 0x28($s7)
    ctx->pc = 0x1c3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
    // 0x1c3f1c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1c3f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3f20: 0x1440ff23  bnez        $v0, . + 4 + (-0xDD << 2)
    ctx->pc = 0x1C3F20u;
    {
        const bool branch_taken_0x1c3f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F20u;
            // 0x1c3f24: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f20) {
            ctx->pc = 0x1C3BB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3bb0;
        }
    }
    ctx->pc = 0x1C3F28u;
    // 0x1c3f28: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C3F28u;
    SET_GPR_U32(ctx, 31, 0x1C3F30u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F30u; }
        if (ctx->pc != 0x1C3F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F30u; }
        if (ctx->pc != 0x1C3F30u) { return; }
    }
    ctx->pc = 0x1C3F30u;
label_1c3f30:
    // 0x1c3f30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c3f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c3f34: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c3f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c3f38: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c3f38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3f3c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c3f3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3f40: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c3f40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3f44: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c3f44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3f48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c3f48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3f4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c3f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3f50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c3f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3f54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c3f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3f58: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F58u;
            // 0x1c3f5c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3F60u;
}
