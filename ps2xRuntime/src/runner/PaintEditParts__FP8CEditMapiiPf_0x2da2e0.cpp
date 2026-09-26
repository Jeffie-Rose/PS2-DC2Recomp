#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PaintEditParts__FP8CEditMapiiPf
// Address: 0x2da2e0 - 0x2da3f4
void PaintEditParts__FP8CEditMapiiPf_0x2da2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PaintEditParts__FP8CEditMapiiPf_0x2da2e0");
#endif

    switch (ctx->pc) {
        case 0x2da2e0u: goto label_2da2e0;
        case 0x2da2e4u: goto label_2da2e4;
        case 0x2da2e8u: goto label_2da2e8;
        case 0x2da2ecu: goto label_2da2ec;
        case 0x2da2f0u: goto label_2da2f0;
        case 0x2da2f4u: goto label_2da2f4;
        case 0x2da2f8u: goto label_2da2f8;
        case 0x2da2fcu: goto label_2da2fc;
        case 0x2da300u: goto label_2da300;
        case 0x2da304u: goto label_2da304;
        case 0x2da308u: goto label_2da308;
        case 0x2da30cu: goto label_2da30c;
        case 0x2da310u: goto label_2da310;
        case 0x2da314u: goto label_2da314;
        case 0x2da318u: goto label_2da318;
        case 0x2da31cu: goto label_2da31c;
        case 0x2da320u: goto label_2da320;
        case 0x2da324u: goto label_2da324;
        case 0x2da328u: goto label_2da328;
        case 0x2da32cu: goto label_2da32c;
        case 0x2da330u: goto label_2da330;
        case 0x2da334u: goto label_2da334;
        case 0x2da338u: goto label_2da338;
        case 0x2da33cu: goto label_2da33c;
        case 0x2da340u: goto label_2da340;
        case 0x2da344u: goto label_2da344;
        case 0x2da348u: goto label_2da348;
        case 0x2da34cu: goto label_2da34c;
        case 0x2da350u: goto label_2da350;
        case 0x2da354u: goto label_2da354;
        case 0x2da358u: goto label_2da358;
        case 0x2da35cu: goto label_2da35c;
        case 0x2da360u: goto label_2da360;
        case 0x2da364u: goto label_2da364;
        case 0x2da368u: goto label_2da368;
        case 0x2da36cu: goto label_2da36c;
        case 0x2da370u: goto label_2da370;
        case 0x2da374u: goto label_2da374;
        case 0x2da378u: goto label_2da378;
        case 0x2da37cu: goto label_2da37c;
        case 0x2da380u: goto label_2da380;
        case 0x2da384u: goto label_2da384;
        case 0x2da388u: goto label_2da388;
        case 0x2da38cu: goto label_2da38c;
        case 0x2da390u: goto label_2da390;
        case 0x2da394u: goto label_2da394;
        case 0x2da398u: goto label_2da398;
        case 0x2da39cu: goto label_2da39c;
        case 0x2da3a0u: goto label_2da3a0;
        case 0x2da3a4u: goto label_2da3a4;
        case 0x2da3a8u: goto label_2da3a8;
        case 0x2da3acu: goto label_2da3ac;
        case 0x2da3b0u: goto label_2da3b0;
        case 0x2da3b4u: goto label_2da3b4;
        case 0x2da3b8u: goto label_2da3b8;
        case 0x2da3bcu: goto label_2da3bc;
        case 0x2da3c0u: goto label_2da3c0;
        case 0x2da3c4u: goto label_2da3c4;
        case 0x2da3c8u: goto label_2da3c8;
        case 0x2da3ccu: goto label_2da3cc;
        case 0x2da3d0u: goto label_2da3d0;
        case 0x2da3d4u: goto label_2da3d4;
        case 0x2da3d8u: goto label_2da3d8;
        case 0x2da3dcu: goto label_2da3dc;
        case 0x2da3e0u: goto label_2da3e0;
        case 0x2da3e4u: goto label_2da3e4;
        case 0x2da3e8u: goto label_2da3e8;
        case 0x2da3ecu: goto label_2da3ec;
        case 0x2da3f0u: goto label_2da3f0;
        default: break;
    }

    ctx->pc = 0x2da2e0u;

