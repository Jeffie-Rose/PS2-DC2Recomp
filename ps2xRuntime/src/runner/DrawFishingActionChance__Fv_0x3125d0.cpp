#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFishingActionChance__Fv
// Address: 0x3125d0 - 0x3128d8
void DrawFishingActionChance__Fv_0x3125d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFishingActionChance__Fv_0x3125d0");
#endif

    switch (ctx->pc) {
        case 0x312614u: goto label_312614;
        case 0x31262cu: goto label_31262c;
        case 0x312638u: goto label_312638;
        case 0x312660u: goto label_312660;
        case 0x312670u: goto label_312670;
        case 0x31267cu: goto label_31267c;
        case 0x312688u: goto label_312688;
        case 0x312694u: goto label_312694;
        case 0x3126a0u: goto label_3126a0;
        case 0x3126c4u: goto label_3126c4;
        case 0x3126f0u: goto label_3126f0;
        case 0x312700u: goto label_312700;
        case 0x312728u: goto label_312728;
        case 0x31279cu: goto label_31279c;
        case 0x3127a8u: goto label_3127a8;
        case 0x3127b4u: goto label_3127b4;
        case 0x3127c0u: goto label_3127c0;
        case 0x3127ccu: goto label_3127cc;
        case 0x3127e4u: goto label_3127e4;
        case 0x3127f8u: goto label_3127f8;
        case 0x312804u: goto label_312804;
        case 0x312838u: goto label_312838;
        case 0x312844u: goto label_312844;
        case 0x312854u: goto label_312854;
        case 0x312860u: goto label_312860;
        case 0x312894u: goto label_312894;
        case 0x3128a0u: goto label_3128a0;
        case 0x3128b0u: goto label_3128b0;
        case 0x3128bcu: goto label_3128bc;
        case 0x3128c8u: goto label_3128c8;
        default: break;
    }

    ctx->pc = 0x3125d0u;

    // 0x3125d0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x3125d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x3125d4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3125d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3125d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3125d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3125dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3125dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3125e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3125e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3125e4: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x3125e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
    // 0x3125e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3125e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3125ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3125ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3125f0: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x3125f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x3125f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3125f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3125f8: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x3125f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x3125fc: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3125fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x312600: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x312600u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x312604: 0x2442dfb0  addiu       $v0, $v0, -0x2050
    ctx->pc = 0x312604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
    // 0x312608: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x312608u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31260c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x31260Cu;
    SET_GPR_U32(ctx, 31, 0x312614u);
    ctx->pc = 0x312610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31260Cu;
            // 0x312610: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312614u; }
        if (ctx->pc != 0x312614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312614u; }
        if (ctx->pc != 0x312614u) { return; }
    }
    ctx->pc = 0x312614u;
label_312614:
    // 0x312614: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x312614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x312618: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x312618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31261c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31261cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x312620: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x312620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x312624: 0xc041c4a  jal         func_107128
    ctx->pc = 0x312624u;
    SET_GPR_U32(ctx, 31, 0x31262Cu);
    ctx->pc = 0x312628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312624u;
            // 0x312628: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31262Cu; }
        if (ctx->pc != 0x31262Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31262Cu; }
        if (ctx->pc != 0x31262Cu) { return; }
    }
    ctx->pc = 0x31262Cu;
label_31262c:
    // 0x31262c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31262cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x312630: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x312630u;
    SET_GPR_U32(ctx, 31, 0x312638u);
    ctx->pc = 0x312634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312630u;
            // 0x312634: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312638u; }
        if (ctx->pc != 0x312638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312638u; }
        if (ctx->pc != 0x312638u) { return; }
    }
    ctx->pc = 0x312638u;
label_312638:
    // 0x312638: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x312638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x31263c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x31263cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x312640: 0x2442ed60  addiu       $v0, $v0, -0x12A0
    ctx->pc = 0x312640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x312644: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312648: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x312648u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31264c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31264cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x312650: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x312650u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x312654: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x312654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x312658: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x312658u;
    SET_GPR_U32(ctx, 31, 0x312660u);
    ctx->pc = 0x31265Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312658u;
            // 0x31265c: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312660u; }
        if (ctx->pc != 0x312660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312660u; }
        if (ctx->pc != 0x312660u) { return; }
    }
    ctx->pc = 0x312660u;
