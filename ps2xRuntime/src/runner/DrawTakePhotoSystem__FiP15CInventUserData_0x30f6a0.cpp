#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawTakePhotoSystem__FiP15CInventUserData
// Address: 0x30f6a0 - 0x30f9b0
void DrawTakePhotoSystem__FiP15CInventUserData_0x30f6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawTakePhotoSystem__FiP15CInventUserData_0x30f6a0");
#endif

    switch (ctx->pc) {
        case 0x30f6d0u: goto label_30f6d0;
        case 0x30f6ecu: goto label_30f6ec;
        case 0x30f71cu: goto label_30f71c;
        case 0x30f730u: goto label_30f730;
        case 0x30f750u: goto label_30f750;
        case 0x30f770u: goto label_30f770;
        case 0x30f780u: goto label_30f780;
        case 0x30f790u: goto label_30f790;
        case 0x30f7a4u: goto label_30f7a4;
        case 0x30f7c4u: goto label_30f7c4;
        case 0x30f7ccu: goto label_30f7cc;
        case 0x30f7dcu: goto label_30f7dc;
        case 0x30f7f0u: goto label_30f7f0;
        case 0x30f810u: goto label_30f810;
        case 0x30f818u: goto label_30f818;
        case 0x30f828u: goto label_30f828;
        case 0x30f83cu: goto label_30f83c;
        case 0x30f85cu: goto label_30f85c;
        case 0x30f868u: goto label_30f868;
        case 0x30f87cu: goto label_30f87c;
        case 0x30f8acu: goto label_30f8ac;
        case 0x30f8bcu: goto label_30f8bc;
        case 0x30f8d0u: goto label_30f8d0;
        case 0x30f8f0u: goto label_30f8f0;
        case 0x30f908u: goto label_30f908;
        case 0x30f924u: goto label_30f924;
        case 0x30f954u: goto label_30f954;
        case 0x30f964u: goto label_30f964;
        case 0x30f978u: goto label_30f978;
        case 0x30f998u: goto label_30f998;
        default: break;
    }

    ctx->pc = 0x30f6a0u;

    // 0x30f6a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30f6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30f6a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x30f6a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f6a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30f6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30f6ac: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x30f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x30f6b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30f6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30f6b4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x30f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x30f6b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30f6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30f6bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30f6bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f6c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30f6c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f6c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30f6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30f6c8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x30F6C8u;
    SET_GPR_U32(ctx, 31, 0x30F6D0u);
    ctx->pc = 0x30F6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F6C8u;
            // 0x30f6cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F6D0u; }
        if (ctx->pc != 0x30F6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F6D0u; }
        if (ctx->pc != 0x30F6D0u) { return; }
    }
    ctx->pc = 0x30F6D0u;
label_30f6d0:
    // 0x30f6d0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x30f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30f6d4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f6d8: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f6dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30f6dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f6e0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30f6e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f6e4: 0xc0b5134  jal         func_2D44D0
    ctx->pc = 0x30F6E4u;
    SET_GPR_U32(ctx, 31, 0x30F6ECu);
    ctx->pc = 0x30F6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F6E4u;
            // 0x30f6e8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44D0u;
    if (runtime->hasFunction(0x2D44D0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F6ECu; }
        if (ctx->pc != 0x30F6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFiiii_0x2d44d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F6ECu; }
        if (ctx->pc != 0x30F6ECu) { return; }
    }
    ctx->pc = 0x30F6ECu;
