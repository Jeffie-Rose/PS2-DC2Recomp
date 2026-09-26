#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawRaster__7CRasterFv
// Address: 0x260340 - 0x2605dc
void DrawRaster__7CRasterFv_0x260340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawRaster__7CRasterFv_0x260340");
#endif

    switch (ctx->pc) {
        case 0x260374u: goto label_260374;
        case 0x26037cu: goto label_26037c;
        case 0x260384u: goto label_260384;
        case 0x260394u: goto label_260394;
        case 0x2603a0u: goto label_2603a0;
        case 0x2603acu: goto label_2603ac;
        case 0x2603b8u: goto label_2603b8;
        case 0x2603c4u: goto label_2603c4;
        case 0x2603d0u: goto label_2603d0;
        case 0x2603e0u: goto label_2603e0;
        case 0x2603ecu: goto label_2603ec;
        case 0x260404u: goto label_260404;
        case 0x26040cu: goto label_26040c;
        case 0x260414u: goto label_260414;
        case 0x26042cu: goto label_26042c;
        case 0x260444u: goto label_260444;
        case 0x260454u: goto label_260454;
        case 0x260484u: goto label_260484;
        case 0x2604b8u: goto label_2604b8;
        case 0x2604c8u: goto label_2604c8;
        case 0x2604e0u: goto label_2604e0;
        case 0x2604f0u: goto label_2604f0;
        case 0x260504u: goto label_260504;
        case 0x260520u: goto label_260520;
        case 0x260540u: goto label_260540;
        case 0x260548u: goto label_260548;
        case 0x260558u: goto label_260558;
        case 0x260570u: goto label_260570;
        case 0x260580u: goto label_260580;
        case 0x2605a0u: goto label_2605a0;
        case 0x2605b4u: goto label_2605b4;
        default: break;
    }

    ctx->pc = 0x260340u;

    // 0x260340: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x260340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x260344: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x260344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x260348: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x260348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26034c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x260350: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x260350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x260354: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x260354u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x260358: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x260358u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26035c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x26035cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x260360: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x260360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x260364: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x260364u;
    {
        const bool branch_taken_0x260364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260364u;
            // 0x260368: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260364) {
            ctx->pc = 0x2605B8u;
            goto label_2605b8;
        }
    }
    ctx->pc = 0x26036Cu;
    // 0x26036c: 0xc04b120  jal         func_12C480
    ctx->pc = 0x26036Cu;
    SET_GPR_U32(ctx, 31, 0x260374u);
    ctx->pc = 0x260370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26036Cu;
            // 0x260370: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260374u; }
        if (ctx->pc != 0x260374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260374u; }
        if (ctx->pc != 0x260374u) { return; }
    }
    ctx->pc = 0x260374u;
label_260374:
    // 0x260374: 0xc0510c0  jal         func_144300
    ctx->pc = 0x260374u;
    SET_GPR_U32(ctx, 31, 0x26037Cu);
    ctx->pc = 0x260378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260374u;
            // 0x260378: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (runtime->hasFunction(0x144300u)) {
        auto targetFn = runtime->lookupFunction(0x144300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26037Cu; }
        if (ctx->pc != 0x26037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBuffer__FP10mgCTexture_0x144300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26037Cu; }
        if (ctx->pc != 0x26037Cu) { return; }
    }
    ctx->pc = 0x26037Cu;
label_26037c:
    // 0x26037c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x26037Cu;
    SET_GPR_U32(ctx, 31, 0x260384u);
    ctx->pc = 0x260380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26037Cu;
            // 0x260380: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260384u; }
        if (ctx->pc != 0x260384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260384u; }
        if (ctx->pc != 0x260384u) { return; }
    }
    ctx->pc = 0x260384u;
label_260384:
    // 0x260384: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x260384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x260388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26038c: 0xc04d104  jal         func_134410
    ctx->pc = 0x26038Cu;
    SET_GPR_U32(ctx, 31, 0x260394u);
    ctx->pc = 0x260390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26038Cu;
            // 0x260390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260394u; }
        if (ctx->pc != 0x260394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260394u; }
        if (ctx->pc != 0x260394u) { return; }
    }
    ctx->pc = 0x260394u;
label_260394:
    // 0x260394: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x260394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x260398: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x260398u;
    SET_GPR_U32(ctx, 31, 0x2603A0u);
    ctx->pc = 0x26039Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260398u;
            // 0x26039c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603A0u; }
        if (ctx->pc != 0x2603A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603A0u; }
        if (ctx->pc != 0x2603A0u) { return; }
    }
    ctx->pc = 0x2603A0u;