label_312660:
    // 0x312660: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312668: 0xc04d104  jal         func_134410
    ctx->pc = 0x312668u;
    SET_GPR_U32(ctx, 31, 0x312670u);
    ctx->pc = 0x31266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312668u;
            // 0x31266c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312670u; }
        if (ctx->pc != 0x312670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312670u; }
        if (ctx->pc != 0x312670u) { return; }
    }
    ctx->pc = 0x312670u;
label_312670:
    // 0x312670: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312674: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x312674u;
    SET_GPR_U32(ctx, 31, 0x31267Cu);
    ctx->pc = 0x312678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312674u;
            // 0x312678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31267Cu; }
        if (ctx->pc != 0x31267Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31267Cu; }
        if (ctx->pc != 0x31267Cu) { return; }
    }
    ctx->pc = 0x31267Cu;
label_31267c:
    // 0x31267c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31267cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312680: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x312680u;
    SET_GPR_U32(ctx, 31, 0x312688u);
    ctx->pc = 0x312684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312680u;
            // 0x312684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312688u; }
        if (ctx->pc != 0x312688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312688u; }
        if (ctx->pc != 0x312688u) { return; }
    }
    ctx->pc = 0x312688u;
label_312688:
    // 0x312688: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31268c: 0xc04d424  jal         func_135090
    ctx->pc = 0x31268Cu;
    SET_GPR_U32(ctx, 31, 0x312694u);
    ctx->pc = 0x312690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31268Cu;
            // 0x312690: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312694u; }
        if (ctx->pc != 0x312694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312694u; }
        if (ctx->pc != 0x312694u) { return; }
    }
    ctx->pc = 0x312694u;
label_312694:
    // 0x312694: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312698: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x312698u;
    SET_GPR_U32(ctx, 31, 0x3126A0u);
    ctx->pc = 0x31269Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312698u;
            // 0x31269c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3126A0u; }
        if (ctx->pc != 0x3126A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3126A0u; }
        if (ctx->pc != 0x3126A0u) { return; }
    }
    ctx->pc = 0x3126A0u;
label_3126a0:
    // 0x3126a0: 0x8f83a25c  lw          $v1, -0x5DA4($gp)
    ctx->pc = 0x3126a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943324)));
    // 0x3126a4: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x3126A4u;
    {
        const bool branch_taken_0x3126a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3126a4) {
            ctx->pc = 0x3128C8u;
            goto label_3128c8;
        }
    }
    ctx->pc = 0x3126ACu;
    // 0x3126ac: 0x8f83a27c  lw          $v1, -0x5D84($gp)
    ctx->pc = 0x3126acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943356)));
    // 0x3126b0: 0x18600085  blez        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x3126B0u;
    {
        const bool branch_taken_0x3126b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3126B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3126B0u;
            // 0x3126b4: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126b0) {
            ctx->pc = 0x3128C8u;
            goto label_3128c8;
        }
    }
    ctx->pc = 0x3126B8u;
    // 0x3126b8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3126b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3126bc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x3126BCu;
    SET_GPR_U32(ctx, 31, 0x3126C4u);
    ctx->pc = 0x3126C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3126BCu;
            // 0x3126c0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3126C4u; }
        if (ctx->pc != 0x3126C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3126C4u; }
        if (ctx->pc != 0x3126C4u) { return; }
    }
    ctx->pc = 0x3126C4u;
label_3126c4:
    // 0x3126c4: 0xc782a244  lwc1        $f2, -0x5DBC($gp)
    ctx->pc = 0x3126c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3126c8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x3126c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3126cc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3126ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3126d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3126d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3126d4: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x3126d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3126d8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3126d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3126dc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3126dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3126e0: 0x0  nop
    ctx->pc = 0x3126e0u;
    // NOP
    // 0x3126e4: 0x0  nop
    ctx->pc = 0x3126e4u;
    // NOP
    // 0x3126e8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3126E8u;
    SET_GPR_U32(ctx, 31, 0x3126F0u);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3126F0u; }
        if (ctx->pc != 0x3126F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3126F0u; }
        if (ctx->pc != 0x3126F0u) { return; }
    }
    ctx->pc = 0x3126F0u;
