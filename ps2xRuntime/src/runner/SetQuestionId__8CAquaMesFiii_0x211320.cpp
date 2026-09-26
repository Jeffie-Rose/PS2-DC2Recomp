#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetQuestionId__8CAquaMesFiii
// Address: 0x211320 - 0x21152c
void SetQuestionId__8CAquaMesFiii_0x211320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetQuestionId__8CAquaMesFiii_0x211320");
#endif

    switch (ctx->pc) {
        case 0x21137cu: goto label_21137c;
        case 0x2113a4u: goto label_2113a4;
        case 0x2113acu: goto label_2113ac;
        case 0x2113d0u: goto label_2113d0;
        case 0x2113d8u: goto label_2113d8;
        case 0x2113e8u: goto label_2113e8;
        case 0x2113f0u: goto label_2113f0;
        case 0x211408u: goto label_211408;
        case 0x211418u: goto label_211418;
        case 0x211448u: goto label_211448;
        case 0x21145cu: goto label_21145c;
        case 0x211470u: goto label_211470;
        case 0x211490u: goto label_211490;
        case 0x2114a0u: goto label_2114a0;
        case 0x2114b4u: goto label_2114b4;
        case 0x2114ecu: goto label_2114ec;
        case 0x2114f8u: goto label_2114f8;
        case 0x211500u: goto label_211500;
        default: break;
    }

    ctx->pc = 0x211320u;

    // 0x211320: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x211320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x211324: 0x24020320  addiu       $v0, $zero, 0x320
    ctx->pc = 0x211324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x211328: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x211328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x21132c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21132cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x211330: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x211330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x211334: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x211334u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211338: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x211338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21133c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21133cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x211340: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x211340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x211344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x211344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x211348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x211348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21134c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21134cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x211350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x211354: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x211354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x211358: 0xa4870036  sh          $a3, 0x36($a0)
    ctx->pc = 0x211358u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 7));
    // 0x21135c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x21135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x211360: 0x16e2005e  bne         $s7, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x211360u;
    {
        const bool branch_taken_0x211360 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x211364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211360u;
            // 0x211364: 0xac661b14  sw          $a2, 0x1B14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6932), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211360) {
            ctx->pc = 0x2114DCu;
            goto label_2114dc;
        }
    }
    ctx->pc = 0x211368u;
    // 0x211368: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x211368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x21136c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21136cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211370: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x211370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x211374: 0xc08329c  jal         func_20CA70
    ctx->pc = 0x211374u;
    SET_GPR_U32(ctx, 31, 0x21137Cu);
    ctx->pc = 0x211378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211374u;
            // 0x211378: 0xac4317e4  sw          $v1, 0x17E4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CA70u;
    if (runtime->hasFunction(0x20CA70u)) {
        auto targetFn = runtime->lookupFunction(0x20CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21137Cu; }
        if (ctx->pc != 0x21137Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUseableEsaNo__FPi_0x20ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21137Cu; }
        if (ctx->pc != 0x21137Cu) { return; }
    }
    ctx->pc = 0x21137Cu;
label_21137c:
    // 0x21137c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x21137cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x211380: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x211380u;
    {
        const bool branch_taken_0x211380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x211384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211380u;
            // 0x211384: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211380) {
            ctx->pc = 0x21138Cu;
            goto label_21138c;
        }
    }
    ctx->pc = 0x211388u;
    // 0x211388: 0x24170320  addiu       $s7, $zero, 0x320
    ctx->pc = 0x211388u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_21138c:
    // 0x21138c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21138Cu;
    {
        const bool branch_taken_0x21138c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x211390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21138Cu;
            // 0x211390: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21138c) {
            ctx->pc = 0x211398u;
            goto label_211398;
        }
    }
    ctx->pc = 0x211394u;
    // 0x211394: 0x24170321  addiu       $s7, $zero, 0x321
    ctx->pc = 0x211394u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 801));
label_211398:
    // 0x211398: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x211398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21139c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x21139Cu;
    {
        const bool branch_taken_0x21139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21139Cu;
            // 0x2113a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21139c) {
            ctx->pc = 0x2114C0u;
            goto label_2114c0;
        }
    }
    ctx->pc = 0x2113A4u;
label_2113a4:
    // 0x2113a4: 0xc065810  jal         func_196040
    ctx->pc = 0x2113A4u;
    SET_GPR_U32(ctx, 31, 0x2113ACu);
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113ACu; }
        if (ctx->pc != 0x2113ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113ACu; }
        if (ctx->pc != 0x2113ACu) { return; }
    }
    ctx->pc = 0x2113ACu;
