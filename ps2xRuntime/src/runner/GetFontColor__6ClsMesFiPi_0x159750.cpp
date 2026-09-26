#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFontColor__6ClsMesFiPi
// Address: 0x159750 - 0x159948
void GetFontColor__6ClsMesFiPi_0x159750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFontColor__6ClsMesFiPi_0x159750");
#endif

    switch (ctx->pc) {
        case 0x1597b4u: goto label_1597b4;
        case 0x1597fcu: goto label_1597fc;
        case 0x159870u: goto label_159870;
        default: break;
    }

    ctx->pc = 0x159750u;

    // 0x159750: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159754: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x159754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x159758: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x159758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15975c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159760: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x159760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159764: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159768: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x159768u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x15976c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15976cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159770: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x159770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x159774: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159778: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x159778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15977c: 0x844301e4  lh          $v1, 0x1E4($v0)
    ctx->pc = 0x15977cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 484)));
    // 0x159780: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x159780u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159784: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x159784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x159788: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x159788u;
    {
        const bool branch_taken_0x159788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15978Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159788u;
            // 0x15978c: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x159788) {
            ctx->pc = 0x159794u;
            goto label_159794;
        }
    }
    ctx->pc = 0x159790u;
    // 0x159790: 0x1cd  break       0, 7
    ctx->pc = 0x159790u;
    runtime->handleBreak(rdram, ctx);
label_159794:
    // 0x159794: 0x8012  mflo        $s0
    ctx->pc = 0x159794u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x159798: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x159798u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15979c: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x15979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1597a0: 0x8c451cd4  lw          $a1, 0x1CD4($v0)
    ctx->pc = 0x1597a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7380)));
    // 0x1597a4: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1597A4u;
    {
        const bool branch_taken_0x1597a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1597A4u;
            // 0x1597a8: 0x931021  addu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597a4) {
            ctx->pc = 0x1597F0u;
            goto label_1597f0;
        }
    }
    ctx->pc = 0x1597ACu;
    // 0x1597ac: 0xc0565c0  jal         func_159700
    ctx->pc = 0x1597ACu;
    SET_GPR_U32(ctx, 31, 0x1597B4u);
    ctx->pc = 0x1597B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1597ACu;
            // 0x1597b0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159700u;
    if (runtime->hasFunction(0x159700u)) {
        auto targetFn = runtime->lookupFunction(0x159700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1597B4u; }
        if (ctx->pc != 0x1597B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RgbqToUint__FUi_0x159700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1597B4u; }
        if (ctx->pc != 0x1597B4u) { return; }
    }
    ctx->pc = 0x1597B4u;
label_1597b4:
    // 0x1597b4: 0xdfa30070  ld          $v1, 0x70($sp)
    ctx->pc = 0x1597b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1597b8: 0x27a5006b  addiu       $a1, $sp, 0x6B
    ctx->pc = 0x1597b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 107));
    // 0x1597bc: 0xffa30068  sd          $v1, 0x68($sp)
    ctx->pc = 0x1597bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 3));
    // 0x1597c0: 0x92641800  lbu         $a0, 0x1800($s3)
    ctx->pc = 0x1597c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6144)));
    // 0x1597c4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1597c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1597c8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1597c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1597cc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1597CCu;
    {
        const bool branch_taken_0x1597cc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1597D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1597CCu;
            // 0x1597d0: 0x419c3  sra         $v1, $a0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597cc) {
            ctx->pc = 0x1597DCu;
            goto label_1597dc;
        }
    }
    ctx->pc = 0x1597D4u;
    // 0x1597d4: 0x2483007f  addiu       $v1, $a0, 0x7F
    ctx->pc = 0x1597d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x1597d8: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x1597d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
label_1597dc:
    // 0x1597dc: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1597dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1597e0: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x1597e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1597e4: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1597e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1597e8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1597E8u;
    {
        const bool branch_taken_0x1597e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1597E8u;
            // 0x1597ec: 0xfe830000  sd          $v1, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597e8) {
            ctx->pc = 0x159928u;
            goto label_159928;
        }
    }
    ctx->pc = 0x1597F0u;
