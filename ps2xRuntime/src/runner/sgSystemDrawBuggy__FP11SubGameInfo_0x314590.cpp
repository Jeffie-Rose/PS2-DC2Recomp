#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgSystemDrawBuggy__FP11SubGameInfo
// Address: 0x314590 - 0x314994
void sgSystemDrawBuggy__FP11SubGameInfo_0x314590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgSystemDrawBuggy__FP11SubGameInfo_0x314590");
#endif

    switch (ctx->pc) {
        case 0x3145b8u: goto label_3145b8;
        case 0x3145d0u: goto label_3145d0;
        case 0x3145dcu: goto label_3145dc;
        case 0x3145ecu: goto label_3145ec;
        case 0x3145f8u: goto label_3145f8;
        case 0x314604u: goto label_314604;
        case 0x314610u: goto label_314610;
        case 0x31461cu: goto label_31461c;
        case 0x314628u: goto label_314628;
        case 0x314634u: goto label_314634;
        case 0x31464cu: goto label_31464c;
        case 0x314660u: goto label_314660;
        case 0x314674u: goto label_314674;
        case 0x31467cu: goto label_31467c;
        case 0x314688u: goto label_314688;
        case 0x314694u: goto label_314694;
        case 0x3146a0u: goto label_3146a0;
        case 0x3146b4u: goto label_3146b4;
        case 0x3146d0u: goto label_3146d0;
        case 0x3146e0u: goto label_3146e0;
        case 0x3146f4u: goto label_3146f4;
        case 0x314704u: goto label_314704;
        case 0x314718u: goto label_314718;
        case 0x314728u: goto label_314728;
        case 0x31473cu: goto label_31473c;
        case 0x31474cu: goto label_31474c;
        case 0x314760u: goto label_314760;
        case 0x314768u: goto label_314768;
        case 0x3147e8u: goto label_3147e8;
        case 0x3147f8u: goto label_3147f8;
        case 0x314808u: goto label_314808;
        case 0x314810u: goto label_314810;
        case 0x314838u: goto label_314838;
        case 0x314844u: goto label_314844;
        case 0x314850u: goto label_314850;
        case 0x31485cu: goto label_31485c;
        case 0x314870u: goto label_314870;
        case 0x31487cu: goto label_31487c;
        case 0x314890u: goto label_314890;
        case 0x31489cu: goto label_31489c;
        case 0x3148acu: goto label_3148ac;
        case 0x3148c4u: goto label_3148c4;
        case 0x3148d0u: goto label_3148d0;
        case 0x3148e4u: goto label_3148e4;
        case 0x3148ecu: goto label_3148ec;
        case 0x3148f8u: goto label_3148f8;
        case 0x314904u: goto label_314904;
        case 0x314910u: goto label_314910;
        case 0x314928u: goto label_314928;
        case 0x314938u: goto label_314938;
        case 0x31494cu: goto label_31494c;
        case 0x31495cu: goto label_31495c;
        case 0x314970u: goto label_314970;
        case 0x314978u: goto label_314978;
        default: break;
    }

    ctx->pc = 0x314590u;

    // 0x314590: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x314590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x314594: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x314594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x314598: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x314598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31459c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x31459cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x3145a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3145a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3145a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3145a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3145a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3145a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3145ac: 0x8f85a2c8  lw          $a1, -0x5D38($gp)
    ctx->pc = 0x3145acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943432)));
    // 0x3145b0: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x3145B0u;
    SET_GPR_U32(ctx, 31, 0x3145B8u);
    ctx->pc = 0x3145B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3145B0u;
            // 0x3145b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3145B8u; }
        if (ctx->pc != 0x3145B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3145B8u; }
        if (ctx->pc != 0x3145B8u) { return; }
    }
    ctx->pc = 0x3145B8u;
