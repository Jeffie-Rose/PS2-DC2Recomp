#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TARGET_SPEED__FP12RS_STACKDATAi
// Address: 0x1e17d0 - 0x1e1858
void ps2__GET_TARGET_SPEED__FP12RS_STACKDATAi_0x1e17d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TARGET_SPEED__FP12RS_STACKDATAi_0x1e17d0");
#endif

    switch (ctx->pc) {
        case 0x1e17d0u: goto label_1e17d0;
        case 0x1e17d4u: goto label_1e17d4;
        case 0x1e17d8u: goto label_1e17d8;
        case 0x1e17dcu: goto label_1e17dc;
        case 0x1e17e0u: goto label_1e17e0;
        case 0x1e17e4u: goto label_1e17e4;
        case 0x1e17e8u: goto label_1e17e8;
        case 0x1e17ecu: goto label_1e17ec;
        case 0x1e17f0u: goto label_1e17f0;
        case 0x1e17f4u: goto label_1e17f4;
        case 0x1e17f8u: goto label_1e17f8;
        case 0x1e17fcu: goto label_1e17fc;
        case 0x1e1800u: goto label_1e1800;
        case 0x1e1804u: goto label_1e1804;
        case 0x1e1808u: goto label_1e1808;
        case 0x1e180cu: goto label_1e180c;
        case 0x1e1810u: goto label_1e1810;
        case 0x1e1814u: goto label_1e1814;
        case 0x1e1818u: goto label_1e1818;
        case 0x1e181cu: goto label_1e181c;
        case 0x1e1820u: goto label_1e1820;
        case 0x1e1824u: goto label_1e1824;
        case 0x1e1828u: goto label_1e1828;
        case 0x1e182cu: goto label_1e182c;
        case 0x1e1830u: goto label_1e1830;
        case 0x1e1834u: goto label_1e1834;
        case 0x1e1838u: goto label_1e1838;
        case 0x1e183cu: goto label_1e183c;
        case 0x1e1840u: goto label_1e1840;
        case 0x1e1844u: goto label_1e1844;
        case 0x1e1848u: goto label_1e1848;
        case 0x1e184cu: goto label_1e184c;
        case 0x1e1850u: goto label_1e1850;
        case 0x1e1854u: goto label_1e1854;
        default: break;
    }

    ctx->pc = 0x1e17d0u;

label_1e17d0:
    // 0x1e17d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e17d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e17d4:
    // 0x1e17d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e17d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e17d8:
    // 0x1e17d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e17d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e17dc:
    // 0x1e17dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e17dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e17e0:
    // 0x1e17e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e17e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e17e4:
    // 0x1e17e4: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e17e8:
    // 0x1e17e8: 0x844512e2  lh          $a1, 0x12E2($v0)
    ctx->pc = 0x1e17e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4834)));
label_1e17ec:
    // 0x1e17ec: 0xc0a0ed8  jal         func_283B60
label_1e17f0:
    if (ctx->pc == 0x1E17F0u) {
        ctx->pc = 0x1E17F0u;
            // 0x1e17f0: 0x8f848e6c  lw          $a0, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->pc = 0x1E17F4u;
        goto label_1e17f4;
    }
    ctx->pc = 0x1E17ECu;
    SET_GPR_U32(ctx, 31, 0x1E17F4u);
    ctx->pc = 0x1E17F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17ECu;
            // 0x1e17f0: 0x8f848e6c  lw          $a0, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17F4u; }
        if (ctx->pc != 0x1E17F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17F4u; }
        if (ctx->pc != 0x1E17F4u) { return; }
    }
    ctx->pc = 0x1E17F4u;
label_1e17f4:
    // 0x1e17f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e17f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e17f8:
    // 0x1e17f8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1e17fc:
    if (ctx->pc == 0x1E17FCu) {
        ctx->pc = 0x1E17FCu;
            // 0x1e17fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E1800u;
        goto label_1e1800;
    }
    ctx->pc = 0x1E17F8u;
    {
        const bool branch_taken_0x1e17f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E17FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17F8u;
            // 0x1e17fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e17f8) {
            ctx->pc = 0x1E1808u;
            goto label_1e1808;
        }
    }
    ctx->pc = 0x1E1800u;
