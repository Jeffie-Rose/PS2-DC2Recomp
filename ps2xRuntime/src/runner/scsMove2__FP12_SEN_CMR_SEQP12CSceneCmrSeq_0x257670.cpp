#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsMove2__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257670 - 0x25794c
void scsMove2__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsMove2__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257670");
#endif

    switch (ctx->pc) {
        case 0x2576e8u: goto label_2576e8;
        case 0x2576fcu: goto label_2576fc;
        case 0x257714u: goto label_257714;
        case 0x257728u: goto label_257728;
        case 0x257744u: goto label_257744;
        case 0x257754u: goto label_257754;
        case 0x257760u: goto label_257760;
        case 0x257774u: goto label_257774;
        case 0x257788u: goto label_257788;
        case 0x2577a4u: goto label_2577a4;
        case 0x2577b0u: goto label_2577b0;
        case 0x2577c0u: goto label_2577c0;
        case 0x2577ccu: goto label_2577cc;
        case 0x257804u: goto label_257804;
        case 0x257814u: goto label_257814;
        case 0x257824u: goto label_257824;
        case 0x25783cu: goto label_25783c;
        case 0x2578b0u: goto label_2578b0;
        case 0x2578c0u: goto label_2578c0;
        case 0x2578d0u: goto label_2578d0;
        case 0x2578e8u: goto label_2578e8;
        case 0x257908u: goto label_257908;
        case 0x257920u: goto label_257920;
        default: break;
    }

    ctx->pc = 0x257670u;

    // 0x257670: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x257670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x257674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x257678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25767c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x257680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257684: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x257684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x257688: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x257688u;
    {
        const bool branch_taken_0x257688 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257688u;
            // 0x25768c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257688) {
            ctx->pc = 0x257698u;
            goto label_257698;
        }
    }
    ctx->pc = 0x257690u;
    // 0x257690: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x257690u;
    {
        const bool branch_taken_0x257690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257690u;
            // 0x257694: 0x8e030140  lw          $v1, 0x140($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257690) {
            ctx->pc = 0x2576ACu;
            goto label_2576ac;
        }
    }
    ctx->pc = 0x257698u;
label_257698:
    // 0x257698: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x257698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25769c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25769Cu;
    {
        const bool branch_taken_0x25769c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2576A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25769Cu;
            // 0x2576a0: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25769c) {
            ctx->pc = 0x2576ACu;
            goto label_2576ac;
        }
    }
    ctx->pc = 0x2576A4u;
    // 0x2576a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2576a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2576a8: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2576a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_2576ac:
    // 0x2576ac: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2576acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2576b0: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2576b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2576b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2576b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2576b8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2576b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2576bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2576BCu;
    {
        const bool branch_taken_0x2576bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2576bc) {
            ctx->pc = 0x2576D0u;
            goto label_2576d0;
        }
    }
    ctx->pc = 0x2576C4u;
    // 0x2576c4: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2576c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2576c8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2576C8u;
    {
        const bool branch_taken_0x2576c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2576CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2576C8u;
            // 0x2576cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2576c8) {
            ctx->pc = 0x257938u;
            goto label_257938;
        }
    }
    ctx->pc = 0x2576D0u;
label_2576d0:
    // 0x2576d0: 0x1c800040  bgtz        $a0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2576D0u;
    {
        const bool branch_taken_0x2576d0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2576d0) {
            ctx->pc = 0x2577D4u;
            goto label_2577d4;
        }
    }
    ctx->pc = 0x2576D8u;
    // 0x2576d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2576d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2576dc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2576dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2576e0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2576E0u;
    SET_GPR_U32(ctx, 31, 0x2576E8u);
    ctx->pc = 0x2576E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2576E0u;
            // 0x2576e4: 0x26060050  addiu       $a2, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2576E8u; }
        if (ctx->pc != 0x2576E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2576E8u; }
        if (ctx->pc != 0x2576E8u) { return; }
    }
    ctx->pc = 0x2576E8u;
label_2576e8:
    // 0x2576e8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2576e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2576ec: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2576ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2576f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2576f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2576f4: 0xc041c1e  jal         func_107078
    ctx->pc = 0x2576F4u;
    SET_GPR_U32(ctx, 31, 0x2576FCu);
    ctx->pc = 0x2576F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2576F4u;
            // 0x2576f8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2576FCu; }
        if (ctx->pc != 0x2576FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2576FCu; }
        if (ctx->pc != 0x2576FCu) { return; }
    }
    ctx->pc = 0x2576FCu;