label_3145b8:
    // 0x3145b8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x3145b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x3145bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3145bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x3145c0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x3145c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x3145c4: 0x24a527f8  addiu       $a1, $a1, 0x27F8
    ctx->pc = 0x3145c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10232));
    // 0x3145c8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x3145C8u;
    SET_GPR_U32(ctx, 31, 0x3145D0u);
    ctx->pc = 0x3145CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3145C8u;
            // 0x3145cc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3145D0u; }
        if (ctx->pc != 0x3145D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3145D0u; }
        if (ctx->pc != 0x3145D0u) { return; }
    }
    ctx->pc = 0x3145D0u;
label_3145d0:
    // 0x3145d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3145d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3145d4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x3145D4u;
    SET_GPR_U32(ctx, 31, 0x3145DCu);
    ctx->pc = 0x3145D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3145D4u;
            // 0x3145d8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3145DCu; }
        if (ctx->pc != 0x3145DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3145DCu; }
        if (ctx->pc != 0x3145DCu) { return; }
    }
    ctx->pc = 0x3145DCu;
label_3145dc:
    // 0x3145dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3145dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3145e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3145e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3145e4: 0xc04d104  jal         func_134410
    ctx->pc = 0x3145E4u;
    SET_GPR_U32(ctx, 31, 0x3145ECu);
    ctx->pc = 0x3145E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3145E4u;
            // 0x3145e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3145ECu; }
        if (ctx->pc != 0x3145ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3145ECu; }
        if (ctx->pc != 0x3145ECu) { return; }
    }
    ctx->pc = 0x3145ECu;
label_3145ec:
    // 0x3145ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3145ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3145f0: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x3145F0u;
    SET_GPR_U32(ctx, 31, 0x3145F8u);
    ctx->pc = 0x3145F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3145F0u;
            // 0x3145f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3145F8u; }
        if (ctx->pc != 0x3145F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3145F8u; }
        if (ctx->pc != 0x3145F8u) { return; }
    }
    ctx->pc = 0x3145F8u;
label_3145f8:
    // 0x3145f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3145f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3145fc: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x3145FCu;
    SET_GPR_U32(ctx, 31, 0x314604u);
    ctx->pc = 0x314600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3145FCu;
            // 0x314600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314604u; }
        if (ctx->pc != 0x314604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314604u; }
        if (ctx->pc != 0x314604u) { return; }
    }
    ctx->pc = 0x314604u;
label_314604:
    // 0x314604: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314608: 0xc04d44c  jal         func_135130
    ctx->pc = 0x314608u;
    SET_GPR_U32(ctx, 31, 0x314610u);
    ctx->pc = 0x31460Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314608u;
            // 0x31460c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314610u; }
        if (ctx->pc != 0x314610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314610u; }
        if (ctx->pc != 0x314610u) { return; }
    }
    ctx->pc = 0x314610u;
label_314610:
    // 0x314610: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314614: 0xc04d424  jal         func_135090
    ctx->pc = 0x314614u;
    SET_GPR_U32(ctx, 31, 0x31461Cu);
    ctx->pc = 0x314618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314614u;
            // 0x314618: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31461Cu; }
        if (ctx->pc != 0x31461Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31461Cu; }
        if (ctx->pc != 0x31461Cu) { return; }
    }
    ctx->pc = 0x31461Cu;
label_31461c:
    // 0x31461c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314620: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x314620u;
    SET_GPR_U32(ctx, 31, 0x314628u);
    ctx->pc = 0x314624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314620u;
            // 0x314624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314628u; }
        if (ctx->pc != 0x314628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314628u; }
        if (ctx->pc != 0x314628u) { return; }
    }
    ctx->pc = 0x314628u;
label_314628:
    // 0x314628: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31462c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x31462Cu;
    SET_GPR_U32(ctx, 31, 0x314634u);
    ctx->pc = 0x314630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31462Cu;
            // 0x314630: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314634u; }
        if (ctx->pc != 0x314634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314634u; }
        if (ctx->pc != 0x314634u) { return; }
    }
    ctx->pc = 0x314634u;