label_1597f0:
    // 0x1597f0: 0x8c4501e8  lw          $a1, 0x1E8($v0)
    ctx->pc = 0x1597f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x1597f4: 0xc0565c0  jal         func_159700
    ctx->pc = 0x1597F4u;
    SET_GPR_U32(ctx, 31, 0x1597FCu);
    ctx->pc = 0x1597F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1597F4u;
            // 0x1597f8: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159700u;
    if (runtime->hasFunction(0x159700u)) {
        auto targetFn = runtime->lookupFunction(0x159700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1597FCu; }
        if (ctx->pc != 0x1597FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RgbqToUint__FUi_0x159700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1597FCu; }
        if (ctx->pc != 0x1597FCu) { return; }
    }
    ctx->pc = 0x1597FCu;
label_1597fc:
    // 0x1597fc: 0xdfa30078  ld          $v1, 0x78($sp)
    ctx->pc = 0x1597fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x159800: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x159800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x159804: 0xffa30068  sd          $v1, 0x68($sp)
    ctx->pc = 0x159804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 3));
    // 0x159808: 0x8c431e64  lw          $v1, 0x1E64($v0)
    ctx->pc = 0x159808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7780)));
    // 0x15980c: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x15980cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x159810: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x159810u;
    {
        const bool branch_taken_0x159810 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x159814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159810u;
            // 0x159814: 0x27a4006b  addiu       $a0, $sp, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159810) {
            ctx->pc = 0x15983Cu;
            goto label_15983c;
        }
    }
    ctx->pc = 0x159818u;
    // 0x159818: 0x27a4006b  addiu       $a0, $sp, 0x6B
    ctx->pc = 0x159818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 107));
    // 0x15981c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x15981cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159820: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x159820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x159824: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159824u;
    {
        const bool branch_taken_0x159824 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x159828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159824u;
            // 0x159828: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159824) {
            ctx->pc = 0x159834u;
            goto label_159834;
        }
    }
    ctx->pc = 0x15982Cu;
    // 0x15982c: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x15982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x159830: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x159830u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_159834:
    // 0x159834: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x159834u;
    {
        const bool branch_taken_0x159834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159834u;
            // 0x159838: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159834) {
            ctx->pc = 0x15985Cu;
            goto label_15985c;
        }
    }
    ctx->pc = 0x15983Cu;
label_15983c:
    // 0x15983c: 0x92631800  lbu         $v1, 0x1800($s3)
    ctx->pc = 0x15983cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6144)));
    // 0x159840: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x159840u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x159844: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x159844u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x159848: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159848u;
    {
        const bool branch_taken_0x159848 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15984Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159848u;
            // 0x15984c: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159848) {
            ctx->pc = 0x159858u;
            goto label_159858;
        }
    }
    ctx->pc = 0x159850u;
    // 0x159850: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x159850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x159854: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x159854u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_159858:
    // 0x159858: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x159858u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_15985c:
    // 0x15985c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15985cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159864: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x159864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x159868: 0xc056654  jal         func_159950
    ctx->pc = 0x159868u;
    SET_GPR_U32(ctx, 31, 0x159870u);
    ctx->pc = 0x15986Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159868u;
            // 0x15986c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159950u;
    if (runtime->hasFunction(0x159950u)) {
        auto targetFn = runtime->lookupFunction(0x159950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159870u; }
        if (ctx->pc != 0x159870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyouAlpha__6ClsMesFi_0x159950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159870u; }
        if (ctx->pc != 0x159870u) { return; }
    }
    ctx->pc = 0x159870u;
label_159870:
    // 0x159870: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x159870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x159874: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x159874u;
    {
        const bool branch_taken_0x159874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x159878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159874u;
            // 0x159878: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159874) {
            ctx->pc = 0x159918u;
            goto label_159918;
        }
    }
    ctx->pc = 0x15987Cu;
    // 0x15987c: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x15987Cu;
    {
        const bool branch_taken_0x15987c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x159880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15987Cu;
            // 0x159880: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15987c) {
            ctx->pc = 0x1598E8u;
            goto label_1598e8;
        }
    }
    ctx->pc = 0x159884u;
    // 0x159884: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x159884u;
    {
        const bool branch_taken_0x159884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x159888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159884u;
            // 0x159888: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159884) {
            ctx->pc = 0x1598C4u;
            goto label_1598c4;
        }
    }
    ctx->pc = 0x15988Cu;
    // 0x15988c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15988Cu;
    {
        const bool branch_taken_0x15988c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15988c) {
            ctx->pc = 0x15989Cu;
            goto label_15989c;
        }
    }
    ctx->pc = 0x159894u;
    // 0x159894: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x159894u;
    {
        const bool branch_taken_0x159894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159894u;
            // 0x159898: 0x27a30068  addiu       $v1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159894) {
            ctx->pc = 0x159920u;
            goto label_159920;
        }
    }
    ctx->pc = 0x15989Cu;
