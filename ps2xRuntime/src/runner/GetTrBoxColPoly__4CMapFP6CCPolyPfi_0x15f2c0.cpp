#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTrBoxColPoly__4CMapFP6CCPolyPfi
// Address: 0x15f2c0 - 0x15f3cc
void GetTrBoxColPoly__4CMapFP6CCPolyPfi_0x15f2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTrBoxColPoly__4CMapFP6CCPolyPfi_0x15f2c0");
#endif

    switch (ctx->pc) {
        case 0x15f2c0u: goto label_15f2c0;
        case 0x15f2c4u: goto label_15f2c4;
        case 0x15f2c8u: goto label_15f2c8;
        case 0x15f2ccu: goto label_15f2cc;
        case 0x15f2d0u: goto label_15f2d0;
        case 0x15f2d4u: goto label_15f2d4;
        case 0x15f2d8u: goto label_15f2d8;
        case 0x15f2dcu: goto label_15f2dc;
        case 0x15f2e0u: goto label_15f2e0;
        case 0x15f2e4u: goto label_15f2e4;
        case 0x15f2e8u: goto label_15f2e8;
        case 0x15f2ecu: goto label_15f2ec;
        case 0x15f2f0u: goto label_15f2f0;
        case 0x15f2f4u: goto label_15f2f4;
        case 0x15f2f8u: goto label_15f2f8;
        case 0x15f2fcu: goto label_15f2fc;
        case 0x15f300u: goto label_15f300;
        case 0x15f304u: goto label_15f304;
        case 0x15f308u: goto label_15f308;
        case 0x15f30cu: goto label_15f30c;
        case 0x15f310u: goto label_15f310;
        case 0x15f314u: goto label_15f314;
        case 0x15f318u: goto label_15f318;
        case 0x15f31cu: goto label_15f31c;
        case 0x15f320u: goto label_15f320;
        case 0x15f324u: goto label_15f324;
        case 0x15f328u: goto label_15f328;
        case 0x15f32cu: goto label_15f32c;
        case 0x15f330u: goto label_15f330;
        case 0x15f334u: goto label_15f334;
        case 0x15f338u: goto label_15f338;
        case 0x15f33cu: goto label_15f33c;
        case 0x15f340u: goto label_15f340;
        case 0x15f344u: goto label_15f344;
        case 0x15f348u: goto label_15f348;
        case 0x15f34cu: goto label_15f34c;
        case 0x15f350u: goto label_15f350;
        case 0x15f354u: goto label_15f354;
        case 0x15f358u: goto label_15f358;
        case 0x15f35cu: goto label_15f35c;
        case 0x15f360u: goto label_15f360;
        case 0x15f364u: goto label_15f364;
        case 0x15f368u: goto label_15f368;
        case 0x15f36cu: goto label_15f36c;
        case 0x15f370u: goto label_15f370;
        case 0x15f374u: goto label_15f374;
        case 0x15f378u: goto label_15f378;
        case 0x15f37cu: goto label_15f37c;
        case 0x15f380u: goto label_15f380;
        case 0x15f384u: goto label_15f384;
        case 0x15f388u: goto label_15f388;
        case 0x15f38cu: goto label_15f38c;
        case 0x15f390u: goto label_15f390;
        case 0x15f394u: goto label_15f394;
        case 0x15f398u: goto label_15f398;
        case 0x15f39cu: goto label_15f39c;
        case 0x15f3a0u: goto label_15f3a0;
        case 0x15f3a4u: goto label_15f3a4;
        case 0x15f3a8u: goto label_15f3a8;
        case 0x15f3acu: goto label_15f3ac;
        case 0x15f3b0u: goto label_15f3b0;
        case 0x15f3b4u: goto label_15f3b4;
        case 0x15f3b8u: goto label_15f3b8;
        case 0x15f3bcu: goto label_15f3bc;
        case 0x15f3c0u: goto label_15f3c0;
        case 0x15f3c4u: goto label_15f3c4;
        case 0x15f3c8u: goto label_15f3c8;
        default: break;
    }

    ctx->pc = 0x15f2c0u;

