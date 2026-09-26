#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleCopyRightDraw__Fv
// Address: 0x2a3410 - 0x2a3624
void TitleCopyRightDraw__Fv_0x2a3410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleCopyRightDraw__Fv_0x2a3410");
#endif

    switch (ctx->pc) {
        case 0x2a3470u: goto label_2a3470;
        case 0x2a3488u: goto label_2a3488;
        case 0x2a34acu: goto label_2a34ac;
        case 0x2a34c0u: goto label_2a34c0;
        case 0x2a34d8u: goto label_2a34d8;
        case 0x2a3500u: goto label_2a3500;
        case 0x2a3514u: goto label_2a3514;
        case 0x2a351cu: goto label_2a351c;
        case 0x2a3524u: goto label_2a3524;
        case 0x2a3534u: goto label_2a3534;
        case 0x2a353cu: goto label_2a353c;
        case 0x2a3548u: goto label_2a3548;
        case 0x2a3554u: goto label_2a3554;
        case 0x2a3560u: goto label_2a3560;
        case 0x2a3578u: goto label_2a3578;
        case 0x2a3598u: goto label_2a3598;
        case 0x2a35a4u: goto label_2a35a4;
        case 0x2a35bcu: goto label_2a35bc;
        case 0x2a35dcu: goto label_2a35dc;
        case 0x2a35e4u: goto label_2a35e4;
        case 0x2a35fcu: goto label_2a35fc;
        case 0x2a3604u: goto label_2a3604;
        case 0x2a3618u: goto label_2a3618;
        default: break;
    }

    ctx->pc = 0x2a3410u;

    // 0x2a3410: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2a3410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2a3414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a3418: 0x8f8699c8  lw          $a2, -0x6638($gp)
    ctx->pc = 0x2a3418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941128)));
    // 0x2a341c: 0x10c0007e  beqz        $a2, . + 4 + (0x7E << 2)
    ctx->pc = 0x2A341Cu;
    {
        const bool branch_taken_0x2a341c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a341c) {
            ctx->pc = 0x2A3618u;
            goto label_2a3618;
        }
    }
    ctx->pc = 0x2A3424u;
    // 0x2a3424: 0x838399b4  lb          $v1, -0x664C($gp)
    ctx->pc = 0x2a3424u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941108)));
    // 0x2a3428: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2a3428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2a342c: 0x20630002  addi        $v1, $v1, 0x2
    ctx->pc = 0x2a342cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)2, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x2a3430: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x2a3430u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a3434: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
    ctx->pc = 0x2A3434u;
    {
        const bool branch_taken_0x2a3434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3434u;
            // 0x2a3438: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3434) {
            ctx->pc = 0x2A3618u;
            goto label_2a3618;
        }
    }
    ctx->pc = 0x2A343Cu;
    // 0x2a343c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a343cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a3440: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a3440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a3444: 0x24a5e230  addiu       $a1, $a1, -0x1DD0
    ctx->pc = 0x2a3444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959664));
    // 0x2a3448: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a3448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a344c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2a344cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a3450: 0x600008  jr          $v1
    ctx->pc = 0x2A3450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3458u: goto label_2a3458;
            case 0x2A34B4u: goto label_2a34b4;
            case 0x2A3508u: goto label_2a3508;
            case 0x2A3618u: goto label_2a3618;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A3458u;
label_2a3458:
    // 0x2a3458: 0x8f8399d8  lw          $v1, -0x6628($gp)
    ctx->pc = 0x2a3458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941144)));
    // 0x2a345c: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x2A345Cu;
    {
        const bool branch_taken_0x2a345c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a345c) {
            ctx->pc = 0x2A3618u;
            goto label_2a3618;
        }
    }
    ctx->pc = 0x2A3464u;
    // 0x2a3464: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x2a3464u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a3468: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A3468u;
    SET_GPR_U32(ctx, 31, 0x2A3470u);
    ctx->pc = 0x2A346Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3468u;
            // 0x2a346c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3470u; }
        if (ctx->pc != 0x2A3470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3470u; }
        if (ctx->pc != 0x2A3470u) { return; }
    }
    ctx->pc = 0x2A3470u;