label_314634:
    // 0x314634: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314638: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x314638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x31463c: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x31463cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x314640: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x314640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x314644: 0xc04d320  jal         func_134C80
    ctx->pc = 0x314644u;
    SET_GPR_U32(ctx, 31, 0x31464Cu);
    ctx->pc = 0x314648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314644u;
            // 0x314648: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31464Cu; }
        if (ctx->pc != 0x31464Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31464Cu; }
        if (ctx->pc != 0x31464Cu) { return; }
    }
    ctx->pc = 0x31464Cu;
label_31464c:
    // 0x31464c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314650: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x314650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x314654: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x314654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x314658: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x314658u;
    SET_GPR_U32(ctx, 31, 0x314660u);
    ctx->pc = 0x31465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314658u;
            // 0x31465c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314660u; }
        if (ctx->pc != 0x314660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314660u; }
        if (ctx->pc != 0x314660u) { return; }
    }
    ctx->pc = 0x314660u;
label_314660:
    // 0x314660: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314664: 0x240500eb  addiu       $a1, $zero, 0xEB
    ctx->pc = 0x314664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    // 0x314668: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x314668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x31466c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x31466Cu;
    SET_GPR_U32(ctx, 31, 0x314674u);
    ctx->pc = 0x314670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31466Cu;
            // 0x314670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314674u; }
        if (ctx->pc != 0x314674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314674u; }
        if (ctx->pc != 0x314674u) { return; }
    }
    ctx->pc = 0x314674u;
label_314674:
    // 0x314674: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x314674u;
    SET_GPR_U32(ctx, 31, 0x31467Cu);
    ctx->pc = 0x314678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314674u;
            // 0x314678: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31467Cu; }
        if (ctx->pc != 0x31467Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31467Cu; }
        if (ctx->pc != 0x31467Cu) { return; }
    }
    ctx->pc = 0x31467Cu;
label_31467c:
    // 0x31467c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31467cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314680: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x314680u;
    SET_GPR_U32(ctx, 31, 0x314688u);
    ctx->pc = 0x314684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314680u;
            // 0x314684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314688u; }
        if (ctx->pc != 0x314688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314688u; }
        if (ctx->pc != 0x314688u) { return; }
    }
    ctx->pc = 0x314688u;
label_314688:
    // 0x314688: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31468c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x31468Cu;
    SET_GPR_U32(ctx, 31, 0x314694u);
    ctx->pc = 0x314690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31468Cu;
            // 0x314690: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314694u; }
        if (ctx->pc != 0x314694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314694u; }
        if (ctx->pc != 0x314694u) { return; }
    }
    ctx->pc = 0x314694u;
label_314694:
    // 0x314694: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314698: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x314698u;
    SET_GPR_U32(ctx, 31, 0x3146A0u);
    ctx->pc = 0x31469Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314698u;
            // 0x31469c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3146A0u; }
        if (ctx->pc != 0x3146A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3146A0u; }
        if (ctx->pc != 0x3146A0u) { return; }
    }
    ctx->pc = 0x3146A0u;
label_3146a0:
    // 0x3146a0: 0xc780a2f0  lwc1        $f0, -0x5D10($gp)
    ctx->pc = 0x3146a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3146a4: 0x3c02432d  lui         $v0, 0x432D
    ctx->pc = 0x3146a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17197 << 16));
    // 0x3146a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3146a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3146ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3146ACu;
    SET_GPR_U32(ctx, 31, 0x3146B4u);
    ctx->pc = 0x3146B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3146ACu;
            // 0x3146b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3146B4u; }
        if (ctx->pc != 0x3146B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3146B4u; }
        if (ctx->pc != 0x3146B4u) { return; }
    }
    ctx->pc = 0x3146B4u;
label_3146b4:
    // 0x3146b4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x3146b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3146b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3146b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3146bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3146bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3146c0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3146c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3146c4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3146c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3146c8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x3146C8u;
    SET_GPR_U32(ctx, 31, 0x3146D0u);
    ctx->pc = 0x3146CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3146C8u;
            // 0x3146cc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3146D0u; }
        if (ctx->pc != 0x3146D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3146D0u; }
        if (ctx->pc != 0x3146D0u) { return; }
    }
    ctx->pc = 0x3146D0u;