label_15f2c0:
    // 0x15f2c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15f2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_15f2c4:
    // 0x15f2c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_15f2c8:
    // 0x15f2c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15f2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_15f2cc:
    // 0x15f2cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15f2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15f2d0:
    // 0x15f2d0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x15f2d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15f2d4:
    // 0x15f2d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15f2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15f2d8:
    // 0x15f2d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15f2d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f2dc:
    // 0x15f2dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15f2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15f2e0:
    // 0x15f2e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15f2e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15f2e4:
    // 0x15f2e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15f2e8:
    // 0x15f2e8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x15f2e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15f2ec:
    // 0x15f2ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15f2f0:
    // 0x15f2f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15f2f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f2f4:
    // 0x15f2f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15f2f8:
    // 0x15f2f8: 0x8c910c9c  lw          $s1, 0xC9C($a0)
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3228)));
label_15f2fc:
    // 0x15f2fc: 0x10000024  b           . + 4 + (0x24 << 2)
label_15f300:
    if (ctx->pc == 0x15F300u) {
        ctx->pc = 0x15F300u;
            // 0x15f300: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F304u;
        goto label_15f304;
    }
    ctx->pc = 0x15F2FCu;
    {
        const bool branch_taken_0x15f2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F2FCu;
            // 0x15f300: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2fc) {
            ctx->pc = 0x15F390u;
            goto label_15f390;
        }
    }
    ctx->pc = 0x15F304u;
label_15f304:
    // 0x15f304: 0x8e220660  lw          $v0, 0x660($s1)
    ctx->pc = 0x15f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1632)));
label_15f308:
    // 0x15f308: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_15f30c:
    if (ctx->pc == 0x15F30Cu) {
        ctx->pc = 0x15F310u;
        goto label_15f310;
    }
    ctx->pc = 0x15F308u;
    {
        const bool branch_taken_0x15f308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f308) {
            ctx->pc = 0x15F384u;
            goto label_15f384;
        }
    }
    ctx->pc = 0x15F310u;
label_15f310:
    // 0x15f310: 0x8e240678  lw          $a0, 0x678($s1)
    ctx->pc = 0x15f310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_15f314:
    // 0x15f314: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_15f318:
    if (ctx->pc == 0x15F318u) {
        ctx->pc = 0x15F31Cu;
        goto label_15f31c;
    }
    ctx->pc = 0x15F314u;
    {
        const bool branch_taken_0x15f314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f314) {
            ctx->pc = 0x15F334u;
            goto label_15f334;
        }
    }
    ctx->pc = 0x15F31Cu;
label_15f31c:
    // 0x15f31c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15f31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15f320:
    // 0x15f320: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x15f320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_15f324:
    // 0x15f324: 0x320f809  jalr        $t9
label_15f328:
    if (ctx->pc == 0x15F328u) {
        ctx->pc = 0x15F32Cu;
        goto label_15f32c;
    }
    ctx->pc = 0x15F324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F32Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x15F32Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15F32Cu; }
            if (ctx->pc != 0x15F32Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15F32Cu;
label_15f32c:
    // 0x15f32c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_15f330:
    if (ctx->pc == 0x15F330u) {
        ctx->pc = 0x15F334u;
        goto label_15f334;
    }
    ctx->pc = 0x15F32Cu;
    {
        const bool branch_taken_0x15f32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f32c) {
            ctx->pc = 0x15F384u;
            goto label_15f384;
        }
    }
    ctx->pc = 0x15F334u;
label_15f334:
    // 0x15f334: 0x0  nop
    ctx->pc = 0x15f334u;
    // NOP
label_15f338:
    // 0x15f338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15f338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f33c:
    // 0x15f33c: 0xc05a0f0  jal         func_1683C0
label_15f340:
    if (ctx->pc == 0x15F340u) {
        ctx->pc = 0x15F340u;
            // 0x15f340: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x15F344u;
        goto label_15f344;
    }
    ctx->pc = 0x15F33Cu;
    SET_GPR_U32(ctx, 31, 0x15F344u);
    ctx->pc = 0x15F340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F33Cu;
            // 0x15f340: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1683C0u;
    if (runtime->hasFunction(0x1683C0u)) {
        auto targetFn = runtime->lookupFunction(0x1683C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F344u; }
        if (ctx->pc != 0x15F344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition__15CMapTreasureBoxFPf_0x1683c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F344u; }
        if (ctx->pc != 0x15F344u) { return; }
    }
    ctx->pc = 0x15F344u;
