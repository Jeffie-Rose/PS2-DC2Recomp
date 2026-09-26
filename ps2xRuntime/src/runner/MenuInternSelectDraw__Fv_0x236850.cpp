#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInternSelectDraw__Fv
// Address: 0x236850 - 0x236a10
void MenuInternSelectDraw__Fv_0x236850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInternSelectDraw__Fv_0x236850");
#endif

    switch (ctx->pc) {
        case 0x236864u: goto label_236864;
        case 0x236890u: goto label_236890;
        case 0x236898u: goto label_236898;
        case 0x2368a0u: goto label_2368a0;
        case 0x2368e8u: goto label_2368e8;
        case 0x2368f0u: goto label_2368f0;
        case 0x2368fcu: goto label_2368fc;
        case 0x23691cu: goto label_23691c;
        case 0x236938u: goto label_236938;
        case 0x236954u: goto label_236954;
        case 0x236970u: goto label_236970;
        case 0x236988u: goto label_236988;
        case 0x2369a0u: goto label_2369a0;
        case 0x2369b4u: goto label_2369b4;
        case 0x2369e8u: goto label_2369e8;
        case 0x236a00u: goto label_236a00;
        default: break;
    }

    ctx->pc = 0x236850u;

    // 0x236850: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x236850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x236854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x236858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x236858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23685c: 0xc08ad0c  jal         func_22B430
    ctx->pc = 0x23685Cu;
    SET_GPR_U32(ctx, 31, 0x236864u);
    ctx->pc = 0x236860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23685Cu;
            // 0x236860: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B430u;
    if (runtime->hasFunction(0x22B430u)) {
        auto targetFn = runtime->lookupFunction(0x22B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236864u; }
        if (ctx->pc != 0x236864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormDraw__14CPosDataManageFv_0x22b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236864u; }
        if (ctx->pc != 0x236864u) { return; }
    }
    ctx->pc = 0x236864u;
label_236864:
    // 0x236864: 0x838294d4  lb          $v0, -0x6B2C($gp)
    ctx->pc = 0x236864u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939860)));
    // 0x236868: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x236868u;
    {
        const bool branch_taken_0x236868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236868) {
            ctx->pc = 0x236898u;
            goto label_236898;
        }
    }
    ctx->pc = 0x236870u;
    // 0x236870: 0x8f8294d0  lw          $v0, -0x6B30($gp)
    ctx->pc = 0x236870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939856)));
    // 0x236874: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x236874u;
    {
        const bool branch_taken_0x236874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236874u;
            // 0x236878: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236874) {
            ctx->pc = 0x236898u;
            goto label_236898;
        }
    }
    ctx->pc = 0x23687Cu;
    // 0x23687c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x23687cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x236880: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x236880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x236884: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x236884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x236888: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x236888u;
    SET_GPR_U32(ctx, 31, 0x236890u);
    ctx->pc = 0x23688Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236888u;
            // 0x23688c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236890u; }
        if (ctx->pc != 0x236890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236890u; }
        if (ctx->pc != 0x236890u) { return; }
    }
    ctx->pc = 0x236890u;
label_236890:
    // 0x236890: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x236890u;
    SET_GPR_U32(ctx, 31, 0x236898u);
    ctx->pc = 0x236894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236890u;
            // 0x236894: 0x8f8494d0  lw          $a0, -0x6B30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236898u; }
        if (ctx->pc != 0x236898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236898u; }
        if (ctx->pc != 0x236898u) { return; }
    }
    ctx->pc = 0x236898u;
label_236898:
    // 0x236898: 0xc08d36c  jal         func_234DB0
    ctx->pc = 0x236898u;
    SET_GPR_U32(ctx, 31, 0x2368A0u);
    ctx->pc = 0x234DB0u;
    if (runtime->hasFunction(0x234DB0u)) {
        auto targetFn = runtime->lookupFunction(0x234DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368A0u; }
        if (ctx->pc != 0x2368A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuTopic__Fv_0x234db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368A0u; }
        if (ctx->pc != 0x2368A0u) { return; }
    }
    ctx->pc = 0x2368A0u;
