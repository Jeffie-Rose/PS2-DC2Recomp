#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__9CPullItemFP10mgCTexture
// Address: 0x1b7f60 - 0x1b826c
void Draw__9CPullItemFP10mgCTexture_0x1b7f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__9CPullItemFP10mgCTexture_0x1b7f60");
#endif

    switch (ctx->pc) {
        case 0x1b7f94u: goto label_1b7f94;
        case 0x1b7fa4u: goto label_1b7fa4;
        case 0x1b7fbcu: goto label_1b7fbc;
        case 0x1b7fccu: goto label_1b7fcc;
        case 0x1b7fd8u: goto label_1b7fd8;
        case 0x1b7fe4u: goto label_1b7fe4;
        case 0x1b7ff4u: goto label_1b7ff4;
        case 0x1b8000u: goto label_1b8000;
        case 0x1b800cu: goto label_1b800c;
        case 0x1b8018u: goto label_1b8018;
        case 0x1b8024u: goto label_1b8024;
        case 0x1b8030u: goto label_1b8030;
        case 0x1b803cu: goto label_1b803c;
        case 0x1b8048u: goto label_1b8048;
        case 0x1b8054u: goto label_1b8054;
        case 0x1b805cu: goto label_1b805c;
        case 0x1b8074u: goto label_1b8074;
        case 0x1b80a8u: goto label_1b80a8;
        case 0x1b80d0u: goto label_1b80d0;
        case 0x1b8144u: goto label_1b8144;
        case 0x1b8158u: goto label_1b8158;
        case 0x1b816cu: goto label_1b816c;
        case 0x1b8190u: goto label_1b8190;
        case 0x1b81a4u: goto label_1b81a4;
        case 0x1b81b0u: goto label_1b81b0;
        case 0x1b81c0u: goto label_1b81c0;
        case 0x1b81ccu: goto label_1b81cc;
        case 0x1b81e8u: goto label_1b81e8;
        case 0x1b81fcu: goto label_1b81fc;
        case 0x1b820cu: goto label_1b820c;
        case 0x1b8218u: goto label_1b8218;
        case 0x1b8234u: goto label_1b8234;
        case 0x1b8240u: goto label_1b8240;
        case 0x1b824cu: goto label_1b824c;
        default: break;
    }

    ctx->pc = 0x1b7f60u;

    // 0x1b7f60: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1b7f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1b7f64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b7f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b7f68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b7f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b7f6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b7f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b7f70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b7f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b7f74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f78: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b7f78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b7f7c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b7f7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b7f80: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x1b7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x1b7f84: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1B7F84u;
    {
        const bool branch_taken_0x1b7f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F84u;
            // 0x1b7f88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7f84) {
            ctx->pc = 0x1B824Cu;
            goto label_1b824c;
        }
    }
    ctx->pc = 0x1B7F8Cu;
    // 0x1b7f8c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1B7F8Cu;
    SET_GPR_U32(ctx, 31, 0x1B7F94u);
    ctx->pc = 0x1B7F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F8Cu;
            // 0x1b7f90: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F94u; }
        if (ctx->pc != 0x1B7F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7F94u; }
        if (ctx->pc != 0x1B7F94u) { return; }
    }
    ctx->pc = 0x1B7F94u;
label_1b7f94:
    // 0x1b7f94: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b7f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b7f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f9c: 0xc04d104  jal         func_134410
    ctx->pc = 0x1B7F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7FA4u);
    ctx->pc = 0x1B7FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7F9Cu;
            // 0x1b7fa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FA4u; }
        if (ctx->pc != 0x1B7FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FA4u; }
        if (ctx->pc != 0x1B7FA4u) { return; }
    }
    ctx->pc = 0x1B7FA4u;