label_2576fc:
    // 0x2576fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2576fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x257700: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x257700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x257704: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x257704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x257708: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x257708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x25770c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x25770Cu;
    SET_GPR_U32(ctx, 31, 0x257714u);
    ctx->pc = 0x257710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25770Cu;
            // 0x257710: 0x26060060  addiu       $a2, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257714u; }
        if (ctx->pc != 0x257714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257714u; }
        if (ctx->pc != 0x257714u) { return; }
    }
    ctx->pc = 0x257714u;
label_257714:
    // 0x257714: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x257714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257718: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x257718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25771c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x25771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x257720: 0xc041c1e  jal         func_107078
    ctx->pc = 0x257720u;
    SET_GPR_U32(ctx, 31, 0x257728u);
    ctx->pc = 0x257724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257720u;
            // 0x257724: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257728u; }
        if (ctx->pc != 0x257728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257728u; }
        if (ctx->pc != 0x257728u) { return; }
    }
    ctx->pc = 0x257728u;
label_257728:
    // 0x257728: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x257728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25772c: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x25772cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    // 0x257730: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x257730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257734: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x257734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257738: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x257738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25773c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x25773Cu;
    SET_GPR_U32(ctx, 31, 0x257744u);
    ctx->pc = 0x257740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25773Cu;
            // 0x257740: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257744u; }
        if (ctx->pc != 0x257744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257744u; }
        if (ctx->pc != 0x257744u) { return; }
    }
    ctx->pc = 0x257744u;
label_257744:
    // 0x257744: 0xae020140  sw          $v0, 0x140($s0)
    ctx->pc = 0x257744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 2));
    // 0x257748: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x257748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x25774c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25774Cu;
    SET_GPR_U32(ctx, 31, 0x257754u);
    ctx->pc = 0x257750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25774Cu;
            // 0x257750: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257754u; }
        if (ctx->pc != 0x257754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257754u; }
        if (ctx->pc != 0x257754u) { return; }
    }
    ctx->pc = 0x257754u;
label_257754:
    // 0x257754: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x257754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x257758: 0xc041c5c  jal         func_107170
    ctx->pc = 0x257758u;
    SET_GPR_U32(ctx, 31, 0x257760u);
    ctx->pc = 0x25775Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257758u;
            // 0x25775c: 0x260500e0  addiu       $a1, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257760u; }
        if (ctx->pc != 0x257760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257760u; }
        if (ctx->pc != 0x257760u) { return; }
    }
    ctx->pc = 0x257760u;
label_257760:
    // 0x257760: 0xc6000140  lwc1        $f0, 0x140($s0)
    ctx->pc = 0x257760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257764: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x257764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x257768: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x257768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25776c: 0xc041c1e  jal         func_107078
    ctx->pc = 0x25776Cu;
    SET_GPR_U32(ctx, 31, 0x257774u);
    ctx->pc = 0x257770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25776Cu;
            // 0x257770: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257774u; }
        if (ctx->pc != 0x257774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257774u; }
        if (ctx->pc != 0x257774u) { return; }
    }
    ctx->pc = 0x257774u;
label_257774:
    // 0x257774: 0xc6000140  lwc1        $f0, 0x140($s0)
    ctx->pc = 0x257774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257778: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x257778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x25777c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25777cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257780: 0xc041c1e  jal         func_107078
    ctx->pc = 0x257780u;
    SET_GPR_U32(ctx, 31, 0x257788u);
    ctx->pc = 0x257784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257780u;
            // 0x257784: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257788u; }
        if (ctx->pc != 0x257788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257788u; }
        if (ctx->pc != 0x257788u) { return; }
    }
    ctx->pc = 0x257788u;
label_257788:
    // 0x257788: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x257788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x25778c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257790: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x257790u;
    {
        const bool branch_taken_0x257790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x257794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257790u;
            // 0x257794: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257790) {
            ctx->pc = 0x2577B8u;
            goto label_2577b8;
        }
    }
    ctx->pc = 0x257798u;
    // 0x257798: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x257798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x25779c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25779Cu;
    SET_GPR_U32(ctx, 31, 0x2577A4u);
    ctx->pc = 0x2577A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25779Cu;
            // 0x2577a0: 0x26050120  addiu       $a1, $s0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577A4u; }
        if (ctx->pc != 0x2577A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577A4u; }
        if (ctx->pc != 0x2577A4u) { return; }
    }
    ctx->pc = 0x2577A4u;
label_2577a4:
    // 0x2577a4: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2577a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2577a8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2577A8u;
    SET_GPR_U32(ctx, 31, 0x2577B0u);
    ctx->pc = 0x2577ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2577A8u;
            // 0x2577ac: 0x26050130  addiu       $a1, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577B0u; }
        if (ctx->pc != 0x2577B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577B0u; }
        if (ctx->pc != 0x2577B0u) { return; }
    }
    ctx->pc = 0x2577B0u;