label_2603a0:
    // 0x2603a0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2603a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2603a4: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x2603A4u;
    SET_GPR_U32(ctx, 31, 0x2603ACu);
    ctx->pc = 0x2603A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2603A4u;
            // 0x2603a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603ACu; }
        if (ctx->pc != 0x2603ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603ACu; }
        if (ctx->pc != 0x2603ACu) { return; }
    }
    ctx->pc = 0x2603ACu;
label_2603ac:
    // 0x2603ac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2603acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2603b0: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2603B0u;
    SET_GPR_U32(ctx, 31, 0x2603B8u);
    ctx->pc = 0x2603B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2603B0u;
            // 0x2603b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603B8u; }
        if (ctx->pc != 0x2603B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603B8u; }
        if (ctx->pc != 0x2603B8u) { return; }
    }
    ctx->pc = 0x2603B8u;
label_2603b8:
    // 0x2603b8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2603b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2603bc: 0xc04d424  jal         func_135090
    ctx->pc = 0x2603BCu;
    SET_GPR_U32(ctx, 31, 0x2603C4u);
    ctx->pc = 0x2603C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2603BCu;
            // 0x2603c0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603C4u; }
        if (ctx->pc != 0x2603C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603C4u; }
        if (ctx->pc != 0x2603C4u) { return; }
    }
    ctx->pc = 0x2603C4u;
label_2603c4:
    // 0x2603c4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2603c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2603c8: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2603C8u;
    SET_GPR_U32(ctx, 31, 0x2603D0u);
    ctx->pc = 0x2603CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2603C8u;
            // 0x2603cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603D0u; }
        if (ctx->pc != 0x2603D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603D0u; }
        if (ctx->pc != 0x2603D0u) { return; }
    }
    ctx->pc = 0x2603D0u;
label_2603d0:
    // 0x2603d0: 0xc635001c  lwc1        $f21, 0x1C($s1)
    ctx->pc = 0x2603d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2603d4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2603d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2603d8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2603D8u;
    SET_GPR_U32(ctx, 31, 0x2603E0u);
    ctx->pc = 0x2603DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2603D8u;
            // 0x2603dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603E0u; }
        if (ctx->pc != 0x2603E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603E0u; }
        if (ctx->pc != 0x2603E0u) { return; }
    }
    ctx->pc = 0x2603E0u;
label_2603e0:
    // 0x2603e0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2603e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2603e4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2603E4u;
    SET_GPR_U32(ctx, 31, 0x2603ECu);
    ctx->pc = 0x2603E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2603E4u;
            // 0x2603e8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603ECu; }
        if (ctx->pc != 0x2603ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2603ECu; }
        if (ctx->pc != 0x2603ECu) { return; }
    }
    ctx->pc = 0x2603ECu;
label_2603ec:
    // 0x2603ec: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2603ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2603f0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2603f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2603f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2603f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603f8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2603f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2603fc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2603FCu;
    SET_GPR_U32(ctx, 31, 0x260404u);
    ctx->pc = 0x260400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2603FCu;
            // 0x260400: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260404u; }
        if (ctx->pc != 0x260404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260404u; }
        if (ctx->pc != 0x260404u) { return; }
    }
    ctx->pc = 0x260404u;
label_260404:
    // 0x260404: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x260404u;
    {
        const bool branch_taken_0x260404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260404u;
            // 0x260408: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260404) {
            ctx->pc = 0x260588u;
            goto label_260588;
        }
    }
    ctx->pc = 0x26040Cu;
label_26040c:
    // 0x26040c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x26040Cu;
    SET_GPR_U32(ctx, 31, 0x260414u);
    ctx->pc = 0x260410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26040Cu;
            // 0x260410: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260414u; }
        if (ctx->pc != 0x260414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260414u; }
        if (ctx->pc != 0x260414u) { return; }
    }
    ctx->pc = 0x260414u;
label_260414:
    // 0x260414: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x260414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260418: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x260418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x26041c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26041cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260420: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x260420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260424: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x260424u;
    SET_GPR_U32(ctx, 31, 0x26042Cu);
    ctx->pc = 0x260428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260424u;
            // 0x260428: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26042Cu; }
        if (ctx->pc != 0x26042Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26042Cu; }
        if (ctx->pc != 0x26042Cu) { return; }
    }
    ctx->pc = 0x26042Cu;
label_26042c:
    // 0x26042c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x26042cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260430: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x260430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x260434: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x260434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x260438: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x260438u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x26043c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x26043Cu;
    SET_GPR_U32(ctx, 31, 0x260444u);
    ctx->pc = 0x260440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26043Cu;
            // 0x260440: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260444u; }
        if (ctx->pc != 0x260444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260444u; }
        if (ctx->pc != 0x260444u) { return; }
    }
    ctx->pc = 0x260444u;
