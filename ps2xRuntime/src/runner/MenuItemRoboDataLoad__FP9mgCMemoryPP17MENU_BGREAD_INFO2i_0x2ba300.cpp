#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemRoboDataLoad__FP9mgCMemoryPP17MENU_BGREAD_INFO2i
// Address: 0x2ba300 - 0x2ba61c
void MenuItemRoboDataLoad__FP9mgCMemoryPP17MENU_BGREAD_INFO2i_0x2ba300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemRoboDataLoad__FP9mgCMemoryPP17MENU_BGREAD_INFO2i_0x2ba300");
#endif

    switch (ctx->pc) {
        case 0x2ba33cu: goto label_2ba33c;
        case 0x2ba344u: goto label_2ba344;
        case 0x2ba34cu: goto label_2ba34c;
        case 0x2ba378u: goto label_2ba378;
        case 0x2ba390u: goto label_2ba390;
        case 0x2ba3fcu: goto label_2ba3fc;
        case 0x2ba424u: goto label_2ba424;
        case 0x2ba430u: goto label_2ba430;
        case 0x2ba454u: goto label_2ba454;
        case 0x2ba460u: goto label_2ba460;
        case 0x2ba474u: goto label_2ba474;
        case 0x2ba498u: goto label_2ba498;
        case 0x2ba4acu: goto label_2ba4ac;
        case 0x2ba4bcu: goto label_2ba4bc;
        case 0x2ba4ecu: goto label_2ba4ec;
        case 0x2ba520u: goto label_2ba520;
        case 0x2ba528u: goto label_2ba528;
        case 0x2ba590u: goto label_2ba590;
        case 0x2ba5a0u: goto label_2ba5a0;
        case 0x2ba5bcu: goto label_2ba5bc;
        case 0x2ba5dcu: goto label_2ba5dc;
        case 0x2ba5e4u: goto label_2ba5e4;
        default: break;
    }

    ctx->pc = 0x2ba300u;

    // 0x2ba300: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ba300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ba304: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ba304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ba308: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ba308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ba30c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ba30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ba310: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ba310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ba314: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2ba314u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba318: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ba318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ba31c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ba31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ba320: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ba320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba324: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ba324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ba328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ba32c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BA32Cu;
    {
        const bool branch_taken_0x2ba32c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA32Cu;
            // 0x2ba330: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba32c) {
            ctx->pc = 0x2BA370u;
            goto label_2ba370;
        }
    }
    ctx->pc = 0x2BA334u;
    // 0x2ba334: 0xc0523b8  jal         func_148EE0
    ctx->pc = 0x2BA334u;
    SET_GPR_U32(ctx, 31, 0x2BA33Cu);
    ctx->pc = 0x148EE0u;
    if (runtime->hasFunction(0x148EE0u)) {
        auto targetFn = runtime->lookupFunction(0x148EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA33Cu; }
        if (ctx->pc != 0x2BA33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BreakReadBG__Fv_0x148ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA33Cu; }
        if (ctx->pc != 0x2BA33Cu) { return; }
    }
    ctx->pc = 0x2BA33Cu;
label_2ba33c:
    // 0x2ba33c: 0xc052330  jal         func_148CC0
    ctx->pc = 0x2BA33Cu;
    SET_GPR_U32(ctx, 31, 0x2BA344u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA344u; }
        if (ctx->pc != 0x2BA344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA344u; }
        if (ctx->pc != 0x2BA344u) { return; }
    }
    ctx->pc = 0x2BA344u;
label_2ba344:
    // 0x2ba344: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ba344u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba348: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ba348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba34c:
    // 0x2ba34c: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x2ba34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x2ba350: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ba350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba354: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA354u;
    {
        const bool branch_taken_0x2ba354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba354) {
            ctx->pc = 0x2BA360u;
            goto label_2ba360;
        }
    }
    ctx->pc = 0x2BA35Cu;
    // 0x2ba35c: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2ba35cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_2ba360:
    // 0x2ba360: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ba360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ba364: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x2ba364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ba368: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2BA368u;
    {
        const bool branch_taken_0x2ba368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA368u;
            // 0x2ba36c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba368) {
            ctx->pc = 0x2BA34Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba34c;
        }
    }
    ctx->pc = 0x2BA370u;
