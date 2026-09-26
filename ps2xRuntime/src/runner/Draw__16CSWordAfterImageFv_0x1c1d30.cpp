#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__16CSWordAfterImageFv
// Address: 0x1c1d30 - 0x1c1f30
void Draw__16CSWordAfterImageFv_0x1c1d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__16CSWordAfterImageFv_0x1c1d30");
#endif

    switch (ctx->pc) {
        case 0x1c1d60u: goto label_1c1d60;
        case 0x1c1d70u: goto label_1c1d70;
        case 0x1c1d78u: goto label_1c1d78;
        case 0x1c1d84u: goto label_1c1d84;
        case 0x1c1d90u: goto label_1c1d90;
        case 0x1c1d9cu: goto label_1c1d9c;
        case 0x1c1da8u: goto label_1c1da8;
        case 0x1c1db4u: goto label_1c1db4;
        case 0x1c1dc0u: goto label_1c1dc0;
        case 0x1c1dccu: goto label_1c1dcc;
        case 0x1c1ddcu: goto label_1c1ddc;
        case 0x1c1df4u: goto label_1c1df4;
        case 0x1c1e0cu: goto label_1c1e0c;
        case 0x1c1e20u: goto label_1c1e20;
        case 0x1c1e60u: goto label_1c1e60;
        case 0x1c1e78u: goto label_1c1e78;
        case 0x1c1e90u: goto label_1c1e90;
        case 0x1c1e9cu: goto label_1c1e9c;
        case 0x1c1eacu: goto label_1c1eac;
        case 0x1c1ec4u: goto label_1c1ec4;
        case 0x1c1edcu: goto label_1c1edc;
        case 0x1c1ee8u: goto label_1c1ee8;
        case 0x1c1f10u: goto label_1c1f10;
        default: break;
    }

    ctx->pc = 0x1c1d30u;

    // 0x1c1d30: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1c1d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1c1d34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c1d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c1d38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c1d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c1d3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c1d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c1d40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c1d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c1d44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c1d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c1d48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c1d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c1d4c: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x1c1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1c1d50: 0x1860006f  blez        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1C1D50u;
    {
        const bool branch_taken_0x1c1d50 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C1D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D50u;
            // 0x1c1d54: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d50) {
            ctx->pc = 0x1C1F10u;
            goto label_1c1f10;
        }
    }
    ctx->pc = 0x1C1D58u;
    // 0x1c1d58: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C1D58u;
    SET_GPR_U32(ctx, 31, 0x1C1D60u);
    ctx->pc = 0x1C1D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D58u;
            // 0x1c1d5c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D60u; }
        if (ctx->pc != 0x1C1D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D60u; }
        if (ctx->pc != 0x1C1D60u) { return; }
    }
    ctx->pc = 0x1C1D60u;
label_1c1d60:
    // 0x1c1d60: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c1d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c1d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1d68: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C1D68u;
    SET_GPR_U32(ctx, 31, 0x1C1D70u);
    ctx->pc = 0x1C1D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D68u;
            // 0x1c1d6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D70u; }
        if (ctx->pc != 0x1C1D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D70u; }
        if (ctx->pc != 0x1C1D70u) { return; }
    }
    ctx->pc = 0x1C1D70u;
label_1c1d70:
    // 0x1c1d70: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C1D70u;
    SET_GPR_U32(ctx, 31, 0x1C1D78u);
    ctx->pc = 0x1C1D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D70u;
            // 0x1c1d74: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D78u; }
        if (ctx->pc != 0x1C1D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D78u; }
        if (ctx->pc != 0x1C1D78u) { return; }
    }
    ctx->pc = 0x1C1D78u;
label_1c1d78:
    // 0x1c1d78: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c1d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c1d7c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1C1D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D84u);
    ctx->pc = 0x1C1D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D7Cu;
            // 0x1c1d80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D84u; }
        if (ctx->pc != 0x1C1D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D84u; }
        if (ctx->pc != 0x1C1D84u) { return; }
    }
    ctx->pc = 0x1C1D84u;
label_1c1d84:
    // 0x1c1d84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c1d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c1d88: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C1D88u;
    SET_GPR_U32(ctx, 31, 0x1C1D90u);
    ctx->pc = 0x1C1D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D88u;
            // 0x1c1d8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D90u; }
        if (ctx->pc != 0x1C1D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D90u; }
        if (ctx->pc != 0x1C1D90u) { return; }
    }
    ctx->pc = 0x1C1D90u;
label_1c1d90:
    // 0x1c1d90: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c1d94: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x1C1D94u;
    SET_GPR_U32(ctx, 31, 0x1C1D9Cu);
    ctx->pc = 0x1C1D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D94u;
            // 0x1c1d98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D9Cu; }
        if (ctx->pc != 0x1C1D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D9Cu; }
        if (ctx->pc != 0x1C1D9Cu) { return; }
    }
    ctx->pc = 0x1C1D9Cu;
