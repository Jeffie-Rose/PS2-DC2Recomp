#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEquipment__6ClsMesFP11mgCDrawPrim
// Address: 0x15a730 - 0x15a8b0
void DrawEquipment__6ClsMesFP11mgCDrawPrim_0x15a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEquipment__6ClsMesFP11mgCDrawPrim_0x15a730");
#endif

    switch (ctx->pc) {
        case 0x15a780u: goto label_15a780;
        case 0x15a7a4u: goto label_15a7a4;
        case 0x15a828u: goto label_15a828;
        case 0x15a854u: goto label_15a854;
        case 0x15a870u: goto label_15a870;
        default: break;
    }

    ctx->pc = 0x15a730u;

    // 0x15a730: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x15a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x15a734: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15a734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15a738: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15a738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x15a73c: 0x246345b0  addiu       $v1, $v1, 0x45B0
    ctx->pc = 0x15a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17840));
    // 0x15a740: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15a740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15a744: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15a744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15a748: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x15a748u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a74c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15a750: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15a750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15a754: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15a754u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a758: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15a758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15a75c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15a760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15a764: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a768: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15a768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a770: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15a770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a774: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x15a774u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a778: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15a778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a77c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x15a77cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_15a780:
    // 0x15a780: 0x2b19821  addu        $s3, $s5, $s1
    ctx->pc = 0x15a780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x15a784: 0x8e631d24  lw          $v1, 0x1D24($s3)
    ctx->pc = 0x15a784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7460)));
    // 0x15a788: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x15A788u;
    {
        const bool branch_taken_0x15a788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a788) {
            ctx->pc = 0x15A870u;
            goto label_15a870;
        }
    }
    ctx->pc = 0x15A790u;
    // 0x15a790: 0x8e651cd4  lw          $a1, 0x1CD4($s3)
    ctx->pc = 0x15a790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7380)));
    // 0x15a794: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x15A794u;
    {
        const bool branch_taken_0x15a794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A794u;
            // 0x15a798: 0x27a400c8  addiu       $a0, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a794) {
            ctx->pc = 0x15A7D4u;
            goto label_15a7d4;
        }
    }
    ctx->pc = 0x15A79Cu;
    // 0x15a79c: 0xc0565c0  jal         func_159700
    ctx->pc = 0x15A79Cu;
    SET_GPR_U32(ctx, 31, 0x15A7A4u);
    ctx->pc = 0x159700u;
    if (runtime->hasFunction(0x159700u)) {
        auto targetFn = runtime->lookupFunction(0x159700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A7A4u; }
        if (ctx->pc != 0x15A7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RgbqToUint__FUi_0x159700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A7A4u; }
        if (ctx->pc != 0x15A7A4u) { return; }
    }
    ctx->pc = 0x15A7A4u;
label_15a7a4:
    // 0x15a7a4: 0xdfa200c8  ld          $v0, 0xC8($sp)
    ctx->pc = 0x15a7a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x15a7a8: 0x27a400c3  addiu       $a0, $sp, 0xC3
    ctx->pc = 0x15a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 195));
    // 0x15a7ac: 0xffa200c0  sd          $v0, 0xC0($sp)
    ctx->pc = 0x15a7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 2));
    // 0x15a7b0: 0x92a31800  lbu         $v1, 0x1800($s5)
    ctx->pc = 0x15a7b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6144)));
    // 0x15a7b4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x15a7b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15a7b8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x15a7b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15a7bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A7BCu;
    {
        const bool branch_taken_0x15a7bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15A7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A7BCu;
            // 0x15a7c0: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7bc) {
            ctx->pc = 0x15A7CCu;
            goto label_15a7cc;
        }
    }
    ctx->pc = 0x15A7C4u;
    // 0x15a7c4: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x15a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x15a7c8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x15a7c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_15a7cc:
    // 0x15a7cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15A7CCu;
    {
        const bool branch_taken_0x15a7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A7CCu;
            // 0x15a7d0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7cc) {
            ctx->pc = 0x15A808u;
            goto label_15a808;
        }
    }
    ctx->pc = 0x15A7D4u;