label_3146d0:
    // 0x3146d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3146d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3146d4: 0x240500f8  addiu       $a1, $zero, 0xF8
    ctx->pc = 0x3146d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x3146d8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x3146D8u;
    SET_GPR_U32(ctx, 31, 0x3146E0u);
    ctx->pc = 0x3146DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3146D8u;
            // 0x3146dc: 0x24060039  addiu       $a2, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3146E0u; }
        if (ctx->pc != 0x3146E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3146E0u; }
        if (ctx->pc != 0x3146E0u) { return; }
    }
    ctx->pc = 0x3146E0u;
label_3146e0:
    // 0x3146e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3146e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3146e4: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x3146e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x3146e8: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x3146e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x3146ec: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x3146ECu;
    SET_GPR_U32(ctx, 31, 0x3146F4u);
    ctx->pc = 0x3146F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3146ECu;
            // 0x3146f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3146F4u; }
        if (ctx->pc != 0x3146F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3146F4u; }
        if (ctx->pc != 0x3146F4u) { return; }
    }
    ctx->pc = 0x3146F4u;
label_3146f4:
    // 0x3146f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3146f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3146f8: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x3146f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x3146fc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x3146FCu;
    SET_GPR_U32(ctx, 31, 0x314704u);
    ctx->pc = 0x314700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3146FCu;
            // 0x314700: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314704u; }
        if (ctx->pc != 0x314704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314704u; }
        if (ctx->pc != 0x314704u) { return; }
    }
    ctx->pc = 0x314704u;
label_314704:
    // 0x314704: 0x2625003e  addiu       $a1, $s1, 0x3E
    ctx->pc = 0x314704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 62));
    // 0x314708: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31470c: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x31470cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x314710: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x314710u;
    SET_GPR_U32(ctx, 31, 0x314718u);
    ctx->pc = 0x314714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314710u;
            // 0x314714: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314718u; }
        if (ctx->pc != 0x314718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314718u; }
        if (ctx->pc != 0x314718u) { return; }
    }
    ctx->pc = 0x314718u;
label_314718:
    // 0x314718: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31471c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31471cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314720: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x314720u;
    SET_GPR_U32(ctx, 31, 0x314728u);
    ctx->pc = 0x314724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314720u;
            // 0x314724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314728u; }
        if (ctx->pc != 0x314728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314728u; }
        if (ctx->pc != 0x314728u) { return; }
    }
    ctx->pc = 0x314728u;
label_314728:
    // 0x314728: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x314728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31472c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31472cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314730: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x314730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314734: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x314734u;
    SET_GPR_U32(ctx, 31, 0x31473Cu);
    ctx->pc = 0x314738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314734u;
            // 0x314738: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31473Cu; }
        if (ctx->pc != 0x31473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31473Cu; }
        if (ctx->pc != 0x31473Cu) { return; }
    }
    ctx->pc = 0x31473Cu;
label_31473c:
    // 0x31473c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31473cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314740: 0x240500e2  addiu       $a1, $zero, 0xE2
    ctx->pc = 0x314740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x314744: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x314744u;
    SET_GPR_U32(ctx, 31, 0x31474Cu);
    ctx->pc = 0x314748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314744u;
            // 0x314748: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31474Cu; }
        if (ctx->pc != 0x31474Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31474Cu; }
        if (ctx->pc != 0x31474Cu) { return; }
    }
    ctx->pc = 0x31474Cu;
label_31474c:
    // 0x31474c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31474cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314750: 0x240500f6  addiu       $a1, $zero, 0xF6
    ctx->pc = 0x314750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x314754: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x314754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x314758: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x314758u;
    SET_GPR_U32(ctx, 31, 0x314760u);
    ctx->pc = 0x31475Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314758u;
            // 0x31475c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314760u; }
        if (ctx->pc != 0x314760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314760u; }
        if (ctx->pc != 0x314760u) { return; }
    }
    ctx->pc = 0x314760u;
