#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSpark__15CHitEffectImageFf
// Address: 0x1c2d60 - 0x1c2f20
void DrawSpark__15CHitEffectImageFf_0x1c2d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSpark__15CHitEffectImageFf_0x1c2d60");
#endif

    switch (ctx->pc) {
        case 0x1c2d8cu: goto label_1c2d8c;
        case 0x1c2d9cu: goto label_1c2d9c;
        case 0x1c2da4u: goto label_1c2da4;
        case 0x1c2db0u: goto label_1c2db0;
        case 0x1c2dbcu: goto label_1c2dbc;
        case 0x1c2dc8u: goto label_1c2dc8;
        case 0x1c2dd4u: goto label_1c2dd4;
        case 0x1c2de0u: goto label_1c2de0;
        case 0x1c2decu: goto label_1c2dec;
        case 0x1c2df8u: goto label_1c2df8;
        case 0x1c2e04u: goto label_1c2e04;
        case 0x1c2e24u: goto label_1c2e24;
        case 0x1c2e74u: goto label_1c2e74;
        case 0x1c2e84u: goto label_1c2e84;
        case 0x1c2ea8u: goto label_1c2ea8;
        case 0x1c2eb4u: goto label_1c2eb4;
        case 0x1c2eccu: goto label_1c2ecc;
        case 0x1c2ed8u: goto label_1c2ed8;
        case 0x1c2f00u: goto label_1c2f00;
        default: break;
    }

    ctx->pc = 0x1c2d60u;

    // 0x1c2d60: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1c2d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1c2d64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c2d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c2d68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c2d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c2d6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c2d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c2d70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c2d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c2d74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c2d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c2d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c2d7c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2d80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c2d80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c2d84: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C2D84u;
    SET_GPR_U32(ctx, 31, 0x1C2D8Cu);
    ctx->pc = 0x1C2D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D84u;
            // 0x1c2d88: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D8Cu; }
        if (ctx->pc != 0x1C2D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D8Cu; }
        if (ctx->pc != 0x1C2D8Cu) { return; }
    }
    ctx->pc = 0x1C2D8Cu;
label_1c2d8c:
    // 0x1c2d8c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d94: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C2D94u;
    SET_GPR_U32(ctx, 31, 0x1C2D9Cu);
    ctx->pc = 0x1C2D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D94u;
            // 0x1c2d98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D9Cu; }
        if (ctx->pc != 0x1C2D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2D9Cu; }
        if (ctx->pc != 0x1C2D9Cu) { return; }
    }
    ctx->pc = 0x1C2D9Cu;
label_1c2d9c:
    // 0x1c2d9c: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C2D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C2DA4u);
    ctx->pc = 0x1C2DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2D9Cu;
            // 0x1c2da0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DA4u; }
        if (ctx->pc != 0x1C2DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DA4u; }
        if (ctx->pc != 0x1C2DA4u) { return; }
    }
    ctx->pc = 0x1C2DA4u;
label_1c2da4:
    // 0x1c2da4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2da8: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1C2DA8u;
    SET_GPR_U32(ctx, 31, 0x1C2DB0u);
    ctx->pc = 0x1C2DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DA8u;
            // 0x1c2dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DB0u; }
        if (ctx->pc != 0x1C2DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DB0u; }
        if (ctx->pc != 0x1C2DB0u) { return; }
    }
    ctx->pc = 0x1C2DB0u;
label_1c2db0:
    // 0x1c2db0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2db4: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C2DB4u;
    SET_GPR_U32(ctx, 31, 0x1C2DBCu);
    ctx->pc = 0x1C2DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DB4u;
            // 0x1c2db8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DBCu; }
        if (ctx->pc != 0x1C2DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DBCu; }
        if (ctx->pc != 0x1C2DBCu) { return; }
    }
    ctx->pc = 0x1C2DBCu;
label_1c2dbc:
    // 0x1c2dbc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2dc0: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x1C2DC0u;
    SET_GPR_U32(ctx, 31, 0x1C2DC8u);
    ctx->pc = 0x1C2DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DC0u;
            // 0x1c2dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DC8u; }
        if (ctx->pc != 0x1C2DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DC8u; }
        if (ctx->pc != 0x1C2DC8u) { return; }
    }
    ctx->pc = 0x1C2DC8u;