label_15a7d4:
    // 0x15a7d4: 0x0  nop
    ctx->pc = 0x15a7d4u;
    // NOP
    // 0x15a7d8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15a7dc: 0xa3a200c2  sb          $v0, 0xC2($sp)
    ctx->pc = 0x15a7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 194), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a7e0: 0xa3a200c1  sb          $v0, 0xC1($sp)
    ctx->pc = 0x15a7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 193), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a7e4: 0xa3a200c0  sb          $v0, 0xC0($sp)
    ctx->pc = 0x15a7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 2));
    // 0x15a7e8: 0x92a21800  lbu         $v0, 0x1800($s5)
    ctx->pc = 0x15a7e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6144)));
    // 0x15a7ec: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x15a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x15a7f0: 0x211fc  dsll32      $v0, $v0, 7
    ctx->pc = 0x15a7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 7));
    // 0x15a7f4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A7F4u;
    {
        const bool branch_taken_0x15a7f4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15A7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A7F4u;
            // 0x15a7f8: 0x211ff  dsra32      $v0, $v0, 7 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7f4) {
            ctx->pc = 0x15A804u;
            goto label_15a804;
        }
    }
    ctx->pc = 0x15A7FCu;
    // 0x15a7fc: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x15a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x15a800: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x15a800u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_15a804:
    // 0x15a804: 0xa3a200c3  sb          $v0, 0xC3($sp)
    ctx->pc = 0x15a804u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 195), (uint8_t)GPR_U32(ctx, 2));
label_15a808:
    // 0x15a808: 0x8fb40098  lw          $s4, 0x98($sp)
    ctx->pc = 0x15a808u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x15a80c: 0x8fb6009c  lw          $s6, 0x9C($sp)
    ctx->pc = 0x15a80cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x15a810: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x15a810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15a814: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x15a814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x15a818: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x15a818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15a81c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x15a81cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a820: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15A820u;
    SET_GPR_U32(ctx, 31, 0x15A828u);
    ctx->pc = 0x15A824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A820u;
            // 0x15a824: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A828u; }
        if (ctx->pc != 0x15A828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A828u; }
        if (ctx->pc != 0x15A828u) { return; }
    }
    ctx->pc = 0x15A828u;
label_15a828:
    // 0x15a828: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x15a828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x15a82c: 0x8e651d74  lw          $a1, 0x1D74($s3)
    ctx->pc = 0x15a82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7540)));
    // 0x15a830: 0x8c661b94  lw          $a2, 0x1B94($v1)
    ctx->pc = 0x15a830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7060)));
    // 0x15a834: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x15a834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a838: 0x8e621dc4  lw          $v0, 0x1DC4($s3)
    ctx->pc = 0x15a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7620)));
    // 0x15a83c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x15a83cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a840: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15a840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15a844: 0x8c631b98  lw          $v1, 0x1B98($v1)
    ctx->pc = 0x15a844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7064)));
    // 0x15a848: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15a848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a84c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x15A84Cu;
    SET_GPR_U32(ctx, 31, 0x15A854u);
    ctx->pc = 0x15A850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A84Cu;
            // 0x15a850: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A854u; }
        if (ctx->pc != 0x15A854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A854u; }
        if (ctx->pc != 0x15A854u) { return; }
    }
    ctx->pc = 0x15A854u;
label_15a854:
    // 0x15a854: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15a854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15a858: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15a858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a85c: 0x24842b00  addiu       $a0, $a0, 0x2B00
    ctx->pc = 0x15a85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11008));
    // 0x15a860: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x15a860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15a864: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x15a864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15a868: 0xc0545d8  jal         func_151760
    ctx->pc = 0x15A868u;
    SET_GPR_U32(ctx, 31, 0x15A870u);
    ctx->pc = 0x15A86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A868u;
            // 0x15a86c: 0x27a800c0  addiu       $t0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A870u; }
        if (ctx->pc != 0x15A870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A870u; }
        if (ctx->pc != 0x15A870u) { return; }
    }
    ctx->pc = 0x15A870u;
label_15a870:
    // 0x15a870: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15a870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15a874: 0x2a030014  slti        $v1, $s0, 0x14
    ctx->pc = 0x15a874u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x15a878: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x15a878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x15a87c: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x15A87Cu;
    {
        const bool branch_taken_0x15a87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A87Cu;
            // 0x15a880: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a87c) {
            ctx->pc = 0x15A780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15a780;
        }
    }
    ctx->pc = 0x15A884u;
    // 0x15a884: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15a884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15a888: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15a888u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15a88c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15a88cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15a890: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15a890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a894: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15a894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a898: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15a898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a89c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a8a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a8a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a8a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x15A8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A8A8u;
            // 0x15a8ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A8B0u;
}