label_1c1d9c:
    // 0x1c1d9c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c1d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c1da0: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C1DA0u;
    SET_GPR_U32(ctx, 31, 0x1C1DA8u);
    ctx->pc = 0x1C1DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DA0u;
            // 0x1c1da4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DA8u; }
        if (ctx->pc != 0x1C1DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DA8u; }
        if (ctx->pc != 0x1C1DA8u) { return; }
    }
    ctx->pc = 0x1C1DA8u;
label_1c1da8:
    // 0x1c1da8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c1dac: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x1C1DACu;
    SET_GPR_U32(ctx, 31, 0x1C1DB4u);
    ctx->pc = 0x1C1DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DACu;
            // 0x1c1db0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DB4u; }
        if (ctx->pc != 0x1C1DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DB4u; }
        if (ctx->pc != 0x1C1DB4u) { return; }
    }
    ctx->pc = 0x1C1DB4u;
label_1c1db4:
    // 0x1c1db4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c1db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c1db8: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C1DB8u;
    SET_GPR_U32(ctx, 31, 0x1C1DC0u);
    ctx->pc = 0x1C1DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DB8u;
            // 0x1c1dbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DC0u; }
        if (ctx->pc != 0x1C1DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DC0u; }
        if (ctx->pc != 0x1C1DC0u) { return; }
    }
    ctx->pc = 0x1C1DC0u;
label_1c1dc0:
    // 0x1c1dc0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c1dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c1dc4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C1DC4u;
    SET_GPR_U32(ctx, 31, 0x1C1DCCu);
    ctx->pc = 0x1C1DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DC4u;
            // 0x1c1dc8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DCCu; }
        if (ctx->pc != 0x1C1DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DCCu; }
        if (ctx->pc != 0x1C1DCCu) { return; }
    }
    ctx->pc = 0x1C1DCCu;
label_1c1dcc:
    // 0x1c1dcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1dd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c1dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1dd4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C1DD4u;
    {
        const bool branch_taken_0x1c1dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DD4u;
            // 0x1c1dd8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1dd4) {
            ctx->pc = 0x1C1EF4u;
            goto label_1c1ef4;
        }
    }
    ctx->pc = 0x1C1DDCu;
label_1c1ddc:
    // 0x1c1ddc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x1c1ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1c1de0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c1de4: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1c1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1c1de8: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1c1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c1dec: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1C1DECu;
    SET_GPR_U32(ctx, 31, 0x1C1DF4u);
    ctx->pc = 0x1C1DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DECu;
            // 0x1c1df0: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DF4u; }
        if (ctx->pc != 0x1C1DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DF4u; }
        if (ctx->pc != 0x1C1DF4u) { return; }
    }
    ctx->pc = 0x1C1DF4u;
label_1c1df4:
    // 0x1c1df4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x1c1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x1c1df8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c1df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c1dfc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1c1dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1c1e00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1e04: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1C1E04u;
    SET_GPR_U32(ctx, 31, 0x1C1E0Cu);
    ctx->pc = 0x1C1E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E04u;
            // 0x1c1e08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E0Cu; }
        if (ctx->pc != 0x1C1E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E0Cu; }
        if (ctx->pc != 0x1C1E0Cu) { return; }
    }
    ctx->pc = 0x1C1E0Cu;
label_1c1e0c:
    // 0x1c1e0c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1c1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1c1e10: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1c1e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1c1e14: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1c1e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c1e18: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1C1E18u;
    SET_GPR_U32(ctx, 31, 0x1C1E20u);
    ctx->pc = 0x1C1E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E18u;
            // 0x1c1e1c: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E20u; }
        if (ctx->pc != 0x1C1E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E20u; }
        if (ctx->pc != 0x1C1E20u) { return; }
    }
    ctx->pc = 0x1C1E20u;
label_1c1e20:
    // 0x1c1e20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c1e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1e24: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x1c1e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x1c1e28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c1e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1e2c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1c1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1c1e30: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c1e34: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1c1e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c1e38: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1c1e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1e3c: 0x0  nop
    ctx->pc = 0x1c1e3cu;
    // NOP
    // 0x1c1e40: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1E40u;
    {
        const bool branch_taken_0x1c1e40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1e40) {
            ctx->pc = 0x1C1E4Cu;
            goto label_1c1e4c;
        }
    }
    ctx->pc = 0x1C1E48u;
    // 0x1c1e48: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c1e48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1c1e4c:
    // 0x1c1e4c: 0x0  nop
    ctx->pc = 0x1c1e4cu;
    // NOP
    // 0x1c1e50: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1c1e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1c1e54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1e58: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1C1E58u;
    SET_GPR_U32(ctx, 31, 0x1C1E60u);
    ctx->pc = 0x1C1E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E58u;
            // 0x1c1e5c: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E60u; }
        if (ctx->pc != 0x1C1E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E60u; }
        if (ctx->pc != 0x1C1E60u) { return; }
    }
    ctx->pc = 0x1C1E60u;