label_314760:
    // 0x314760: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x314760u;
    SET_GPR_U32(ctx, 31, 0x314768u);
    ctx->pc = 0x314764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314760u;
            // 0x314764: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314768u; }
        if (ctx->pc != 0x314768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314768u; }
        if (ctx->pc != 0x314768u) { return; }
    }
    ctx->pc = 0x314768u;
label_314768:
    // 0x314768: 0xc7808644  lwc1        $f0, -0x79BC($gp)
    ctx->pc = 0x314768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31476c: 0xc782a2ec  lwc1        $f2, -0x5D14($gp)
    ctx->pc = 0x31476cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x314770: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x314770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x314774: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x314774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x314778: 0x0  nop
    ctx->pc = 0x314778u;
    // NOP
    // 0x31477c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x31477Cu;
    {
        const bool branch_taken_0x31477c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x314780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31477Cu;
            // 0x314780: 0x3c023d4c  lui         $v0, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31477c) {
            ctx->pc = 0x3147A8u;
            goto label_3147a8;
        }
    }
    ctx->pc = 0x314784u;
    // 0x314784: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x314784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x314788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31478c: 0x0  nop
    ctx->pc = 0x31478cu;
    // NOP
    // 0x314790: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x314790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x314794: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x314794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x314798: 0x0  nop
    ctx->pc = 0x314798u;
    // NOP
    // 0x31479c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31479Cu;
    {
        const bool branch_taken_0x31479c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3147A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31479Cu;
            // 0x3147a0: 0xe780a2ec  swc1        $f0, -0x5D14($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31479c) {
            ctx->pc = 0x3147A8u;
            goto label_3147a8;
        }
    }
    ctx->pc = 0x3147A4u;
    // 0x3147a4: 0xe781a2ec  swc1        $f1, -0x5D14($gp)
    ctx->pc = 0x3147a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943468), bits); }
label_3147a8:
    // 0x3147a8: 0xc780a2ec  lwc1        $f0, -0x5D14($gp)
    ctx->pc = 0x3147a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3147ac: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3147acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3147b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3147b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3147b4: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x3147b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3147b8: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x3147b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3147bc: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3147bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3147c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x3147c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x3147c4: 0x2442e750  addiu       $v0, $v0, -0x18B0
    ctx->pc = 0x3147c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960976));
    // 0x3147c8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3147c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3147cc: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x3147ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3147d0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x3147d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x3147d4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3147d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3147d8: 0x2442e760  addiu       $v0, $v0, -0x18A0
    ctx->pc = 0x3147d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960992));
    // 0x3147dc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3147dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3147e0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x3147E0u;
    SET_GPR_U32(ctx, 31, 0x3147E8u);
    ctx->pc = 0x3147E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3147E0u;
            // 0x3147e4: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3147E8u; }
        if (ctx->pc != 0x3147E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3147E8u; }
        if (ctx->pc != 0x3147E8u) { return; }
    }
    ctx->pc = 0x3147E8u;
label_3147e8:
    // 0x3147e8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3147e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3147ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3147ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3147f0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3147F0u;
    SET_GPR_U32(ctx, 31, 0x3147F8u);
    ctx->pc = 0x3147F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3147F0u;
            // 0x3147f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3147F8u; }
        if (ctx->pc != 0x3147F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3147F8u; }
        if (ctx->pc != 0x3147F8u) { return; }
    }
    ctx->pc = 0x3147F8u;
label_3147f8:
    // 0x3147f8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x3147f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3147fc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x3147fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x314800: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x314800u;
    SET_GPR_U32(ctx, 31, 0x314808u);
    ctx->pc = 0x314804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314800u;
            // 0x314804: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314808u; }
        if (ctx->pc != 0x314808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314808u; }
        if (ctx->pc != 0x314808u) { return; }
    }
    ctx->pc = 0x314808u;