label_30f6ec:
    // 0x30f6ec: 0x8f82a23c  lw          $v0, -0x5DC4($gp)
    ctx->pc = 0x30f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943292)));
    // 0x30f6f0: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x30F6F0u;
    {
        const bool branch_taken_0x30f6f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30F6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F6F0u;
            // 0x30f6f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6f0) {
            ctx->pc = 0x30F778u;
            goto label_30f778;
        }
    }
    ctx->pc = 0x30F6F8u;
    // 0x30f6f8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f6fc: 0x8022dea0  lb          $v0, -0x2160($at)
    ctx->pc = 0x30f6fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958752)));
    // 0x30f700: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x30F700u;
    {
        const bool branch_taken_0x30f700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f700) {
            ctx->pc = 0x30F778u;
            goto label_30f778;
        }
    }
    ctx->pc = 0x30F708u;
    // 0x30f708: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f70c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x30f70cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x30f710: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f714: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30F714u;
    SET_GPR_U32(ctx, 31, 0x30F71Cu);
    ctx->pc = 0x30F718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F714u;
            // 0x30f718: 0x24a5dea0  addiu       $a1, $a1, -0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F71Cu; }
        if (ctx->pc != 0x30F71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F71Cu; }
        if (ctx->pc != 0x30F71Cu) { return; }
    }
    ctx->pc = 0x30F71Cu;
label_30f71c:
    // 0x30f71c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f720: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x30f720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30f724: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f728: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30F728u;
    SET_GPR_U32(ctx, 31, 0x30F730u);
    ctx->pc = 0x30F72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F728u;
            // 0x30f72c: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F730u; }
        if (ctx->pc != 0x30F730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F730u; }
        if (ctx->pc != 0x30F730u) { return; }
    }
    ctx->pc = 0x30F730u;
label_30f730:
    // 0x30f730: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f734: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f738: 0x8c26de84  lw          $a2, -0x217C($at)
    ctx->pc = 0x30f738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958724)));
    // 0x30f73c: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f740: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f744: 0x8c27de88  lw          $a3, -0x2178($at)
    ctx->pc = 0x30f744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958728)));
    // 0x30f748: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30F748u;
    SET_GPR_U32(ctx, 31, 0x30F750u);
    ctx->pc = 0x30F74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F748u;
            // 0x30f74c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F750u; }
        if (ctx->pc != 0x30F750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F750u; }
        if (ctx->pc != 0x30F750u) { return; }
    }
    ctx->pc = 0x30F750u;
label_30f750:
    // 0x30f750: 0x8f82a23c  lw          $v0, -0x5DC4($gp)
    ctx->pc = 0x30f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943292)));
    // 0x30f754: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30f754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30f758: 0xaf82a23c  sw          $v0, -0x5DC4($gp)
    ctx->pc = 0x30f758u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943292), GPR_U32(ctx, 2));
    // 0x30f75c: 0x8f82a23c  lw          $v0, -0x5DC4($gp)
    ctx->pc = 0x30f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943292)));
    // 0x30f760: 0x1c40003f  bgtz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x30F760u;
    {
        const bool branch_taken_0x30f760 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x30F764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F760u;
            // 0x30f764: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f760) {
            ctx->pc = 0x30F860u;
            goto label_30f860;
        }
    }
    ctx->pc = 0x30F768u;
    // 0x30f768: 0xc0c3954  jal         func_30E550
    ctx->pc = 0x30F768u;
    SET_GPR_U32(ctx, 31, 0x30F770u);
    ctx->pc = 0x30E550u;
    if (runtime->hasFunction(0x30E550u)) {
        auto targetFn = runtime->lookupFunction(0x30E550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F770u; }
        if (ctx->pc != 0x30F770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPhotoTitle__Fv_0x30e550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F770u; }
        if (ctx->pc != 0x30F770u) { return; }
    }
    ctx->pc = 0x30F770u;
label_30f770:
    // 0x30f770: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x30F770u;
    {
        const bool branch_taken_0x30f770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f770) {
            ctx->pc = 0x30F85Cu;
            goto label_30f85c;
        }
    }
    ctx->pc = 0x30F778u;
label_30f778:
    // 0x30f778: 0xc0c3930  jal         func_30E4C0
    ctx->pc = 0x30F778u;
    SET_GPR_U32(ctx, 31, 0x30F780u);
    ctx->pc = 0x30E4C0u;
    if (runtime->hasFunction(0x30E4C0u)) {
        auto targetFn = runtime->lookupFunction(0x30E4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F780u; }
        if (ctx->pc != 0x30F780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMesTxt__Fi_0x30e4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F780u; }
        if (ctx->pc != 0x30F780u) { return; }
    }
    ctx->pc = 0x30F780u;