label_2da2e0:
    // 0x2da2e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2da2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2da2e4:
    // 0x2da2e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2da2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2da2e8:
    // 0x2da2e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2da2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2da2ec:
    // 0x2da2ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2da2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2da2f0:
    // 0x2da2f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2da2f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da2f4:
    // 0x2da2f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2da2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2da2f8:
    // 0x2da2f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2da2f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2da2fc:
    // 0x2da2fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2da300:
    // 0x2da300: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2da300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2da304:
    // 0x2da304: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2da304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2da308:
    // 0x2da308: 0xc06c310  jal         func_1B0C40
label_2da30c:
    if (ctx->pc == 0x2DA30Cu) {
        ctx->pc = 0x2DA30Cu;
            // 0x2da30c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2DA310u;
        goto label_2da310;
    }
    ctx->pc = 0x2DA308u;
    SET_GPR_U32(ctx, 31, 0x2DA310u);
    ctx->pc = 0x2DA30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA308u;
            // 0x2da30c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA310u; }
        if (ctx->pc != 0x2DA310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA310u; }
        if (ctx->pc != 0x2DA310u) { return; }
    }
    ctx->pc = 0x2DA310u;
label_2da310:
    // 0x2da310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da314:
    // 0x2da314: 0x8f829e74  lw          $v0, -0x618C($gp)
    ctx->pc = 0x2da314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942324)));
label_2da318:
    // 0x2da318: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2da31c:
    if (ctx->pc == 0x2DA31Cu) {
        ctx->pc = 0x2DA31Cu;
            // 0x2da31c: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->pc = 0x2DA320u;
        goto label_2da320;
    }
    ctx->pc = 0x2DA318u;
    {
        const bool branch_taken_0x2da318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA318u;
            // 0x2da31c: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da318) {
            ctx->pc = 0x2DA374u;
            goto label_2da374;
        }
    }
    ctx->pc = 0x2DA320u;
label_2da320:
    // 0x2da320: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2da320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2da324:
    // 0x2da324: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2da324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2da328:
    // 0x2da328: 0xc041c4a  jal         func_107128
label_2da32c:
    if (ctx->pc == 0x2DA32Cu) {
        ctx->pc = 0x2DA32Cu;
            // 0x2da32c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA330u;
        goto label_2da330;
    }
    ctx->pc = 0x2DA328u;
    SET_GPR_U32(ctx, 31, 0x2DA330u);
    ctx->pc = 0x2DA32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA328u;
            // 0x2da32c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA330u; }
        if (ctx->pc != 0x2DA330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA330u; }
        if (ctx->pc != 0x2DA330u) { return; }
    }
    ctx->pc = 0x2DA330u;
label_2da330:
    // 0x2da330: 0x8f849e74  lw          $a0, -0x618C($gp)
    ctx->pc = 0x2da330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942324)));
label_2da334:
    // 0x2da334: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2da334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2da338:
    // 0x2da338: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2da338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2da33c:
    // 0x2da33c: 0x320f809  jalr        $t9
label_2da340:
    if (ctx->pc == 0x2DA340u) {
        ctx->pc = 0x2DA340u;
            // 0x2da340: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2DA344u;
        goto label_2da344;
    }
    ctx->pc = 0x2DA33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA344u);
        ctx->pc = 0x2DA340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA33Cu;
            // 0x2da340: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA344u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA344u; }
            if (ctx->pc != 0x2DA344u) { return; }
        }
        }
    }
    ctx->pc = 0x2DA344u;
label_2da344:
    // 0x2da344: 0x8f849e74  lw          $a0, -0x618C($gp)
    ctx->pc = 0x2da344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942324)));
label_2da348:
    // 0x2da348: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2da348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2da34c:
    // 0x2da34c: 0x24a50b10  addiu       $a1, $a1, 0xB10
    ctx->pc = 0x2da34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2832));
