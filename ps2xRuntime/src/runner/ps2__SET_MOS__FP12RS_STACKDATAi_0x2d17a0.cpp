#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MOS__FP12RS_STACKDATAi
// Address: 0x2d17a0 - 0x2d1900
void ps2__SET_MOS__FP12RS_STACKDATAi_0x2d17a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MOS__FP12RS_STACKDATAi_0x2d17a0");
#endif

    switch (ctx->pc) {
        case 0x2d17a0u: goto label_2d17a0;
        case 0x2d17a4u: goto label_2d17a4;
        case 0x2d17a8u: goto label_2d17a8;
        case 0x2d17acu: goto label_2d17ac;
        case 0x2d17b0u: goto label_2d17b0;
        case 0x2d17b4u: goto label_2d17b4;
        case 0x2d17b8u: goto label_2d17b8;
        case 0x2d17bcu: goto label_2d17bc;
        case 0x2d17c0u: goto label_2d17c0;
        case 0x2d17c4u: goto label_2d17c4;
        case 0x2d17c8u: goto label_2d17c8;
        case 0x2d17ccu: goto label_2d17cc;
        case 0x2d17d0u: goto label_2d17d0;
        case 0x2d17d4u: goto label_2d17d4;
        case 0x2d17d8u: goto label_2d17d8;
        case 0x2d17dcu: goto label_2d17dc;
        case 0x2d17e0u: goto label_2d17e0;
        case 0x2d17e4u: goto label_2d17e4;
        case 0x2d17e8u: goto label_2d17e8;
        case 0x2d17ecu: goto label_2d17ec;
        case 0x2d17f0u: goto label_2d17f0;
        case 0x2d17f4u: goto label_2d17f4;
        case 0x2d17f8u: goto label_2d17f8;
        case 0x2d17fcu: goto label_2d17fc;
        case 0x2d1800u: goto label_2d1800;
        case 0x2d1804u: goto label_2d1804;
        case 0x2d1808u: goto label_2d1808;
        case 0x2d180cu: goto label_2d180c;
        case 0x2d1810u: goto label_2d1810;
        case 0x2d1814u: goto label_2d1814;
        case 0x2d1818u: goto label_2d1818;
        case 0x2d181cu: goto label_2d181c;
        case 0x2d1820u: goto label_2d1820;
        case 0x2d1824u: goto label_2d1824;
        case 0x2d1828u: goto label_2d1828;
        case 0x2d182cu: goto label_2d182c;
        case 0x2d1830u: goto label_2d1830;
        case 0x2d1834u: goto label_2d1834;
        case 0x2d1838u: goto label_2d1838;
        case 0x2d183cu: goto label_2d183c;
        case 0x2d1840u: goto label_2d1840;
        case 0x2d1844u: goto label_2d1844;
        case 0x2d1848u: goto label_2d1848;
        case 0x2d184cu: goto label_2d184c;
        case 0x2d1850u: goto label_2d1850;
        case 0x2d1854u: goto label_2d1854;
        case 0x2d1858u: goto label_2d1858;
        case 0x2d185cu: goto label_2d185c;
        case 0x2d1860u: goto label_2d1860;
        case 0x2d1864u: goto label_2d1864;
        case 0x2d1868u: goto label_2d1868;
        case 0x2d186cu: goto label_2d186c;
        case 0x2d1870u: goto label_2d1870;
        case 0x2d1874u: goto label_2d1874;
        case 0x2d1878u: goto label_2d1878;
        case 0x2d187cu: goto label_2d187c;
        case 0x2d1880u: goto label_2d1880;
        case 0x2d1884u: goto label_2d1884;
        case 0x2d1888u: goto label_2d1888;
        case 0x2d188cu: goto label_2d188c;
        case 0x2d1890u: goto label_2d1890;
        case 0x2d1894u: goto label_2d1894;
        case 0x2d1898u: goto label_2d1898;
        case 0x2d189cu: goto label_2d189c;
        case 0x2d18a0u: goto label_2d18a0;
        case 0x2d18a4u: goto label_2d18a4;
        case 0x2d18a8u: goto label_2d18a8;
        case 0x2d18acu: goto label_2d18ac;
        case 0x2d18b0u: goto label_2d18b0;
        case 0x2d18b4u: goto label_2d18b4;
        case 0x2d18b8u: goto label_2d18b8;
        case 0x2d18bcu: goto label_2d18bc;
        case 0x2d18c0u: goto label_2d18c0;
        case 0x2d18c4u: goto label_2d18c4;
        case 0x2d18c8u: goto label_2d18c8;
        case 0x2d18ccu: goto label_2d18cc;
        case 0x2d18d0u: goto label_2d18d0;
        case 0x2d18d4u: goto label_2d18d4;
        case 0x2d18d8u: goto label_2d18d8;
        case 0x2d18dcu: goto label_2d18dc;
        case 0x2d18e0u: goto label_2d18e0;
        case 0x2d18e4u: goto label_2d18e4;
        case 0x2d18e8u: goto label_2d18e8;
        case 0x2d18ecu: goto label_2d18ec;
        case 0x2d18f0u: goto label_2d18f0;
        case 0x2d18f4u: goto label_2d18f4;
        case 0x2d18f8u: goto label_2d18f8;
        case 0x2d18fcu: goto label_2d18fc;
        default: break;
    }

    ctx->pc = 0x2d17a0u;