label_3126f0:
    // 0x3126f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3126f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3126f4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3126f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3126f8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x3126F8u;
    SET_GPR_U32(ctx, 31, 0x312700u);
    ctx->pc = 0x3126FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3126F8u;
            // 0x3126fc: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312700u; }
        if (ctx->pc != 0x312700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312700u; }
        if (ctx->pc != 0x312700u) { return; }
    }
    ctx->pc = 0x312700u;
label_312700:
    // 0x312700: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x312700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x312704: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x312704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x312708: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x312708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31270c: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x31270cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x312710: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x312710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x312714: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x312714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x312718: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x312718u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x31271c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x31271cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312720: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x312720u;
    SET_GPR_U32(ctx, 31, 0x312728u);
    ctx->pc = 0x312724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312720u;
            // 0x312724: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312728u; }
        if (ctx->pc != 0x312728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312728u; }
        if (ctx->pc != 0x312728u) { return; }
    }
    ctx->pc = 0x312728u;
label_312728:
    // 0x312728: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x312728u;
    {
        const bool branch_taken_0x312728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312728) {
            ctx->pc = 0x3128C8u;
            goto label_3128c8;
        }
    }
    ctx->pc = 0x312730u;
    // 0x312730: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x312730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x312734: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x312734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x312738: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x312738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31273c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31273Cu;
    {
        const bool branch_taken_0x31273c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x312740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31273Cu;
            // 0x312740: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31273c) {
            ctx->pc = 0x31274Cu;
            goto label_31274c;
        }
    }
    ctx->pc = 0x312744u;
    // 0x312744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x312744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x312748: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x312748u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_31274c:
    // 0x31274c: 0x27a70184  addiu       $a3, $sp, 0x184
    ctx->pc = 0x31274cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x312750: 0x27a60194  addiu       $a2, $sp, 0x194
    ctx->pc = 0x312750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x312754: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x312754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x312758: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x312758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31275c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x312760: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312760u;
    {
        const bool branch_taken_0x312760 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x312764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312760u;
            // 0x312764: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312760) {
            ctx->pc = 0x312770u;
            goto label_312770;
        }
    }
    ctx->pc = 0x312768u;
    // 0x312768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x312768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31276c: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x31276cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
label_312770:
    // 0x312770: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x312770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x312774: 0x2483ff00  addiu       $v1, $a0, -0x100
    ctx->pc = 0x312774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    // 0x312778: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x312778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x31277c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31277cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312780: 0x24a200e0  addiu       $v0, $a1, 0xE0
    ctx->pc = 0x312780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x312784: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x312784u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x312788: 0x24a2ff20  addiu       $v0, $a1, -0xE0
    ctx->pc = 0x312788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x31278c: 0xafa30180  sw          $v1, 0x180($sp)
    ctx->pc = 0x31278cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 3));
    // 0x312790: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x312790u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x312794: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x312794u;
    SET_GPR_U32(ctx, 31, 0x31279Cu);
    ctx->pc = 0x312798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312794u;
            // 0x312798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31279Cu; }
        if (ctx->pc != 0x31279Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31279Cu; }
        if (ctx->pc != 0x31279Cu) { return; }
    }
    ctx->pc = 0x31279Cu;
label_31279c:
    // 0x31279c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31279cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3127a0: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x3127A0u;
    SET_GPR_U32(ctx, 31, 0x3127A8u);
    ctx->pc = 0x3127A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3127A0u;
            // 0x3127a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127A8u; }
        if (ctx->pc != 0x3127A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127A8u; }
        if (ctx->pc != 0x3127A8u) { return; }
    }
    ctx->pc = 0x3127A8u;