label_314808:
    // 0x314808: 0xc064220  jal         func_190880
    ctx->pc = 0x314808u;
    SET_GPR_U32(ctx, 31, 0x314810u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314810u; }
        if (ctx->pc != 0x314810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314810u; }
        if (ctx->pc != 0x314810u) { return; }
    }
    ctx->pc = 0x314810u;
label_314810:
    // 0x314810: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x314810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x314814: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x314814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
    // 0x314818: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x314818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x31481c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x31481cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x314820: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x314820u;
    {
        const bool branch_taken_0x314820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314820u;
            // 0x314824: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314820) {
            ctx->pc = 0x314830u;
            goto label_314830;
        }
    }
    ctx->pc = 0x314828u;
    // 0x314828: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x314828u;
    {
        const bool branch_taken_0x314828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31482Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314828u;
            // 0x31482c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314828) {
            ctx->pc = 0x31497Cu;
            goto label_31497c;
        }
    }
    ctx->pc = 0x314830u;
label_314830:
    // 0x314830: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x314830u;
    SET_GPR_U32(ctx, 31, 0x314838u);
    ctx->pc = 0x314834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314830u;
            // 0x314834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314838u; }
        if (ctx->pc != 0x314838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314838u; }
        if (ctx->pc != 0x314838u) { return; }
    }
    ctx->pc = 0x314838u;
label_314838:
    // 0x314838: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31483c: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x31483Cu;
    SET_GPR_U32(ctx, 31, 0x314844u);
    ctx->pc = 0x314840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31483Cu;
            // 0x314840: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314844u; }
        if (ctx->pc != 0x314844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314844u; }
        if (ctx->pc != 0x314844u) { return; }
    }
    ctx->pc = 0x314844u;
label_314844:
    // 0x314844: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314848: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x314848u;
    SET_GPR_U32(ctx, 31, 0x314850u);
    ctx->pc = 0x31484Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314848u;
            // 0x31484c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314850u; }
        if (ctx->pc != 0x314850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314850u; }
        if (ctx->pc != 0x314850u) { return; }
    }
    ctx->pc = 0x314850u;
label_314850:
    // 0x314850: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314854: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x314854u;
    SET_GPR_U32(ctx, 31, 0x31485Cu);
    ctx->pc = 0x314858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314854u;
            // 0x314858: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31485Cu; }
        if (ctx->pc != 0x31485Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31485Cu; }
        if (ctx->pc != 0x31485Cu) { return; }
    }
    ctx->pc = 0x31485Cu;
label_31485c:
    // 0x31485c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31485cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314860: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x314860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x314864: 0x24060181  addiu       $a2, $zero, 0x181
    ctx->pc = 0x314864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x314868: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x314868u;
    SET_GPR_U32(ctx, 31, 0x314870u);
    ctx->pc = 0x31486Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314868u;
            // 0x31486c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314870u; }
        if (ctx->pc != 0x314870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314870u; }
        if (ctx->pc != 0x314870u) { return; }
    }
    ctx->pc = 0x314870u;
label_314870:
    // 0x314870: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314874: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x314874u;
    SET_GPR_U32(ctx, 31, 0x31487Cu);
    ctx->pc = 0x314878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314874u;
            // 0x314878: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31487Cu; }
        if (ctx->pc != 0x31487Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31487Cu; }
        if (ctx->pc != 0x31487Cu) { return; }
    }
    ctx->pc = 0x31487Cu;
label_31487c:
    // 0x31487c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314880: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x314880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x314884: 0x24060187  addiu       $a2, $zero, 0x187
    ctx->pc = 0x314884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 391));
    // 0x314888: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x314888u;
    SET_GPR_U32(ctx, 31, 0x314890u);
    ctx->pc = 0x31488Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314888u;
            // 0x31488c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314890u; }
        if (ctx->pc != 0x314890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314890u; }
        if (ctx->pc != 0x314890u) { return; }
    }
    ctx->pc = 0x314890u;