label_30f780:
    // 0x30f780: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30f784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f788: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30F788u;
    SET_GPR_U32(ctx, 31, 0x30F790u);
    ctx->pc = 0x30F78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F788u;
            // 0x30f78c: 0x2484ddf0  addiu       $a0, $a0, -0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F790u; }
        if (ctx->pc != 0x30F790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F790u; }
        if (ctx->pc != 0x30F790u) { return; }
    }
    ctx->pc = 0x30F790u;
label_30f790:
    // 0x30f790: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f794: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x30f794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x30f798: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f79c: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30F79Cu;
    SET_GPR_U32(ctx, 31, 0x30F7A4u);
    ctx->pc = 0x30F7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F79Cu;
            // 0x30f7a0: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7A4u; }
        if (ctx->pc != 0x30F7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7A4u; }
        if (ctx->pc != 0x30F7A4u) { return; }
    }
    ctx->pc = 0x30F7A4u;
label_30f7a4:
    // 0x30f7a4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f7a8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f7ac: 0x8c26de84  lw          $a2, -0x217C($at)
    ctx->pc = 0x30f7acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958724)));
    // 0x30f7b0: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f7b4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f7b8: 0x8c27de88  lw          $a3, -0x2178($at)
    ctx->pc = 0x30f7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958728)));
    // 0x30f7bc: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30F7BCu;
    SET_GPR_U32(ctx, 31, 0x30F7C4u);
    ctx->pc = 0x30F7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F7BCu;
            // 0x30f7c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7C4u; }
        if (ctx->pc != 0x30F7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7C4u; }
        if (ctx->pc != 0x30F7C4u) { return; }
    }
    ctx->pc = 0x30F7C4u;
label_30f7c4:
    // 0x30f7c4: 0xc0c3930  jal         func_30E4C0
    ctx->pc = 0x30F7C4u;
    SET_GPR_U32(ctx, 31, 0x30F7CCu);
    ctx->pc = 0x30F7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F7C4u;
            // 0x30f7c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E4C0u;
    if (runtime->hasFunction(0x30E4C0u)) {
        auto targetFn = runtime->lookupFunction(0x30E4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7CCu; }
        if (ctx->pc != 0x30F7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMesTxt__Fi_0x30e4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7CCu; }
        if (ctx->pc != 0x30F7CCu) { return; }
    }
    ctx->pc = 0x30F7CCu;
label_30f7cc:
    // 0x30f7cc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f7d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30f7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f7d4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30F7D4u;
    SET_GPR_U32(ctx, 31, 0x30F7DCu);
    ctx->pc = 0x30F7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F7D4u;
            // 0x30f7d8: 0x2484ddf0  addiu       $a0, $a0, -0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7DCu; }
        if (ctx->pc != 0x30F7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7DCu; }
        if (ctx->pc != 0x30F7DCu) { return; }
    }
    ctx->pc = 0x30F7DCu;
label_30f7dc:
    // 0x30f7dc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f7e0: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x30f7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x30f7e4: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f7e8: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30F7E8u;
    SET_GPR_U32(ctx, 31, 0x30F7F0u);
    ctx->pc = 0x30F7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F7E8u;
            // 0x30f7ec: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7F0u; }
        if (ctx->pc != 0x30F7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F7F0u; }
        if (ctx->pc != 0x30F7F0u) { return; }
    }
    ctx->pc = 0x30F7F0u;
label_30f7f0:
    // 0x30f7f0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f7f4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f7f8: 0x8c26de84  lw          $a2, -0x217C($at)
    ctx->pc = 0x30f7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958724)));
    // 0x30f7fc: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f800: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f804: 0x8c27de88  lw          $a3, -0x2178($at)
    ctx->pc = 0x30f804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958728)));
    // 0x30f808: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30F808u;
    SET_GPR_U32(ctx, 31, 0x30F810u);
    ctx->pc = 0x30F80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F808u;
            // 0x30f80c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F810u; }
        if (ctx->pc != 0x30F810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F810u; }
        if (ctx->pc != 0x30F810u) { return; }
    }
    ctx->pc = 0x30F810u;