label_2113ac:
    // 0x2113ac: 0x21d1821  addu        $v1, $s0, $sp
    ctx->pc = 0x2113acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x2113b0: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x2113b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x2113b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2113b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2113b8: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2113b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2113bc: 0x12800045  beqz        $s4, . + 4 + (0x45 << 2)
    ctx->pc = 0x2113BCu;
    {
        const bool branch_taken_0x2113bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2113BCu;
            // 0x2113c0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113bc) {
            ctx->pc = 0x2114D4u;
            goto label_2114d4;
        }
    }
    ctx->pc = 0x2113C4u;
    // 0x2113c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2113c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113c8: 0xc049c86  jal         func_127218
    ctx->pc = 0x2113C8u;
    SET_GPR_U32(ctx, 31, 0x2113D0u);
    ctx->pc = 0x2113CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2113C8u;
            // 0x2113cc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113D0u; }
        if (ctx->pc != 0x2113D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113D0u; }
        if (ctx->pc != 0x2113D0u) { return; }
    }
    ctx->pc = 0x2113D0u;
label_2113d0:
    // 0x2113d0: 0xc0684dc  jal         func_1A1370
    ctx->pc = 0x2113D0u;
    SET_GPR_U32(ctx, 31, 0x2113D8u);
    ctx->pc = 0x2113D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2113D0u;
            // 0x2113d4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113D8u; }
        if (ctx->pc != 0x2113D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113D8u; }
        if (ctx->pc != 0x2113D8u) { return; }
    }
    ctx->pc = 0x2113D8u;
label_2113d8:
    // 0x2113d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2113d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2113dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113e0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2113E0u;
    SET_GPR_U32(ctx, 31, 0x2113E8u);
    ctx->pc = 0x2113E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2113E0u;
            // 0x2113e4: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113E8u; }
        if (ctx->pc != 0x2113E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113E8u; }
        if (ctx->pc != 0x2113E8u) { return; }
    }
    ctx->pc = 0x2113E8u;
label_2113e8:
    // 0x2113e8: 0xc04a422  jal         func_129088
    ctx->pc = 0x2113E8u;
    SET_GPR_U32(ctx, 31, 0x2113F0u);
    ctx->pc = 0x2113ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2113E8u;
            // 0x2113ec: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113F0u; }
        if (ctx->pc != 0x2113F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2113F0u; }
        if (ctx->pc != 0x2113F0u) { return; }
    }
    ctx->pc = 0x2113F0u;
label_2113f0:
    // 0x2113f0: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2113f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2113f4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2113f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2113f8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2113F8u;
    {
        const bool branch_taken_0x2113f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2113FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2113F8u;
            // 0x2113fc: 0x829823  subu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113f8) {
            ctx->pc = 0x211450u;
            goto label_211450;
        }
    }
    ctx->pc = 0x211400u;
    // 0x211400: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x211400u;
    {
        const bool branch_taken_0x211400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211400u;
            // 0x211404: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211400) {
            ctx->pc = 0x21141Cu;
            goto label_21141c;
        }
    }
    ctx->pc = 0x211408u;
label_211408:
    // 0x211408: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x211408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21140c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x21140cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x211410: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x211410u;
    SET_GPR_U32(ctx, 31, 0x211418u);
    ctx->pc = 0x211414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211410u;
            // 0x211414: 0x24a59e30  addiu       $a1, $a1, -0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211418u; }
        if (ctx->pc != 0x211418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211418u; }
        if (ctx->pc != 0x211418u) { return; }
    }
    ctx->pc = 0x211418u;
label_211418:
    // 0x211418: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x211418u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21141c:
    // 0x21141c: 0x0  nop
    ctx->pc = 0x21141cu;
    // NOP
    // 0x211420: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x211420u;
    {
        const bool branch_taken_0x211420 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x211424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211420u;
            // 0x211424: 0x131043  sra         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211420) {
            ctx->pc = 0x211430u;
            goto label_211430;
        }
    }
    ctx->pc = 0x211428u;
    // 0x211428: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x211428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21142c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x21142cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_211430:
    // 0x211430: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x211430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x211434: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x211434u;
    {
        const bool branch_taken_0x211434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211434u;
            // 0x211438: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211434) {
            ctx->pc = 0x211408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211408;
        }
    }
    ctx->pc = 0x21143Cu;
    // 0x21143c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x21143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x211440: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x211440u;
    SET_GPR_U32(ctx, 31, 0x211448u);
    ctx->pc = 0x211444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211440u;
            // 0x211444: 0x24a59e38  addiu       $a1, $a1, -0x61C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211448u; }
        if (ctx->pc != 0x211448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211448u; }
        if (ctx->pc != 0x211448u) { return; }
    }
    ctx->pc = 0x211448u;
label_211448:
    // 0x211448: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x211448u;
    {
        const bool branch_taken_0x211448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x211448) {
            ctx->pc = 0x211490u;
            goto label_211490;
        }
    }
    ctx->pc = 0x211450u;
label_211450:
    // 0x211450: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x211450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x211454: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x211454u;
    {
        const bool branch_taken_0x211454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x211458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211454u;
            // 0x211458: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211454) {
            ctx->pc = 0x211480u;
            goto label_211480;
        }
    }
    ctx->pc = 0x21145Cu;
