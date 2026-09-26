#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteEditParts__8CEditMapFi
// Address: 0x1b1820 - 0x1b189c
void DeleteEditParts__8CEditMapFi_0x1b1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteEditParts__8CEditMapFi_0x1b1820");
#endif

    switch (ctx->pc) {
        case 0x1b1820u: goto label_1b1820;
        case 0x1b1824u: goto label_1b1824;
        case 0x1b1828u: goto label_1b1828;
        case 0x1b182cu: goto label_1b182c;
        case 0x1b1830u: goto label_1b1830;
        case 0x1b1834u: goto label_1b1834;
        case 0x1b1838u: goto label_1b1838;
        case 0x1b183cu: goto label_1b183c;
        case 0x1b1840u: goto label_1b1840;
        case 0x1b1844u: goto label_1b1844;
        case 0x1b1848u: goto label_1b1848;
        case 0x1b184cu: goto label_1b184c;
        case 0x1b1850u: goto label_1b1850;
        case 0x1b1854u: goto label_1b1854;
        case 0x1b1858u: goto label_1b1858;
        case 0x1b185cu: goto label_1b185c;
        case 0x1b1860u: goto label_1b1860;
        case 0x1b1864u: goto label_1b1864;
        case 0x1b1868u: goto label_1b1868;
        case 0x1b186cu: goto label_1b186c;
        case 0x1b1870u: goto label_1b1870;
        case 0x1b1874u: goto label_1b1874;
        case 0x1b1878u: goto label_1b1878;
        case 0x1b187cu: goto label_1b187c;
        case 0x1b1880u: goto label_1b1880;
        case 0x1b1884u: goto label_1b1884;
        case 0x1b1888u: goto label_1b1888;
        case 0x1b188cu: goto label_1b188c;
        case 0x1b1890u: goto label_1b1890;
        case 0x1b1894u: goto label_1b1894;
        case 0x1b1898u: goto label_1b1898;
        default: break;
    }

    ctx->pc = 0x1b1820u;

label_1b1820:
    // 0x1b1820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b1824:
    // 0x1b1824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b1824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b1828:
    // 0x1b1828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b182c:
    // 0x1b182c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b182cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1830:
    // 0x1b1830: 0xc06c310  jal         func_1B0C40
label_1b1834:
    if (ctx->pc == 0x1B1834u) {
        ctx->pc = 0x1B1834u;
            // 0x1b1834: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1B1838u;
        goto label_1b1838;
    }
    ctx->pc = 0x1B1830u;
    SET_GPR_U32(ctx, 31, 0x1B1838u);
    ctx->pc = 0x1B1834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1830u;
            // 0x1b1834: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1838u; }
        if (ctx->pc != 0x1B1838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1838u; }
        if (ctx->pc != 0x1B1838u) { return; }
    }
    ctx->pc = 0x1B1838u;
label_1b1838:
    // 0x1b1838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b183c:
    // 0x1b183c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1b1840:
    if (ctx->pc == 0x1B1840u) {
        ctx->pc = 0x1B1840u;
            // 0x1b1840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1844u;
        goto label_1b1844;
    }
    ctx->pc = 0x1B183Cu;
    {
        const bool branch_taken_0x1b183c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B183Cu;
            // 0x1b1840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b183c) {
            ctx->pc = 0x1B184Cu;
            goto label_1b184c;
        }
    }
    ctx->pc = 0x1B1844u;
label_1b1844:
    // 0x1b1844: 0x10000011  b           . + 4 + (0x11 << 2)
label_1b1848:
    if (ctx->pc == 0x1B1848u) {
        ctx->pc = 0x1B1848u;
            // 0x1b1848: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1B184Cu;
        goto label_1b184c;
    }
    ctx->pc = 0x1B1844u;
    {
        const bool branch_taken_0x1b1844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1844u;
            // 0x1b1848: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1844) {
            ctx->pc = 0x1B188Cu;
            goto label_1b188c;
        }
    }
    ctx->pc = 0x1B184Cu;