label_260444:
    // 0x260444: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x260444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x260448: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x260448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26044c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x26044Cu;
    SET_GPR_U32(ctx, 31, 0x260454u);
    ctx->pc = 0x260450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26044Cu;
            // 0x260450: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260454u; }
        if (ctx->pc != 0x260454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260454u; }
        if (ctx->pc != 0x260454u) { return; }
    }
    ctx->pc = 0x260454u;
label_260454:
    // 0x260454: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x260454u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260458: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x260458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26045c: 0xc7828780  lwc1        $f2, -0x7880($gp)
    ctx->pc = 0x26045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x260460: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x260460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x260464: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x260464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x260468: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x260468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26046c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x26046cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x260470: 0x46000d80  add.s       $f22, $f1, $f0
    ctx->pc = 0x260470u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x260474: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x260474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x260478: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x260478u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x26047c: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x26047Cu;
    SET_GPR_U32(ctx, 31, 0x260484u);
    ctx->pc = 0x260480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26047Cu;
            // 0x260480: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260484u; }
        if (ctx->pc != 0x260484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260484u; }
        if (ctx->pc != 0x260484u) { return; }
    }
    ctx->pc = 0x260484u;
label_260484:
    // 0x260484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260488: 0x0  nop
    ctx->pc = 0x260488u;
    // NOP
    // 0x26048c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x26048cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260490: 0x0  nop
    ctx->pc = 0x260490u;
    // NOP
    // 0x260494: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x260494u;
    {
        const bool branch_taken_0x260494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260494) {
            ctx->pc = 0x260570u;
            goto label_260570;
        }
    }
    ctx->pc = 0x26049Cu;
    // 0x26049c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x26049cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2604a0: 0x0  nop
    ctx->pc = 0x2604a0u;
    // NOP
    // 0x2604a4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2604A4u;
    {
        const bool branch_taken_0x2604a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2604a4) {
            ctx->pc = 0x26050Cu;
            goto label_26050c;
        }
    }
    ctx->pc = 0x2604ACu;
    // 0x2604ac: 0x8f928780  lw          $s2, -0x7880($gp)
    ctx->pc = 0x2604acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2604b0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2604B0u;
    SET_GPR_U32(ctx, 31, 0x2604B8u);
    ctx->pc = 0x2604B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2604B0u;
            // 0x2604b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2604B8u; }
        if (ctx->pc != 0x2604B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2604B8u; }
        if (ctx->pc != 0x2604B8u) { return; }
    }
    ctx->pc = 0x2604B8u;
label_2604b8:
    // 0x2604b8: 0x2422823  subu        $a1, $s2, $v0
    ctx->pc = 0x2604b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2604bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2604bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2604c0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2604C0u;
    SET_GPR_U32(ctx, 31, 0x2604C8u);
    ctx->pc = 0x2604C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2604C0u;
            // 0x2604c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2604C8u; }
        if (ctx->pc != 0x2604C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2604C8u; }
        if (ctx->pc != 0x2604C8u) { return; }
    }
    ctx->pc = 0x2604C8u;
label_2604c8:
    // 0x2604c8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2604c8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2604cc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2604ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2604d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2604d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2604d4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x2604d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2604d8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2604D8u;
    SET_GPR_U32(ctx, 31, 0x2604E0u);
    ctx->pc = 0x2604DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2604D8u;
            // 0x2604dc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2604E0u; }
        if (ctx->pc != 0x2604E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2604E0u; }
        if (ctx->pc != 0x2604E0u) { return; }
    }
    ctx->pc = 0x2604E0u;
label_2604e0:
    // 0x2604e0: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x2604e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2604e4: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2604e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2604e8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2604E8u;
    SET_GPR_U32(ctx, 31, 0x2604F0u);
    ctx->pc = 0x2604ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2604E8u;
            // 0x2604ec: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2604F0u; }
        if (ctx->pc != 0x2604F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2604F0u; }
        if (ctx->pc != 0x2604F0u) { return; }
    }
    ctx->pc = 0x2604F0u;
label_2604f0:
    // 0x2604f0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2604f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2604f4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2604f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2604f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2604f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2604fc: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2604FCu;
    SET_GPR_U32(ctx, 31, 0x260504u);
    ctx->pc = 0x260500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2604FCu;
            // 0x260500: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260504u; }
        if (ctx->pc != 0x260504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260504u; }
        if (ctx->pc != 0x260504u) { return; }
    }
    ctx->pc = 0x260504u;
