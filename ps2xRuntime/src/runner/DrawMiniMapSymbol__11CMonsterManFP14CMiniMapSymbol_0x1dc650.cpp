#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMiniMapSymbol__11CMonsterManFP14CMiniMapSymbol
// Address: 0x1dc650 - 0x1dc78c
void DrawMiniMapSymbol__11CMonsterManFP14CMiniMapSymbol_0x1dc650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMiniMapSymbol__11CMonsterManFP14CMiniMapSymbol_0x1dc650");
#endif

    switch (ctx->pc) {
        case 0x1dc650u: goto label_1dc650;
        case 0x1dc654u: goto label_1dc654;
        case 0x1dc658u: goto label_1dc658;
        case 0x1dc65cu: goto label_1dc65c;
        case 0x1dc660u: goto label_1dc660;
        case 0x1dc664u: goto label_1dc664;
        case 0x1dc668u: goto label_1dc668;
        case 0x1dc66cu: goto label_1dc66c;
        case 0x1dc670u: goto label_1dc670;
        case 0x1dc674u: goto label_1dc674;
        case 0x1dc678u: goto label_1dc678;
        case 0x1dc67cu: goto label_1dc67c;
        case 0x1dc680u: goto label_1dc680;
        case 0x1dc684u: goto label_1dc684;
        case 0x1dc688u: goto label_1dc688;
        case 0x1dc68cu: goto label_1dc68c;
        case 0x1dc690u: goto label_1dc690;
        case 0x1dc694u: goto label_1dc694;
        case 0x1dc698u: goto label_1dc698;
        case 0x1dc69cu: goto label_1dc69c;
        case 0x1dc6a0u: goto label_1dc6a0;
        case 0x1dc6a4u: goto label_1dc6a4;
        case 0x1dc6a8u: goto label_1dc6a8;
        case 0x1dc6acu: goto label_1dc6ac;
        case 0x1dc6b0u: goto label_1dc6b0;
        case 0x1dc6b4u: goto label_1dc6b4;
        case 0x1dc6b8u: goto label_1dc6b8;
        case 0x1dc6bcu: goto label_1dc6bc;
        case 0x1dc6c0u: goto label_1dc6c0;
        case 0x1dc6c4u: goto label_1dc6c4;
        case 0x1dc6c8u: goto label_1dc6c8;
        case 0x1dc6ccu: goto label_1dc6cc;
        case 0x1dc6d0u: goto label_1dc6d0;
        case 0x1dc6d4u: goto label_1dc6d4;
        case 0x1dc6d8u: goto label_1dc6d8;
        case 0x1dc6dcu: goto label_1dc6dc;
        case 0x1dc6e0u: goto label_1dc6e0;
        case 0x1dc6e4u: goto label_1dc6e4;
        case 0x1dc6e8u: goto label_1dc6e8;
        case 0x1dc6ecu: goto label_1dc6ec;
        case 0x1dc6f0u: goto label_1dc6f0;
        case 0x1dc6f4u: goto label_1dc6f4;
        case 0x1dc6f8u: goto label_1dc6f8;
        case 0x1dc6fcu: goto label_1dc6fc;
        case 0x1dc700u: goto label_1dc700;
        case 0x1dc704u: goto label_1dc704;
        case 0x1dc708u: goto label_1dc708;
        case 0x1dc70cu: goto label_1dc70c;
        case 0x1dc710u: goto label_1dc710;
        case 0x1dc714u: goto label_1dc714;
        case 0x1dc718u: goto label_1dc718;
        case 0x1dc71cu: goto label_1dc71c;
        case 0x1dc720u: goto label_1dc720;
        case 0x1dc724u: goto label_1dc724;
        case 0x1dc728u: goto label_1dc728;
        case 0x1dc72cu: goto label_1dc72c;
        case 0x1dc730u: goto label_1dc730;
        case 0x1dc734u: goto label_1dc734;
        case 0x1dc738u: goto label_1dc738;
        case 0x1dc73cu: goto label_1dc73c;
        case 0x1dc740u: goto label_1dc740;
        case 0x1dc744u: goto label_1dc744;
        case 0x1dc748u: goto label_1dc748;
        case 0x1dc74cu: goto label_1dc74c;
        case 0x1dc750u: goto label_1dc750;
        case 0x1dc754u: goto label_1dc754;
        case 0x1dc758u: goto label_1dc758;
        case 0x1dc75cu: goto label_1dc75c;
        case 0x1dc760u: goto label_1dc760;
        case 0x1dc764u: goto label_1dc764;
        case 0x1dc768u: goto label_1dc768;
        case 0x1dc76cu: goto label_1dc76c;
        case 0x1dc770u: goto label_1dc770;
        case 0x1dc774u: goto label_1dc774;
        case 0x1dc778u: goto label_1dc778;
        case 0x1dc77cu: goto label_1dc77c;
        case 0x1dc780u: goto label_1dc780;
        case 0x1dc784u: goto label_1dc784;
        case 0x1dc788u: goto label_1dc788;
        default: break;
    }

    ctx->pc = 0x1dc650u;