label_1b7fa4:
    // 0x1b7fa4: 0x82220061  lb          $v0, 0x61($s1)
    ctx->pc = 0x1b7fa4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 97)));
    // 0x1b7fa8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7FA8u;
    {
        const bool branch_taken_0x1b7fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FA8u;
            // 0x1b7fac: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fa8) {
            ctx->pc = 0x1B7FC4u;
            goto label_1b7fc4;
        }
    }
    ctx->pc = 0x1B7FB0u;
    // 0x1b7fb0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b7fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b7fb4: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1B7FB4u;
    SET_GPR_U32(ctx, 31, 0x1B7FBCu);
    ctx->pc = 0x1B7FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FB4u;
            // 0x1b7fb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FBCu; }
        if (ctx->pc != 0x1B7FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FBCu; }
        if (ctx->pc != 0x1B7FBCu) { return; }
    }
    ctx->pc = 0x1B7FBCu;
label_1b7fbc:
    // 0x1b7fbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7FBCu;
    {
        const bool branch_taken_0x1b7fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FBCu;
            // 0x1b7fc0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fbc) {
            ctx->pc = 0x1B7FD0u;
            goto label_1b7fd0;
        }
    }
    ctx->pc = 0x1B7FC4u;
label_1b7fc4:
    // 0x1b7fc4: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1B7FC4u;
    SET_GPR_U32(ctx, 31, 0x1B7FCCu);
    ctx->pc = 0x1B7FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FC4u;
            // 0x1b7fc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FCCu; }
        if (ctx->pc != 0x1B7FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FCCu; }
        if (ctx->pc != 0x1B7FCCu) { return; }
    }
    ctx->pc = 0x1B7FCCu;
label_1b7fcc:
    // 0x1b7fcc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b7fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b7fd0:
    // 0x1b7fd0: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x1B7FD0u;
    SET_GPR_U32(ctx, 31, 0x1B7FD8u);
    ctx->pc = 0x1B7FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FD0u;
            // 0x1b7fd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FD8u; }
        if (ctx->pc != 0x1B7FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FD8u; }
        if (ctx->pc != 0x1B7FD8u) { return; }
    }
    ctx->pc = 0x1B7FD8u;
label_1b7fd8:
    // 0x1b7fd8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b7fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b7fdc: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1B7FDCu;
    SET_GPR_U32(ctx, 31, 0x1B7FE4u);
    ctx->pc = 0x1B7FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FDCu;
            // 0x1b7fe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FE4u; }
        if (ctx->pc != 0x1B7FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FE4u; }
        if (ctx->pc != 0x1B7FE4u) { return; }
    }
    ctx->pc = 0x1B7FE4u;
label_1b7fe4:
    // 0x1b7fe4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b7fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b7fe8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b7fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7fec: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x1B7FECu;
    SET_GPR_U32(ctx, 31, 0x1B7FF4u);
    ctx->pc = 0x1B7FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FECu;
            // 0x1b7ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FF4u; }
        if (ctx->pc != 0x1B7FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FF4u; }
        if (ctx->pc != 0x1B7FF4u) { return; }
    }
    ctx->pc = 0x1B7FF4u;
label_1b7ff4:
    // 0x1b7ff4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b7ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b7ff8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1B7FF8u;
    SET_GPR_U32(ctx, 31, 0x1B8000u);
    ctx->pc = 0x1B7FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FF8u;
            // 0x1b7ffc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8000u; }
        if (ctx->pc != 0x1B8000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8000u; }
        if (ctx->pc != 0x1B8000u) { return; }
    }
    ctx->pc = 0x1B8000u;
label_1b8000:
    // 0x1b8000: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b8000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8004: 0xc04d424  jal         func_135090
    ctx->pc = 0x1B8004u;
    SET_GPR_U32(ctx, 31, 0x1B800Cu);
    ctx->pc = 0x1B8008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8004u;
            // 0x1b8008: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B800Cu; }
        if (ctx->pc != 0x1B800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B800Cu; }
        if (ctx->pc != 0x1B800Cu) { return; }
    }
    ctx->pc = 0x1B800Cu;
label_1b800c:
    // 0x1b800c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b800cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8010: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1B8010u;
    SET_GPR_U32(ctx, 31, 0x1B8018u);
    ctx->pc = 0x1B8014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8010u;
            // 0x1b8014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8018u; }
        if (ctx->pc != 0x1B8018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8018u; }
        if (ctx->pc != 0x1B8018u) { return; }
    }
    ctx->pc = 0x1B8018u;