label_314890:
    // 0x314890: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314894: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x314894u;
    SET_GPR_U32(ctx, 31, 0x31489Cu);
    ctx->pc = 0x314898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314894u;
            // 0x314898: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31489Cu; }
        if (ctx->pc != 0x31489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31489Cu; }
        if (ctx->pc != 0x31489Cu) { return; }
    }
    ctx->pc = 0x31489Cu;
label_31489c:
    // 0x31489c: 0x3c02432d  lui         $v0, 0x432D
    ctx->pc = 0x31489cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17197 << 16));
    // 0x3148a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3148a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3148a4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x3148A4u;
    SET_GPR_U32(ctx, 31, 0x3148ACu);
    ctx->pc = 0x3148A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3148A4u;
            // 0x3148a8: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148ACu; }
        if (ctx->pc != 0x3148ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148ACu; }
        if (ctx->pc != 0x3148ACu) { return; }
    }
    ctx->pc = 0x3148ACu;
label_3148ac:
    // 0x3148ac: 0x2451004f  addiu       $s1, $v0, 0x4F
    ctx->pc = 0x3148acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 79));
    // 0x3148b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3148b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3148b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3148b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3148b8: 0x24060181  addiu       $a2, $zero, 0x181
    ctx->pc = 0x3148b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x3148bc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x3148BCu;
    SET_GPR_U32(ctx, 31, 0x3148C4u);
    ctx->pc = 0x3148C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3148BCu;
            // 0x3148c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148C4u; }
        if (ctx->pc != 0x3148C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148C4u; }
        if (ctx->pc != 0x3148C4u) { return; }
    }
    ctx->pc = 0x3148C4u;
label_3148c4:
    // 0x3148c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3148c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3148c8: 0xc04d33c  jal         func_134CF0
    ctx->pc = 0x3148C8u;
    SET_GPR_U32(ctx, 31, 0x3148D0u);
    ctx->pc = 0x3148CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3148C8u;
            // 0x3148cc: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134CF0u;
    if (runtime->hasFunction(0x134CF0u)) {
        auto targetFn = runtime->lookupFunction(0x134CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148D0u; }
        if (ctx->pc != 0x3148D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFPf_0x134cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148D0u; }
        if (ctx->pc != 0x3148D0u) { return; }
    }
    ctx->pc = 0x3148D0u;
label_3148d0:
    // 0x3148d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3148d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3148d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3148d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3148d8: 0x24060187  addiu       $a2, $zero, 0x187
    ctx->pc = 0x3148d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 391));
    // 0x3148dc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x3148DCu;
    SET_GPR_U32(ctx, 31, 0x3148E4u);
    ctx->pc = 0x3148E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3148DCu;
            // 0x3148e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148E4u; }
        if (ctx->pc != 0x3148E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148E4u; }
        if (ctx->pc != 0x3148E4u) { return; }
    }
    ctx->pc = 0x3148E4u;
label_3148e4:
    // 0x3148e4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x3148E4u;
    SET_GPR_U32(ctx, 31, 0x3148ECu);
    ctx->pc = 0x3148E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3148E4u;
            // 0x3148e8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148ECu; }
        if (ctx->pc != 0x3148ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148ECu; }
        if (ctx->pc != 0x3148ECu) { return; }
    }
    ctx->pc = 0x3148ECu;
label_3148ec:
    // 0x3148ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3148ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3148f0: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x3148F0u;
    SET_GPR_U32(ctx, 31, 0x3148F8u);
    ctx->pc = 0x3148F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3148F0u;
            // 0x3148f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148F8u; }
        if (ctx->pc != 0x3148F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3148F8u; }
        if (ctx->pc != 0x3148F8u) { return; }
    }
    ctx->pc = 0x3148F8u;