label_260504:
    // 0x260504: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x260504u;
    {
        const bool branch_taken_0x260504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260504) {
            ctx->pc = 0x260570u;
            goto label_260570;
        }
    }
    ctx->pc = 0x26050Cu;
label_26050c:
    // 0x26050c: 0x0  nop
    ctx->pc = 0x26050cu;
    // NOP
    // 0x260510: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x260510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x260514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260518: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x260518u;
    SET_GPR_U32(ctx, 31, 0x260520u);
    ctx->pc = 0x26051Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260518u;
            // 0x26051c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260520u; }
        if (ctx->pc != 0x260520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260520u; }
        if (ctx->pc != 0x260520u) { return; }
    }
    ctx->pc = 0x260520u;
label_260520:
    // 0x260520: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x260520u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260524: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x260524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x260528: 0xc7818780  lwc1        $f1, -0x7880($gp)
    ctx->pc = 0x260528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26052c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x26052cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x260530: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x260530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x260534: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x260534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x260538: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x260538u;
    SET_GPR_U32(ctx, 31, 0x260540u);
    ctx->pc = 0x26053Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260538u;
            // 0x26053c: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260540u; }
        if (ctx->pc != 0x260540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260540u; }
        if (ctx->pc != 0x260540u) { return; }
    }
    ctx->pc = 0x260540u;
label_260540:
    // 0x260540: 0xc0a248c  jal         func_289230
    ctx->pc = 0x260540u;
    SET_GPR_U32(ctx, 31, 0x260548u);
    ctx->pc = 0x260544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260540u;
            // 0x260544: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260548u; }
        if (ctx->pc != 0x260548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260548u; }
        if (ctx->pc != 0x260548u) { return; }
    }
    ctx->pc = 0x260548u;
label_260548:
    // 0x260548: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26054c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x26054cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x260550: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x260550u;
    SET_GPR_U32(ctx, 31, 0x260558u);
    ctx->pc = 0x260554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260550u;
            // 0x260554: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260558u; }
        if (ctx->pc != 0x260558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260558u; }
        if (ctx->pc != 0x260558u) { return; }
    }
    ctx->pc = 0x260558u;
label_260558:
    // 0x260558: 0xc7808780  lwc1        $f0, -0x7880($gp)
    ctx->pc = 0x260558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26055c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x26055cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x260560: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x260560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x260564: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x260564u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x260568: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x260568u;
    SET_GPR_U32(ctx, 31, 0x260570u);
    ctx->pc = 0x26056Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260568u;
            // 0x26056c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260570u; }
        if (ctx->pc != 0x260570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260570u; }
        if (ctx->pc != 0x260570u) { return; }
    }
    ctx->pc = 0x260570u;
label_260570:
    // 0x260570: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x260570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260574: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x260574u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x260578: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x260578u;
    SET_GPR_U32(ctx, 31, 0x260580u);
    ctx->pc = 0x26057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260578u;
            // 0x26057c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260580u; }
        if (ctx->pc != 0x260580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260580u; }
        if (ctx->pc != 0x260580u) { return; }
    }
    ctx->pc = 0x260580u;
label_260580:
    // 0x260580: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x260580u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x260584: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x260584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_260588:
    // 0x260588: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x260588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x26058c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x26058cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x260590: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x260590u;
    {
        const bool branch_taken_0x260590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260590u;
            // 0x260594: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260590) {
            ctx->pc = 0x26040Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26040c;
        }
    }
    ctx->pc = 0x260598u;
    // 0x260598: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x260598u;
    SET_GPR_U32(ctx, 31, 0x2605A0u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2605A0u; }
        if (ctx->pc != 0x2605A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2605A0u; }
        if (ctx->pc != 0x2605A0u) { return; }
    }
    ctx->pc = 0x2605A0u;
label_2605a0:
    // 0x2605a0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x2605a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2605a4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x2605a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2605a8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2605a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2605ac: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2605ACu;
    SET_GPR_U32(ctx, 31, 0x2605B4u);
    ctx->pc = 0x2605B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2605ACu;
            // 0x2605b0: 0xe62c001c  swc1        $f12, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2605B4u; }
        if (ctx->pc != 0x2605B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2605B4u; }
        if (ctx->pc != 0x2605B4u) { return; }
    }
    ctx->pc = 0x2605B4u;
label_2605b4:
    // 0x2605b4: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2605b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_2605b8:
    // 0x2605b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2605b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2605bc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2605bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2605c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2605c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2605c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2605c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2605c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2605c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2605cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2605ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2605d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2605d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2605d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2605D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2605D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2605D4u;
            // 0x2605d8: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2605DCu;
}