label_1b8018:
    // 0x1b8018: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b8018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b801c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1B801Cu;
    SET_GPR_U32(ctx, 31, 0x1B8024u);
    ctx->pc = 0x1B8020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B801Cu;
            // 0x1b8020: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8024u; }
        if (ctx->pc != 0x1B8024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8024u; }
        if (ctx->pc != 0x1B8024u) { return; }
    }
    ctx->pc = 0x1B8024u;
label_1b8024:
    // 0x1b8024: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b8024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8028: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1B8028u;
    SET_GPR_U32(ctx, 31, 0x1B8030u);
    ctx->pc = 0x1B802Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8028u;
            // 0x1b802c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8030u; }
        if (ctx->pc != 0x1B8030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8030u; }
        if (ctx->pc != 0x1B8030u) { return; }
    }
    ctx->pc = 0x1B8030u;
label_1b8030:
    // 0x1b8030: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b8030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8034: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1B8034u;
    SET_GPR_U32(ctx, 31, 0x1B803Cu);
    ctx->pc = 0x1B8038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8034u;
            // 0x1b8038: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B803Cu; }
        if (ctx->pc != 0x1B803Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B803Cu; }
        if (ctx->pc != 0x1B803Cu) { return; }
    }
    ctx->pc = 0x1B803Cu;
label_1b803c:
    // 0x1b803c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b803cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8040: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1B8040u;
    SET_GPR_U32(ctx, 31, 0x1B8048u);
    ctx->pc = 0x1B8044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8040u;
            // 0x1b8044: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8048u; }
        if (ctx->pc != 0x1B8048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8048u; }
        if (ctx->pc != 0x1B8048u) { return; }
    }
    ctx->pc = 0x1B8048u;
label_1b8048:
    // 0x1b8048: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b8048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b804c: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1B804Cu;
    SET_GPR_U32(ctx, 31, 0x1B8054u);
    ctx->pc = 0x1B8050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B804Cu;
            // 0x1b8050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8054u; }
        if (ctx->pc != 0x1B8054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8054u; }
        if (ctx->pc != 0x1B8054u) { return; }
    }
    ctx->pc = 0x1B8054u;
label_1b8054:
    // 0x1b8054: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1B8054u;
    SET_GPR_U32(ctx, 31, 0x1B805Cu);
    ctx->pc = 0x1B8058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8054u;
            // 0x1b8058: 0xc62c0070  lwc1        $f12, 0x70($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B805Cu; }
        if (ctx->pc != 0x1B805Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B805Cu; }
        if (ctx->pc != 0x1B805Cu) { return; }
    }
    ctx->pc = 0x1B805Cu;
label_1b805c:
    // 0x1b805c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b805cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b8060: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b8060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8064: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b8064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8068: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b8068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b806c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1B806Cu;
    SET_GPR_U32(ctx, 31, 0x1B8074u);
    ctx->pc = 0x1B8070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B806Cu;
            // 0x1b8070: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8074u; }
        if (ctx->pc != 0x1B8074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8074u; }
        if (ctx->pc != 0x1B8074u) { return; }
    }
    ctx->pc = 0x1B8074u;
label_1b8074:
    // 0x1b8074: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b8074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b8078: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1b8078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1b807c: 0x86230044  lh          $v1, 0x44($s1)
    ctx->pc = 0x1b807cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1b8080: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8080u;
    {
        const bool branch_taken_0x1b8080 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B8084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8080u;
            // 0x1b8084: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8080) {
            ctx->pc = 0x1B8090u;
            goto label_1b8090;
        }
    }
    ctx->pc = 0x1B8088u;
    // 0x1b8088: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1b8088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1b808c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1b808cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1b8090:
    // 0x1b8090: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b8090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b8094: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1b8094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b8098: 0x86220030  lh          $v0, 0x30($s1)
    ctx->pc = 0x1b8098u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1b809c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b809cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80a0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B80A0u;
    SET_GPR_U32(ctx, 31, 0x1B80A8u);
    ctx->pc = 0x1B80A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80A0u;
            // 0x1b80a4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80A8u; }
        if (ctx->pc != 0x1B80A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80A8u; }
        if (ctx->pc != 0x1B80A8u) { return; }
    }
    ctx->pc = 0x1B80A8u;