label_2368a0:
    // 0x2368a0: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x2368a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x2368a4: 0x10600056  beqz        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x2368A4u;
    {
        const bool branch_taken_0x2368a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2368a4) {
            ctx->pc = 0x236A00u;
            goto label_236a00;
        }
    }
    ctx->pc = 0x2368ACu;
    // 0x2368ac: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2368acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2368b0: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x2368b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2368b4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2368b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2368b8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2368b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2368bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2368bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2368c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368c4: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x2368c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x2368c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2368c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2368cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2368ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2368d0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2368d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2368d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2368d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2368d8: 0x2462fe98  addiu       $v0, $v1, -0x168
    ctx->pc = 0x2368d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966936));
    // 0x2368dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2368dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2368e0: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x2368E0u;
    SET_GPR_U32(ctx, 31, 0x2368E8u);
    ctx->pc = 0x2368E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2368E0u;
            // 0x2368e4: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368E8u; }
        if (ctx->pc != 0x2368E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368E8u; }
        if (ctx->pc != 0x2368E8u) { return; }
    }
    ctx->pc = 0x2368E8u;
label_2368e8:
    // 0x2368e8: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x2368E8u;
    SET_GPR_U32(ctx, 31, 0x2368F0u);
    ctx->pc = 0x2368ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2368E8u;
            // 0x2368ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368F0u; }
        if (ctx->pc != 0x2368F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368F0u; }
        if (ctx->pc != 0x2368F0u) { return; }
    }
    ctx->pc = 0x2368F0u;
label_2368f0:
    // 0x2368f0: 0x8f8494a8  lw          $a0, -0x6B58($gp)
    ctx->pc = 0x2368f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
    // 0x2368f4: 0xc0bda00  jal         func_2F6800
    ctx->pc = 0x2368F4u;
    SET_GPR_U32(ctx, 31, 0x2368FCu);
    ctx->pc = 0x2368F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2368F4u;
            // 0x2368f8: 0xa3a000d0  sb          $zero, 0xD0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6800u;
    if (runtime->hasFunction(0x2F6800u)) {
        auto targetFn = runtime->lookupFunction(0x2F6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368FCu; }
        if (ctx->pc != 0x2368FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitCtrl__9CSaveDataFv_0x2f6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2368FCu; }
        if (ctx->pc != 0x2368FCu) { return; }
    }
    ctx->pc = 0x2368FCu;
label_2368fc:
    // 0x2368fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2368fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236900: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x236900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x236904: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236904u;
    {
        const bool branch_taken_0x236904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236904u;
            // 0x236908: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236904) {
            ctx->pc = 0x236920u;
            goto label_236920;
        }
    }
    ctx->pc = 0x23690Cu;
    // 0x23690c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23690cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x236910: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x236910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x236914: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x236914u;
    SET_GPR_U32(ctx, 31, 0x23691Cu);
    ctx->pc = 0x236918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236914u;
            // 0x236918: 0x24a5aa20  addiu       $a1, $a1, -0x55E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23691Cu; }
        if (ctx->pc != 0x23691Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23691Cu; }
        if (ctx->pc != 0x23691Cu) { return; }
    }
    ctx->pc = 0x23691Cu;
label_23691c:
    // 0x23691c: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x23691cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_236920:
    // 0x236920: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236920u;
    {
        const bool branch_taken_0x236920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236920u;
            // 0x236924: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236920) {
            ctx->pc = 0x23693Cu;
            goto label_23693c;
        }
    }
    ctx->pc = 0x236928u;
    // 0x236928: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x236928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23692c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x23692cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x236930: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x236930u;
    SET_GPR_U32(ctx, 31, 0x236938u);
    ctx->pc = 0x236934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236930u;
            // 0x236934: 0x24a5aa30  addiu       $a1, $a1, -0x55D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236938u; }
        if (ctx->pc != 0x236938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236938u; }
        if (ctx->pc != 0x236938u) { return; }
    }
    ctx->pc = 0x236938u;
label_236938:
    // 0x236938: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x236938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_23693c:
    // 0x23693c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23693Cu;
    {
        const bool branch_taken_0x23693c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23693Cu;
            // 0x236940: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23693c) {
            ctx->pc = 0x236958u;
            goto label_236958;
        }
    }
    ctx->pc = 0x236944u;
    // 0x236944: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x236944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x236948: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x236948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x23694c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x23694Cu;
    SET_GPR_U32(ctx, 31, 0x236954u);
    ctx->pc = 0x236950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23694Cu;
            // 0x236950: 0x24a5aa40  addiu       $a1, $a1, -0x55C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236954u; }
        if (ctx->pc != 0x236954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236954u; }
        if (ctx->pc != 0x236954u) { return; }
    }
    ctx->pc = 0x236954u;