label_3148f8:
    // 0x3148f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3148f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3148fc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x3148FCu;
    SET_GPR_U32(ctx, 31, 0x314904u);
    ctx->pc = 0x314900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3148FCu;
            // 0x314900: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314904u; }
        if (ctx->pc != 0x314904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314904u; }
        if (ctx->pc != 0x314904u) { return; }
    }
    ctx->pc = 0x314904u;
label_314904:
    // 0x314904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x314904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314908: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x314908u;
    SET_GPR_U32(ctx, 31, 0x314910u);
    ctx->pc = 0x31490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314908u;
            // 0x31490c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314910u; }
        if (ctx->pc != 0x314910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314910u; }
        if (ctx->pc != 0x314910u) { return; }
    }
    ctx->pc = 0x314910u;
label_314910:
    // 0x314910: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x314910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x314914: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314918: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x314918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31491c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x31491cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314920: 0xc04d320  jal         func_134C80
    ctx->pc = 0x314920u;
    SET_GPR_U32(ctx, 31, 0x314928u);
    ctx->pc = 0x314924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314920u;
            // 0x314924: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314928u; }
        if (ctx->pc != 0x314928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314928u; }
        if (ctx->pc != 0x314928u) { return; }
    }
    ctx->pc = 0x314928u;
label_314928:
    // 0x314928: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31492c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31492cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314930: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x314930u;
    SET_GPR_U32(ctx, 31, 0x314938u);
    ctx->pc = 0x314934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314930u;
            // 0x314934: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314938u; }
        if (ctx->pc != 0x314938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314938u; }
        if (ctx->pc != 0x314938u) { return; }
    }
    ctx->pc = 0x314938u;
label_314938:
    // 0x314938: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x314938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31493c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x31493cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x314940: 0x24060162  addiu       $a2, $zero, 0x162
    ctx->pc = 0x314940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 354));
    // 0x314944: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x314944u;
    SET_GPR_U32(ctx, 31, 0x31494Cu);
    ctx->pc = 0x314948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314944u;
            // 0x314948: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31494Cu; }
        if (ctx->pc != 0x31494Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31494Cu; }
        if (ctx->pc != 0x31494Cu) { return; }
    }
    ctx->pc = 0x31494Cu;
label_31494c:
    // 0x31494c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314950: 0x240500e8  addiu       $a1, $zero, 0xE8
    ctx->pc = 0x314950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x314954: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x314954u;
    SET_GPR_U32(ctx, 31, 0x31495Cu);
    ctx->pc = 0x314958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314954u;
            // 0x314958: 0x2406005a  addiu       $a2, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31495Cu; }
        if (ctx->pc != 0x31495Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31495Cu; }
        if (ctx->pc != 0x31495Cu) { return; }
    }
    ctx->pc = 0x31495Cu;
label_31495c:
    // 0x31495c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x314960: 0x24050108  addiu       $a1, $zero, 0x108
    ctx->pc = 0x314960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x314964: 0x24060194  addiu       $a2, $zero, 0x194
    ctx->pc = 0x314964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
    // 0x314968: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x314968u;
    SET_GPR_U32(ctx, 31, 0x314970u);
    ctx->pc = 0x31496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314968u;
            // 0x31496c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314970u; }
        if (ctx->pc != 0x314970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314970u; }
        if (ctx->pc != 0x314970u) { return; }
    }
    ctx->pc = 0x314970u;
label_314970:
    // 0x314970: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x314970u;
    SET_GPR_U32(ctx, 31, 0x314978u);
    ctx->pc = 0x314974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314970u;
            // 0x314974: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314978u; }
        if (ctx->pc != 0x314978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314978u; }
        if (ctx->pc != 0x314978u) { return; }
    }
    ctx->pc = 0x314978u;
label_314978:
    // 0x314978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31497c:
    // 0x31497c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31497cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314980: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x314980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x314984: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x314984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314988: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31498c: 0x3e00008  jr          $ra
    ctx->pc = 0x31498Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31498Cu;
            // 0x314990: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x314994u;
}