label_2d17a0:
    // 0x2d17a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d17a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2d17a4:
    // 0x2d17a4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2d17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2d17a8:
    // 0x2d17a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d17a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2d17ac:
    // 0x2d17ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d17acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2d17b0:
    // 0x2d17b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d17b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2d17b4:
    // 0x2d17b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d17b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d17b8:
    // 0x2d17b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d17b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2d17bc:
    // 0x2d17bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d17bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d17c0:
    // 0x2d17c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d17c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d17c4:
    // 0x2d17c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d17c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d17c8:
    // 0x2d17c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d17c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d17cc:
    // 0x2d17cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d17ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d17d0:
    // 0x2d17d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2d17d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d17d4:
    // 0x2d17d4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2d17d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2d17d8:
    // 0x2d17d8: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
label_2d17dc:
    if (ctx->pc == 0x2D17DCu) {
        ctx->pc = 0x2D17DCu;
            // 0x2d17dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D17E0u;
        goto label_2d17e0;
    }
    ctx->pc = 0x2D17D8u;
    {
        const bool branch_taken_0x2d17d8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2D17DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D17D8u;
            // 0x2d17dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17d8) {
            ctx->pc = 0x2D17ECu;
            goto label_2d17ec;
        }
    }
    ctx->pc = 0x2D17E0u;
label_2d17e0:
    // 0x2d17e0: 0x2a610005  slti        $at, $s3, 0x5
    ctx->pc = 0x2d17e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_2d17e4:
    // 0x2d17e4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2d17e8:
    if (ctx->pc == 0x2D17E8u) {
        ctx->pc = 0x2D17ECu;
        goto label_2d17ec;
    }
    ctx->pc = 0x2D17E4u;
    {
        const bool branch_taken_0x2d17e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d17e4) {
            ctx->pc = 0x2D17F4u;
            goto label_2d17f4;
        }
    }
    ctx->pc = 0x2D17ECu;
label_2d17ec:
    // 0x2d17ec: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2d17f0:
    if (ctx->pc == 0x2D17F0u) {
        ctx->pc = 0x2D17F0u;
            // 0x2d17f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D17F4u;
        goto label_2d17f4;
    }
    ctx->pc = 0x2D17ECu;
    {
        const bool branch_taken_0x2d17ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D17F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D17ECu;
            // 0x2d17f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17ec) {
            ctx->pc = 0x2D18DCu;
            goto label_2d18dc;
        }
    }
    ctx->pc = 0x2D17F4u;
label_2d17f4:
    // 0x2d17f4: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