label_1b80a8:
    // 0x1b80a8: 0xc621003c  lwc1        $f1, 0x3C($s1)
    ctx->pc = 0x1b80a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b80ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b80acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b80b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b80b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b80b4: 0x27b20194  addiu       $s2, $sp, 0x194
    ctx->pc = 0x1b80b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b80b8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1b80b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b80bc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1b80bcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1b80c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b80c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b80c4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1b80c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1b80c8: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1B80C8u;
    SET_GPR_U32(ctx, 31, 0x1B80D0u);
    ctx->pc = 0x1B80CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80C8u;
            // 0x1b80cc: 0xc62c0048  lwc1        $f12, 0x48($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80D0u; }
        if (ctx->pc != 0x1B80D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B80D0u; }
        if (ctx->pc != 0x1B80D0u) { return; }
    }
    ctx->pc = 0x1B80D0u;
label_1b80d0:
    // 0x1b80d0: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x1b80d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b80d4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1b80d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b80d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b80d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b80dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b80dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b80e0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1b80e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1b80e4: 0x83828d54  lb          $v0, -0x72AC($gp)
    ctx->pc = 0x1b80e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937940)));
    // 0x1b80e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B80E8u;
    {
        const bool branch_taken_0x1b80e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B80ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B80E8u;
            // 0x1b80ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80e8) {
            ctx->pc = 0x1B80F8u;
            goto label_1b80f8;
        }
    }
    ctx->pc = 0x1B80F0u;
    // 0x1b80f0: 0xaf808d50  sw          $zero, -0x72B0($gp)
    ctx->pc = 0x1b80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937936), GPR_U32(ctx, 0));
    // 0x1b80f4: 0xa3828d54  sb          $v0, -0x72AC($gp)
    ctx->pc = 0x1b80f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937940), (uint8_t)GPR_U32(ctx, 2));
label_1b80f8:
    // 0x1b80f8: 0xc7818d50  lwc1        $f1, -0x72B0($gp)
    ctx->pc = 0x1b80f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b80fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1b8100: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b8100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b8104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8108: 0x0  nop
    ctx->pc = 0x1b8108u;
    // NOP
    // 0x1b810c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b810cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b8110: 0x0  nop
    ctx->pc = 0x1b8110u;
    // NOP
    // 0x1b8114: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8114u;
    {
        const bool branch_taken_0x1b8114 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8114u;
            // 0x1b8118: 0x3c023e56  lui         $v0, 0x3E56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15958 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8114) {
            ctx->pc = 0x1B8124u;
            goto label_1b8124;
        }
    }
    ctx->pc = 0x1B811Cu;
    // 0x1b811c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B811Cu;
    {
        const bool branch_taken_0x1b811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B811Cu;
            // 0x1b8120: 0xaf808d50  sw          $zero, -0x72B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b811c) {
            ctx->pc = 0x1B8138u;
            goto label_1b8138;
        }
    }
    ctx->pc = 0x1B8124u;
label_1b8124:
    // 0x1b8124: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x1b8124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x1b8128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b8128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b812c: 0x0  nop
    ctx->pc = 0x1b812cu;
    // NOP
    // 0x1b8130: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b8130u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b8134: 0xe7808d50  swc1        $f0, -0x72B0($gp)
    ctx->pc = 0x1b8134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937936), bits); }
label_1b8138:
    // 0x1b8138: 0xc6340038  lwc1        $f20, 0x38($s1)
    ctx->pc = 0x1b8138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b813c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1B813Cu;
    SET_GPR_U32(ctx, 31, 0x1B8144u);
    ctx->pc = 0x1B8140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B813Cu;
            // 0x1b8140: 0xc78c8d50  lwc1        $f12, -0x72B0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8144u; }
        if (ctx->pc != 0x1B8144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8144u; }
        if (ctx->pc != 0x1B8144u) { return; }
    }
    ctx->pc = 0x1B8144u;