label_2a3470:
    // 0x2a3470: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2a3470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a3474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a347c: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a347cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a3480: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A3480u;
    SET_GPR_U32(ctx, 31, 0x2A3488u);
    ctx->pc = 0x2A3484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3480u;
            // 0x2a3484: 0x240801a0  addiu       $t0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3488u; }
        if (ctx->pc != 0x2A3488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3488u; }
        if (ctx->pc != 0x2A3488u) { return; }
    }
    ctx->pc = 0x2A3488u;
label_2a3488:
    // 0x2a3488: 0x8f8499d8  lw          $a0, -0x6628($gp)
    ctx->pc = 0x2a3488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941144)));
    // 0x2a348c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2a348cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a3490: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a3490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3494: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2a3494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a3498: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2a3498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a349c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2a349cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2a34a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2a34a4: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2A34A4u;
    SET_GPR_U32(ctx, 31, 0x2A34ACu);
    ctx->pc = 0x2A34A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A34A4u;
            // 0x2a34a8: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A34ACu; }
        if (ctx->pc != 0x2A34ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A34ACu; }
        if (ctx->pc != 0x2A34ACu) { return; }
    }
    ctx->pc = 0x2A34ACu;
label_2a34ac:
    // 0x2a34ac: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2A34ACu;
    {
        const bool branch_taken_0x2a34ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A34B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A34ACu;
            // 0x2a34b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a34ac) {
            ctx->pc = 0x2A361Cu;
            goto label_2a361c;
        }
    }
    ctx->pc = 0x2A34B4u;
label_2a34b4:
    // 0x2a34b4: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x2a34b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a34b8: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A34B8u;
    SET_GPR_U32(ctx, 31, 0x2A34C0u);
    ctx->pc = 0x2A34BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A34B8u;
            // 0x2a34bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A34C0u; }
        if (ctx->pc != 0x2A34C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A34C0u; }
        if (ctx->pc != 0x2A34C0u) { return; }
    }
    ctx->pc = 0x2A34C0u;
label_2a34c0:
    // 0x2a34c0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2a34c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a34c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a34c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34c8: 0x24060144  addiu       $a2, $zero, 0x144
    ctx->pc = 0x2a34c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    // 0x2a34cc: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a34ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a34d0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2A34D0u;
    SET_GPR_U32(ctx, 31, 0x2A34D8u);
    ctx->pc = 0x2A34D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A34D0u;
            // 0x2a34d4: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A34D8u; }
        if (ctx->pc != 0x2A34D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A34D8u; }
        if (ctx->pc != 0x2A34D8u) { return; }
    }
    ctx->pc = 0x2A34D8u;
label_2a34d8:
    // 0x2a34d8: 0x8f8499c8  lw          $a0, -0x6638($gp)
    ctx->pc = 0x2a34d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941128)));
    // 0x2a34dc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2a34dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a34e0: 0x3c024330  lui         $v0, 0x4330
    ctx->pc = 0x2a34e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17200 << 16));
    // 0x2a34e4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2a34e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a34e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a34e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a34ec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2a34ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a34f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a34f4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2a34f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34f8: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x2A34F8u;
    SET_GPR_U32(ctx, 31, 0x2A3500u);
    ctx->pc = 0x2A34FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A34F8u;
            // 0x2a34fc: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3500u; }
        if (ctx->pc != 0x2A3500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3500u; }
        if (ctx->pc != 0x2A3500u) { return; }
    }
    ctx->pc = 0x2A3500u;
label_2a3500:
    // 0x2a3500: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2A3500u;
    {
        const bool branch_taken_0x2a3500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3500) {
            ctx->pc = 0x2A3618u;
            goto label_2a3618;
        }
    }
    ctx->pc = 0x2A3508u;
label_2a3508:
    // 0x2a3508: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x2a3508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2a350c: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2A350Cu;
    SET_GPR_U32(ctx, 31, 0x2A3514u);
    ctx->pc = 0x2A3510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A350Cu;
            // 0x2a3510: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3514u; }
        if (ctx->pc != 0x2A3514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3514u; }
        if (ctx->pc != 0x2A3514u) { return; }
    }
    ctx->pc = 0x2A3514u;
label_2a3514:
    // 0x2a3514: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2A3514u;
    SET_GPR_U32(ctx, 31, 0x2A351Cu);
    ctx->pc = 0x2A3518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3514u;
            // 0x2a3518: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A351Cu; }
        if (ctx->pc != 0x2A351Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A351Cu; }
        if (ctx->pc != 0x2A351Cu) { return; }
    }
    ctx->pc = 0x2A351Cu;