label_1dc650:
    // 0x1dc650: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1dc650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1dc654:
    // 0x1dc654: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1dc654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1dc658:
    // 0x1dc658: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1dc658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1dc65c:
    // 0x1dc65c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1dc65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1dc660:
    // 0x1dc660: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dc660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1dc664:
    // 0x1dc664: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dc664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1dc668:
    // 0x1dc668: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1dc668u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dc66c:
    // 0x1dc66c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dc66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dc670:
    // 0x1dc670: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1dc670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dc674:
    // 0x1dc674: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dc674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dc678:
    // 0x1dc678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dc678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dc67c:
    // 0x1dc67c: 0x12800038  beqz        $s4, . + 4 + (0x38 << 2)
label_1dc680:
    if (ctx->pc == 0x1DC680u) {
        ctx->pc = 0x1DC680u;
            // 0x1dc680: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1DC684u;
        goto label_1dc684;
    }
    ctx->pc = 0x1DC67Cu;
    {
        const bool branch_taken_0x1dc67c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC67Cu;
            // 0x1dc680: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc67c) {
            ctx->pc = 0x1DC760u;
            goto label_1dc760;
        }
    }
    ctx->pc = 0x1DC684u;
label_1dc684:
    // 0x1dc684: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1dc684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1dc688:
    // 0x1dc688: 0x8c422ff4  lw          $v0, 0x2FF4($v0)
    ctx->pc = 0x1dc688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12276)));
label_1dc68c:
    // 0x1dc68c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1dc68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1dc690:
    // 0x1dc690: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1dc694:
    if (ctx->pc == 0x1DC694u) {
        ctx->pc = 0x1DC694u;
            // 0x1dc694: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC698u;
        goto label_1dc698;
    }
    ctx->pc = 0x1DC690u;
    {
        const bool branch_taken_0x1dc690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC690u;
            // 0x1dc694: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc690) {
            ctx->pc = 0x1DC69Cu;
            goto label_1dc69c;
        }
    }
    ctx->pc = 0x1DC698u;
label_1dc698:
    // 0x1dc698: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1dc698u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc69c:
    // 0x1dc69c: 0xc0683a8  jal         func_1A0EA0
label_1dc6a0:
    if (ctx->pc == 0x1DC6A0u) {
        ctx->pc = 0x1DC6A4u;
        goto label_1dc6a4;
    }
    ctx->pc = 0x1DC69Cu;
    SET_GPR_U32(ctx, 31, 0x1DC6A4u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6A4u; }
        if (ctx->pc != 0x1DC6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC6A4u; }
        if (ctx->pc != 0x1DC6A4u) { return; }
    }
    ctx->pc = 0x1DC6A4u;
label_1dc6a4:
    // 0x1dc6a4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dc6a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dc6a8:
    // 0x1dc6a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dc6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc6ac:
    // 0x1dc6ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dc6acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc6b0:
    // 0x1dc6b0: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x1dc6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1dc6b4:
    // 0x1dc6b4: 0x8c650484  lw          $a1, 0x484($v1)
    ctx->pc = 0x1dc6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_1dc6b8:
    // 0x1dc6b8: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
label_1dc6bc:
    if (ctx->pc == 0x1DC6BCu) {
        ctx->pc = 0x1DC6BCu;
            // 0x1dc6bc: 0x24730484  addiu       $s3, $v1, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1156));
        ctx->pc = 0x1DC6C0u;
        goto label_1dc6c0;
    }
    ctx->pc = 0x1DC6B8u;
    {
        const bool branch_taken_0x1dc6b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC6B8u;
            // 0x1dc6bc: 0x24730484  addiu       $s3, $v1, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc6b8) {
            ctx->pc = 0x1DC74Cu;
            goto label_1dc74c;
        }
    }
    ctx->pc = 0x1DC6C0u;