label_2ba370:
    // 0x2ba370: 0xc07a904  jal         func_1EA410
    ctx->pc = 0x2BA370u;
    SET_GPR_U32(ctx, 31, 0x2BA378u);
    ctx->pc = 0x2BA374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA370u;
            // 0x2ba374: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA410u;
    if (runtime->hasFunction(0x1EA410u)) {
        auto targetFn = runtime->lookupFunction(0x1EA410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA378u; }
        if (ctx->pc != 0x2BA378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboPartsInfo__FP16CUserDataManager_0x1ea410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA378u; }
        if (ctx->pc != 0x2BA378u) { return; }
    }
    ctx->pc = 0x2BA378u;
label_2ba378:
    // 0x2ba378: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ba378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba37c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x2ba37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x2ba380: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2ba380u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba384: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ba384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba388: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ba388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba38c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ba38cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba390:
    // 0x2ba390: 0x2d19021  addu        $s2, $s6, $s1
    ctx->pc = 0x2ba390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2ba394: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ba394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba398: 0x10a00065  beqz        $a1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2BA398u;
    {
        const bool branch_taken_0x2ba398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba398) {
            ctx->pc = 0x2BA530u;
            goto label_2ba530;
        }
    }
    ctx->pc = 0x2BA3A0u;
    // 0x2ba3a0: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2ba3a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
    // 0x2ba3a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ba3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ba3a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA3A8u;
    {
        const bool branch_taken_0x2ba3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA3A8u;
            // 0x2ba3ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3a8) {
            ctx->pc = 0x2BA3B8u;
            goto label_2ba3b8;
        }
    }
    ctx->pc = 0x2BA3B0u;
    // 0x2ba3b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BA3B0u;
    {
        const bool branch_taken_0x2ba3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA3B0u;
            // 0x2ba3b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3b0) {
            ctx->pc = 0x2BA3E4u;
            goto label_2ba3e4;
        }
    }
    ctx->pc = 0x2BA3B8u;
label_2ba3b8:
    // 0x2ba3b8: 0x278284e0  addiu       $v0, $gp, -0x7B20
    ctx->pc = 0x2ba3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935776));
    // 0x2ba3bc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ba3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ba3c0: 0x83839b75  lb          $v1, -0x648B($gp)
    ctx->pc = 0x2ba3c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
    // 0x2ba3c4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2ba3c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba3c8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BA3C8u;
    {
        const bool branch_taken_0x2ba3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ba3c8) {
            ctx->pc = 0x2BA3E0u;
            goto label_2ba3e0;
        }
    }
    ctx->pc = 0x2BA3D0u;
    // 0x2ba3d0: 0x83839b72  lb          $v1, -0x648E($gp)
    ctx->pc = 0x2ba3d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
    // 0x2ba3d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba3d8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BA3D8u;
    {
        const bool branch_taken_0x2ba3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ba3d8) {
            ctx->pc = 0x2BA3E4u;
            goto label_2ba3e4;
        }
    }
    ctx->pc = 0x2BA3E0u;
label_2ba3e0:
    // 0x2ba3e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ba3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ba3e4:
    // 0x2ba3e4: 0x0  nop
    ctx->pc = 0x2ba3e4u;
    // NOP
    // 0x2ba3e8: 0x10800051  beqz        $a0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2BA3E8u;
    {
        const bool branch_taken_0x2ba3e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA3E8u;
            // 0x2ba3ec: 0x24a40020  addiu       $a0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3e8) {
            ctx->pc = 0x2BA530u;
            goto label_2ba530;
        }
    }
    ctx->pc = 0x2BA3F0u;
    // 0x2ba3f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ba3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ba3f4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BA3F4u;
    SET_GPR_U32(ctx, 31, 0x2BA3FCu);
    ctx->pc = 0x2BA3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA3F4u;
            // 0x2ba3f8: 0x24a5f4a0  addiu       $a1, $a1, -0xB60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA3FCu; }
        if (ctx->pc != 0x2BA3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA3FCu; }
        if (ctx->pc != 0x2BA3FCu) { return; }
    }
    ctx->pc = 0x2BA3FCu;
label_2ba3fc:
    // 0x2ba3fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ba3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba400: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ba400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ba404: 0xac600074  sw          $zero, 0x74($v1)
    ctx->pc = 0x2ba404u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
    // 0x2ba408: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ba408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba40c: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BA40Cu;
    {
        const bool branch_taken_0x2ba40c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA40Cu;
            // 0x2ba410: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba40c) {
            ctx->pc = 0x2BA438u;
            goto label_2ba438;
        }
    }
    ctx->pc = 0x2BA414u;
    // 0x2ba414: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2ba414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2ba418: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ba418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba41c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BA41Cu;
    SET_GPR_U32(ctx, 31, 0x2BA424u);
    ctx->pc = 0x2BA420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA41Cu;
            // 0x2ba420: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA424u; }
        if (ctx->pc != 0x2BA424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA424u; }
        if (ctx->pc != 0x2BA424u) { return; }
    }
    ctx->pc = 0x2BA424u;