label_1e1800:
    // 0x1e1800: 0x10000011  b           . + 4 + (0x11 << 2)
label_1e1804:
    if (ctx->pc == 0x1E1804u) {
        ctx->pc = 0x1E1804u;
            // 0x1e1804: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1E1808u;
        goto label_1e1808;
    }
    ctx->pc = 0x1E1800u;
    {
        const bool branch_taken_0x1e1800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1800u;
            // 0x1e1804: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1800) {
            ctx->pc = 0x1E1848u;
            goto label_1e1848;
        }
    }
    ctx->pc = 0x1E1808u;
label_1e1808:
    // 0x1e1808: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e1808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e180c:
    // 0x1e180c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e180cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e1810:
    // 0x1e1810: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e1810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e1814:
    // 0x1e1814: 0x320f809  jalr        $t9
label_1e1818:
    if (ctx->pc == 0x1E1818u) {
        ctx->pc = 0x1E1818u;
            // 0x1e1818: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E181Cu;
        goto label_1e181c;
    }
    ctx->pc = 0x1E1814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E181Cu);
        ctx->pc = 0x1E1818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1814u;
            // 0x1e1818: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E181Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E181Cu; }
            if (ctx->pc != 0x1E181Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E181Cu;
label_1e181c:
    // 0x1e181c: 0x26050660  addiu       $a1, $s0, 0x660
    ctx->pc = 0x1e181cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
label_1e1820:
    // 0x1e1820: 0xc041c5c  jal         func_107170
label_1e1824:
    if (ctx->pc == 0x1E1824u) {
        ctx->pc = 0x1E1824u;
            // 0x1e1824: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E1828u;
        goto label_1e1828;
    }
    ctx->pc = 0x1E1820u;
    SET_GPR_U32(ctx, 31, 0x1E1828u);
    ctx->pc = 0x1E1824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1820u;
            // 0x1e1824: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1828u; }
        if (ctx->pc != 0x1E1828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1828u; }
        if (ctx->pc != 0x1E1828u) { return; }
    }
    ctx->pc = 0x1E1828u;
label_1e1828:
    // 0x1e1828: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e1828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e182c:
    // 0x1e182c: 0xc04c018  jal         func_130060
label_1e1830:
    if (ctx->pc == 0x1E1830u) {
        ctx->pc = 0x1E1830u;
            // 0x1e1830: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E1834u;
        goto label_1e1834;
    }
    ctx->pc = 0x1E182Cu;
    SET_GPR_U32(ctx, 31, 0x1E1834u);
    ctx->pc = 0x1E1830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E182Cu;
            // 0x1e1830: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1834u; }
        if (ctx->pc != 0x1E1834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1834u; }
        if (ctx->pc != 0x1E1834u) { return; }
    }
    ctx->pc = 0x1E1834u;
label_1e1834:
    // 0x1e1834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1838:
    // 0x1e1838: 0xc0781c4  jal         func_1E0710
label_1e183c:
    if (ctx->pc == 0x1E183Cu) {
        ctx->pc = 0x1E183Cu;
            // 0x1e183c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E1840u;
        goto label_1e1840;
    }
    ctx->pc = 0x1E1838u;
    SET_GPR_U32(ctx, 31, 0x1E1840u);
    ctx->pc = 0x1E183Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1838u;
            // 0x1e183c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1840u; }
        if (ctx->pc != 0x1E1840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1840u; }
        if (ctx->pc != 0x1E1840u) { return; }
    }
    ctx->pc = 0x1E1840u;
label_1e1840:
    // 0x1e1840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1844:
    // 0x1e1844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1848:
    // 0x1e1848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e184c:
    // 0x1e184c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e184cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1850:
    // 0x1e1850: 0x3e00008  jr          $ra
label_1e1854:
    if (ctx->pc == 0x1E1854u) {
        ctx->pc = 0x1E1854u;
            // 0x1e1854: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E1858u;
        goto label_fallthrough_0x1e1850;
    }
    ctx->pc = 0x1E1850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1850u;
            // 0x1e1854: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e1850:
    ctx->pc = 0x1E1858u;
}
