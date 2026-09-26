#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FixCameraPartsOnOff__4CMapFPf
// Address: 0x15f730 - 0x15f878
void FixCameraPartsOnOff__4CMapFPf_0x15f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FixCameraPartsOnOff__4CMapFPf_0x15f730");
#endif

    switch (ctx->pc) {
        case 0x15f760u: goto label_15f760;
        case 0x15f76cu: goto label_15f76c;
        case 0x15f780u: goto label_15f780;
        case 0x15f7c8u: goto label_15f7c8;
        case 0x15f7d0u: goto label_15f7d0;
        case 0x15f81cu: goto label_15f81c;
        case 0x15f824u: goto label_15f824;
        case 0x15f838u: goto label_15f838;
        default: break;
    }

    ctx->pc = 0x15f730u;

    // 0x15f730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15f730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15f734: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15f734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15f738: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15f738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15f73c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15f73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15f740: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15f740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f744: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15f748: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15f748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f74c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15f750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f754: 0x8c900c84  lw          $s0, 0xC84($a0)
    ctx->pc = 0x15f754u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3204)));
    // 0x15f758: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15F758u;
    {
        const bool branch_taken_0x15f758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F758u;
            // 0x15f75c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f758) {
            ctx->pc = 0x15F7A8u;
            goto label_15f7a8;
        }
    }
    ctx->pc = 0x15F760u;
label_15f760:
    // 0x15f760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f764: 0xc0593c4  jal         func_164F10
    ctx->pc = 0x15F764u;
    SET_GPR_U32(ctx, 31, 0x15F76Cu);
    ctx->pc = 0x15F768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F764u;
            // 0x15f768: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F10u;
    if (runtime->hasFunction(0x164F10u)) {
        auto targetFn = runtime->lookupFunction(0x164F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F76Cu; }
        if (ctx->pc != 0x15F76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawInfo__11CCameraInfoFi_0x164f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F76Cu; }
        if (ctx->pc != 0x15F76Cu) { return; }
    }
    ctx->pc = 0x15F76Cu;
label_15f76c:
    // 0x15f76c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F76Cu;
    {
        const bool branch_taken_0x15f76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f76c) {
            ctx->pc = 0x15F78Cu;
            goto label_15f78c;
        }
    }
    ctx->pc = 0x15F774u;
    // 0x15f774: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f778: 0xc057180  jal         func_15C600
    ctx->pc = 0x15F778u;
    SET_GPR_U32(ctx, 31, 0x15F780u);
    ctx->pc = 0x15F77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F778u;
            // 0x15f77c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C600u;
    if (runtime->hasFunction(0x15C600u)) {
        auto targetFn = runtime->lookupFunction(0x15C600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F780u; }
        if (ctx->pc != 0x15F780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsGroup__4CMapFi_0x15c600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F780u; }
        if (ctx->pc != 0x15F780u) { return; }
    }
    ctx->pc = 0x15F780u;
label_15f780:
    // 0x15f780: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15F780u;
    {
        const bool branch_taken_0x15f780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f780) {
            ctx->pc = 0x15F78Cu;
            goto label_15f78c;
        }
    }
    ctx->pc = 0x15F788u;
    // 0x15f788: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x15f788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_15f78c:
    // 0x15f78c: 0x0  nop
    ctx->pc = 0x15f78cu;
    // NOP
    // 0x15f790: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15f790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15f794: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x15f794u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15f798: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x15F798u;
    {
        const bool branch_taken_0x15f798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f798) {
            ctx->pc = 0x15F760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f760;
        }
    }
    ctx->pc = 0x15F7A0u;
    // 0x15f7a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15f7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15f7a4: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x15f7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_15f7a8:
    // 0x15f7a8: 0x8e830c80  lw          $v1, 0xC80($s4)
    ctx->pc = 0x15f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3200)));
    // 0x15f7ac: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15f7acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15f7b0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15F7B0u;
    {
        const bool branch_taken_0x15f7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7B0u;
            // 0x15f7b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f7b0) {
            ctx->pc = 0x15F760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f760;
        }
    }
    ctx->pc = 0x15F7B8u;
    // 0x15f7b8: 0x8e920c84  lw          $s2, 0xC84($s4)
    ctx->pc = 0x15f7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3204)));
    // 0x15f7bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15f7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f7c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15F7C0u;
    {
        const bool branch_taken_0x15f7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7C0u;
            // 0x15f7c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f7c0) {
            ctx->pc = 0x15F7FCu;
            goto label_15f7fc;
        }
    }
    ctx->pc = 0x15F7C8u;