label_2a351c:
    // 0x2a351c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2A351Cu;
    SET_GPR_U32(ctx, 31, 0x2A3524u);
    ctx->pc = 0x2A3520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A351Cu;
            // 0x2a3520: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3524u; }
        if (ctx->pc != 0x2A3524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3524u; }
        if (ctx->pc != 0x2A3524u) { return; }
    }
    ctx->pc = 0x2A3524u;
label_2a3524:
    // 0x2a3524: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a3524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a352c: 0xc04d104  jal         func_134410
    ctx->pc = 0x2A352Cu;
    SET_GPR_U32(ctx, 31, 0x2A3534u);
    ctx->pc = 0x2A3530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A352Cu;
            // 0x2a3530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3534u; }
        if (ctx->pc != 0x2A3534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3534u; }
        if (ctx->pc != 0x2A3534u) { return; }
    }
    ctx->pc = 0x2A3534u;
label_2a3534:
    // 0x2a3534: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x2A3534u;
    SET_GPR_U32(ctx, 31, 0x2A353Cu);
    ctx->pc = 0x2A3538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3534u;
            // 0x2a3538: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A353Cu; }
        if (ctx->pc != 0x2A353Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A353Cu; }
        if (ctx->pc != 0x2A353Cu) { return; }
    }
    ctx->pc = 0x2A353Cu;
label_2a353c:
    // 0x2a353c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a353cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3540: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2A3540u;
    SET_GPR_U32(ctx, 31, 0x2A3548u);
    ctx->pc = 0x2A3544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3540u;
            // 0x2a3544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3548u; }
        if (ctx->pc != 0x2A3548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3548u; }
        if (ctx->pc != 0x2A3548u) { return; }
    }
    ctx->pc = 0x2A3548u;
label_2a3548:
    // 0x2a3548: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a3548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a354c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2A354Cu;
    SET_GPR_U32(ctx, 31, 0x2A3554u);
    ctx->pc = 0x2A3550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A354Cu;
            // 0x2a3550: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3554u; }
        if (ctx->pc != 0x2A3554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3554u; }
        if (ctx->pc != 0x2A3554u) { return; }
    }
    ctx->pc = 0x2A3554u;
label_2a3554:
    // 0x2a3554: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a3554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3558: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2A3558u;
    SET_GPR_U32(ctx, 31, 0x2A3560u);
    ctx->pc = 0x2A355Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3558u;
            // 0x2a355c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3560u; }
        if (ctx->pc != 0x2A3560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3560u; }
        if (ctx->pc != 0x2A3560u) { return; }
    }
    ctx->pc = 0x2A3560u;
label_2a3560:
    // 0x2a3560: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a3560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a356c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a356cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3570: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A3570u;
    SET_GPR_U32(ctx, 31, 0x2A3578u);
    ctx->pc = 0x2A3574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3570u;
            // 0x2a3574: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3578u; }
        if (ctx->pc != 0x2A3578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3578u; }
        if (ctx->pc != 0x2A3578u) { return; }
    }
    ctx->pc = 0x2A3578u;
label_2a3578:
    // 0x2a3578: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a3578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a357c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a357cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3584: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a3584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a3588: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2a3588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2a358c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a358cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3590: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x2A3590u;
    SET_GPR_U32(ctx, 31, 0x2A3598u);
    ctx->pc = 0x2A3594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3590u;
            // 0x2a3594: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3598u; }
        if (ctx->pc != 0x2A3598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3598u; }
        if (ctx->pc != 0x2A3598u) { return; }
    }
    ctx->pc = 0x2A3598u;
label_2a3598:
    // 0x2a3598: 0x8f8599e8  lw          $a1, -0x6618($gp)
    ctx->pc = 0x2a3598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941160)));
    // 0x2a359c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2A359Cu;
    SET_GPR_U32(ctx, 31, 0x2A35A4u);
    ctx->pc = 0x2A35A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A359Cu;
            // 0x2a35a0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35A4u; }
        if (ctx->pc != 0x2A35A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35A4u; }
        if (ctx->pc != 0x2A35A4u) { return; }
    }
    ctx->pc = 0x2A35A4u;