label_2ba424:
    // 0x2ba424: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ba424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba428: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2BA428u;
    SET_GPR_U32(ctx, 31, 0x2BA430u);
    ctx->pc = 0x2BA42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA428u;
            // 0x2ba42c: 0x24a40020  addiu       $a0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA430u; }
        if (ctx->pc != 0x2BA430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA430u; }
        if (ctx->pc != 0x2BA430u) { return; }
    }
    ctx->pc = 0x2BA430u;
label_2ba430:
    // 0x2ba430: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2BA430u;
    {
        const bool branch_taken_0x2ba430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba430) {
            ctx->pc = 0x2BA4BCu;
            goto label_2ba4bc;
        }
    }
    ctx->pc = 0x2BA438u;
label_2ba438:
    // 0x2ba438: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ba438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ba43c: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BA43Cu;
    {
        const bool branch_taken_0x2ba43c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ba43c) {
            ctx->pc = 0x2BA47Cu;
            goto label_2ba47c;
        }
    }
    ctx->pc = 0x2BA444u;
    // 0x2ba444: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ba444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba448: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2ba448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ba44c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BA44Cu;
    SET_GPR_U32(ctx, 31, 0x2BA454u);
    ctx->pc = 0x2BA450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA44Cu;
            // 0x2ba450: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA454u; }
        if (ctx->pc != 0x2BA454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA454u; }
        if (ctx->pc != 0x2BA454u) { return; }
    }
    ctx->pc = 0x2BA454u;
label_2ba454:
    // 0x2ba454: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2ba454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ba458: 0xc04a5ba  jal         func_1296E8
    ctx->pc = 0x2BA458u;
    SET_GPR_U32(ctx, 31, 0x2BA460u);
    ctx->pc = 0x2BA45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA458u;
            // 0x2ba45c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1296E8u;
    if (runtime->hasFunction(0x1296E8u)) {
        auto targetFn = runtime->lookupFunction(0x1296E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA460u; }
        if (ctx->pc != 0x2BA460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strrchr_0x1296e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA460u; }
        if (ctx->pc != 0x2BA460u) { return; }
    }
    ctx->pc = 0x2BA460u;
label_2ba460:
    // 0x2ba460: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2BA460u;
    {
        const bool branch_taken_0x2ba460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba460) {
            ctx->pc = 0x2BA4BCu;
            goto label_2ba4bc;
        }
    }
    ctx->pc = 0x2BA468u;
    // 0x2ba468: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ba468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba46c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BA46Cu;
    SET_GPR_U32(ctx, 31, 0x2BA474u);
    ctx->pc = 0x2BA470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA46Cu;
            // 0x2ba470: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA474u; }
        if (ctx->pc != 0x2BA474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA474u; }
        if (ctx->pc != 0x2BA474u) { return; }
    }
    ctx->pc = 0x2BA474u;
label_2ba474:
    // 0x2ba474: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BA474u;
    {
        const bool branch_taken_0x2ba474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba474) {
            ctx->pc = 0x2BA4BCu;
            goto label_2ba4bc;
        }
    }
    ctx->pc = 0x2BA47Cu;
label_2ba47c:
    // 0x2ba47c: 0x0  nop
    ctx->pc = 0x2ba47cu;
    // NOP
    // 0x2ba480: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2ba480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2ba484: 0x2442cc10  addiu       $v0, $v0, -0x33F0
    ctx->pc = 0x2ba484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954000));
    // 0x2ba488: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2ba488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2ba48c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ba48cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba490: 0xc06571c  jal         func_195C70
    ctx->pc = 0x2BA490u;
    SET_GPR_U32(ctx, 31, 0x2BA498u);
    ctx->pc = 0x2BA494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA490u;
            // 0x2ba494: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C70u;
    if (runtime->hasFunction(0x195C70u)) {
        auto targetFn = runtime->lookupFunction(0x195C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA498u; }
        if (ctx->pc != 0x2BA498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFileName__Fii_0x195c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA498u; }
        if (ctx->pc != 0x2BA498u) { return; }
    }
    ctx->pc = 0x2BA498u;