label_2d17f8:
    if (ctx->pc == 0x2D17F8u) {
        ctx->pc = 0x2D17F8u;
            // 0x2d17f8: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x2D17FCu;
        goto label_2d17fc;
    }
    ctx->pc = 0x2D17F4u;
    {
        const bool branch_taken_0x2d17f4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2D17F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D17F4u;
            // 0x2d17f8: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17f4) {
            ctx->pc = 0x2D180Cu;
            goto label_2d180c;
        }
    }
    ctx->pc = 0x2D17FCu;
label_2d17fc:
    // 0x2d17fc: 0xc0b37a8  jal         func_2CDEA0
label_2d1800:
    if (ctx->pc == 0x2D1800u) {
        ctx->pc = 0x2D1800u;
            // 0x2d1800: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2D1804u;
        goto label_2d1804;
    }
    ctx->pc = 0x2D17FCu;
    SET_GPR_U32(ctx, 31, 0x2D1804u);
    ctx->pc = 0x2D1800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D17FCu;
            // 0x2d1800: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1804u; }
        if (ctx->pc != 0x2D1804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1804u; }
        if (ctx->pc != 0x2D1804u) { return; }
    }
    ctx->pc = 0x2D1804u;
label_2d1804:
    // 0x2d1804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1808:
    // 0x2d1808: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x2d1808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_2d180c:
    // 0x2d180c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2d1810:
    if (ctx->pc == 0x2D1810u) {
        ctx->pc = 0x2D1810u;
            // 0x2d1810: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->pc = 0x2D1814u;
        goto label_2d1814;
    }
    ctx->pc = 0x2D180Cu;
    {
        const bool branch_taken_0x2d180c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D180Cu;
            // 0x2d1810: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d180c) {
            ctx->pc = 0x2D1828u;
            goto label_2d1828;
        }
    }
    ctx->pc = 0x2D1814u;
label_2d1814:
    // 0x2d1814: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d1814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d1818:
    // 0x2d1818: 0xc0b379c  jal         func_2CDE70
label_2d181c:
    if (ctx->pc == 0x2D181Cu) {
        ctx->pc = 0x2D181Cu;
            // 0x2d181c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2D1820u;
        goto label_2d1820;
    }
    ctx->pc = 0x2D1818u;
    SET_GPR_U32(ctx, 31, 0x2D1820u);
    ctx->pc = 0x2D181Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1818u;
            // 0x2d181c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1820u; }
        if (ctx->pc != 0x2D1820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1820u; }
        if (ctx->pc != 0x2D1820u) { return; }
    }
    ctx->pc = 0x2D1820u;
label_2d1820:
    // 0x2d1820: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d1820u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2d1824:
    // 0x2d1824: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x2d1824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_2d1828:
    // 0x2d1828: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2d182c:
    if (ctx->pc == 0x2D182Cu) {
        ctx->pc = 0x2D182Cu;
            // 0x2d182c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2D1830u;
        goto label_2d1830;
    }
    ctx->pc = 0x2D1828u;
    {
        const bool branch_taken_0x2d1828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D182Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1828u;
            // 0x2d182c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1828) {
            ctx->pc = 0x2D1844u;
            goto label_2d1844;
        }
    }
    ctx->pc = 0x2D1830u;
label_2d1830:
    // 0x2d1830: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d1830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d1834:
    // 0x2d1834: 0xc0b378c  jal         func_2CDE30
label_2d1838:
    if (ctx->pc == 0x2D1838u) {
        ctx->pc = 0x2D1838u;
            // 0x2d1838: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2D183Cu;
        goto label_2d183c;
    }
    ctx->pc = 0x2D1834u;
    SET_GPR_U32(ctx, 31, 0x2D183Cu);
    ctx->pc = 0x2D1838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1834u;
            // 0x2d1838: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D183Cu; }
        if (ctx->pc != 0x2D183Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D183Cu; }
        if (ctx->pc != 0x2D183Cu) { return; }
    }
    ctx->pc = 0x2D183Cu;