label_1b184c:
    // 0x1b184c: 0x8e040328  lw          $a0, 0x328($s0)
    ctx->pc = 0x1b184cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
label_1b1850:
    // 0x1b1850: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1b1854:
    if (ctx->pc == 0x1B1854u) {
        ctx->pc = 0x1B1854u;
            // 0x1b1854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1858u;
        goto label_1b1858;
    }
    ctx->pc = 0x1B1850u;
    {
        const bool branch_taken_0x1b1850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1850u;
            // 0x1b1854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1850) {
            ctx->pc = 0x1B1860u;
            goto label_1b1860;
        }
    }
    ctx->pc = 0x1B1858u;
label_1b1858:
    // 0x1b1858: 0xc049c86  jal         func_127218
label_1b185c:
    if (ctx->pc == 0x1B185Cu) {
        ctx->pc = 0x1B185Cu;
            // 0x1b185c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1B1860u;
        goto label_1b1860;
    }
    ctx->pc = 0x1B1858u;
    SET_GPR_U32(ctx, 31, 0x1B1860u);
    ctx->pc = 0x1B185Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1858u;
            // 0x1b185c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1860u; }
        if (ctx->pc != 0x1B1860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1860u; }
        if (ctx->pc != 0x1B1860u) { return; }
    }
    ctx->pc = 0x1B1860u;
label_1b1860:
    // 0x1b1860: 0x8e050320  lw          $a1, 0x320($s0)
    ctx->pc = 0x1b1860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_1b1864:
    // 0x1b1864: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1b1868:
    if (ctx->pc == 0x1B1868u) {
        ctx->pc = 0x1B1868u;
            // 0x1b1868: 0x26240d10  addiu       $a0, $s1, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3344));
        ctx->pc = 0x1B186Cu;
        goto label_1b186c;
    }
    ctx->pc = 0x1B1864u;
    {
        const bool branch_taken_0x1b1864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1864u;
            // 0x1b1868: 0x26240d10  addiu       $a0, $s1, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1864) {
            ctx->pc = 0x1B1874u;
            goto label_1b1874;
        }
    }
    ctx->pc = 0x1B186Cu;
label_1b186c:
    // 0x1b186c: 0xc04e688  jal         func_139A20
label_1b1870:
    if (ctx->pc == 0x1B1870u) {
        ctx->pc = 0x1B1874u;
        goto label_1b1874;
    }
    ctx->pc = 0x1B186Cu;
    SET_GPR_U32(ctx, 31, 0x1B1874u);
    ctx->pc = 0x139A20u;
    if (runtime->hasFunction(0x139A20u)) {
        auto targetFn = runtime->lookupFunction(0x139A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1874u; }
        if (ctx->pc != 0x1B1874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Free__9mgCMemoryFP1_0x139a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1874u; }
        if (ctx->pc != 0x1B1874u) { return; }
    }
    ctx->pc = 0x1B1874u;
label_1b1874:
    // 0x1b1874: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b1874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b1878:
    // 0x1b1878: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b1878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b187c:
    // 0x1b187c: 0x320f809  jalr        $t9
label_1b1880:
    if (ctx->pc == 0x1B1880u) {
        ctx->pc = 0x1B1880u;
            // 0x1b1880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1884u;
        goto label_1b1884;
    }
    ctx->pc = 0x1B187Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1884u);
        ctx->pc = 0x1B1880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B187Cu;
            // 0x1b1880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1884u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1884u; }
            if (ctx->pc != 0x1B1884u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1884u;
label_1b1884:
    // 0x1b1884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1888:
    // 0x1b1888: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b1888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b188c:
    // 0x1b188c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b188cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1890:
    // 0x1b1890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1894:
    // 0x1b1894: 0x3e00008  jr          $ra
label_1b1898:
    if (ctx->pc == 0x1B1898u) {
        ctx->pc = 0x1B1898u;
            // 0x1b1898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B189Cu;
        goto label_fallthrough_0x1b1894;
    }
    ctx->pc = 0x1B1894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1894u;
            // 0x1b1898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b1894:
    ctx->pc = 0x1B189Cu;
}