label_15f344:
    // 0x15f344: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x15f344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_15f348:
    // 0x15f348: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15f348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_15f34c:
    // 0x15f34c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x15f34cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15f350:
    // 0x15f350: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15f350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15f354:
    // 0x15f354: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15f354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15f358:
    // 0x15f358: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15f358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15f35c:
    // 0x15f35c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x15f35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_15f360:
    // 0x15f360: 0xc05437c  jal         func_150DF0
label_15f364:
    if (ctx->pc == 0x15F364u) {
        ctx->pc = 0x15F364u;
            // 0x15f364: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F368u;
        goto label_15f368;
    }
    ctx->pc = 0x15F360u;
    SET_GPR_U32(ctx, 31, 0x15F368u);
    ctx->pc = 0x15F364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F360u;
            // 0x15f364: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150DF0u;
    if (runtime->hasFunction(0x150DF0u)) {
        auto targetFn = runtime->lookupFunction(0x150DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F368u; }
        if (ctx->pc != 0x15F368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateCharaCPoly__FP6CCPolyiPfPfff_0x150df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F368u; }
        if (ctx->pc != 0x15F368u) { return; }
    }
    ctx->pc = 0x15F368u;
label_15f368:
    // 0x15f368: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15f368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15f36c:
    // 0x15f36c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x15f36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_15f370:
    // 0x15f370: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15f370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15f374:
    // 0x15f374: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x15f374u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_15f378:
    // 0x15f378: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x15f378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f37c:
    // 0x15f37c: 0x6600008  bltz        $s3, . + 4 + (0x8 << 2)
label_15f380:
    if (ctx->pc == 0x15F380u) {
        ctx->pc = 0x15F380u;
            // 0x15f380: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x15F384u;
        goto label_15f384;
    }
    ctx->pc = 0x15F37Cu;
    {
        const bool branch_taken_0x15f37c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x15F380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F37Cu;
            // 0x15f380: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f37c) {
            ctx->pc = 0x15F3A0u;
            goto label_15f3a0;
        }
    }
    ctx->pc = 0x15F384u;
label_15f384:
    // 0x15f384: 0x0  nop
    ctx->pc = 0x15f384u;
    // NOP
label_15f388:
    // 0x15f388: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15f388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15f38c:
    // 0x15f38c: 0x26310680  addiu       $s1, $s1, 0x680
    ctx->pc = 0x15f38cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1664));
label_15f390:
    // 0x15f390: 0x8ea20c98  lw          $v0, 0xC98($s5)
    ctx->pc = 0x15f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3224)));
label_15f394:
    // 0x15f394: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x15f394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15f398:
    // 0x15f398: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_15f39c:
    if (ctx->pc == 0x15F39Cu) {
        ctx->pc = 0x15F3A0u;
        goto label_15f3a0;
    }
    ctx->pc = 0x15F398u;
    {
        const bool branch_taken_0x15f398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f398) {
            ctx->pc = 0x15F304u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f304;
        }
    }
    ctx->pc = 0x15F3A0u;
label_15f3a0:
    // 0x15f3a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15f3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f3a4:
    // 0x15f3a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15f3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_15f3a8:
    // 0x15f3a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15f3a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15f3ac:
    // 0x15f3ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15f3acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15f3b0:
    // 0x15f3b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15f3b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15f3b4:
    // 0x15f3b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15f3b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15f3b8:
    // 0x15f3b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f3b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15f3bc:
    // 0x15f3bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15f3c0:
    // 0x15f3c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15f3c4:
    // 0x15f3c4: 0x3e00008  jr          $ra
label_15f3c8:
    if (ctx->pc == 0x15F3C8u) {
        ctx->pc = 0x15F3C8u;
            // 0x15f3c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x15F3CCu;
        goto label_fallthrough_0x15f3c4;
    }
    ctx->pc = 0x15F3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F3C4u;
            // 0x15f3c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15f3c4:
    ctx->pc = 0x15F3CCu;
}