label_2d183c:
    // 0x2d183c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d183cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1840:
    // 0x2d1840: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d1840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d1844:
    // 0x2d1844: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_2d1848:
    if (ctx->pc == 0x2D1848u) {
        ctx->pc = 0x2D1848u;
            // 0x2d1848: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D184Cu;
        goto label_2d184c;
    }
    ctx->pc = 0x2D1844u;
    {
        const bool branch_taken_0x2d1844 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D1848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1844u;
            // 0x2d1848: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1844) {
            ctx->pc = 0x2D1858u;
            goto label_2d1858;
        }
    }
    ctx->pc = 0x2D184Cu;
label_2d184c:
    // 0x2d184c: 0xc0b37a8  jal         func_2CDEA0
label_2d1850:
    if (ctx->pc == 0x2D1850u) {
        ctx->pc = 0x2D1854u;
        goto label_2d1854;
    }
    ctx->pc = 0x2D184Cu;
    SET_GPR_U32(ctx, 31, 0x2D1854u);
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1854u; }
        if (ctx->pc != 0x2D1854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1854u; }
        if (ctx->pc != 0x2D1854u) { return; }
    }
    ctx->pc = 0x2D1854u;
label_2d1854:
    // 0x2d1854: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1858:
    // 0x2d1858: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2d185c:
    if (ctx->pc == 0x2D185Cu) {
        ctx->pc = 0x2D185Cu;
            // 0x2d185c: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2D1860u;
        goto label_2d1860;
    }
    ctx->pc = 0x2D1858u;
    {
        const bool branch_taken_0x2d1858 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D185Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1858u;
            // 0x2d185c: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1858) {
            ctx->pc = 0x2D1868u;
            goto label_2d1868;
        }
    }
    ctx->pc = 0x2D1860u;
label_2d1860:
    // 0x2d1860: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2d1864:
    if (ctx->pc == 0x2D1864u) {
        ctx->pc = 0x2D1864u;
            // 0x2d1864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1868u;
        goto label_2d1868;
    }
    ctx->pc = 0x2D1860u;
    {
        const bool branch_taken_0x2d1860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1860u;
            // 0x2d1864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1860) {
            ctx->pc = 0x2D18DCu;
            goto label_2d18dc;
        }
    }
    ctx->pc = 0x2D1868u;
label_2d1868:
    // 0x2d1868: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_2d186c:
    if (ctx->pc == 0x2D186Cu) {
        ctx->pc = 0x2D186Cu;
            // 0x2d186c: 0x8c33d430  lw          $s3, -0x2BD0($at) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
        ctx->pc = 0x2D1870u;
        goto label_2d1870;
    }
    ctx->pc = 0x2D1868u;
    {
        const bool branch_taken_0x2d1868 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D186Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1868u;
            // 0x2d186c: 0x8c33d430  lw          $s3, -0x2BD0($at) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1868) {
            ctx->pc = 0x2D1890u;
            goto label_2d1890;
        }
    }
    ctx->pc = 0x2D1870u;
label_2d1870:
    // 0x2d1870: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d1870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d1874:
    // 0x2d1874: 0xc05af24  jal         func_16BC90
label_2d1878:
    if (ctx->pc == 0x2D1878u) {
        ctx->pc = 0x2D1878u;
            // 0x2d1878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D187Cu;
        goto label_2d187c;
    }
    ctx->pc = 0x2D1874u;
    SET_GPR_U32(ctx, 31, 0x2D187Cu);
    ctx->pc = 0x2D1878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1874u;
            // 0x2d1878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D187Cu; }
        if (ctx->pc != 0x2D187Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D187Cu; }
        if (ctx->pc != 0x2D187Cu) { return; }
    }
    ctx->pc = 0x2D187Cu;
label_2d187c:
    // 0x2d187c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d187cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1880:
    // 0x2d1880: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_2d1884:
    if (ctx->pc == 0x2D1884u) {
        ctx->pc = 0x2D1884u;
            // 0x2d1884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1888u;
        goto label_2d1888;
    }
    ctx->pc = 0x2D1880u;
    {
        const bool branch_taken_0x2d1880 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1880u;
            // 0x2d1884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1880) {
            ctx->pc = 0x2D1890u;
            goto label_2d1890;
        }
    }
    ctx->pc = 0x2D1888u;