label_2ba498:
    // 0x2ba498: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA498u;
    {
        const bool branch_taken_0x2ba498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba498) {
            ctx->pc = 0x2BA4ACu;
            goto label_2ba4ac;
        }
    }
    ctx->pc = 0x2BA4A0u;
    // 0x2ba4a0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ba4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba4a4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BA4A4u;
    SET_GPR_U32(ctx, 31, 0x2BA4ACu);
    ctx->pc = 0x2BA4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA4A4u;
            // 0x2ba4a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4ACu; }
        if (ctx->pc != 0x2BA4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4ACu; }
        if (ctx->pc != 0x2BA4ACu) { return; }
    }
    ctx->pc = 0x2BA4ACu;
label_2ba4ac:
    // 0x2ba4ac: 0x0  nop
    ctx->pc = 0x2ba4acu;
    // NOP
    // 0x2ba4b0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ba4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba4b4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2BA4B4u;
    SET_GPR_U32(ctx, 31, 0x2BA4BCu);
    ctx->pc = 0x2BA4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA4B4u;
            // 0x2ba4b8: 0x24a40020  addiu       $a0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4BCu; }
        if (ctx->pc != 0x2BA4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4BCu; }
        if (ctx->pc != 0x2BA4BCu) { return; }
    }
    ctx->pc = 0x2BA4BCu;
label_2ba4bc:
    // 0x2ba4bc: 0x0  nop
    ctx->pc = 0x2ba4bcu;
    // NOP
    // 0x2ba4c0: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x2ba4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x2ba4c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ba4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba4c8: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x2ba4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2ba4cc: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2ba4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ba4d0: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x2ba4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2ba4d4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ba4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba4d8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2ba4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2ba4dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ba4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ba4e0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2ba4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2ba4e4: 0xc05224c  jal         func_148930
    ctx->pc = 0x2BA4E4u;
    SET_GPR_U32(ctx, 31, 0x2BA4ECu);
    ctx->pc = 0x2BA4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA4E4u;
            // 0x2ba4e8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4ECu; }
        if (ctx->pc != 0x2BA4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4ECu; }
        if (ctx->pc != 0x2BA4ECu) { return; }
    }
    ctx->pc = 0x2BA4ECu;
label_2ba4ec:
    // 0x2ba4ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BA4ECu;
    {
        const bool branch_taken_0x2ba4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba4ec) {
            ctx->pc = 0x2BA530u;
            goto label_2ba530;
        }
    }
    ctx->pc = 0x2BA4F4u;
    // 0x2ba4f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ba4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba4f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ba4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba4fc: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x2ba4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ba500: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x2ba500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2ba504: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2ba504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2ba508: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA508u;
    {
        const bool branch_taken_0x2ba508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA508u;
            // 0x2ba50c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba508) {
            ctx->pc = 0x2BA518u;
            goto label_2ba518;
        }
    }
    ctx->pc = 0x2BA510u;
    // 0x2ba510: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2ba510u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2ba514: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2ba514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ba518:
    // 0x2ba518: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2BA518u;
    SET_GPR_U32(ctx, 31, 0x2BA520u);
    ctx->pc = 0x2BA51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA518u;
            // 0x2ba51c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA520u; }
        if (ctx->pc != 0x2BA520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA520u; }
        if (ctx->pc != 0x2BA520u) { return; }
    }
    ctx->pc = 0x2BA520u;
label_2ba520:
    // 0x2ba520: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2BA520u;
    SET_GPR_U32(ctx, 31, 0x2BA528u);
    ctx->pc = 0x2BA524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA520u;
            // 0x2ba524: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA528u; }
        if (ctx->pc != 0x2BA528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA528u; }
        if (ctx->pc != 0x2BA528u) { return; }
    }
    ctx->pc = 0x2BA528u;
label_2ba528:
    // 0x2ba528: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x2ba528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2ba52c: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x2ba52cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2ba530:
    // 0x2ba530: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ba530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ba534: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x2ba534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ba538: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2ba538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2ba53c: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x2BA53Cu;
    {
        const bool branch_taken_0x2ba53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA53Cu;
            // 0x2ba540: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba53c) {
            ctx->pc = 0x2BA390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba390;
        }
    }
    ctx->pc = 0x2BA544u;
    // 0x2ba544: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2ba544u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
    // 0x2ba548: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ba548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ba54c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BA54Cu;
    {
        const bool branch_taken_0x2ba54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ba54c) {
            ctx->pc = 0x2BA570u;
            goto label_2ba570;
        }
    }
    ctx->pc = 0x2BA554u;
    // 0x2ba554: 0x83829b72  lb          $v0, -0x648E($gp)
    ctx->pc = 0x2ba554u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
    // 0x2ba558: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BA558u;
    {
        const bool branch_taken_0x2ba558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA558u;
            // 0x2ba55c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba558) {
            ctx->pc = 0x2BA5F0u;
            goto label_2ba5f0;
        }
    }
    ctx->pc = 0x2BA560u;
    // 0x2ba560: 0x83839b75  lb          $v1, -0x648B($gp)
    ctx->pc = 0x2ba560u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
    // 0x2ba564: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ba564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ba568: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2BA568u;
    {
        const bool branch_taken_0x2ba568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ba568) {
            ctx->pc = 0x2BA5ECu;
            goto label_2ba5ec;
        }
    }
    ctx->pc = 0x2BA570u;