label_15f7c8:
    // 0x15f7c8: 0xc04c018  jal         func_130060
    ctx->pc = 0x15F7C8u;
    SET_GPR_U32(ctx, 31, 0x15F7D0u);
    ctx->pc = 0x15F7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7C8u;
            // 0x15f7cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7D0u; }
        if (ctx->pc != 0x15F7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F7D0u; }
        if (ctx->pc != 0x15F7D0u) { return; }
    }
    ctx->pc = 0x15F7D0u;
label_15f7d0:
    // 0x15f7d0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x15f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x15f7d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15f7d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f7d8: 0x0  nop
    ctx->pc = 0x15f7d8u;
    // NOP
    // 0x15f7dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15f7dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f7e0: 0x0  nop
    ctx->pc = 0x15f7e0u;
    // NOP
    // 0x15f7e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15F7E4u;
    {
        const bool branch_taken_0x15f7e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f7e4) {
            ctx->pc = 0x15F7F4u;
            goto label_15f7f4;
        }
    }
    ctx->pc = 0x15F7ECu;
    // 0x15f7ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15F7ECu;
    {
        const bool branch_taken_0x15f7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F7ECu;
            // 0x15f7f0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f7ec) {
            ctx->pc = 0x15F810u;
            goto label_15f810;
        }
    }
    ctx->pc = 0x15F7F4u;
label_15f7f4:
    // 0x15f7f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15f7f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15f7f8: 0x265200d0  addiu       $s2, $s2, 0xD0
    ctx->pc = 0x15f7f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_15f7fc:
    // 0x15f7fc: 0x0  nop
    ctx->pc = 0x15f7fcu;
    // NOP
    // 0x15f800: 0x8e830c80  lw          $v1, 0xC80($s4)
    ctx->pc = 0x15f800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3200)));
    // 0x15f804: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15f804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15f808: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15F808u;
    {
        const bool branch_taken_0x15f808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F808u;
            // 0x15f80c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f808) {
            ctx->pc = 0x15F7C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f7c8;
        }
    }
    ctx->pc = 0x15F810u;
label_15f810:
    // 0x15f810: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15F810u;
    {
        const bool branch_taken_0x15f810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F810u;
            // 0x15f814: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f810) {
            ctx->pc = 0x15F858u;
            goto label_15f858;
        }
    }
    ctx->pc = 0x15F818u;
    // 0x15f818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f81c:
    // 0x15f81c: 0xc0593c4  jal         func_164F10
    ctx->pc = 0x15F81Cu;
    SET_GPR_U32(ctx, 31, 0x15F824u);
    ctx->pc = 0x15F820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F81Cu;
            // 0x15f820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164F10u;
    if (runtime->hasFunction(0x164F10u)) {
        auto targetFn = runtime->lookupFunction(0x164F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F824u; }
        if (ctx->pc != 0x15F824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawInfo__11CCameraInfoFi_0x164f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F824u; }
        if (ctx->pc != 0x15F824u) { return; }
    }
    ctx->pc = 0x15F824u;
label_15f824:
    // 0x15f824: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F824u;
    {
        const bool branch_taken_0x15f824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f824) {
            ctx->pc = 0x15F844u;
            goto label_15f844;
        }
    }
    ctx->pc = 0x15F82Cu;
    // 0x15f82c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f830: 0xc057180  jal         func_15C600
    ctx->pc = 0x15F830u;
    SET_GPR_U32(ctx, 31, 0x15F838u);
    ctx->pc = 0x15F834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F830u;
            // 0x15f834: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C600u;
    if (runtime->hasFunction(0x15C600u)) {
        auto targetFn = runtime->lookupFunction(0x15C600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F838u; }
        if (ctx->pc != 0x15F838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsGroup__4CMapFi_0x15c600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F838u; }
        if (ctx->pc != 0x15F838u) { return; }
    }
    ctx->pc = 0x15F838u;
label_15f838:
    // 0x15f838: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15F838u;
    {
        const bool branch_taken_0x15f838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F838u;
            // 0x15f83c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f838) {
            ctx->pc = 0x15F844u;
            goto label_15f844;
        }
    }
    ctx->pc = 0x15F840u;
    // 0x15f840: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x15f840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_15f844:
    // 0x15f844: 0x0  nop
    ctx->pc = 0x15f844u;
    // NOP
    // 0x15f848: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15f848u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15f84c: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x15f84cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15f850: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x15F850u;
    {
        const bool branch_taken_0x15f850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F850u;
            // 0x15f854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f850) {
            ctx->pc = 0x15F81Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f81c;
        }
    }
    ctx->pc = 0x15F858u;
label_15f858:
    // 0x15f858: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15f858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15f85c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15f85cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f860: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15f860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f864: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f86c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f870: 0x3e00008  jr          $ra
    ctx->pc = 0x15F870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F870u;
            // 0x15f874: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F878u;
}