label_1c2dc8:
    // 0x1c2dc8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2dcc: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C2DCCu;
    SET_GPR_U32(ctx, 31, 0x1C2DD4u);
    ctx->pc = 0x1C2DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DCCu;
            // 0x1c2dd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DD4u; }
        if (ctx->pc != 0x1C2DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DD4u; }
        if (ctx->pc != 0x1C2DD4u) { return; }
    }
    ctx->pc = 0x1C2DD4u;
label_1c2dd4:
    // 0x1c2dd4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2dd8: 0xc04d3fc  jal         func_134FF0
    ctx->pc = 0x1C2DD8u;
    SET_GPR_U32(ctx, 31, 0x1C2DE0u);
    ctx->pc = 0x1C2DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DD8u;
            // 0x1c2ddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DE0u; }
        if (ctx->pc != 0x1C2DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DE0u; }
        if (ctx->pc != 0x1C2DE0u) { return; }
    }
    ctx->pc = 0x1C2DE0u;
label_1c2de0:
    // 0x1c2de0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2de4: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C2DE4u;
    SET_GPR_U32(ctx, 31, 0x1C2DECu);
    ctx->pc = 0x1C2DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DE4u;
            // 0x1c2de8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DECu; }
        if (ctx->pc != 0x1C2DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DECu; }
        if (ctx->pc != 0x1C2DECu) { return; }
    }
    ctx->pc = 0x1C2DECu;
label_1c2dec:
    // 0x1c2dec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2df0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C2DF0u;
    SET_GPR_U32(ctx, 31, 0x1C2DF8u);
    ctx->pc = 0x1C2DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DF0u;
            // 0x1c2df4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DF8u; }
        if (ctx->pc != 0x1C2DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2DF8u; }
        if (ctx->pc != 0x1C2DF8u) { return; }
    }
    ctx->pc = 0x1C2DF8u;
label_1c2df8:
    // 0x1c2df8: 0x8e500020  lw          $s0, 0x20($s2)
    ctx->pc = 0x1c2df8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1c2dfc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C2DFCu;
    {
        const bool branch_taken_0x1c2dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2DFCu;
            // 0x1c2e00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2dfc) {
            ctx->pc = 0x1C2EE4u;
            goto label_1c2ee4;
        }
    }
    ctx->pc = 0x1C2E04u;
label_1c2e04:
    // 0x1c2e04: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1c2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c2e08: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C2E08u;
    {
        const bool branch_taken_0x1c2e08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C2E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E08u;
            // 0x1c2e0c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e08) {
            ctx->pc = 0x1C2EDCu;
            goto label_1c2edc;
        }
    }
    ctx->pc = 0x1C2E10u;
    // 0x1c2e10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2e14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c2e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e18: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c2e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e1c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C2E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C2E24u);
    ctx->pc = 0x1C2E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E1Cu;
            // 0x1c2e20: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E24u; }
        if (ctx->pc != 0x1C2E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E24u; }
        if (ctx->pc != 0x1C2E24u) { return; }
    }
    ctx->pc = 0x1C2E24u;
label_1c2e24:
    // 0x1c2e24: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c2e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2e28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c2e2c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1c2e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2e30: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1c2e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1c2e34: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1c2e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c2e38: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c2e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c2e3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c2e3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c2e40: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x1c2e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1c2e44: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c2e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2e48: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1c2e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2e4c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c2e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c2e50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c2e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c2e54: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x1c2e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x1c2e58: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1c2e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2e5c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1c2e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2e60: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c2e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c2e64: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x1c2e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x1c2e68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c2e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c2e6c: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1C2E6Cu;
    SET_GPR_U32(ctx, 31, 0x1C2E74u);
    ctx->pc = 0x1C2E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E6Cu;
            // 0x1c2e70: 0xe7a001a8  swc1        $f0, 0x1A8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E74u; }
        if (ctx->pc != 0x1C2E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E74u; }
        if (ctx->pc != 0x1C2E74u) { return; }
    }
    ctx->pc = 0x1C2E74u;