label_2577b0:
    // 0x2577b0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2577B0u;
    {
        const bool branch_taken_0x2577b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2577B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2577B0u;
            // 0x2577b4: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2577b0) {
            ctx->pc = 0x25792Cu;
            goto label_25792c;
        }
    }
    ctx->pc = 0x2577B8u;
label_2577b8:
    // 0x2577b8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2577B8u;
    SET_GPR_U32(ctx, 31, 0x2577C0u);
    ctx->pc = 0x2577BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2577B8u;
            // 0x2577bc: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577C0u; }
        if (ctx->pc != 0x2577C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577C0u; }
        if (ctx->pc != 0x2577C0u) { return; }
    }
    ctx->pc = 0x2577C0u;
label_2577c0:
    // 0x2577c0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2577c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2577c4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2577C4u;
    SET_GPR_U32(ctx, 31, 0x2577CCu);
    ctx->pc = 0x2577C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2577C4u;
            // 0x2577c8: 0x260500e0  addiu       $a1, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577CCu; }
        if (ctx->pc != 0x2577CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577CCu; }
        if (ctx->pc != 0x2577CCu) { return; }
    }
    ctx->pc = 0x2577CCu;
label_2577cc:
    // 0x2577cc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2577CCu;
    {
        const bool branch_taken_0x2577cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2577cc) {
            ctx->pc = 0x257928u;
            goto label_257928;
        }
    }
    ctx->pc = 0x2577D4u;
label_2577d4:
    // 0x2577d4: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x2577d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2577d8: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x2577d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2577dc: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2577DCu;
    {
        const bool branch_taken_0x2577dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2577E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2577DCu;
            // 0x2577e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2577dc) {
            ctx->pc = 0x257848u;
            goto label_257848;
        }
    }
    ctx->pc = 0x2577E4u;
    // 0x2577e4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2577E4u;
    {
        const bool branch_taken_0x2577e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2577E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2577E4u;
            // 0x2577e8: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2577e4) {
            ctx->pc = 0x2577F8u;
            goto label_2577f8;
        }
    }
    ctx->pc = 0x2577ECu;
    // 0x2577ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2577ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2577f0: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2577F0u;
    {
        const bool branch_taken_0x2577f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2577f0) {
            ctx->pc = 0x257848u;
            goto label_257848;
        }
    }
    ctx->pc = 0x2577F8u;
label_2577f8:
    // 0x2577f8: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x2577f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2577fc: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2577FCu;
    SET_GPR_U32(ctx, 31, 0x257804u);
    ctx->pc = 0x257800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2577FCu;
            // 0x257800: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257804u; }
        if (ctx->pc != 0x257804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257804u; }
        if (ctx->pc != 0x257804u) { return; }
    }
    ctx->pc = 0x257804u;
label_257804:
    // 0x257804: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x257804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x257808: 0x26060130  addiu       $a2, $s0, 0x130
    ctx->pc = 0x257808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x25780c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25780Cu;
    SET_GPR_U32(ctx, 31, 0x257814u);
    ctx->pc = 0x257810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25780Cu;
            // 0x257810: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257814u; }
        if (ctx->pc != 0x257814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257814u; }
        if (ctx->pc != 0x257814u) { return; }
    }
    ctx->pc = 0x257814u;
label_257814:
    // 0x257814: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x257814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x257818: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x257818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x25781c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25781Cu;
    SET_GPR_U32(ctx, 31, 0x257824u);
    ctx->pc = 0x257820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25781Cu;
            // 0x257820: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257824u; }
        if (ctx->pc != 0x257824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257824u; }
        if (ctx->pc != 0x257824u) { return; }
    }
    ctx->pc = 0x257824u;
label_257824:
    // 0x257824: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x257824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x257828: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x257828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x25782c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x25782cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x257830: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x257830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257834: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x257834u;
    SET_GPR_U32(ctx, 31, 0x25783Cu);
    ctx->pc = 0x257838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257834u;
            // 0x257838: 0x26060110  addiu       $a2, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25783Cu; }
        if (ctx->pc != 0x25783Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25783Cu; }
        if (ctx->pc != 0x25783Cu) { return; }
    }
    ctx->pc = 0x25783Cu;
label_25783c:
    // 0x25783c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25783cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x257840: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x257840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257844: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x257844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_257848:
    // 0x257848: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x257848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x25784c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257850: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x257850u;
    {
        const bool branch_taken_0x257850 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x257850) {
            ctx->pc = 0x257884u;
            goto label_257884;
        }
    }
    ctx->pc = 0x257858u;
    // 0x257858: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x257858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25785c: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x25785cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x257860: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257860u;
    {
        const bool branch_taken_0x257860 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x257864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257860u;
            // 0x257864: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257860) {
            ctx->pc = 0x257870u;
            goto label_257870;
        }
    }
    ctx->pc = 0x257868u;
    // 0x257868: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x257868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25786c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x25786cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_257870:
    // 0x257870: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x257870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x257874: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x257874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257878: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x257878u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25787c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x25787Cu;
    {
        const bool branch_taken_0x25787c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x257880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25787Cu;
            // 0x257880: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25787c) {
            ctx->pc = 0x2578A4u;
            goto label_2578a4;
        }
    }
    ctx->pc = 0x257884u;