label_2d1888:
    // 0x2d1888: 0x10000015  b           . + 4 + (0x15 << 2)
label_2d188c:
    if (ctx->pc == 0x2D188Cu) {
        ctx->pc = 0x2D188Cu;
            // 0x2d188c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2D1890u;
        goto label_2d1890;
    }
    ctx->pc = 0x2D1888u;
    {
        const bool branch_taken_0x2d1888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D188Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1888u;
            // 0x2d188c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1888) {
            ctx->pc = 0x2D18E0u;
            goto label_2d18e0;
        }
    }
    ctx->pc = 0x2D1890u;
label_2d1890:
    // 0x2d1890: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2d1890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d1894:
    // 0x2d1894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d1894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d1898:
    // 0x2d1898: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d1898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d189c:
    // 0x2d189c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d189cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d18a0:
    // 0x2d18a0: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x2d18a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_2d18a4:
    // 0x2d18a4: 0x320f809  jalr        $t9
label_2d18a8:
    if (ctx->pc == 0x2D18A8u) {
        ctx->pc = 0x2D18A8u;
            // 0x2d18a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2D18ACu;
        goto label_2d18ac;
    }
    ctx->pc = 0x2D18A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D18ACu);
        ctx->pc = 0x2D18A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D18A4u;
            // 0x2d18a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D18ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D18ACu; }
            if (ctx->pc != 0x2D18ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2D18ACu;
label_2d18ac:
    // 0x2d18ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d18acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d18b0:
    // 0x2d18b0: 0x0  nop
    ctx->pc = 0x2d18b0u;
    // NOP
label_2d18b4:
    // 0x2d18b4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2d18b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d18b8:
    // 0x2d18b8: 0x0  nop
    ctx->pc = 0x2d18b8u;
    // NOP
label_2d18bc:
    // 0x2d18bc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2d18c0:
    if (ctx->pc == 0x2D18C0u) {
        ctx->pc = 0x2D18C0u;
            // 0x2d18c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2D18C4u;
        goto label_2d18c4;
    }
    ctx->pc = 0x2D18BCu;
    {
        const bool branch_taken_0x2d18bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D18C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D18BCu;
            // 0x2d18c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d18bc) {
            ctx->pc = 0x2D18DCu;
            goto label_2d18dc;
        }
    }
    ctx->pc = 0x2D18C4u;
label_2d18c4:
    // 0x2d18c4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2d18c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d18c8:
    // 0x2d18c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d18c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d18cc:
    // 0x2d18cc: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x2d18ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_2d18d0:
    // 0x2d18d0: 0x320f809  jalr        $t9
label_2d18d4:
    if (ctx->pc == 0x2D18D4u) {
        ctx->pc = 0x2D18D4u;
            // 0x2d18d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D18D8u;
        goto label_2d18d8;
    }
    ctx->pc = 0x2D18D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D18D8u);
        ctx->pc = 0x2D18D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D18D0u;
            // 0x2d18d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D18D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D18D8u; }
            if (ctx->pc != 0x2D18D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2D18D8u;
label_2d18d8:
    // 0x2d18d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d18d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d18dc:
    // 0x2d18dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d18dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d18e0:
    // 0x2d18e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2d18e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d18e4:
    // 0x2d18e4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d18e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d18e8:
    // 0x2d18e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d18e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d18ec:
    // 0x2d18ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d18ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d18f0:
    // 0x2d18f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d18f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d18f4:
    // 0x2d18f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d18f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d18f8:
    // 0x2d18f8: 0x3e00008  jr          $ra
label_2d18fc:
    if (ctx->pc == 0x2D18FCu) {
        ctx->pc = 0x2D18FCu;
            // 0x2d18fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2D1900u;
        goto label_fallthrough_0x2d18f8;
    }
    ctx->pc = 0x2D18F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D18FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D18F8u;
            // 0x2d18fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d18f8:
    ctx->pc = 0x2D1900u;
}