label_1dc6c0:
    // 0x1dc6c0: 0x84a4068a  lh          $a0, 0x68A($a1)
    ctx->pc = 0x1dc6c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1674)));
label_1dc6c4:
    // 0x1dc6c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dc6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dc6c8:
    // 0x1dc6c8: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
label_1dc6cc:
    if (ctx->pc == 0x1DC6CCu) {
        ctx->pc = 0x1DC6D0u;
        goto label_1dc6d0;
    }
    ctx->pc = 0x1DC6C8u;
    {
        const bool branch_taken_0x1dc6c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dc6c8) {
            ctx->pc = 0x1DC74Cu;
            goto label_1dc74c;
        }
    }
    ctx->pc = 0x1DC6D0u;
label_1dc6d0:
    // 0x1dc6d0: 0x84a40730  lh          $a0, 0x730($a1)
    ctx->pc = 0x1dc6d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1840)));
label_1dc6d4:
    // 0x1dc6d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dc6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc6d8:
    // 0x1dc6d8: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_1dc6dc:
    if (ctx->pc == 0x1DC6DCu) {
        ctx->pc = 0x1DC6E0u;
        goto label_1dc6e0;
    }
    ctx->pc = 0x1DC6D8u;
    {
        const bool branch_taken_0x1dc6d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dc6d8) {
            ctx->pc = 0x1DC74Cu;
            goto label_1dc74c;
        }
    }
    ctx->pc = 0x1DC6E0u;
label_1dc6e0:
    // 0x1dc6e0: 0xc4a112f4  lwc1        $f1, 0x12F4($a1)
    ctx->pc = 0x1dc6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dc6e4:
    // 0x1dc6e4: 0xc4a012fc  lwc1        $f0, 0x12FC($a1)
    ctx->pc = 0x1dc6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dc6e8:
    // 0x1dc6e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dc6e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dc6ec:
    // 0x1dc6ec: 0x0  nop
    ctx->pc = 0x1dc6ecu;
    // NOP
label_1dc6f0:
    // 0x1dc6f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1dc6f4:
    if (ctx->pc == 0x1DC6F4u) {
        ctx->pc = 0x1DC6F8u;
        goto label_1dc6f8;
    }
    ctx->pc = 0x1DC6F0u;
    {
        const bool branch_taken_0x1dc6f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc6f0) {
            ctx->pc = 0x1DC700u;
            goto label_1dc700;
        }
    }
    ctx->pc = 0x1DC6F8u;
label_1dc6f8:
    // 0x1dc6f8: 0x12c00014  beqz        $s6, . + 4 + (0x14 << 2)
label_1dc6fc:
    if (ctx->pc == 0x1DC6FCu) {
        ctx->pc = 0x1DC700u;
        goto label_1dc700;
    }
    ctx->pc = 0x1DC6F8u;
    {
        const bool branch_taken_0x1dc6f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc6f8) {
            ctx->pc = 0x1DC74Cu;
            goto label_1dc74c;
        }
    }
    ctx->pc = 0x1DC700u;
label_1dc700:
    // 0x1dc700: 0x84a21354  lh          $v0, 0x1354($a1)
    ctx->pc = 0x1dc700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4948)));
label_1dc704:
    // 0x1dc704: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1dc708:
    if (ctx->pc == 0x1DC708u) {
        ctx->pc = 0x1DC708u;
            // 0x1dc708: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC70Cu;
        goto label_1dc70c;
    }
    ctx->pc = 0x1DC704u;
    {
        const bool branch_taken_0x1dc704 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DC708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC704u;
            // 0x1dc708: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc704) {
            ctx->pc = 0x1DC724u;
            goto label_1dc724;
        }
    }
    ctx->pc = 0x1DC70Cu;
label_1dc70c:
    // 0x1dc70c: 0xc067c94  jal         func_19F250
label_1dc710:
    if (ctx->pc == 0x1DC710u) {
        ctx->pc = 0x1DC710u;
            // 0x1dc710: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DC714u;
        goto label_1dc714;
    }
    ctx->pc = 0x1DC70Cu;
    SET_GPR_U32(ctx, 31, 0x1DC714u);
    ctx->pc = 0x1DC710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC70Cu;
            // 0x1dc710: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (runtime->hasFunction(0x19F250u)) {
        auto targetFn = runtime->lookupFunction(0x19F250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC714u; }
        if (ctx->pc != 0x1DC714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowNPC__16CBattleCharaInfoFv_0x19f250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC714u; }
        if (ctx->pc != 0x1DC714u) { return; }
    }
    ctx->pc = 0x1DC714u;