label_236954:
    // 0x236954: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x236954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_236958:
    // 0x236958: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236958u;
    {
        const bool branch_taken_0x236958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23695Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236958u;
            // 0x23695c: 0x32020010  andi        $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236958) {
            ctx->pc = 0x236974u;
            goto label_236974;
        }
    }
    ctx->pc = 0x236960u;
    // 0x236960: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x236960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x236964: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x236964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x236968: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x236968u;
    SET_GPR_U32(ctx, 31, 0x236970u);
    ctx->pc = 0x23696Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236968u;
            // 0x23696c: 0x24a5aa50  addiu       $a1, $a1, -0x55B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236970u; }
        if (ctx->pc != 0x236970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236970u; }
        if (ctx->pc != 0x236970u) { return; }
    }
    ctx->pc = 0x236970u;
label_236970:
    // 0x236970: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x236970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_236974:
    // 0x236974: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236974u;
    {
        const bool branch_taken_0x236974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236974u;
            // 0x236978: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236974) {
            ctx->pc = 0x236988u;
            goto label_236988;
        }
    }
    ctx->pc = 0x23697Cu;
    // 0x23697c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x23697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x236980: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x236980u;
    SET_GPR_U32(ctx, 31, 0x236988u);
    ctx->pc = 0x236984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236980u;
            // 0x236984: 0x24a5aa60  addiu       $a1, $a1, -0x55A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236988u; }
        if (ctx->pc != 0x236988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236988u; }
        if (ctx->pc != 0x236988u) { return; }
    }
    ctx->pc = 0x236988u;
label_236988:
    // 0x236988: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x236988u;
    {
        const bool branch_taken_0x236988 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23698Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236988u;
            // 0x23698c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236988) {
            ctx->pc = 0x2369A4u;
            goto label_2369a4;
        }
    }
    ctx->pc = 0x236990u;
    // 0x236990: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x236990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x236994: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x236994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x236998: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x236998u;
    SET_GPR_U32(ctx, 31, 0x2369A0u);
    ctx->pc = 0x23699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x236998u;
            // 0x23699c: 0x24a5aa70  addiu       $a1, $a1, -0x5590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2369A0u; }
        if (ctx->pc != 0x2369A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2369A0u; }
        if (ctx->pc != 0x2369A0u) { return; }
    }
    ctx->pc = 0x2369A0u;
label_2369a0:
    // 0x2369a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2369a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2369a4:
    // 0x2369a4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2369a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2369a8: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x2369a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x2369ac: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2369ACu;
    SET_GPR_U32(ctx, 31, 0x2369B4u);
    ctx->pc = 0x2369B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2369ACu;
            // 0x2369b0: 0x2407003c  addiu       $a3, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2369B4u; }
        if (ctx->pc != 0x2369B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2369B4u; }
        if (ctx->pc != 0x2369B4u) { return; }
    }
    ctx->pc = 0x2369B4u;
label_2369b4:
    // 0x2369b4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2369b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2369b8: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x2369b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x2369bc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2369bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2369c0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2369c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2369c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2369c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2369c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2369c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2369cc: 0x3c03433e  lui         $v1, 0x433E
    ctx->pc = 0x2369ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17214 << 16));
    // 0x2369d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2369d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2369d4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2369d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2369d8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2369d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2369dc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2369dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2369e0: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x2369E0u;
    SET_GPR_U32(ctx, 31, 0x2369E8u);
    ctx->pc = 0x2369E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2369E0u;
            // 0x2369e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2369E8u; }
        if (ctx->pc != 0x2369E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2369E8u; }
        if (ctx->pc != 0x2369E8u) { return; }
    }
    ctx->pc = 0x2369E8u;
label_2369e8:
    // 0x2369e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2369e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2369ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2369ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2369f0: 0x24a5aa90  addiu       $a1, $a1, -0x5570
    ctx->pc = 0x2369f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945424));
    // 0x2369f4: 0x2406012c  addiu       $a2, $zero, 0x12C
    ctx->pc = 0x2369f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2369f8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2369F8u;
    SET_GPR_U32(ctx, 31, 0x236A00u);
    ctx->pc = 0x2369FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2369F8u;
            // 0x2369fc: 0x2407015e  addiu       $a3, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A00u; }
        if (ctx->pc != 0x236A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236A00u; }
        if (ctx->pc != 0x236A00u) { return; }
    }
    ctx->pc = 0x236A00u;
label_236a00:
    // 0x236a00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236a04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x236a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236a08: 0x3e00008  jr          $ra
    ctx->pc = 0x236A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x236A08u;
            // 0x236a0c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x236A10u;
}