label_21145c:
    // 0x21145c: 0x0  nop
    ctx->pc = 0x21145cu;
    // NOP
    // 0x211460: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x211460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x211464: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x211464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x211468: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x211468u;
    SET_GPR_U32(ctx, 31, 0x211470u);
    ctx->pc = 0x21146Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211468u;
            // 0x21146c: 0x24a59e40  addiu       $a1, $a1, -0x61C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211470u; }
        if (ctx->pc != 0x211470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211470u; }
        if (ctx->pc != 0x211470u) { return; }
    }
    ctx->pc = 0x211470u;
label_211470:
    // 0x211470: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x211470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x211474: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x211474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x211478: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x211478u;
    {
        const bool branch_taken_0x211478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211478) {
            ctx->pc = 0x21145Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21145c;
        }
    }
    ctx->pc = 0x211480u;
label_211480:
    // 0x211480: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x211480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x211484: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x211484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x211488: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x211488u;
    SET_GPR_U32(ctx, 31, 0x211490u);
    ctx->pc = 0x21148Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211488u;
            // 0x21148c: 0x24a59e48  addiu       $a1, $a1, -0x61B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211490u; }
        if (ctx->pc != 0x211490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211490u; }
        if (ctx->pc != 0x211490u) { return; }
    }
    ctx->pc = 0x211490u;
label_211490:
    // 0x211490: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x211490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x211494: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x211494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211498: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x211498u;
    SET_GPR_U32(ctx, 31, 0x2114A0u);
    ctx->pc = 0x21149Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211498u;
            // 0x21149c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114A0u; }
        if (ctx->pc != 0x2114A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114A0u; }
        if (ctx->pc != 0x2114A0u) { return; }
    }
    ctx->pc = 0x2114A0u;
label_2114a0:
    // 0x2114a0: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x2114a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2114a4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2114a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2114a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2114a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2114ac: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2114ACu;
    SET_GPR_U32(ctx, 31, 0x2114B4u);
    ctx->pc = 0x2114B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2114ACu;
            // 0x2114b0: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114B4u; }
        if (ctx->pc != 0x2114B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114B4u; }
        if (ctx->pc != 0x2114B4u) { return; }
    }
    ctx->pc = 0x2114B4u;
label_2114b4:
    // 0x2114b4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2114b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2114b8: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2114b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2114bc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2114bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2114c0:
    // 0x2114c0: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2114c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x2114c4: 0x245300c0  addiu       $s3, $v0, 0xC0
    ctx->pc = 0x2114c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2114c8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2114c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2114cc: 0x1c80ffb5  bgtz        $a0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2114CCu;
    {
        const bool branch_taken_0x2114cc = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2114cc) {
            ctx->pc = 0x2113A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2113a4;
        }
    }
    ctx->pc = 0x2114D4u;
label_2114d4:
    // 0x2114d4: 0x0  nop
    ctx->pc = 0x2114d4u;
    // NOP
    // 0x2114d8: 0xa6550036  sh          $s5, 0x36($s2)
    ctx->pc = 0x2114d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 54), (uint16_t)GPR_U32(ctx, 21));
label_2114dc:
    // 0x2114dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2114dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2114e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2114e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2114e4: 0xc054a98  jal         func_152A60
    ctx->pc = 0x2114E4u;
    SET_GPR_U32(ctx, 31, 0x2114ECu);
    ctx->pc = 0x2114E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2114E4u;
            // 0x2114e8: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A60u;
    if (runtime->hasFunction(0x152A60u)) {
        auto targetFn = runtime->lookupFunction(0x152A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114ECu; }
        if (ctx->pc != 0x2114ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHalfFontWPercent__6ClsMesFf_0x152a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114ECu; }
        if (ctx->pc != 0x2114ECu) { return; }
    }
    ctx->pc = 0x2114ECu;
label_2114ec:
    // 0x2114ec: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x2114ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2114f0: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x2114F0u;
    SET_GPR_U32(ctx, 31, 0x2114F8u);
    ctx->pc = 0x2114F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2114F0u;
            // 0x2114f4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114F8u; }
        if (ctx->pc != 0x2114F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2114F8u; }
        if (ctx->pc != 0x2114F8u) { return; }
    }
    ctx->pc = 0x2114F8u;
label_2114f8:
    // 0x2114f8: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x2114F8u;
    SET_GPR_U32(ctx, 31, 0x211500u);
    ctx->pc = 0x2114FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2114F8u;
            // 0x2114fc: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211500u; }
        if (ctx->pc != 0x211500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211500u; }
        if (ctx->pc != 0x211500u) { return; }
    }
    ctx->pc = 0x211500u;
label_211500:
    // 0x211500: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x211500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x211504: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x211504u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x211508: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x211508u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21150c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21150cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x211510: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x211510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x211514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x211514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x211518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x211518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21151c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21151cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x211520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211524: 0x3e00008  jr          $ra
    ctx->pc = 0x211524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211524u;
            // 0x211528: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21152Cu;
}