label_257884:
    // 0x257884: 0x14c0001b  bnez        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x257884u;
    {
        const bool branch_taken_0x257884 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x257884) {
            ctx->pc = 0x2578F4u;
            goto label_2578f4;
        }
    }
    ctx->pc = 0x25788Cu;
    // 0x25788c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x25788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x257890: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x257890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x257894: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x257894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x257898: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x257898u;
    {
        const bool branch_taken_0x257898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257898) {
            ctx->pc = 0x2578F4u;
            goto label_2578f4;
        }
    }
    ctx->pc = 0x2578A0u;
    // 0x2578a0: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x2578a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_2578a4:
    // 0x2578a4: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x2578a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2578a8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2578A8u;
    SET_GPR_U32(ctx, 31, 0x2578B0u);
    ctx->pc = 0x2578ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2578A8u;
            // 0x2578ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2578B0u; }
        if (ctx->pc != 0x2578B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2578B0u; }
        if (ctx->pc != 0x2578B0u) { return; }
    }
    ctx->pc = 0x2578B0u;
label_2578b0:
    // 0x2578b0: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x2578b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2578b4: 0x26060130  addiu       $a2, $s0, 0x130
    ctx->pc = 0x2578b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x2578b8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2578B8u;
    SET_GPR_U32(ctx, 31, 0x2578C0u);
    ctx->pc = 0x2578BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2578B8u;
            // 0x2578bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2578C0u; }
        if (ctx->pc != 0x2578C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2578C0u; }
        if (ctx->pc != 0x2578C0u) { return; }
    }
    ctx->pc = 0x2578C0u;
label_2578c0:
    // 0x2578c0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2578c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2578c4: 0x26060100  addiu       $a2, $s0, 0x100
    ctx->pc = 0x2578c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2578c8: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2578C8u;
    SET_GPR_U32(ctx, 31, 0x2578D0u);
    ctx->pc = 0x2578CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2578C8u;
            // 0x2578cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2578D0u; }
        if (ctx->pc != 0x2578D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2578D0u; }
        if (ctx->pc != 0x2578D0u) { return; }
    }
    ctx->pc = 0x2578D0u;
label_2578d0:
    // 0x2578d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2578d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2578d4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2578d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2578d8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x2578d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x2578dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2578dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2578e0: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2578E0u;
    SET_GPR_U32(ctx, 31, 0x2578E8u);
    ctx->pc = 0x2578E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2578E0u;
            // 0x2578e4: 0x26060110  addiu       $a2, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2578E8u; }
        if (ctx->pc != 0x2578E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2578E8u; }
        if (ctx->pc != 0x2578E8u) { return; }
    }
    ctx->pc = 0x2578E8u;
label_2578e8:
    // 0x2578e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2578e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2578ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2578ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2578f0: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x2578f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_2578f4:
    // 0x2578f4: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2578F4u;
    {
        const bool branch_taken_0x2578f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2578F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2578F4u;
            // 0x2578f8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578f4) {
            ctx->pc = 0x257928u;
            goto label_257928;
        }
    }
    ctx->pc = 0x2578FCu;
    // 0x2578fc: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x2578fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x257900: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x257900u;
    SET_GPR_U32(ctx, 31, 0x257908u);
    ctx->pc = 0x257904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257900u;
            // 0x257904: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257908u; }
        if (ctx->pc != 0x257908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257908u; }
        if (ctx->pc != 0x257908u) { return; }
    }
    ctx->pc = 0x257908u;
label_257908:
    // 0x257908: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x257908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25790c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x25790cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x257910: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x257910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x257914: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x257914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257918: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x257918u;
    SET_GPR_U32(ctx, 31, 0x257920u);
    ctx->pc = 0x25791Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257918u;
            // 0x25791c: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257920u; }
        if (ctx->pc != 0x257920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257920u; }
        if (ctx->pc != 0x257920u) { return; }
    }
    ctx->pc = 0x257920u;
label_257920:
    // 0x257920: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x257920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x257924: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x257924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_257928:
    // 0x257928: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x257928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_25792c:
    // 0x25792c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257930: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x257930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257934: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x257934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_257938:
    // 0x257938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x257938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25793c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25793cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257944: 0x3e00008  jr          $ra
    ctx->pc = 0x257944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257944u;
            // 0x257948: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25794Cu;
}