label_1dc714:
    // 0x1dc714: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1dc714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1dc718:
    // 0x1dc718: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1dc71c:
    if (ctx->pc == 0x1DC71Cu) {
        ctx->pc = 0x1DC720u;
        goto label_1dc720;
    }
    ctx->pc = 0x1DC718u;
    {
        const bool branch_taken_0x1dc718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dc718) {
            ctx->pc = 0x1DC724u;
            goto label_1dc724;
        }
    }
    ctx->pc = 0x1DC720u;
label_1dc720:
    // 0x1dc720: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x1dc720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1dc724:
    // 0x1dc724: 0x0  nop
    ctx->pc = 0x1dc724u;
    // NOP
label_1dc728:
    // 0x1dc728: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1dc728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1dc72c:
    // 0x1dc72c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dc72cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dc730:
    // 0x1dc730: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1dc730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1dc734:
    // 0x1dc734: 0x320f809  jalr        $t9
label_1dc738:
    if (ctx->pc == 0x1DC738u) {
        ctx->pc = 0x1DC738u;
            // 0x1dc738: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1DC73Cu;
        goto label_1dc73c;
    }
    ctx->pc = 0x1DC734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC73Cu);
        ctx->pc = 0x1DC738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC734u;
            // 0x1dc738: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DC73Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DC73Cu; }
            if (ctx->pc != 0x1DC73Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DC73Cu;
label_1dc73c:
    // 0x1dc73c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dc73cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dc740:
    // 0x1dc740: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dc740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dc744:
    // 0x1dc744: 0xc075310  jal         func_1D4C40
label_1dc748:
    if (ctx->pc == 0x1DC748u) {
        ctx->pc = 0x1DC748u;
            // 0x1dc748: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1DC74Cu;
        goto label_1dc74c;
    }
    ctx->pc = 0x1DC744u;
    SET_GPR_U32(ctx, 31, 0x1DC74Cu);
    ctx->pc = 0x1DC748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC744u;
            // 0x1dc748: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C40u;
    if (runtime->hasFunction(0x1D4C40u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC74Cu; }
        if (ctx->pc != 0x1DC74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol__14CMiniMapSymbolFPfi_0x1d4c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC74Cu; }
        if (ctx->pc != 0x1DC74Cu) { return; }
    }
    ctx->pc = 0x1DC74Cu;
label_1dc74c:
    // 0x1dc74c: 0x0  nop
    ctx->pc = 0x1dc74cu;
    // NOP
label_1dc750:
    // 0x1dc750: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dc750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dc754:
    // 0x1dc754: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x1dc754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_1dc758:
    // 0x1dc758: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
label_1dc75c:
    if (ctx->pc == 0x1DC75Cu) {
        ctx->pc = 0x1DC75Cu;
            // 0x1dc75c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1DC760u;
        goto label_1dc760;
    }
    ctx->pc = 0x1DC758u;
    {
        const bool branch_taken_0x1dc758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC758u;
            // 0x1dc75c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc758) {
            ctx->pc = 0x1DC6B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc6b0;
        }
    }
    ctx->pc = 0x1DC760u;
label_1dc760:
    // 0x1dc760: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1dc760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1dc764:
    // 0x1dc764: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1dc764u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1dc768:
    // 0x1dc768: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1dc768u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1dc76c:
    // 0x1dc76c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dc76cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dc770:
    // 0x1dc770: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dc770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dc774:
    // 0x1dc774: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dc774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dc778:
    // 0x1dc778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dc778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dc77c:
    // 0x1dc77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc780:
    // 0x1dc780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc784:
    // 0x1dc784: 0x3e00008  jr          $ra
label_1dc788:
    if (ctx->pc == 0x1DC788u) {
        ctx->pc = 0x1DC788u;
            // 0x1dc788: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1DC78Cu;
        goto label_fallthrough_0x1dc784;
    }
    ctx->pc = 0x1DC784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC784u;
            // 0x1dc788: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1dc784:
    ctx->pc = 0x1DC78Cu;
}