label_1b8144:
    // 0x1b8144: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b8144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b8148: 0xc78c8d50  lwc1        $f12, -0x72B0($gp)
    ctx->pc = 0x1b8148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b814c: 0xc635003c  lwc1        $f21, 0x3C($s1)
    ctx->pc = 0x1b814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b8150: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1B8150u;
    SET_GPR_U32(ctx, 31, 0x1B8158u);
    ctx->pc = 0x1B8154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8150u;
            // 0x1b8154: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8158u; }
        if (ctx->pc != 0x1B8158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8158u; }
        if (ctx->pc != 0x1B8158u) { return; }
    }
    ctx->pc = 0x1B8158u;
label_1b8158:
    // 0x1b8158: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b8158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1b815c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1b815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b8160: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1b8160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b8164: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B8164u;
    SET_GPR_U32(ctx, 31, 0x1B816Cu);
    ctx->pc = 0x1B8168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8164u;
            // 0x1b8168: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B816Cu; }
        if (ctx->pc != 0x1B816Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B816Cu; }
        if (ctx->pc != 0x1B816Cu) { return; }
    }
    ctx->pc = 0x1B816Cu;
label_1b816c:
    // 0x1b816c: 0x82220061  lb          $v0, 0x61($s1)
    ctx->pc = 0x1b816cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 97)));
    // 0x1b8170: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B8170u;
    {
        const bool branch_taken_0x1b8170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8170u;
            // 0x1b8174: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8170) {
            ctx->pc = 0x1B81CCu;
            goto label_1b81cc;
        }
    }
    ctx->pc = 0x1B8178u;
    // 0x1b8178: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1b8178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1b817c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1b817cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1b8180: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1b8180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b8184: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1b8184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b8188: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1B8188u;
    SET_GPR_U32(ctx, 31, 0x1B8190u);
    ctx->pc = 0x1B818Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8188u;
            // 0x1b818c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8190u; }
        if (ctx->pc != 0x1B8190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8190u; }
        if (ctx->pc != 0x1B8190u) { return; }
    }
    ctx->pc = 0x1B8190u;
label_1b8190:
    // 0x1b8190: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B8190u;
    {
        const bool branch_taken_0x1b8190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8190u;
            // 0x1b8194: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8190) {
            ctx->pc = 0x1B81CCu;
            goto label_1b81cc;
        }
    }
    ctx->pc = 0x1B8198u;
    // 0x1b8198: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x1b8198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1b819c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1B819Cu;
    SET_GPR_U32(ctx, 31, 0x1B81A4u);
    ctx->pc = 0x1B81A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B819Cu;
            // 0x1b81a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81A4u; }
        if (ctx->pc != 0x1B81A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81A4u; }
        if (ctx->pc != 0x1B81A4u) { return; }
    }
    ctx->pc = 0x1B81A4u;
label_1b81a4:
    // 0x1b81a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b81a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b81a8: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1B81A8u;
    SET_GPR_U32(ctx, 31, 0x1B81B0u);
    ctx->pc = 0x1B81ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81A8u;
            // 0x1b81ac: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81B0u; }
        if (ctx->pc != 0x1B81B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81B0u; }
        if (ctx->pc != 0x1B81B0u) { return; }
    }
    ctx->pc = 0x1B81B0u;
label_1b81b0:
    // 0x1b81b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b81b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b81b4: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1b81b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1b81b8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1B81B8u;
    SET_GPR_U32(ctx, 31, 0x1B81C0u);
    ctx->pc = 0x1B81BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81B8u;
            // 0x1b81bc: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81C0u; }
        if (ctx->pc != 0x1B81C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81C0u; }
        if (ctx->pc != 0x1B81C0u) { return; }
    }
    ctx->pc = 0x1B81C0u;
label_1b81c0:
    // 0x1b81c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b81c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b81c4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1B81C4u;
    SET_GPR_U32(ctx, 31, 0x1B81CCu);
    ctx->pc = 0x1B81C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81C4u;
            // 0x1b81c8: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81CCu; }
        if (ctx->pc != 0x1B81CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81CCu; }
        if (ctx->pc != 0x1B81CCu) { return; }
    }
    ctx->pc = 0x1B81CCu;