label_3127a8:
    // 0x3127a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3127a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3127ac: 0xc04d44c  jal         func_135130
    ctx->pc = 0x3127ACu;
    SET_GPR_U32(ctx, 31, 0x3127B4u);
    ctx->pc = 0x3127B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3127ACu;
            // 0x3127b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127B4u; }
        if (ctx->pc != 0x3127B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127B4u; }
        if (ctx->pc != 0x3127B4u) { return; }
    }
    ctx->pc = 0x3127B4u;
label_3127b4:
    // 0x3127b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3127b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3127b8: 0xc04d424  jal         func_135090
    ctx->pc = 0x3127B8u;
    SET_GPR_U32(ctx, 31, 0x3127C0u);
    ctx->pc = 0x3127BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3127B8u;
            // 0x3127bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127C0u; }
        if (ctx->pc != 0x3127C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127C0u; }
        if (ctx->pc != 0x3127C0u) { return; }
    }
    ctx->pc = 0x3127C0u;
label_3127c0:
    // 0x3127c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3127c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3127c4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x3127C4u;
    SET_GPR_U32(ctx, 31, 0x3127CCu);
    ctx->pc = 0x3127C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3127C4u;
            // 0x3127c8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127CCu; }
        if (ctx->pc != 0x3127CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127CCu; }
        if (ctx->pc != 0x3127CCu) { return; }
    }
    ctx->pc = 0x3127CCu;
label_3127cc:
    // 0x3127cc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x3127ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3127d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3127d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3127d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3127d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3127d8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3127d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3127dc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x3127DCu;
    SET_GPR_U32(ctx, 31, 0x3127E4u);
    ctx->pc = 0x3127E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3127DCu;
            // 0x3127e0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127E4u; }
        if (ctx->pc != 0x3127E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127E4u; }
        if (ctx->pc != 0x3127E4u) { return; }
    }
    ctx->pc = 0x3127E4u;
label_3127e4:
    // 0x3127e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3127e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x3127e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3127e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3127ec: 0x24a52680  addiu       $a1, $a1, 0x2680
    ctx->pc = 0x3127ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9856));
    // 0x3127f0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x3127F0u;
    SET_GPR_U32(ctx, 31, 0x3127F8u);
    ctx->pc = 0x3127F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3127F0u;
            // 0x3127f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127F8u; }
        if (ctx->pc != 0x3127F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3127F8u; }
        if (ctx->pc != 0x3127F8u) { return; }
    }
    ctx->pc = 0x3127F8u;
label_3127f8:
    // 0x3127f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3127f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3127fc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x3127FCu;
    SET_GPR_U32(ctx, 31, 0x312804u);
    ctx->pc = 0x312800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3127FCu;
            // 0x312800: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312804u; }
        if (ctx->pc != 0x312804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312804u; }
        if (ctx->pc != 0x312804u) { return; }
    }
    ctx->pc = 0x312804u;
label_312804:
    // 0x312804: 0x8f82a280  lw          $v0, -0x5D80($gp)
    ctx->pc = 0x312804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943360)));
    // 0x312808: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x312808u;
    {
        const bool branch_taken_0x312808 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x312808) {
            ctx->pc = 0x312860u;
            goto label_312860;
        }
    }
    ctx->pc = 0x312810u;
    // 0x312810: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x312810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x312814: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312818: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x312818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x31281c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x31281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x312820: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x312820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x312824: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x312824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x312828: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x312828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x31282c: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x31282cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x312830: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x312830u;
    SET_GPR_U32(ctx, 31, 0x312838u);
    ctx->pc = 0x312834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312830u;
            // 0x312834: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312838u; }
        if (ctx->pc != 0x312838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312838u; }
        if (ctx->pc != 0x312838u) { return; }
    }
    ctx->pc = 0x312838u;
label_312838:
    // 0x312838: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31283c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x31283Cu;
    SET_GPR_U32(ctx, 31, 0x312844u);
    ctx->pc = 0x312840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31283Cu;
            // 0x312840: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312844u; }
        if (ctx->pc != 0x312844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312844u; }
        if (ctx->pc != 0x312844u) { return; }
    }
    ctx->pc = 0x312844u;