label_30f810:
    // 0x30f810: 0xc0c3930  jal         func_30E4C0
    ctx->pc = 0x30F810u;
    SET_GPR_U32(ctx, 31, 0x30F818u);
    ctx->pc = 0x30F814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F810u;
            // 0x30f814: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E4C0u;
    if (runtime->hasFunction(0x30E4C0u)) {
        auto targetFn = runtime->lookupFunction(0x30E4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F818u; }
        if (ctx->pc != 0x30F818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMesTxt__Fi_0x30e4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F818u; }
        if (ctx->pc != 0x30F818u) { return; }
    }
    ctx->pc = 0x30F818u;
label_30f818:
    // 0x30f818: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f81c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30f81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f820: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30F820u;
    SET_GPR_U32(ctx, 31, 0x30F828u);
    ctx->pc = 0x30F824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F820u;
            // 0x30f824: 0x2484ddf0  addiu       $a0, $a0, -0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F828u; }
        if (ctx->pc != 0x30F828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F828u; }
        if (ctx->pc != 0x30F828u) { return; }
    }
    ctx->pc = 0x30F828u;
label_30f828:
    // 0x30f828: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f82c: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x30f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x30f830: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f834: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30F834u;
    SET_GPR_U32(ctx, 31, 0x30F83Cu);
    ctx->pc = 0x30F838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F834u;
            // 0x30f838: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F83Cu; }
        if (ctx->pc != 0x30F83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F83Cu; }
        if (ctx->pc != 0x30F83Cu) { return; }
    }
    ctx->pc = 0x30F83Cu;
label_30f83c:
    // 0x30f83c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f840: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f844: 0x8c26de84  lw          $a2, -0x217C($at)
    ctx->pc = 0x30f844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958724)));
    // 0x30f848: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f84c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f850: 0x8c27de88  lw          $a3, -0x2178($at)
    ctx->pc = 0x30f850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958728)));
    // 0x30f854: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30F854u;
    SET_GPR_U32(ctx, 31, 0x30F85Cu);
    ctx->pc = 0x30F858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F854u;
            // 0x30f858: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F85Cu; }
        if (ctx->pc != 0x30F85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F85Cu; }
        if (ctx->pc != 0x30F85Cu) { return; }
    }
    ctx->pc = 0x30F85Cu;
label_30f85c:
    // 0x30f85c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30f860:
    // 0x30f860: 0xc0c3930  jal         func_30E4C0
    ctx->pc = 0x30F860u;
    SET_GPR_U32(ctx, 31, 0x30F868u);
    ctx->pc = 0x30E4C0u;
    if (runtime->hasFunction(0x30E4C0u)) {
        auto targetFn = runtime->lookupFunction(0x30E4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F868u; }
        if (ctx->pc != 0x30F868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMesTxt__Fi_0x30e4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F868u; }
        if (ctx->pc != 0x30F868u) { return; }
    }
    ctx->pc = 0x30F868u;
label_30f868:
    // 0x30f868: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f86c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30f86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f870: 0x8c32de94  lw          $s2, -0x216C($at)
    ctx->pc = 0x30f870u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958740)));
    // 0x30f874: 0xc04a422  jal         func_129088
    ctx->pc = 0x30F874u;
    SET_GPR_U32(ctx, 31, 0x30F87Cu);
    ctx->pc = 0x30F878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F874u;
            // 0x30f878: 0x241000f6  addiu       $s0, $zero, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F87Cu; }
        if (ctx->pc != 0x30F87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F87Cu; }
        if (ctx->pc != 0x30F87Cu) { return; }
    }
    ctx->pc = 0x30F87Cu;