label_1c1e60:
    // 0x1c1e60: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C1E60u;
    {
        const bool branch_taken_0x1c1e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e60) {
            ctx->pc = 0x1C1E9Cu;
            goto label_1c1e9c;
        }
    }
    ctx->pc = 0x1C1E68u;
    // 0x1c1e68: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x1c1e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1e6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c1e70: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C1E70u;
    SET_GPR_U32(ctx, 31, 0x1C1E78u);
    ctx->pc = 0x1C1E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E70u;
            // 0x1c1e74: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E78u; }
        if (ctx->pc != 0x1C1E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E78u; }
        if (ctx->pc != 0x1C1E78u) { return; }
    }
    ctx->pc = 0x1C1E78u;
label_1c1e78:
    // 0x1c1e78: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1c1e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1c1e7c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c1e7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1e80: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x1c1e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1c1e84: 0x8e670028  lw          $a3, 0x28($s3)
    ctx->pc = 0x1c1e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1c1e88: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C1E88u;
    SET_GPR_U32(ctx, 31, 0x1C1E90u);
    ctx->pc = 0x1C1E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E88u;
            // 0x1c1e8c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E90u; }
        if (ctx->pc != 0x1C1E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E90u; }
        if (ctx->pc != 0x1C1E90u) { return; }
    }
    ctx->pc = 0x1C1E90u;
label_1c1e90:
    // 0x1c1e90: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c1e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c1e94: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C1E94u;
    SET_GPR_U32(ctx, 31, 0x1C1E9Cu);
    ctx->pc = 0x1C1E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E94u;
            // 0x1c1e98: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E9Cu; }
        if (ctx->pc != 0x1C1E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E9Cu; }
        if (ctx->pc != 0x1C1E9Cu) { return; }
    }
    ctx->pc = 0x1C1E9Cu;
label_1c1e9c:
    // 0x1c1e9c: 0x0  nop
    ctx->pc = 0x1c1e9cu;
    // NOP
    // 0x1c1ea0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c1ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c1ea4: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1C1EA4u;
    SET_GPR_U32(ctx, 31, 0x1C1EACu);
    ctx->pc = 0x1C1EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EA4u;
            // 0x1c1ea8: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EACu; }
        if (ctx->pc != 0x1C1EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EACu; }
        if (ctx->pc != 0x1C1EACu) { return; }
    }
    ctx->pc = 0x1C1EACu;
label_1c1eac:
    // 0x1c1eac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C1EACu;
    {
        const bool branch_taken_0x1c1eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1eac) {
            ctx->pc = 0x1C1EE8u;
            goto label_1c1ee8;
        }
    }
    ctx->pc = 0x1C1EB4u;
    // 0x1c1eb4: 0xc660003c  lwc1        $f0, 0x3C($s3)
    ctx->pc = 0x1c1eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1eb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c1eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c1ebc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C1EBCu;
    SET_GPR_U32(ctx, 31, 0x1C1EC4u);
    ctx->pc = 0x1C1EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EBCu;
            // 0x1c1ec0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EC4u; }
        if (ctx->pc != 0x1C1EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EC4u; }
        if (ctx->pc != 0x1C1EC4u) { return; }
    }
    ctx->pc = 0x1C1EC4u;
label_1c1ec4:
    // 0x1c1ec4: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x1c1ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1c1ec8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c1ec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ecc: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x1c1eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1c1ed0: 0x8e670038  lw          $a3, 0x38($s3)
    ctx->pc = 0x1c1ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1c1ed4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C1ED4u;
    SET_GPR_U32(ctx, 31, 0x1C1EDCu);
    ctx->pc = 0x1C1ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1ED4u;
            // 0x1c1ed8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EDCu; }
        if (ctx->pc != 0x1C1EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EDCu; }
        if (ctx->pc != 0x1C1EDCu) { return; }
    }
    ctx->pc = 0x1C1EDCu;
label_1c1edc:
    // 0x1c1edc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c1edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c1ee0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C1EE0u;
    SET_GPR_U32(ctx, 31, 0x1C1EE8u);
    ctx->pc = 0x1C1EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EE0u;
            // 0x1c1ee4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EE8u; }
        if (ctx->pc != 0x1C1EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EE8u; }
        if (ctx->pc != 0x1C1EE8u) { return; }
    }
    ctx->pc = 0x1C1EE8u;
label_1c1ee8:
    // 0x1c1ee8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1c1ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1c1eec: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1c1eecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1c1ef0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c1ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c1ef4:
    // 0x1c1ef4: 0x0  nop
    ctx->pc = 0x1c1ef4u;
    // NOP
    // 0x1c1ef8: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1c1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1c1efc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c1efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c1f00: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1C1F00u;
    {
        const bool branch_taken_0x1c1f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F00u;
            // 0x1c1f04: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f00) {
            ctx->pc = 0x1C1DDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1ddc;
        }
    }
    ctx->pc = 0x1C1F08u;
    // 0x1c1f08: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C1F08u;
    SET_GPR_U32(ctx, 31, 0x1C1F10u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F10u; }
        if (ctx->pc != 0x1C1F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F10u; }
        if (ctx->pc != 0x1C1F10u) { return; }
    }
    ctx->pc = 0x1C1F10u;
label_1c1f10:
    // 0x1c1f10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c1f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1f14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c1f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c1f18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c1f18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1f1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c1f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1f20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c1f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1f24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c1f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1f28: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F28u;
            // 0x1c1f2c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1F30u;
}