label_2ba570:
    // 0x2ba570: 0x8ed00018  lw          $s0, 0x18($s6)
    ctx->pc = 0x2ba570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x2ba574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba578: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ba578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ba57c: 0x24a5f4b0  addiu       $a1, $a1, -0xB50
    ctx->pc = 0x2ba57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964400));
    // 0x2ba580: 0xa2020070  sb          $v0, 0x70($s0)
    ctx->pc = 0x2ba580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ba584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ba584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba588: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BA588u;
    SET_GPR_U32(ctx, 31, 0x2BA590u);
    ctx->pc = 0x2BA58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA588u;
            // 0x2ba58c: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA590u; }
        if (ctx->pc != 0x2BA590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA590u; }
        if (ctx->pc != 0x2BA590u) { return; }
    }
    ctx->pc = 0x2BA590u;
label_2ba590:
    // 0x2ba590: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ba590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ba594: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2ba594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2ba598: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2BA598u;
    SET_GPR_U32(ctx, 31, 0x2BA5A0u);
    ctx->pc = 0x2BA59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA598u;
            // 0x2ba59c: 0x24a5f4c0  addiu       $a1, $a1, -0xB40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA5A0u; }
        if (ctx->pc != 0x2BA5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA5A0u; }
        if (ctx->pc != 0x2BA5A0u) { return; }
    }
    ctx->pc = 0x2BA5A0u;
label_2ba5a0:
    // 0x2ba5a0: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x2ba5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2ba5a4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2ba5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2ba5a8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2ba5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2ba5ac: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x2ba5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2ba5b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ba5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ba5b4: 0xc05224c  jal         func_148930
    ctx->pc = 0x2BA5B4u;
    SET_GPR_U32(ctx, 31, 0x2BA5BCu);
    ctx->pc = 0x2BA5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA5B4u;
            // 0x2ba5b8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA5BCu; }
        if (ctx->pc != 0x2BA5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA5BCu; }
        if (ctx->pc != 0x2BA5BCu) { return; }
    }
    ctx->pc = 0x2BA5BCu;
label_2ba5bc:
    // 0x2ba5bc: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x2ba5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2ba5c0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2ba5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2ba5c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA5C4u;
    {
        const bool branch_taken_0x2ba5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA5C4u;
            // 0x2ba5c8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5c4) {
            ctx->pc = 0x2BA5D4u;
            goto label_2ba5d4;
        }
    }
    ctx->pc = 0x2BA5CCu;
    // 0x2ba5cc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2ba5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2ba5d0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2ba5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ba5d4:
    // 0x2ba5d4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2BA5D4u;
    SET_GPR_U32(ctx, 31, 0x2BA5DCu);
    ctx->pc = 0x2BA5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA5D4u;
            // 0x2ba5d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA5DCu; }
        if (ctx->pc != 0x2BA5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA5DCu; }
        if (ctx->pc != 0x2BA5DCu) { return; }
    }
    ctx->pc = 0x2BA5DCu;
label_2ba5dc:
    // 0x2ba5dc: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2BA5DCu;
    SET_GPR_U32(ctx, 31, 0x2BA5E4u);
    ctx->pc = 0x2BA5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA5DCu;
            // 0x2ba5e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA5E4u; }
        if (ctx->pc != 0x2BA5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA5E4u; }
        if (ctx->pc != 0x2BA5E4u) { return; }
    }
    ctx->pc = 0x2BA5E4u;
label_2ba5e4:
    // 0x2ba5e4: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x2ba5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2ba5e8: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x2ba5e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2ba5ec:
    // 0x2ba5ec: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2ba5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ba5f0:
    // 0x2ba5f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ba5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ba5f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ba5f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ba5f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ba5f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ba5fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ba5fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ba600: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ba600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ba604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ba604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ba608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ba608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba60c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba60cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba614: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA614u;
            // 0x2ba618: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA61Cu;
}