label_30f87c:
    // 0x30f87c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x30f87cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30f880: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x30f880u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x30f884: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F884u;
    {
        const bool branch_taken_0x30f884 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30F888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F884u;
            // 0x30f888: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f884) {
            ctx->pc = 0x30F894u;
            goto label_30f894;
        }
    }
    ctx->pc = 0x30F88Cu;
    // 0x30f88c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x30f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30f890: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30f890u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_30f894:
    // 0x30f894: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x30f894u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30f898: 0x8f82a240  lw          $v0, -0x5DC0($gp)
    ctx->pc = 0x30f898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x30f89c: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30F89Cu;
    {
        const bool branch_taken_0x30f89c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30F8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F89Cu;
            // 0x30f8a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f89c) {
            ctx->pc = 0x30F900u;
            goto label_30f900;
        }
    }
    ctx->pc = 0x30F8A4u;
    // 0x30f8a4: 0xc0c3930  jal         func_30E4C0
    ctx->pc = 0x30F8A4u;
    SET_GPR_U32(ctx, 31, 0x30F8ACu);
    ctx->pc = 0x30F8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F8A4u;
            // 0x30f8a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E4C0u;
    if (runtime->hasFunction(0x30E4C0u)) {
        auto targetFn = runtime->lookupFunction(0x30E4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F8ACu; }
        if (ctx->pc != 0x30F8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMesTxt__Fi_0x30e4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F8ACu; }
        if (ctx->pc != 0x30F8ACu) { return; }
    }
    ctx->pc = 0x30F8ACu;
label_30f8ac:
    // 0x30f8ac: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f8b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30f8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f8b4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30F8B4u;
    SET_GPR_U32(ctx, 31, 0x30F8BCu);
    ctx->pc = 0x30F8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F8B4u;
            // 0x30f8b8: 0x2484ddf0  addiu       $a0, $a0, -0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F8BCu; }
        if (ctx->pc != 0x30F8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F8BCu; }
        if (ctx->pc != 0x30F8BCu) { return; }
    }
    ctx->pc = 0x30F8BCu;
label_30f8bc:
    // 0x30f8bc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f8c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30f8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f8c4: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f8c8: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30F8C8u;
    SET_GPR_U32(ctx, 31, 0x30F8D0u);
    ctx->pc = 0x30F8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F8C8u;
            // 0x30f8cc: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F8D0u; }
        if (ctx->pc != 0x30F8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F8D0u; }
        if (ctx->pc != 0x30F8D0u) { return; }
    }
    ctx->pc = 0x30F8D0u;
label_30f8d0:
    // 0x30f8d0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f8d4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f8d8: 0x8c26de84  lw          $a2, -0x217C($at)
    ctx->pc = 0x30f8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958724)));
    // 0x30f8dc: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f8e0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f8e4: 0x8c27de88  lw          $a3, -0x2178($at)
    ctx->pc = 0x30f8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958728)));
    // 0x30f8e8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30F8E8u;
    SET_GPR_U32(ctx, 31, 0x30F8F0u);
    ctx->pc = 0x30F8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F8E8u;
            // 0x30f8ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F8F0u; }
        if (ctx->pc != 0x30F8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F8F0u; }
        if (ctx->pc != 0x30F8F0u) { return; }
    }
    ctx->pc = 0x30F8F0u;
label_30f8f0:
    // 0x30f8f0: 0x8f82a240  lw          $v0, -0x5DC0($gp)
    ctx->pc = 0x30f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943296)));
    // 0x30f8f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30f8f8: 0xaf82a240  sw          $v0, -0x5DC0($gp)
    ctx->pc = 0x30f8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943296), GPR_U32(ctx, 2));
    // 0x30f8fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30f8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30f900:
    // 0x30f900: 0xc07fba0  jal         func_1FEE80
    ctx->pc = 0x30F900u;
    SET_GPR_U32(ctx, 31, 0x30F908u);
    ctx->pc = 0x30F904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F900u;
            // 0x30f904: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE80u;
    if (runtime->hasFunction(0x1FEE80u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F908u; }
        if (ctx->pc != 0x30F908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPictureNum__15CInventUserDataFPi_0x1fee80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F908u; }
        if (ctx->pc != 0x30F908u) { return; }
    }
    ctx->pc = 0x30F908u;