label_1c2e74:
    // 0x1c2e74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c2e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e78: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c2e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1c2e7c: 0xc051638  jal         func_1458E0
    ctx->pc = 0x1C2E7Cu;
    SET_GPR_U32(ctx, 31, 0x1C2E84u);
    ctx->pc = 0x1C2E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E7Cu;
            // 0x1c2e80: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1458E0u;
    if (runtime->hasFunction(0x1458E0u)) {
        auto targetFn = runtime->lookupFunction(0x1458E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E84u; }
        if (ctx->pc != 0x1C2E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim__FPiPf_0x1458e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2E84u; }
        if (ctx->pc != 0x1C2E84u) { return; }
    }
    ctx->pc = 0x1C2E84u;
label_1c2e84:
    // 0x1c2e84: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1c2e84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1c2e88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2e8c: 0x16620012  bne         $s3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C2E8Cu;
    {
        const bool branch_taken_0x1c2e8c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2E8Cu;
            // 0x1c2e90: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e8c) {
            ctx->pc = 0x1C2ED8u;
            goto label_1c2ed8;
        }
    }
    ctx->pc = 0x1C2E94u;
    // 0x1c2e94: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2e98: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c2e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ea0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C2EA0u;
    SET_GPR_U32(ctx, 31, 0x1C2EA8u);
    ctx->pc = 0x1C2EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EA0u;
            // 0x1c2ea4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EA8u; }
        if (ctx->pc != 0x1C2EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EA8u; }
        if (ctx->pc != 0x1C2EA8u) { return; }
    }
    ctx->pc = 0x1C2EA8u;
label_1c2ea8:
    // 0x1c2ea8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2eac: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C2EACu;
    SET_GPR_U32(ctx, 31, 0x1C2EB4u);
    ctx->pc = 0x1C2EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EACu;
            // 0x1c2eb0: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EB4u; }
        if (ctx->pc != 0x1C2EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2EB4u; }
        if (ctx->pc != 0x1C2EB4u) { return; }
    }
    ctx->pc = 0x1C2EB4u;
label_1c2eb4:
    // 0x1c2eb4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1c2eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c2eb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2ebc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c2ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ec0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1c2ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c2ec4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C2EC4u;
    SET_GPR_U32(ctx, 31, 0x1C2ECCu);
    ctx->pc = 0x1C2EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EC4u;
            // 0x1c2ec8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2ECCu; }
        if (ctx->pc != 0x1C2ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2ECCu; }
        if (ctx->pc != 0x1C2ECCu) { return; }
    }
    ctx->pc = 0x1C2ECCu;
label_1c2ecc:
    // 0x1c2ecc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2ed0: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C2ED0u;
    SET_GPR_U32(ctx, 31, 0x1C2ED8u);
    ctx->pc = 0x1C2ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2ED0u;
            // 0x1c2ed4: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2ED8u; }
        if (ctx->pc != 0x1C2ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2ED8u; }
        if (ctx->pc != 0x1C2ED8u) { return; }
    }
    ctx->pc = 0x1C2ED8u;
label_1c2ed8:
    // 0x1c2ed8: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x1c2ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1c2edc:
    // 0x1c2edc: 0x0  nop
    ctx->pc = 0x1c2edcu;
    // NOP
    // 0x1c2ee0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c2ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c2ee4:
    // 0x1c2ee4: 0x0  nop
    ctx->pc = 0x1c2ee4u;
    // NOP
    // 0x1c2ee8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1c2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1c2eec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1c2eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c2ef0: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x1C2EF0u;
    {
        const bool branch_taken_0x1c2ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2EF0u;
            // 0x1c2ef4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ef0) {
            ctx->pc = 0x1C2E04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2e04;
        }
    }
    ctx->pc = 0x1C2EF8u;
    // 0x1c2ef8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C2EF8u;
    SET_GPR_U32(ctx, 31, 0x1C2F00u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F00u; }
        if (ctx->pc != 0x1C2F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2F00u; }
        if (ctx->pc != 0x1C2F00u) { return; }
    }
    ctx->pc = 0x1C2F00u;
label_1c2f00:
    // 0x1c2f00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c2f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2f04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c2f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c2f08: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c2f08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2f0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c2f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2f10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c2f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2f14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2f18: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2F18u;
            // 0x1c2f1c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2F20u;
}