label_1b81cc:
    // 0x1b81cc: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x1b81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b81d0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1b81d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1b81d4: 0xc62d003c  lwc1        $f13, 0x3C($s1)
    ctx->pc = 0x1b81d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b81d8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1b81d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1b81dc: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1b81dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b81e0: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1B81E0u;
    SET_GPR_U32(ctx, 31, 0x1B81E8u);
    ctx->pc = 0x1B81E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81E0u;
            // 0x1b81e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81E8u; }
        if (ctx->pc != 0x1B81E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81E8u; }
        if (ctx->pc != 0x1B81E8u) { return; }
    }
    ctx->pc = 0x1B81E8u;
label_1b81e8:
    // 0x1b81e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B81E8u;
    {
        const bool branch_taken_0x1b81e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B81ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81E8u;
            // 0x1b81ec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b81e8) {
            ctx->pc = 0x1B8244u;
            goto label_1b8244;
        }
    }
    ctx->pc = 0x1B81F0u;
    // 0x1b81f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b81f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b81f4: 0xc079ff0  jal         func_1E7FC0
    ctx->pc = 0x1B81F4u;
    SET_GPR_U32(ctx, 31, 0x1B81FCu);
    ctx->pc = 0x1B81F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81F4u;
            // 0x1b81f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7FC0u;
    if (runtime->hasFunction(0x1E7FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81FCu; }
        if (ctx->pc != 0x1B81FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaBlend__10CPreSpriteFi_0x1e7fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B81FCu; }
        if (ctx->pc != 0x1B81FCu) { return; }
    }
    ctx->pc = 0x1B81FCu;
label_1b81fc:
    // 0x1b81fc: 0x86260032  lh          $a2, 0x32($s1)
    ctx->pc = 0x1b81fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x1b8200: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b8200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8204: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1B8204u;
    SET_GPR_U32(ctx, 31, 0x1B820Cu);
    ctx->pc = 0x1B8208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8204u;
            // 0x1b8208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B820Cu; }
        if (ctx->pc != 0x1B820Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B820Cu; }
        if (ctx->pc != 0x1B820Cu) { return; }
    }
    ctx->pc = 0x1B820Cu;
label_1b820c:
    // 0x1b820c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8210: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1B8210u;
    SET_GPR_U32(ctx, 31, 0x1B8218u);
    ctx->pc = 0x1B8214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8210u;
            // 0x1b8214: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8218u; }
        if (ctx->pc != 0x1B8218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8218u; }
        if (ctx->pc != 0x1B8218u) { return; }
    }
    ctx->pc = 0x1B8218u;
label_1b8218:
    // 0x1b8218: 0x86250034  lh          $a1, 0x34($s1)
    ctx->pc = 0x1b8218u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1b821c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8220: 0x86230032  lh          $v1, 0x32($s1)
    ctx->pc = 0x1b8220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x1b8224: 0x86220036  lh          $v0, 0x36($s1)
    ctx->pc = 0x1b8224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x1b8228: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1b8228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1b822c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1B822Cu;
    SET_GPR_U32(ctx, 31, 0x1B8234u);
    ctx->pc = 0x1B8230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B822Cu;
            // 0x1b8230: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8234u; }
        if (ctx->pc != 0x1B8234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8234u; }
        if (ctx->pc != 0x1B8234u) { return; }
    }
    ctx->pc = 0x1B8234u;
label_1b8234:
    // 0x1b8234: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b8234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b8238: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1B8238u;
    SET_GPR_U32(ctx, 31, 0x1B8240u);
    ctx->pc = 0x1B823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8238u;
            // 0x1b823c: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8240u; }
        if (ctx->pc != 0x1B8240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8240u; }
        if (ctx->pc != 0x1B8240u) { return; }
    }
    ctx->pc = 0x1B8240u;
label_1b8240:
    // 0x1b8240: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1b8240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b8244:
    // 0x1b8244: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1B8244u;
    SET_GPR_U32(ctx, 31, 0x1B824Cu);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B824Cu; }
        if (ctx->pc != 0x1B824Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B824Cu; }
        if (ctx->pc != 0x1B824Cu) { return; }
    }
    ctx->pc = 0x1B824Cu;
label_1b824c:
    // 0x1b824c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b824cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8250: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b8250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b8254: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b8254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8258: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b8258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b825c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b825cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8260: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b8260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8264: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8264u;
            // 0x1b8268: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B826Cu;
}