label_2da350:
    // 0x2da350: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2da350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2da354:
    // 0x2da354: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2da354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2da358:
    // 0x2da358: 0x320f809  jalr        $t9
label_2da35c:
    if (ctx->pc == 0x2DA35Cu) {
        ctx->pc = 0x2DA35Cu;
            // 0x2da35c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2DA360u;
        goto label_2da360;
    }
    ctx->pc = 0x2DA358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA360u);
        ctx->pc = 0x2DA35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA358u;
            // 0x2da35c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA360u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA360u; }
            if (ctx->pc != 0x2DA360u) { return; }
        }
        }
    }
    ctx->pc = 0x2DA360u;
label_2da360:
    // 0x2da360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da364:
    // 0x2da364: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2da364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2da368:
    // 0x2da368: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2da368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2da36c:
    // 0x2da36c: 0xc0beb74  jal         func_2FADD0
label_2da370:
    if (ctx->pc == 0x2DA370u) {
        ctx->pc = 0x2DA370u;
            // 0x2da370: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA374u;
        goto label_2da374;
    }
    ctx->pc = 0x2DA36Cu;
    SET_GPR_U32(ctx, 31, 0x2DA374u);
    ctx->pc = 0x2DA370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA36Cu;
            // 0x2da370: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FADD0u;
    if (runtime->hasFunction(0x2FADD0u)) {
        auto targetFn = runtime->lookupFunction(0x2FADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA374u; }
        if (ctx->pc != 0x2DA374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPaintEffect__FP10CEditPartsPfPfi_0x2fadd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA374u; }
        if (ctx->pc != 0x2DA374u) { return; }
    }
    ctx->pc = 0x2DA374u;
label_2da374:
    // 0x2da374: 0xc064218  jal         func_190860
label_2da378:
    if (ctx->pc == 0x2DA378u) {
        ctx->pc = 0x2DA37Cu;
        goto label_2da37c;
    }
    ctx->pc = 0x2DA374u;
    SET_GPR_U32(ctx, 31, 0x2DA37Cu);
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA37Cu; }
        if (ctx->pc != 0x2DA37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA37Cu; }
        if (ctx->pc != 0x2DA37Cu) { return; }
    }
    ctx->pc = 0x2DA37Cu;
label_2da37c:
    // 0x2da37c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da380:
    // 0x2da380: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2da380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2da384:
    // 0x2da384: 0xc063818  jal         func_18E060
label_2da388:
    if (ctx->pc == 0x2DA388u) {
        ctx->pc = 0x2DA388u;
            // 0x2da388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA38Cu;
        goto label_2da38c;
    }
    ctx->pc = 0x2DA384u;
    SET_GPR_U32(ctx, 31, 0x2DA38Cu);
    ctx->pc = 0x2DA388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA384u;
            // 0x2da388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA38Cu; }
        if (ctx->pc != 0x2DA38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA38Cu; }
        if (ctx->pc != 0x2DA38Cu) { return; }
    }
    ctx->pc = 0x2DA38Cu;
label_2da38c:
    // 0x2da38c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2da38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_2da390:
    // 0x2da390: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2da390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2da394:
    // 0x2da394: 0x16420008  bne         $s2, $v0, . + 4 + (0x8 << 2)
label_2da398:
    if (ctx->pc == 0x2DA398u) {
        ctx->pc = 0x2DA398u;
            // 0x2da398: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x2DA39Cu;
        goto label_2da39c;
    }
    ctx->pc = 0x2DA394u;
    {
        const bool branch_taken_0x2da394 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DA398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA394u;
            // 0x2da398: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da394) {
            ctx->pc = 0x2DA3B8u;
            goto label_2da3b8;
        }
    }
    ctx->pc = 0x2DA39Cu;
label_2da39c:
    // 0x2da39c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2da39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2da3a0:
    // 0x2da3a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2da3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2da3a4:
    // 0x2da3a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2da3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da3a8:
    // 0x2da3a8: 0xc0bbac4  jal         func_2EEB10