label_15989c:
    // 0x15989c: 0x93a50068  lbu         $a1, 0x68($sp)
    ctx->pc = 0x15989cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1598a0: 0x93a40069  lbu         $a0, 0x69($sp)
    ctx->pc = 0x1598a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 105)));
    // 0x1598a4: 0x93a3006a  lbu         $v1, 0x6A($sp)
    ctx->pc = 0x1598a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 106)));
    // 0x1598a8: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x1598a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1598ac: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1598acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1598b0: 0xa3a50068  sb          $a1, 0x68($sp)
    ctx->pc = 0x1598b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x1598b4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1598b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1598b8: 0xa3a40069  sb          $a0, 0x69($sp)
    ctx->pc = 0x1598b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 105), (uint8_t)GPR_U32(ctx, 4));
    // 0x1598bc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1598BCu;
    {
        const bool branch_taken_0x1598bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598BCu;
            // 0x1598c0: 0xa3a3006a  sb          $v1, 0x6A($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 106), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598bc) {
            ctx->pc = 0x15991Cu;
            goto label_15991c;
        }
    }
    ctx->pc = 0x1598C4u;
label_1598c4:
    // 0x1598c4: 0x92641800  lbu         $a0, 0x1800($s3)
    ctx->pc = 0x1598c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6144)));
    // 0x1598c8: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x1598c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1598cc: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1598ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1598d0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1598D0u;
    {
        const bool branch_taken_0x1598d0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1598D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598D0u;
            // 0x1598d4: 0x419c3  sra         $v1, $a0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598d0) {
            ctx->pc = 0x1598E0u;
            goto label_1598e0;
        }
    }
    ctx->pc = 0x1598D8u;
    // 0x1598d8: 0x2483007f  addiu       $v1, $a0, 0x7F
    ctx->pc = 0x1598d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x1598dc: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x1598dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
label_1598e0:
    // 0x1598e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1598E0u;
    {
        const bool branch_taken_0x1598e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1598E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598E0u;
            // 0x1598e4: 0xa3a3006b  sb          $v1, 0x6B($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 107), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598e0) {
            ctx->pc = 0x15991Cu;
            goto label_15991c;
        }
    }
    ctx->pc = 0x1598E8u;
label_1598e8:
    // 0x1598e8: 0xa3a00068  sb          $zero, 0x68($sp)
    ctx->pc = 0x1598e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x1598ec: 0xa3a00069  sb          $zero, 0x69($sp)
    ctx->pc = 0x1598ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x1598f0: 0xa3a0006a  sb          $zero, 0x6A($sp)
    ctx->pc = 0x1598f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x1598f4: 0x92631800  lbu         $v1, 0x1800($s3)
    ctx->pc = 0x1598f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6144)));
    // 0x1598f8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1598f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1598fc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1598FCu;
    {
        const bool branch_taken_0x1598fc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x159900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1598FCu;
            // 0x159900: 0x419c3  sra         $v1, $a0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1598fc) {
            ctx->pc = 0x15990Cu;
            goto label_15990c;
        }
    }
    ctx->pc = 0x159904u;
    // 0x159904: 0x2483007f  addiu       $v1, $a0, 0x7F
    ctx->pc = 0x159904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x159908: 0x319c3  sra         $v1, $v1, 7
    ctx->pc = 0x159908u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 7));
label_15990c:
    // 0x15990c: 0xa3a3006b  sb          $v1, 0x6B($sp)
    ctx->pc = 0x15990cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 107), (uint8_t)GPR_U32(ctx, 3));
    // 0x159910: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x159910u;
    {
        const bool branch_taken_0x159910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159910u;
            // 0x159914: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159910) {
            ctx->pc = 0x15991Cu;
            goto label_15991c;
        }
    }
    ctx->pc = 0x159918u;
label_159918:
    // 0x159918: 0xa3a0006b  sb          $zero, 0x6B($sp)
    ctx->pc = 0x159918u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 107), (uint8_t)GPR_U32(ctx, 0));
label_15991c:
    // 0x15991c: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x15991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_159920:
    // 0x159920: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x159920u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159924: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x159924u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_159928:
    // 0x159928: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x159928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15992c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15992cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159930: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159934: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15993c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15993cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159940: 0x3e00008  jr          $ra
    ctx->pc = 0x159940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159940u;
            // 0x159944: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159948u;
}
