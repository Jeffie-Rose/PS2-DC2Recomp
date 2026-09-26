#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsMove__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257550 - 0x25766c
void scsMove__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsMove__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257550");
#endif

    switch (ctx->pc) {
        case 0x257584u: goto label_257584;
        case 0x257590u: goto label_257590;
        case 0x2575b4u: goto label_2575b4;
        case 0x2575c8u: goto label_2575c8;
        case 0x2575e0u: goto label_2575e0;
        case 0x2575f4u: goto label_2575f4;
        case 0x257608u: goto label_257608;
        case 0x257614u: goto label_257614;
        case 0x257628u: goto label_257628;
        case 0x257640u: goto label_257640;
        default: break;
    }

    ctx->pc = 0x257550u;

    // 0x257550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x257550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x257554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x257558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25755c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25755cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x257560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257564: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x257564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x257568: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x257568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x25756c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25756cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x257570: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x257570u;
    {
        const bool branch_taken_0x257570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257570u;
            // 0x257574: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257570) {
            ctx->pc = 0x25759Cu;
            goto label_25759c;
        }
    }
    ctx->pc = 0x257578u;
    // 0x257578: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x257578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x25757c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25757Cu;
    SET_GPR_U32(ctx, 31, 0x257584u);
    ctx->pc = 0x257580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25757Cu;
            // 0x257580: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257584u; }
        if (ctx->pc != 0x257584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257584u; }
        if (ctx->pc != 0x257584u) { return; }
    }
    ctx->pc = 0x257584u;
label_257584:
    // 0x257584: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x257584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x257588: 0xc041c5c  jal         func_107170
    ctx->pc = 0x257588u;
    SET_GPR_U32(ctx, 31, 0x257590u);
    ctx->pc = 0x25758Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257588u;
            // 0x25758c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257590u; }
        if (ctx->pc != 0x257590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257590u; }
        if (ctx->pc != 0x257590u) { return; }
    }
    ctx->pc = 0x257590u;
label_257590:
    // 0x257590: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x257590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x257594: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x257594u;
    {
        const bool branch_taken_0x257594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257594u;
            // 0x257598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257594) {
            ctx->pc = 0x257658u;
            goto label_257658;
        }
    }
    ctx->pc = 0x25759Cu;
label_25759c:
    // 0x25759c: 0x1c60001f  bgtz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x25759Cu;
    {
        const bool branch_taken_0x25759c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2575A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25759Cu;
            // 0x2575a0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25759c) {
            ctx->pc = 0x25761Cu;
            goto label_25761c;
        }
    }
    ctx->pc = 0x2575A4u;
    // 0x2575a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2575a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2575a8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2575a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2575ac: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2575ACu;
    SET_GPR_U32(ctx, 31, 0x2575B4u);
    ctx->pc = 0x2575B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2575ACu;
            // 0x2575b0: 0x26060050  addiu       $a2, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2575B4u; }
        if (ctx->pc != 0x2575B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2575B4u; }
        if (ctx->pc != 0x2575B4u) { return; }
    }
    ctx->pc = 0x2575B4u;
label_2575b4:
    // 0x2575b4: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2575b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2575b8: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2575b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2575bc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2575bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2575c0: 0xc041c1e  jal         func_107078
    ctx->pc = 0x2575C0u;
    SET_GPR_U32(ctx, 31, 0x2575C8u);
    ctx->pc = 0x2575C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2575C0u;
            // 0x2575c4: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2575C8u; }
        if (ctx->pc != 0x2575C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2575C8u; }
        if (ctx->pc != 0x2575C8u) { return; }
    }
    ctx->pc = 0x2575C8u;
label_2575c8:
    // 0x2575c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2575c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2575cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2575ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2575d0: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x2575d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x2575d4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2575d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2575d8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2575D8u;
    SET_GPR_U32(ctx, 31, 0x2575E0u);
    ctx->pc = 0x2575DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2575D8u;
            // 0x2575dc: 0x26060060  addiu       $a2, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2575E0u; }
        if (ctx->pc != 0x2575E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2575E0u; }
        if (ctx->pc != 0x2575E0u) { return; }
    }
    ctx->pc = 0x2575E0u;
label_2575e0:
    // 0x2575e0: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2575e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2575e4: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x2575e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x2575e8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2575e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2575ec: 0xc041c1e  jal         func_107078
    ctx->pc = 0x2575ECu;
    SET_GPR_U32(ctx, 31, 0x2575F4u);
    ctx->pc = 0x2575F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2575ECu;
            // 0x2575f0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2575F4u; }
        if (ctx->pc != 0x2575F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2575F4u; }
        if (ctx->pc != 0x2575F4u) { return; }
    }
    ctx->pc = 0x2575F4u;
label_2575f4:
    // 0x2575f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2575f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2575f8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2575f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2575fc: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x2575fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
    // 0x257600: 0xc041c5c  jal         func_107170
    ctx->pc = 0x257600u;
    SET_GPR_U32(ctx, 31, 0x257608u);
    ctx->pc = 0x257604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257600u;
            // 0x257604: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257608u; }
        if (ctx->pc != 0x257608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257608u; }
        if (ctx->pc != 0x257608u) { return; }
    }
    ctx->pc = 0x257608u;
label_257608:
    // 0x257608: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x257608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x25760c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25760Cu;
    SET_GPR_U32(ctx, 31, 0x257614u);
    ctx->pc = 0x257610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25760Cu;
            // 0x257610: 0x260500e0  addiu       $a1, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257614u; }
        if (ctx->pc != 0x257614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257614u; }
        if (ctx->pc != 0x257614u) { return; }
    }
    ctx->pc = 0x257614u;
label_257614:
    // 0x257614: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x257614u;
    {
        const bool branch_taken_0x257614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257614u;
            // 0x257618: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257614) {
            ctx->pc = 0x25764Cu;
            goto label_25764c;
        }
    }
    ctx->pc = 0x25761Cu;
label_25761c:
    // 0x25761c: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x25761cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x257620: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x257620u;
    SET_GPR_U32(ctx, 31, 0x257628u);
    ctx->pc = 0x257624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257620u;
            // 0x257624: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257628u; }
        if (ctx->pc != 0x257628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257628u; }
        if (ctx->pc != 0x257628u) { return; }
    }
    ctx->pc = 0x257628u;
label_257628:
    // 0x257628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x257628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25762c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x25762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x257630: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x257630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x257634: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x257634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257638: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x257638u;
    SET_GPR_U32(ctx, 31, 0x257640u);
    ctx->pc = 0x25763Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257638u;
            // 0x25763c: 0x260600e0  addiu       $a2, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257640u; }
        if (ctx->pc != 0x257640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257640u; }
        if (ctx->pc != 0x257640u) { return; }
    }
    ctx->pc = 0x257640u;
label_257640:
    // 0x257640: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x257640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x257644: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x257644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x257648: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x257648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_25764c:
    // 0x25764c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25764cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257650: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x257650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257654: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x257654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_257658:
    // 0x257658: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x257658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25765c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25765cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257664: 0x3e00008  jr          $ra
    ctx->pc = 0x257664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257664u;
            // 0x257668: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25766Cu;
}