label_2a35a4:
    // 0x2a35a4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2a35a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a35a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a35a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a35ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2a35acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a35b0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a35b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a35b4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2A35B4u;
    SET_GPR_U32(ctx, 31, 0x2A35BCu);
    ctx->pc = 0x2A35B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35B4u;
            // 0x2a35b8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35BCu; }
        if (ctx->pc != 0x2A35BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35BCu; }
        if (ctx->pc != 0x2A35BCu) { return; }
    }
    ctx->pc = 0x2A35BCu;
label_2a35bc:
    // 0x2a35bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a35bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a35c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a35c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a35c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a35c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a35c8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2a35c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a35cc: 0x240801a0  addiu       $t0, $zero, 0x1A0
    ctx->pc = 0x2a35ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2a35d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a35d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a35d4: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x2A35D4u;
    SET_GPR_U32(ctx, 31, 0x2A35DCu);
    ctx->pc = 0x2A35D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35D4u;
            // 0x2a35d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35DCu; }
        if (ctx->pc != 0x2A35DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35DCu; }
        if (ctx->pc != 0x2A35DCu) { return; }
    }
    ctx->pc = 0x2A35DCu;
label_2a35dc:
    // 0x2a35dc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2A35DCu;
    SET_GPR_U32(ctx, 31, 0x2A35E4u);
    ctx->pc = 0x2A35E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35DCu;
            // 0x2a35e0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35E4u; }
        if (ctx->pc != 0x2A35E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35E4u; }
        if (ctx->pc != 0x2A35E4u) { return; }
    }
    ctx->pc = 0x2A35E4u;
label_2a35e4:
    // 0x2a35e4: 0x838499b4  lb          $a0, -0x664C($gp)
    ctx->pc = 0x2a35e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941108)));
    // 0x2a35e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a35e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a35ec: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A35ECu;
    {
        const bool branch_taken_0x2a35ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a35ec) {
            ctx->pc = 0x2A3618u;
            goto label_2a3618;
        }
    }
    ctx->pc = 0x2A35F4u;
    // 0x2a35f4: 0xc0a6378  jal         func_298DE0
    ctx->pc = 0x2A35F4u;
    SET_GPR_U32(ctx, 31, 0x2A35FCu);
    ctx->pc = 0x2A35F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35F4u;
            // 0x2a35f8: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298DE0u;
    if (runtime->hasFunction(0x298DE0u)) {
        auto targetFn = runtime->lookupFunction(0x298DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35FCu; }
        if (ctx->pc != 0x2A35FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Term__6CMovieFv_0x298de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35FCu; }
        if (ctx->pc != 0x2A35FCu) { return; }
    }
    ctx->pc = 0x2A35FCu;
label_2a35fc:
    // 0x2a35fc: 0xc0a6360  jal         func_298D80
    ctx->pc = 0x2A35FCu;
    SET_GPR_U32(ctx, 31, 0x2A3604u);
    ctx->pc = 0x2A3600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A35FCu;
            // 0x2a3600: 0x8f8499e0  lw          $a0, -0x6620($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D80u;
    if (runtime->hasFunction(0x298D80u)) {
        auto targetFn = runtime->lookupFunction(0x298D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3604u; }
        if (ctx->pc != 0x2A3604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchThread__6CMovieFv_0x298d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3604u; }
        if (ctx->pc != 0x2A3604u) { return; }
    }
    ctx->pc = 0x2A3604u;
label_2a3604:
    // 0x2a3604: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2a3604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a3608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a360c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a360cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3610: 0xc0887b0  jal         func_221EC0
    ctx->pc = 0x2A3610u;
    SET_GPR_U32(ctx, 31, 0x2A3618u);
    ctx->pc = 0x2A3614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3610u;
            // 0x2a3614: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EC0u;
    if (runtime->hasFunction(0x221EC0u)) {
        auto targetFn = runtime->lookupFunction(0x221EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3618u; }
        if (ctx->pc != 0x2A3618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fiiii_0x221ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3618u; }
        if (ctx->pc != 0x2A3618u) { return; }
    }
    ctx->pc = 0x2A3618u;
label_2a3618:
    // 0x2a3618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a361c:
    // 0x2a361c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A361Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A361Cu;
            // 0x2a3620: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3624u;
}