label_30f908:
    // 0x30f908: 0x27b0006c  addiu       $s0, $sp, 0x6C
    ctx->pc = 0x30f908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x30f90c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30f90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30f910: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x30f910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30f914: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x30f914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30f918: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x30f918u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30f91c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x30F91Cu;
    SET_GPR_U32(ctx, 31, 0x30F924u);
    ctx->pc = 0x30F920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F91Cu;
            // 0x30f920: 0x24a52638  addiu       $a1, $a1, 0x2638 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F924u; }
        if (ctx->pc != 0x30F924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F924u; }
        if (ctx->pc != 0x30F924u) { return; }
    }
    ctx->pc = 0x30F924u;
label_30f924:
    // 0x30f924: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30f928: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x30f928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30f92c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x30f92cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30f930: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30F930u;
    {
        const bool branch_taken_0x30f930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f930) {
            ctx->pc = 0x30F954u;
            goto label_30f954;
        }
    }
    ctx->pc = 0x30F938u;
    // 0x30f938: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f93c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x30f93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30f940: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f944: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x30f944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30f948: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x30f948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30f94c: 0xc0b5134  jal         func_2D44D0
    ctx->pc = 0x30F94Cu;
    SET_GPR_U32(ctx, 31, 0x30F954u);
    ctx->pc = 0x30F950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F94Cu;
            // 0x30f950: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44D0u;
    if (runtime->hasFunction(0x2D44D0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F954u; }
        if (ctx->pc != 0x30F954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFiiii_0x2d44d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F954u; }
        if (ctx->pc != 0x30F954u) { return; }
    }
    ctx->pc = 0x30F954u;
label_30f954:
    // 0x30f954: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f958: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x30f958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30f95c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30F95Cu;
    SET_GPR_U32(ctx, 31, 0x30F964u);
    ctx->pc = 0x30F960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F95Cu;
            // 0x30f960: 0x2484ddf0  addiu       $a0, $a0, -0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F964u; }
        if (ctx->pc != 0x30F964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F964u; }
        if (ctx->pc != 0x30F964u) { return; }
    }
    ctx->pc = 0x30F964u;
label_30f964:
    // 0x30f964: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f968: 0x240501b8  addiu       $a1, $zero, 0x1B8
    ctx->pc = 0x30f968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x30f96c: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f970: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30F970u;
    SET_GPR_U32(ctx, 31, 0x30F978u);
    ctx->pc = 0x30F974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F970u;
            // 0x30f974: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F978u; }
        if (ctx->pc != 0x30F978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F978u; }
        if (ctx->pc != 0x30F978u) { return; }
    }
    ctx->pc = 0x30F978u;
label_30f978:
    // 0x30f978: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f97c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30f980: 0x8c26de84  lw          $a2, -0x217C($at)
    ctx->pc = 0x30f980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958724)));
    // 0x30f984: 0x2484ddf0  addiu       $a0, $a0, -0x2210
    ctx->pc = 0x30f984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
    // 0x30f988: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30f988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30f98c: 0x8c27de88  lw          $a3, -0x2178($at)
    ctx->pc = 0x30f98cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958728)));
    // 0x30f990: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30F990u;
    SET_GPR_U32(ctx, 31, 0x30F998u);
    ctx->pc = 0x30F994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F990u;
            // 0x30f994: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F998u; }
        if (ctx->pc != 0x30F998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F998u; }
        if (ctx->pc != 0x30F998u) { return; }
    }
    ctx->pc = 0x30F998u;
label_30f998:
    // 0x30f998: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30f998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f99c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30f99cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f9a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30f9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f9a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30f9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x30F9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F9A8u;
            // 0x30f9ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F9B0u;
}