label_2da3ac:
    if (ctx->pc == 0x2DA3ACu) {
        ctx->pc = 0x2DA3ACu;
            // 0x2da3ac: 0x240703e7  addiu       $a3, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->pc = 0x2DA3B0u;
        goto label_2da3b0;
    }
    ctx->pc = 0x2DA3A8u;
    SET_GPR_U32(ctx, 31, 0x2DA3B0u);
    ctx->pc = 0x2DA3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA3A8u;
            // 0x2da3ac: 0x240703e7  addiu       $a3, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEB10u;
    if (runtime->hasFunction(0x2EEB10u)) {
        auto targetFn = runtime->lookupFunction(0x2EEB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3B0u; }
        if (ctx->pc != 0x2DA3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PaintFence__8CEditMapFiPfi_0x2eeb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3B0u; }
        if (ctx->pc != 0x2DA3B0u) { return; }
    }
    ctx->pc = 0x2DA3B0u;
label_2da3b0:
    // 0x2da3b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2da3b4:
    if (ctx->pc == 0x2DA3B4u) {
        ctx->pc = 0x2DA3B4u;
            // 0x2da3b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2DA3B8u;
        goto label_2da3b8;
    }
    ctx->pc = 0x2DA3B0u;
    {
        const bool branch_taken_0x2da3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA3B0u;
            // 0x2da3b4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da3b0) {
            ctx->pc = 0x2DA3D4u;
            goto label_2da3d4;
        }
    }
    ctx->pc = 0x2DA3B8u;
label_2da3b8:
    // 0x2da3b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2da3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da3bc:
    // 0x2da3bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2da3bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da3c0:
    // 0x2da3c0: 0xc0599d8  jal         func_166760
label_2da3c4:
    if (ctx->pc == 0x2DA3C4u) {
        ctx->pc = 0x2DA3C4u;
            // 0x2da3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3C8u;
        goto label_2da3c8;
    }
    ctx->pc = 0x2DA3C0u;
    SET_GPR_U32(ctx, 31, 0x2DA3C8u);
    ctx->pc = 0x2DA3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA3C0u;
            // 0x2da3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3C8u; }
        if (ctx->pc != 0x2DA3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__9CMapPartsFiPf_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3C8u; }
        if (ctx->pc != 0x2DA3C8u) { return; }
    }
    ctx->pc = 0x2DA3C8u;
label_2da3c8:
    // 0x2da3c8: 0xc059a38  jal         func_1668E0
label_2da3cc:
    if (ctx->pc == 0x2DA3CCu) {
        ctx->pc = 0x2DA3CCu;
            // 0x2da3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3D0u;
        goto label_2da3d0;
    }
    ctx->pc = 0x2DA3C8u;
    SET_GPR_U32(ctx, 31, 0x2DA3D0u);
    ctx->pc = 0x2DA3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA3C8u;
            // 0x2da3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1668E0u;
    if (runtime->hasFunction(0x1668E0u)) {
        auto targetFn = runtime->lookupFunction(0x1668E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3D0u; }
        if (ctx->pc != 0x2DA3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateColor__9CMapPartsFv_0x1668e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3D0u; }
        if (ctx->pc != 0x2DA3D0u) { return; }
    }
    ctx->pc = 0x2DA3D0u;
label_2da3d0:
    // 0x2da3d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2da3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2da3d4:
    // 0x2da3d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2da3d8:
    // 0x2da3d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2da3d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2da3dc:
    // 0x2da3dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2da3dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2da3e0:
    // 0x2da3e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da3e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2da3e4:
    // 0x2da3e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2da3e8:
    // 0x2da3e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2da3ec:
    // 0x2da3ec: 0x3e00008  jr          $ra
label_2da3f0:
    if (ctx->pc == 0x2DA3F0u) {
        ctx->pc = 0x2DA3F0u;
            // 0x2da3f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2DA3F4u;
        goto label_fallthrough_0x2da3ec;
    }
    ctx->pc = 0x2DA3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA3ECu;
            // 0x2da3f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2da3ec:
    ctx->pc = 0x2DA3F4u;
}