label_312844:
    // 0x312844: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312848: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x312848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x31284c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x31284Cu;
    SET_GPR_U32(ctx, 31, 0x312854u);
    ctx->pc = 0x312850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31284Cu;
            // 0x312850: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312854u; }
        if (ctx->pc != 0x312854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312854u; }
        if (ctx->pc != 0x312854u) { return; }
    }
    ctx->pc = 0x312854u;
label_312854:
    // 0x312854: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312858: 0xc04d318  jal         func_134C60
    ctx->pc = 0x312858u;
    SET_GPR_U32(ctx, 31, 0x312860u);
    ctx->pc = 0x31285Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312858u;
            // 0x31285c: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312860u; }
        if (ctx->pc != 0x312860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312860u; }
        if (ctx->pc != 0x312860u) { return; }
    }
    ctx->pc = 0x312860u;
label_312860:
    // 0x312860: 0x8f82a280  lw          $v0, -0x5D80($gp)
    ctx->pc = 0x312860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943360)));
    // 0x312864: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x312864u;
    {
        const bool branch_taken_0x312864 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x312868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312864u;
            // 0x312868: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312864) {
            ctx->pc = 0x3128C0u;
            goto label_3128c0;
        }
    }
    ctx->pc = 0x31286Cu;
    // 0x31286c: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x31286cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x312870: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312874: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x312874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x312878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31287c: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x31287cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x312880: 0x2463fe80  addiu       $v1, $v1, -0x180
    ctx->pc = 0x312880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966912));
    // 0x312884: 0x2442fe80  addiu       $v0, $v0, -0x180
    ctx->pc = 0x312884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966912));
    // 0x312888: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x312888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
    // 0x31288c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x31288Cu;
    SET_GPR_U32(ctx, 31, 0x312894u);
    ctx->pc = 0x312890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31288Cu;
            // 0x312890: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312894u; }
        if (ctx->pc != 0x312894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312894u; }
        if (ctx->pc != 0x312894u) { return; }
    }
    ctx->pc = 0x312894u;
label_312894:
    // 0x312894: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312898: 0xc04d318  jal         func_134C60
    ctx->pc = 0x312898u;
    SET_GPR_U32(ctx, 31, 0x3128A0u);
    ctx->pc = 0x31289Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312898u;
            // 0x31289c: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128A0u; }
        if (ctx->pc != 0x3128A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128A0u; }
        if (ctx->pc != 0x3128A0u) { return; }
    }
    ctx->pc = 0x3128A0u;
label_3128a0:
    // 0x3128a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3128a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3128a4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x3128a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x3128a8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x3128A8u;
    SET_GPR_U32(ctx, 31, 0x3128B0u);
    ctx->pc = 0x3128ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3128A8u;
            // 0x3128ac: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128B0u; }
        if (ctx->pc != 0x3128B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128B0u; }
        if (ctx->pc != 0x3128B0u) { return; }
    }
    ctx->pc = 0x3128B0u;
label_3128b0:
    // 0x3128b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3128b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3128b4: 0xc04d318  jal         func_134C60
    ctx->pc = 0x3128B4u;
    SET_GPR_U32(ctx, 31, 0x3128BCu);
    ctx->pc = 0x3128B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3128B4u;
            // 0x3128b8: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128BCu; }
        if (ctx->pc != 0x3128BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128BCu; }
        if (ctx->pc != 0x3128BCu) { return; }
    }
    ctx->pc = 0x3128BCu;
label_3128bc:
    // 0x3128bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3128bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3128c0:
    // 0x3128c0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x3128C0u;
    SET_GPR_U32(ctx, 31, 0x3128C8u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128C8u; }
        if (ctx->pc != 0x3128C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3128C8u; }
        if (ctx->pc != 0x3128C8u) { return; }
    }
    ctx->pc = 0x3128C8u;
label_3128c8:
    // 0x3128c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3128c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3128cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3128ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3128d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3128D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3128D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3128D0u;
            // 0x3128d4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3128D8u;
}
